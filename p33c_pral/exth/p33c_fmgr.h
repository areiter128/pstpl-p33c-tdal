/**
 * @file    p33c_fmgr.h
 * @see     p33c_fmgr-d.h
 * @brief   System Frequency Manager access functions
 * @author  M91406
 * @date    December 15, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once. 
#ifndef P33C_SYSTEM_FREQUENCIES_INTERFACE_H
#define P33C_SYSTEM_FREQUENCIES_INTERFACE_H

// Include Header Files
#include "p33c_osc-d.h" // Include oscillator peripheral abstraction driver header file
#include "p33c_aclk-d.h" // Include auxiliary clock peripheral abstraction driver header file
#include "p33c_fmgr-d.h" // Include device frequencies management header file

/*********************************************************************************
 * @ingroup p33c-pral-fmgr-properties
 * @brief   Data structure holding the list of most recent clock domain frequencies
 * @details
 *  This data object is used to store all relevant clock domain frequencies
 *  exposing them to modules which require this information for adjusting 
 *  internal clock-dependent settings, such as baud-rates or timer periods.
 *  The frequency values are updated automatically when fundamental oscillator
 *  settings change. However, users can call function p33c_UpdateAuxClockFrequencies
 *  at any time to ensure all values are up-to-date.
 * 
 * @see
 *  p33c_UpdateAuxClockFrequencies
 **********************************************************************************/
static P33C_SYSTEM_FREQUENCIES_t p33c_SystemFrequencies; // Declare unique data object 
static const OSCCON_xOSC_TYPE_t p33cOscillatorTypes;

/* FRC oscillator settings and tuning */
#if defined (__P33SMPS_CH__) 

    #define FRCTUN_MIN              -32         // minimum tuning value
    #define FRCTUN_MAX              31          // maximum tuning value
    #define OSC_FRC_FREQ            8000000     // Frequency of the internal oscillator in [Hz]
    #define OSC_FRC_TUN             0           // <OSCTUN> FRC Oscillator Tuning Rregister default value
    #define OSC_TUN_STEP_PERCENTAGE 0.00047     // Oscillator frequency step size of <OSCTUN>

#elif defined (__P33SMPS_CK__) 

    #define FRCTUN_MIN              -32         // minimum tuning value
    #define FRCTUN_MAX              31          // maximum tuning value
    #define OSC_FRC_FREQ            8000000     // Frequency of the internal oscillator in [Hz]
    #define OSC_FRC_TUN             0           // <OSCTUN> FRC Oscillator Tuning Rregister value
    #define OSC_TUN_STEP_PERCENTAGE 0.00047     // Oscillator frequency step size of <OSCTUN>

#else
    #pragma message "error: === selected device family not supported by oscillator mcal driver library ==="
#endif

// Private declarations of target device properties
#define OSC_TUN_STEP_FREQUENCY  (int32_t)(OSC_FRC_FREQ * OSC_TUN_STEP_PERCENTAGE)

/**************************************************************************************************
 * @ingroup p33c-pral-fmgr-methods
 * @brief
 * This routine reads all oscillator related SFRs recalculating the various frequencies
 * across clock domains. These frequencies are broadcasted in the global data structure 
 * 'p33c_SystemFrequencies'.
 *
 * @param main_osc_frequency  Frequency of external oscillator frequency in [Hz] of type unsigned integer.
 *                            Set to '0' if no external oscillator is used.
 *
 * @return
 * unsigned integer
 * 0 = reading oscillator settings failed
 * 1 = reading oscillator settings successfully
 *
 * @details
 * Microchip's 16-Bit devices offer multiple clock sources to clock the CPU. This routine 
 * reads the most recent, oscillator related Special Function Registers (SFR) and determines
 * the recently active main clock and its frequency and calculates the resulting clock frequencies
 * of other clock domains. 
 * 
 * The results are broadcasted through the 'p33c_SystemFrequencies' data structure which is globally 
 * accessible in user code and can be used to calculate other oscillator dependent settings such as
 * timer periods or baud rates of communication interfaces
 * 
 * Please note:
 * The contents of data structure 'p33c_SystemFrequencies' is NOT updated automatically. It is 
 * recommended to call the function 'p33c_SetExtOscFrequency' in user code every time after 
 * clock settings have been modified. 
 *
 **************************************************************************************************/
static inline int p33c_SetExtOscFrequency(int32_t extOscFrequency)
{
    int retval = 1;
    
    p33c_SystemFrequencies.Fpri = extOscFrequency;
    
    return(retval);
}

/**************************************************************************************************
 * @ingroup p33c-pral-fmgr-methods
 * @brief   Calculates the most recent frequencies of the main oscillator clock domain
 * @return 0: failure of type unsigned integer
 * @return 1: success of type unsigned integer
 *************************************************************************************************/
static uint16_t p33c_GetMainOscFrequencies(void)
{
    int32_t freq=0;
    uint16_t vbuf=0;
    OSCCON_xOSC_TYPE_t otype;
    P33C_OSC_MODULE_t* osc;
    
    // Capture SFR memory address of main oscillator register set
    osc = p33c_Osc_GetHandle();
    
    // read currently selected oscillator
    otype = osc->OSCCON.bits.COSC; 
    
    // Copy Base FRC frequency into data structure
    p33c_SystemFrequencies.Frc = (int32_t)OSC_FRC_FREQ;   // Set default FRC oscillator frequency 
    
    // Depending on detected oscillator type, set/override oscillator frequency
    
    // For all modes using the internal Fast RC Oscillator (FRC), check input divider and tuning register
    if ((otype == OSCCON_xOSC_FRC) || (otype == OSCCON_xOSC_BFRC) || (otype == OSCCON_xOSC_FRCPLL) || (otype == OSCCON_xOSC_FRCDIVN)) {
        
        freq = (int32_t)OSC_FRC_FREQ;   // Oscillator frequency is 8 MHz
        
        // FRC tuning register does not affect Backup FRC clock
        if(otype != OSCCON_xOSC_BFRC) {
            #if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHM__)
            freq += OSC_TUN_STEP_FREQUENCY * (int32_t)(osc->OSCTUN.bits.TUN); // Add oscillator tuning value (is singed)
            p33c_SystemFrequencies.Frc = freq;    // Copy updated fast RC oscillator frequency after tuning
            #endif
        }
        
        // Including FRC divider requires the FRCDIV oscillator to be selected
        if (otype == OSCCON_xOSC_FRCDIVN)               // If oscillator is using internal divider...
        {
            vbuf = (osc->CLKDIV.bits.FRCDIV & 0x0003);  // Copy divider SFR bits
            freq >>= vbuf; // Right-shift oscillator frequency by divider bits (FRCDIV)
        }
        
    }
    
    // Internal Low-Power RC Oscillator is always fixed to 32 kHz
    else if (otype == OSCCON_xOSC_LPRC) {
        freq = (int32_t)32000;        // Oscillator frequency is 32 kHz
    }
    
    // If external clock modes are set, check if given frequency is non-zero
    else { // If no oscillator frequency is given, it's assumed FRC oscillator is used
        if (freq == 0) return(0);   // Error: no oscillator frequency of external clock given
    }
    
    // Capture system root clock
    p33c_SystemFrequencies.Fclk = (uint32_t)freq;

    // Check for PLL usage and calculate oscillator frequency based on recent settings
//    #if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHM__)
    if ( (otype == OSCCON_xOSC_FRCPLL) || (otype == OSCCON_xOSC_PRIPLL) ) 
    {
        // Check if PLL is locked in and stable
        if (!osc->OSCCON.bits.LOCK) return(0);    // if incorrect/not valid, return error 
        
        // Check PLL divider N1 for valid value
        vbuf = (osc->CLKDIV.bits.PLLPRE & 0x000F);
        if((vbuf > 8) || (vbuf == 0)) return (0);  // if incorrect/not valid, return error
        freq /= vbuf;   // Divide frequency by divider N1
        
        // Check PLL multiplier M
        vbuf = (osc->PLLFBD.bits.PLLFBDIV & 0x00FF);
        if((vbuf > 200) || (vbuf < 3)) return (0);  // if incorrect/not valid, return error
        freq *= vbuf; // Multiply frequency by Multiplier M

        // Capture VCO frequency
        vbuf = (osc->PLLDIV.bits.VCODIV & 0x0003);
        if(vbuf > 3) return (0);  // if incorrect/not valid, return error
        vbuf = 4-vbuf;  // Subtract value from 4 to get divider ratio
        p33c_SystemFrequencies.Fvco = (uint32_t)(freq/vbuf);   // Divide frequency by VCO divider
        
        // Check PLL divider N2 for valid value
        vbuf = (osc->PLLDIV.bits.POST1DIV & 0x0007);
        if((vbuf > 8) || (vbuf == 0)) return (0);  // if incorrect/not valid, return error
        freq /= vbuf;   // Divide frequency by divider N2

        // Check PLL divider N3 for valid value
        vbuf = (osc->PLLDIV.bits.POST2DIV & 0x0007);
        if((vbuf > 8) || (vbuf == 0)) return (0);  // if incorrect/not valid, return error
        freq /= vbuf;   // Divide frequency by divider N3
        
    }
    
    // Capture PLL output frequency
    p33c_SystemFrequencies.Fpllo = (uint32_t)freq;

    // CPU Clock Divider
    freq >>= 1;   // Divide frequency by 2
    p33c_SystemFrequencies.Fosc = (uint32_t)freq;
    
    // Peripheral Bus Divider
    freq >>= 1;   // Divide frequency by 2
    p33c_SystemFrequencies.Fp = (uint32_t)freq;

    // Reading DOZE setting
    if (osc->CLKDIV.bits.DOZEN)                   // If DOZE divider is enabled
    {
        vbuf = (osc->CLKDIV.bits.DOZE & 0x0003);  // Copy divider SFR bits
        freq >>= vbuf; // Right-shift oscillator frequency by divider bits (DOZE)
    }

    p33c_SystemFrequencies.Fcy = (uint32_t)freq;
    
    // Calculate CPU clock period
    p33c_SystemFrequencies.Tcy = 1.0/((float)p33c_SystemFrequencies.Fcy);

    // Calculate peripheral clock period
    p33c_SystemFrequencies.Tp = 1.0/((float)p33c_SystemFrequencies.Fp);

    return(1);

}

/**************************************************************************************************
 * @ingroup p33c-pral-fmgr-methods
 * @brief   Calculates the most recent frequencies of the main oscillator clock domain
 * @return 0: failure of type unsigned integer
 * @return 1: success of type unsigned integer
 *************************************************************************************************/
static uint16_t p33c_GetAuxClockFrequencies(void)
{
    int32_t freq=0;
    uint16_t vbuf=0;
    volatile P33C_ACLK_CONFIG_t* aclk;
    
    // Capture SFR memory address of main oscillator register set
    aclk = p33c_Aclk_GetHandle();

    if (aclk->ACLKCON1.bits.APLLEN) {  // APLL is enabled...
    
        // Select input frequency
        if(aclk->ACLKCON1.bits.FRCSEL) { freq = p33c_SystemFrequencies.Frc; }
        else { freq = p33c_SystemFrequencies.Fpri; }
        
        // Check APLL divider N1 for valid value
        vbuf = (aclk->ACLKCON1.bits.APLLPRE & 0x000F);
        if((vbuf > 8) || (vbuf == 0)) return (0);  // if incorrect/not valid, return error
        freq /= vbuf;   // Divide frequency by divider N1

        // Check PLL multiplier M
        vbuf = (aclk->APLLFBD1.bits.APLLFBDIV & 0x00FF);
        if((vbuf > 200) || (vbuf < 3)) return (0);  // if incorrect/not valid, return error
        freq *= vbuf; // Multiply frequency by Multiplier M

        // Capture VCO frequency
        vbuf = (aclk->APLLDIV1.bits.AVCODIV & 0x0003);
        if(vbuf > 3) return (0);  // if incorrect/not valid, return error
        vbuf = 4-vbuf;  // Subtract value from 4 to get divider ratio
        p33c_SystemFrequencies.AFvco = (uint32_t)(freq/vbuf);   // Divide frequency by VCO divider

        // Check PLL divider N2 for valid value
        vbuf = (aclk->APLLDIV1.bits.APOST1DIV & 0x0007);
        if((vbuf > 8) || (vbuf == 0)) return (0);  // if incorrect/not valid, return error
        freq /= vbuf;   // Divide frequency by divider N2

        // Check PLL divider N3 for valid value
        vbuf = (aclk->APLLDIV1.bits.APOST2DIV & 0x0007);
        if((vbuf > 8) || (vbuf == 0)) return (0);  // if incorrect/not valid, return error
        freq /= vbuf;   // Divide frequency by divider N3
        p33c_SystemFrequencies.AFpllo = freq;    // Capture auxiliary PLL output
        
    }
    else {  // APLL is disabled...
        p33c_SystemFrequencies.AFpllo = 0;    // Reset auxiliary PLL output
        p33c_SystemFrequencies.AFvco = 0;     // Reset auxiliary PLL VCO output
    }
        
    // Return 1=Success, 0=Failure
    return(1); 
    
}

/**************************************************************************************************
 * @ingroup p33c-pral-fmgr-methods
 * @brief
 * This routine reads all oscillator related SFRs recalculating the various frequencies
 * across clock domains. These frequencies are broadcasted in the global data structure 
 * 'p33c_SystemFrequencies'.
 *
 * @return  0 = reading oscillator settings failed
 * @return  1 = reading oscillator settings successful
 *
 * @details
 * Microchip's 16-Bit devices offer multiple clock sources to clock the CPU and peripherals. This 
 * routine reads the most recent, oscillator related Special Function Registers (SFR) and determines
 * the recently active main clock and its frequency and calculates the resulting clock frequencies
 * of other clock domains. 
 * 
 * The results are broadcasted through the 'p33c_SystemFrequencies' data structure which is globally 
 * accessible in user code and can be used to calculate other oscillator dependent settings such as
 * timer periods or baud rates of communication interfaces-
 * 
 * @note
 * The content of data structure 'p33c_SystemFrequencies' is NOT updated automatically. It is 
 * recommended to call the function 'p33c_UpdateSystemFrequencies' in user code every time after 
 * clock settings have been modified. 
 * 
 * @note
 * If external oscillators are used, users have to specify the clock frequency by calling 
 * the function 'p33c_Osc_SetExtFrequency(int32_t ext_osc_frequency)' before the
 * function 'p33c_Osc_GetFrequencies' will return accurate frequency information. 
 * 
 * If the recent oscillator is set to "External Clock" and the primary clock frequency
 * equals zero, this function will return an error code and no frequency information 
 * update will occur.
 *
 **************************************************************************************************/
static uint16_t p33c_UpdateSystemFrequencies(void) 
{
    int retval = 1;

    retval &= p33c_GetMainOscFrequencies();
    retval &= p33c_GetAuxClockFrequencies();

    return(retval);
}

#define p33c_UpdateMainOscFrequencies() p33c_GetMainOscFrequencies()
#define p33c_UpdateAuxClockFrequencies() p33c_GetAuxClockFrequencies()

#endif /* End of P33C_SYSTEM_FREQUENCIES_INTERFACE_H */

// __________________
// end of file

