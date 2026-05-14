/**
 * @file    p33c_osc.h
 * @see     p33c_osc-d.h
 * @brief   Oscillator register access interface
 * @author  M91406
 * @date    October 27, 2017
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_OSCILLATOR_SFR_INTERFACE_H
#define P33C_OSCILLATOR_SFR_INTERFACE_H

// Include Header Files
#include "p33c_fmgr-d.h" // Include device frequencies management header file
#include "p33c_osc-d.h" // Include oscillator peripheral abstraction driver header file

/*************************************************************************************************
 * PRIVATE DEFINES
 *************************************************************************************************/
#define OSC_WAIT_TIMEOUT	60000	///< value to set the timeout for clock switching wait states

/*********************************************************************************
 * @ingroup p33c-pral-osc-templates
 * @brief   Initializes the internal FRC oscillator with PLL for 100 MIPS operation
 *          FRC=8MHz => {N1=1, M=100, N2=2, N3=1] 
 *          => FPLLO=200MHz, FCY=100MHz, FP=100MHz
 *          => FVCO Output = FVCO/4 = 200MHz
 *          => No FRC tuning (=8MHz)
 **********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_OSC_MODULE_t oscDefaultConfigFrc = 
{
    .OSCCON.bits.CF = 0,            // Clear Clock Fail Detect bit
    .OSCCON.bits.OSWEN = 0,         // Clear Oscillator Switch Enable bit
    .OSCCON.bits.CLKLOCK = 0,       // Clear Clock Lock Enable bit
    .OSCCON.bits.NOSC = 0b001,      // Oscillator Selection: FRC + PLL

    .CLKDIV.bits.ROI = 0,           // Clear Doze Mode Recover On Interrupt bit
    .CLKDIV.bits.DOZE = 0b011,      // Set DOZE Mode Divider to 1:8 (default)
    .CLKDIV.bits.DOZEN = 0,         // Turn off DOZE Mode
    .CLKDIV.bits.FRCDIV = 0b000,    // Set FRC Divider to 1:1
    .CLKDIV.bits.PLLPRE = 0b0001,   // Set PLL Pre-Divider to 1:1

    #if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHS__)
    .PLLFBD.bits.PLLFBDIV = 100,    // PLLFBDIV=0b01100100
    #elif defined (__P33SMPS_CHM__)
    .PLLFBD.bits.PLLFBDIV =  90,    // PLLFBDIV=0b01011010
    #endif
    
    .PLLDIV.bits.POST1DIV = 2,      // POST1DIV=0b100
    .PLLDIV.bits.POST2DIV = 1,      // POST2DIV=0b001
    .PLLDIV.bits.VCODIV   = 0b00,   // VCODIV=0b00 = FVCO/4 (to be used by ADC)

    #if (!defined (__P33SMPS_CHS__)) // Hide register contents for secondary core devices
    .OSCTUN.value = 0x0000          // TUN=0b000000
    #endif
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-osc-methods
 * @brief   Gets the current configuration from the oscillator module base registers
 * @return  P33C_OSC_MODULE_t Returns data set of most recent Oscillator configuration register set
 * 
 * @details
 *  This function reads all registers with their current configuration 
 *  into a data structure of type P33C_OSC_MODULE_t. Users can read and
 *  verify or modify the configuration to write it back to the op-amp
 *  module registers.
 *
 **********************************************************************************/
static inline P33C_OSC_MODULE_t p33c_Osc_GetConfig(void)
{
    volatile P33C_OSC_MODULE_t* osc;
    osc = p33c_Osc_GetHandle();
    return (*osc);
}

/*********************************************************************************
 * @ingroup p33c-pral-osc-methods
 * @brief   Writes a user-defined configuration to the oscillator module base registers
 * @param   oscConfig: Oscillator Module SFR data object of type P33C_OSC_MODULE_t
 * @return  0 = failure, writing to oscillator module failed
 * @return  1 = success, writing to oscillator module was successful
 * 
 * @details
 *  This function writes a user-defined oscillator module configuration of
 *  type P33C_OSC_MODULE_t to the oscillator module base registers. The 
 *  individual register configurations have to be set in user-code 
 *  before calling this function. To simplify the configuration process
 *  of standard functions, this driver provides templates, which can be 
 *  loaded and written directly.
 *
 **********************************************************************************/
static inline int p33c_Osc_SetConfig(P33C_OSC_MODULE_t oscConfig)
{
    int retval = 1;
    uint16_t timeout = 0;
    volatile P33C_OSC_MODULE_t* osc;
    uint8_t oscType = (uint8_t) oscConfig.OSCCON.bits.NOSC;

    // Capture start address of oscillator register block
    osc = p33c_Osc_GetHandle();

    // Clear OSCCON register
    osc->OSCCON.bits.CF = 0;        // Clear Clock Fail Detect bit
    osc->OSCCON.bits.OSWEN = 0;     // Clear Oscillator Switch Enable bit
    osc->OSCCON.bits.CLKLOCK = 0;   // Unlock clock configuration

    // Write user oscillator configuration
    osc->CLKDIV.value = oscConfig.CLKDIV.value; // Copy Clock Divider setting
    osc->PLLFBD.value = oscConfig.PLLFBD.value; // Copy PLL Feedback Divider settings
    osc->PLLDIV.value = oscConfig.PLLDIV.value; // Copy PLL Output Divider settings
    #if (!defined (__P33SMPS_CHS__)) // Hide register contents for secondary core devices
    osc->OSCTUN.value = oscConfig.OSCTUN.value; // Copy FRC Oscillator Tuning settings
    #endif

    // Initiate Clock Switch to new oscillator declared in NOSC
    __builtin_write_OSCCONH(oscType);
    __builtin_write_OSCCONL(OSCCON | 0x01);
    // Wait for Clock switch to occur
    while ((OSCCONbits.OSWEN != 0) && (timeout++ < OSC_WAIT_TIMEOUT));

    // If timeout occurred or previous and new oscillator don't match, exit here
    if ((timeout > OSC_WAIT_TIMEOUT) || (osc->OSCCON.bits.NOSC != osc->OSCCON.bits.COSC))
    {
        return (0);
    } // return error

    // Lock oscillator configuration
    osc->OSCCON.bits.CLKLOCK = 1;

    // Update p33c_SystemFrequencies data object
    retval &= p33c_UpdateMainOscFrequencies();
    retval &= (1 - OSCCONbits.OSWEN);

    // Return result
    return (retval);
}

#endif /* End of P33C_OSCILLATOR_SFR_INTERFACE_H */
// __________________
// end of file

