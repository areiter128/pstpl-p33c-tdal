/**
 * @file    p33c_aclk.h
 * @see     p33c_aclk-d.h
 * @brief   Auxiliary Clock register access functions
 * @author  M91406
 * @date    October 27, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_AUXCLOCK_SFR_INTERFACE_H
#define	P33C_AUXCLOCK_SFR_INTERFACE_H

#include "p33c_fmgr-d.h" // Include device frequencies management header file
#include "p33c_aclk-d.h" // Include Auxiliary Clock peripheral abstraction driver header file

/*********************************************************************************
 * @ingroup p33c-pral-aclk-templates
 * @brief   Initializes the Auxiliary PLL for 500 MHz operation with VCO 
 *          divider=1:4 for maximum performance of high resolution PWM
 *          and ADC operating at 16ns Tad
 *          FRC=8MHz => {N1=1, M=125, N2=2, N3=1] => FPLLO=500MHz
 * 
 **********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ACLK_CONFIG_t aclkDefaultConfigApll500 = 
{
    .ACLKCON1.bits.APLLEN = 1,      ///< APLL is enabled
    .ACLKCON1.bits.APLLCK = 0,      ///< Clear APLL Phase-Locked State Status bit
    .ACLKCON1.bits.FRCSEL = 1,      ///< FRC is input clock to APLL
    #ifdef _ASRCSEL
    .ACLKCON1.bits.ASRCSEL = 0,     ///< Default is alternate input clock to APLL
    #endif

    .ACLKCON1.bits.APLLPRE = 1,     ///< N1: Auxiliary PLL Phase Detector Input Divider: 1:1
    .APLLFBD1.bits.APLLFBDIV = 125, ///< M:  APLL Feedback Divider: 125x
    .APLLDIV1.bits.APOST1DIV = 2,   ///< N2: APLL Output Divider #1 Ratio: 1:2
    .APLLDIV1.bits.APOST2DIV = 1,   ///< N3: APLL Output Divider #2 Ratio: 1:1

    .APLLDIV1.bits.AVCODIV   = 0b00 ///< APLL VCO Output Divider Selection: 1:4

};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-aclk-methods
 * @brief   Gets the current configuration from the Auxiliary Clock module base registers
 * @return  Auxiliary Clock configuration data object of type P33C_ACLK_CONFIG_t
 * @details
 *  This function reads all registers with their current configuration 
 *  into a data structure of type P33C_ACLK_CONFIG_t. Users can read and
 *  verify or modify the configuration to write it back to the Auxiliary
 *  Clock module registers.
 *
 **********************************************************************************/
static inline P33C_ACLK_CONFIG_t p33c_Aclk_GetConfig(void)
{
    volatile P33C_ACLK_CONFIG_t* aclk;
    aclk = p33c_Aclk_GetHandle();
    return (*aclk);
}

/*********************************************************************************
 * @ingroup p33c-pral-aclk-methods
 * @brief   Writes a user-defined configuration to the Auxiliary Clock module base registers
 * @param   aclkConfig: Auxiliary Clock configuration data object of type P33C_ACLK_CONFIG_t
 * @return  0 = failure, writing to Auxiliary Clock registers was not successful
 * @return  1 = success, writing to Auxiliary Clock registers was successful
 * 
 * @details
 *  This function writes a user-defined Auxiliary Clock module configuration of type
 *  P33C_ACLK_CONFIG_t to the Auxiliary Clock module base registers. The individual
 *  register configurations have to be set in user-code before calling this function.
 *  To simplify the configuration process of standard functions, this driver provides
 *  templates, which can be loaded and written directly.
 *
 **********************************************************************************/
static inline int p33c_Aclk_SetConfig(P33C_ACLK_CONFIG_t aclkConfig)
{
    int retval = 1;
    volatile P33C_ACLK_CONFIG_t* aclk;

    // Capture start address of oscillator register block
    aclk = p33c_Aclk_GetHandle();

    // Clear ACLKCON1 register
    aclk->ACLKCON1.bits.APLLEN = 0; // Clear Auxiliary PLL Enable bit
    aclk->ACLKCON1.bits.APLLCK = 0; // Clear Auxiliary PLL Phase-Locked State Status bit

    // Write user oscillator configuration
    #ifdef _ASRCSEL
    aclk->ACLKCON1.bits.ASRCSEL = aclkConfig.ACLKCON1.bits.ASRCSEL; // Copy Auxiliary PLL Alternate Clock Source Select bit
    #endif
    aclk->ACLKCON1.bits.FRCSEL  = aclkConfig.ACLKCON1.bits.FRCSEL;  // Copy Auxiliary PLL Clock Source Select bit
    aclk->ACLKCON1.bits.APLLPRE = aclkConfig.ACLKCON1.bits.APLLPRE; // Copy Auxiliary PLL Phase Detector Input Divider

    aclk->APLLFBD1.value = aclkConfig.APLLFBD1.value; // Copy Auxiliary PLL Feedback Divider
    aclk->APLLDIV1.value = aclkConfig.APLLDIV1.value; // Copy APLL Output Divider

    // Turn on/off Auxiliary PLL
    aclk->ACLKCON1.bits.APLLEN = aclkConfig.ACLKCON1.bits.APLLEN; // Copy Auxiliary PLL Enable bit

    // DO NOT POLL FOR APLL LOCK BIT AS IT WILL NOT GET SET UNTIL USED BY PERIPHERAL !!!
    // DON'T DO THAT: while (aclk->ACLKCON1.bits.APLLCK != 1) // = Invalid
    // .........................

    // Update p33c_SystemFrequencies data object
    retval &= p33c_UpdateAuxClockFrequencies();
    retval &= (aclk->ACLKCON1.bits.APLLEN);

    // Return result
    return (retval);
}

#endif /* End of P33C_AUXCLOCK_SFR_INTERFACE_H */

// __________________
// end of file
