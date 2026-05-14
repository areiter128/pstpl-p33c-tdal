/**
 * @file    p33c_adc.h
 * @see     p33c_adc-d.h, p33c_adc-f.h
 * @brief   Analog-To-Digital Converter (ADC) peripheral register access functions
 * @author  M91406
 * @date    September 4, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_ADC_SFR_INTERFACE_H
#define P33C_ADC_SFR_INTERFACE_H

// Include Header Files
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#include "p33c_devices.h" // include general device properties header file
#include "p33c_adc-d.h" // include ADC declarations header file
#include "p33c_port-d.h" // include device port driver header file
#include "p33c_gpio.h" // include port declarations header file
#include "p33c_adcan.h" // include ADC input access functions header file

/*********************************************************************************
 * @ingroup p33c-pral-adc-module-templates
 * @brief   Reset configuration of the ADC module base SFRs
 *
 * @details
 *  Default configuration of the ADC module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 * 
 *  Programmers can use this template to reset a previously set ADC module
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADC_MODULE_t adcModuleConfigClear = 
{
   // ADC Module Base Configuration
    .ADCON.ADON = 0,        ///< ADC module is off
    .ADCON.ADSIDL = 0,      ///< ADC module continues module operation in Idle mode
    .ADCON.CLKDIV = 1,      ///< ADC Module Clock Source Divider = 2 Source Clock Periods
    .ADCON.CLKSEL = 0b00,   ///< ADC Module Clock Source Selection = Fp (Peripheral Clock)
    .ADCON.EIEN = 0,        ///< Early Interrupts Enable is off (individual interrupts are generated when conversion is done)
    .ADCON.FORM = 0,        ///< Data Output Format is Integer (right-justified)
    .ADCON.WARMTIME = 0b1111, ///< ADC Core Enable Delay period is 32,768 Source Clock Periods (maximum)
    
    // ADC Module Bandgap Reference Configuration
    .REFCON.REFCIE = 0,     ///< Band Gap and Reference Voltage Ready Common Interrupt disabled
    .REFCON.REFERCIE = 0,   ///< Band Gap or Reference Voltage Error Common Interrupt disabled
    .REFCON.REFSEL = 0,     ///< ADC Reference Voltage Selection: AVDD (only avaialble option)
    
    // ADC Module Trigger Configuration
    .TRGCON.PTGEN = 0,      ///< External Conversion Request Interface (PTG-Trigger Input) disabled 
    .TRGCON.SHRSAMP = 0,    ///< Clear Shared ADC Core Sampling Direct Control bit
    .TRGCON.SWCTRG = 0,     ///< Clear Software Common Trigger bit
    .TRGCON.SUSPEND = 0,    ///< Clear All ADC Core Triggers Disable bit
    .TRGCON.SUSPCIE = 0,    ///< Clear Suspend All ADC Cores Common Interrupt Enable bit

    .TRGCON.CNVCHSEL = 0,   ///< Clear Channel Number Selection for Software Individual Channel Conversion Trigger
    .TRGCON.CNVRTCH = 0,    ///< Clear Software Individual Channel Conversion Trigger bit
    .TRGCON.SWLCTRG = 0     ///< Clear Software Level-Sensitive Common Trigger bit
};

/*********************************************************************************
 * @ingroup p33c-pral-adc-module-templates
 * @brief   Default configuration of the ADC module base SFRs
 *
 * @details
 *  Default configuration of the ADC module SFRs with all its registers 
 *  being set to their recommended default state for maximum performance.
 *  The overall settings are assumed to be:
 *    - Main Oscillator Frequency = 100 MHz with Fvco = 800 MHz
 *    - Auxiliary PLL Frequency = 500 MHz with AVFCO = 1000 MHz
 *    - Auxiliary PLL VCO Output = AFVCO/4 = 250 MHz
 *    - ADC Input Clock Source = AFVCO/4 = 250 MHz
 *    - ADC Module Clock Divider = 1/2 = 125 MHz
 *    - Prepared to configure ADC Core Input Clock Divider = 1/2 = 62.5 MHz for Tad = 16 ns
 * 
 *  Programmers can use this template to reset a previously set ADC module
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADC_MODULE_t adcModuleConfigDefault = 
{
    // ADC Module Base Configuration
    .ADCON.ADON = 0,        ///< ADC module is off
    .ADCON.ADSIDL = 0,      ///< ADC module continues module operation in Idle mode
    .ADCON.CLKDIV = 1,      ///< ADC Module Clock Source Divider = 2 Source Clock Periods (assuming AVCO = 250 MHz = 125 MHz)
    .ADCON.CLKSEL = 0b10,   ///< ADC Module Clock Source Selection = AFVCO/4 (assuming 1 GHz AVCO = 250 MHz)
    .ADCON.EIEN = 1,        ///< Early Interrupts Enable is on (individual interrupts are generated EISEL clock periods prior to conversion being done)
    .ADCON.FORM = 0,        ///< Data Output Format is Integer (right-justified)
    .ADCON.WARMTIME = 0b1011, ///< ADC Core Enable Delay period is 2,048 Source Clock Periods
    
    // ADC Module Bandgap Reference Configuration
    .REFCON.REFCIE = 0,     ///< Band Gap and Reference Voltage Ready Common Interrupt disabled
    .REFCON.REFERCIE = 0,   ///< Band Gap or Reference Voltage Error Common Interrupt disabled
    .REFCON.REFSEL = 0,     ///< ADC Reference Voltage Selection: AVDD (only available option)
    
    // ADC Module Trigger Configuration
    .TRGCON.PTGEN = 0,      ///< External Conversion Request Interface (PTG-Trigger Input) disabled 
    .TRGCON.SHRSAMP = 0,    ///< Clear Shared ADC Core Sampling Direct Control bit
    .TRGCON.SWCTRG = 0,     ///< Clear Software Common Trigger bit
    .TRGCON.SWLCTRG = 0,    ///< Clear Software Level-Sensitive Common Trigger bit
    .TRGCON.SUSPEND = 0,    ///< Clear All ADC Core Triggers Disable bit
    .TRGCON.SUSPCIE = 0,    ///< Clear Suspend All ADC Cores Common Interrupt Enable bit
    .TRGCON.SUSPRDY = 0,    ///< Clear All ADC Cores Suspended Flag bit
    .TRGCON.CNVCHSEL = 0,   ///< Clear Channel Number Selection for Software Individual Channel Conversion Trigger
    .TRGCON.CNVRTCH = 0     ///< Clear Software Individual Channel Conversion Trigger bit

};

/*********************************************************************************
 * @ingroup p33c-pral-adcan-templates
 * @brief   Default RESET configuration of any ADC Core instance SFRs
 *
 * @details
 *  Default configuration to reset any ADC Core SFR set to its default
 *  configuration present after device is coming out of RESET.
 * 
 *  Programmers can use this template to reset a previously set ADC module
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADCORE_INSTANCE_t adcCoreConfigClear = 
{
    .CxEN = false,      ///< ADC Core Enable Bit: disabled
    .ADCS = 0,          ///< ADC Core Input Clock Divider = 1/2 (= 62.5 MHz, Tad = 16 ns)
    .CHS = 0,           ///< Default ADC Input Pin
    .CIE = false,       ///< ADC Core REady Interrupt disabled
    .CxPWR = false,     ///< ADC Core Power Bit: disabled
    .EISEL = 0b111,     ///< ADC Core Early Interrupt Period: Interrupts are triggered 8 Tad early
    .RES = 0b11,        ///< ADC Core Resolution: 12 bit
    .SAMC = 0,          ///< ADC Core Conversion Delay Selection bits: 2 Tad
    .SAMCxEN = false    ///< ADC Core 1 Conversion Delay Enable bit
};

/*********************************************************************************
 * @ingroup p33c-pral-adcan-templates
 * @brief   Default configuration of the Dedicated ADC Core instance SFRs
 *
 * @details
 *  Default configuration of an Dedicated ADC Core SFR set with all its settings
 *  being set to their recommended defaults for maximum performance when driven
 *  by 125 MHz input clock.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADCORE_INSTANCE_t adcDedicatedCoreConfigDefault = 
{
    .CxEN = false,      ///< ADC Core Enable Bit: disabled
    .ADCS = 1,          ///< ADC Core Input Clock Divider = 1/2 (= 62.5 MHz, Tad = 16 ns)
    .CHS = 0,           ///< Default ADC Input Pin
    .CIE = false,       ///< ADC Core Ready Interrupt disabled
    .CxPWR = false,     ///< ADC Core Power Bit: disabled
    .EISEL = 0b111,     ///< ADC Core Early Interrupt Period: Interrupts are triggered 8 Tad early
    .RES = 0b11,        ///< ADC Core Resolution: 12 bit
    .SAMC = 0,          ///< ADC Core Conversion Delay Selection bits: 2 Tad
    .SAMCxEN = true     ///< ADC Core Conversion Delay Enable bit
};

/*********************************************************************************
 * @ingroup p33c-pral-adcan-templates
 * @brief   Default configuration of the Shared ADC Core instance SFRs
 *
 * @details
 *  Default configuration of the Shared ADC Core SFR set with all its settings
 *  being set to their recommended defaults for maximum performance when driven
 *  by 125 MHz input clock.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADCORE_INSTANCE_t adcSharedCoreConfigDefault = 
{
    .CxEN = false,      ///< ADC Core Enable Bit: disabled
    .ADCS = 1,          ///< ADC Core Input Clock Divider = 1/2 (= 62.5 MHz, Tad = 16 ns)
    .CHS = 0,           ///< Default ADC Input Pin (can be ignored, not applicable for shared ADC core)
    .CIE = false,       ///< ADC Core Ready Interrupt disabled
    .CxPWR = false,     ///< ADC Core Power Bit: disabled
    .EISEL = 0b111,     ///< ADC Core Early Interrupt Period: Interrupts are triggered 8 Tad early
    .RES = 0b11,        ///< ADC Core Resolution: 12 bit
    .SAMC = 10,         ///< ADC Core Conversion Delay Selection bits: 10x Tad = 160ns @ Tad=16ns
    .SAMCxEN = true     ///< ADC Core Conversion Delay Enable bit
};

/*********************************************************************************
 * @ingroup p33c-pral-adcan-templates
 * @brief   Default configuration of the ADC input instance SFRs
 *
 * @details
 *  Default configuration of an ADC Input Instance SFR set with all its settings
 *  being reset to their default state when the device comes out of RESET.
 * 
 *  Programmers can use this template to reset a previously set ADC input 
 *  instance configuration when it's not used anymore or to ensure a known 
 *  startup condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADCAN_INSTANCE_t adcAnConfigClear = 
{
    .Enable = false,    ///< Disable analog functions of analog input pin
    .DIFF = 0,          ///< Set pin to Single Ended mode
    .SIGN = 0,          ///< Set data output to Unsigned
    .TRGSRC = 0,        ///< Clear trigger source selection
    .IE = 0,            ///< Disable interrupt generation
    .EIE = 0,           ///< Disable early interrupt generation
    .LVLEN = 0,         ///> Disable level trigger mode
    .TRGSRC = 0,        ///< Clear trigger source assignment
    .ADCBUF = NULL      ///< Clear pointer to ADC buffer register
};

static const __attribute__((space(auto_psv))) P33C_ADCAN_INSTANCE_t adcAnConfigDefault = 
{
    .Enable = false,    ///< Enable analog functions of analog input pin
    .DIFF = 0,          ///< Set pin to Single Ended mode
    .SIGN = 0,          ///< Set data output to Unsigned
    .TRGSRC = 0,        ///< Clear trigger source selection
    .IE = 0,            ///< Disable interrupt generation
    .EIE = 1,           ///< Enable early interrupt generation
    .LVLEN = 0,         ///> Disable level trigger mode
    .TRGSRC = 0,        ///< Clear trigger source assignment
    .ADCBUF = NULL      ///< Clear pointer to ADC buffer register
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/* PRIVATE DECLARATIONS */

// ==================================================================================
// ADC MODULE BASE CONFIGURATION HANDLERS
// ==================================================================================

/*********************************************************************************
 * @ingroup p33c-pral-adc-module-methods
 * @brief   Enables power to an ADC peripheral instance
 * @return  0 = failure, turning on power to ADC module was not successful
 * @return  1 = success, turning on power to ADC module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the ADC peripheral module.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_AdcModule_PowerOn(void)
{
    int retval = 1;

    #ifdef PMDCON
    _PMDLOCK = 1; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    #if defined (_ABGMD)
    _ABGMD = 0;         // Turn on power to analog bandgap reference
    retval &= (1 - _ABGMD);
    #endif
    #if defined (_ADCMD)
    _ADCMD = 0; 		// Turn on power to ADC module
    retval &= (1 - _ADCMD);
    #elif defined (_ADC1MD)
    _ADC1MD = 0;        // Turn on power to ADC module
    retval &= (1 - _ADC1MD);
    #endif
    #ifdef PMDCON
    _PMDLOCK = 0;// Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    
    return(retval);
} 

/*********************************************************************************
 * @ingroup p33c-pral-adc-module-methods
 * @brief   Disables power to an ADC peripheral instance
 * @return  0 = failure, turning off power to ADC module was not successful
 * @return  1 = success, turning off power to ADC module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  off the power supply to the ADC peripheral module.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_AdcModule_PowerOff(void)
{
    int retval = 1;
    
    #ifdef PMDCON
    _PMDLOCK = 1; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    #if defined (_ABGMD)
    _ABGMD = 1;         // Turn off power to analog bandgap reference
    retval &= (_ABGMD);
    #endif
    #if defined (_ADCMD)
    _ADCMD = 1; 		// Turn off power to ADC module
    retval &= (_ADCMD);
    #elif defined (_ADC1MD)
    _ADC1MD = 1; 		// Turn off power to ADC module
    retval &= (_ADC1MD);
    #else
    retval = 0;
    #endif
    #ifdef PMDCON
    _PMDLOCK = 0; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    
    return(retval);
}

/***********************************************************************************
 * @ingroup p33c-pral-adc-module-methods
 * @brief   Enables the ADC module and all utilized ADC cores
 * @return  0 = failure, enabling ADC peripheral module was not successful
 * @return  1 = success, enabling ADC peripheral module was successful
 * 
 * @details
 *  Enables all utilized ADC cores by respecting warm-up time and READY status 
 *  bits before enabling the ADC module.
 *
 **********************************************************************************/
static inline int p33c_AdcModule_Enable(void)
{
    int retval = 1;
    uint16_t _bitmsk=0;
    uint16_t _timeout=0;
    uint16_t _coremsk=0;
    
	_ADON = true;      // Enable ADC module
    retval &= _ADON;   // Check if ADC module is enabled
    
    // Enable sequence for all utilized ADC cores
    _coremsk = (ADCON3H & 0x00FF); // Capture bit-mask of all utilized ADC cores
    ADCON5L |= _coremsk; // Enable power to all utilized ADC cores
    
    _bitmsk = ((_coremsk << 8) | _coremsk);
    while(!(ADCON5L & _bitmsk) && (_timeout++ < 0xFFFE) );
    retval &= (bool)(ADCON5L & _bitmsk);

    return(retval);
}

/***********************************************************************************
 * @ingroup p33c-pral-adc-module-methods
 * @brief   Disables the ADC module and all utilized ADC cores
 * @return  0 = failure, disabling ADC peripheral module was not successful
 * @return  1 = success, disabling ADC peripheral module was successful
 * 
 * @details
 *  Disables all utilized ADC cores, turns off power to all ADC cores and 
 *  disables the ADC module.
 *
 **********************************************************************************/
static inline int p33c_AdcModule_Disable(void)
{
    int retval = 1;

    // Enable sequence for all utilized ADC cores
    ADCON3H &= 0xFF00;  // Disable all utilized ADC cores
    ADCON5L &= 0xFF00;  // Disable power to all utilized ADC cores
	_ADON = false;      // Disable ADC module
    retval &= (bool)(_ADON == false);

    return(retval);    // Returns success/failure of ADC enable state
}

/*********************************************************************************
 * @ingroup p33c-pral-adc-module-methods
 * @brief   Read the current configuration from the ADC module base registers
 * @return  ADC module special function register data object of type P33C_ADC_MODULE_t
 * 
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_ADC_MODULE_t. Users can read and 
 *  verify or modify the configuration to write it back to the ADC 
 *  peripheral module base registers.
 * 
 *********************************************************************************/
static inline P33C_ADC_MODULE_t p33c_AdcModule_GetConfig(void)
{
    P33C_ADC_MODULE_t adcConfig;
    
    // Capture ADC module base register settings
    adcConfig.ADCON.ADON = _ADON; 
    adcConfig.ADCON.ADSIDL = _ADSIDL;
    adcConfig.ADCON.CLKSEL = ADCON3Hbits.CLKSEL;
    adcConfig.ADCON.CLKDIV = ADCON3Hbits.CLKDIV;
    adcConfig.ADCON.EIEN = ADCON2Lbits.EIEN;
    adcConfig.ADCON.FORM = ADCON1Hbits.FORM;
    
    #ifdef ADCON5H // only applicable for multi-ADC devices 
    adcConfig.ADCON.WARMTIME = ADCON5Hbits.WARMTIME;
    #endif
    
    // Capture ADC module bandgap reference register settings
    adcConfig.REFCON.REFSEL = _REFSEL; 
    adcConfig.REFCON.REFERCIE = _REFERCIE;
    adcConfig.REFCON.REFCIE = _REFCIE;
    adcConfig.REFCON.REFERR = _REFERR;
    adcConfig.REFCON.REFRDY = _REFRDY;
    
    // Capture ADC module trigger configuration register settings
    adcConfig.TRGCON.PTGEN = ADCON2Lbits.PTGEN; 
    adcConfig.TRGCON.CNVRTCH = _CNVRTCH;
    adcConfig.TRGCON.CNVCHSEL = _CNVCHSEL;
    adcConfig.TRGCON.SWCTRG = _SWCTRG;
    adcConfig.TRGCON.SWLCTRG = _SWLCTRG;
    adcConfig.TRGCON.SHRSAMP = _SHRSAMP;
    adcConfig.TRGCON.SUSPEND = _SUSPEND;
    adcConfig.TRGCON.SUSPCIE = _SUSPCIE;
    adcConfig.TRGCON.SUSPRDY = _SUSPRDY;
    
    return(adcConfig);
}

/********************************************************************************
 * @ingroup p33c-pral-adc-module-methods
 * @brief   Writes a user-defined configuration to the ADC module base registers
 * @param   adcConfig: ADC module special function register data object of type P33C_ADC_MODULE_t
 * @return  0 = failure, writing to ADC module base registers was not successful
 * @return  1 = success, writing to ADC module base registers was successful
 * 
 * @details
 *  This function writes a user-defined ADC module configuration of 
 *  type P33C_ADC_MODULE_t to the ADC module base registers. The individual
 *  configurations must be set in user-code before calling this function. 
 *  To simplify the configuration process of standard functions, this 
 *  abstraction module provides templates, which can be loaded and 
 *  written directly.
 * 
 * @note
 *  When a new configuration is written to the ADC module, the ADC module 
 *  will be disabled by default before the WRITE action is performed. The
 *  ADC module is NOT re-enabled automatically. Instead, please call the
 *  dedicated p33c_AdcModule_Enable() function to ensure ADC cores and ADC
 *  module passes the enable sequence in a deterministic order, preventing 
 *  undesired behavior during the reconfiguration process.
 * 
 *********************************************************************************/
static inline int p33c_AdcModule_SetConfig(P33C_ADC_MODULE_t adcConfig)
{
    int retval = 1;
    
    // Force Enable bit state to FALSE during block-update of register settings
    _ADON = 0; 
    
    // Capture ADC module base register settings
    _ADSIDL = adcConfig.ADCON.ADSIDL;
    ADCON3Hbits.CLKSEL = adcConfig.ADCON.CLKSEL;
    ADCON3Hbits.CLKDIV = adcConfig.ADCON.CLKDIV;
    ADCON2Lbits.EIEN = adcConfig.ADCON.EIEN;
    ADCON1Hbits.FORM = adcConfig.ADCON.FORM;
    
    #ifdef ADCON5H // only applicable for multi-ADC devices 
    ADCON5Hbits.WARMTIME = adcConfig.ADCON.WARMTIME;
    #endif
    
    // Capture ADC module bandgap reference register settings
    _REFSEL = adcConfig.REFCON.REFSEL; 
    _REFERCIE = adcConfig.REFCON.REFERCIE;
    _REFCIE = adcConfig.REFCON.REFCIE;
    
    // Capture ADC module trigger configuration register settings
    ADCON2Lbits.PTGEN = adcConfig.TRGCON.PTGEN; 
    _CNVCHSEL = adcConfig.TRGCON.CNVCHSEL;
    _SWLCTRG = adcConfig.TRGCON.SWLCTRG;
    _SHRSAMP = adcConfig.TRGCON.SHRSAMP;
    _SUSPEND = adcConfig.TRGCON.SUSPEND;
    _SUSPCIE = adcConfig.TRGCON.SUSPCIE;
    
    // ADC module remains to be turned off. 
    // Please use function p33c_AdcModule_Enable() to enable the ADC module
    
    return(retval);
}

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

// ==================================================================================
// ADC CORE INSTANCE HANDLERS
// ==================================================================================

//static uint16_t p33c_SharedAdcCore_SetConfig(P33C_ADCORE_INSTANCE_t adcCoreConfig);
//static uint16_t p33c_DedicatedAdcCore_SetConfig(uint16_t adcCoreInstance, P33C_ADCORE_INSTANCE_t adcCoreConfig);

/*********************************************************************************
 * @ingroup p33c-pral-adcore-methods
 * @brief   Gets the current configuration from the ADC core instance registers
 * @param   adcCoreInstance: Index of the ADC core of type unsigned integer
 * @return  ADC core instance configuration data object of type P33C_ADCORE_INSTANCE_t
 *
 * @details
 *  Gets the most recent configuration from the registers of the ADC core 
 *  instance specified and returns a ADC core instance configuration data 
 *  object.
 * 
 ********************************************************************************/
static inline P33C_ADCORE_INSTANCE_t p33c_AdcCoreInstance_GetConfig(uint16_t adcCoreInstance)
{
    P33C_ADCORE_INSTANCE_t adcCoreConfig;
    
    // If shared ADC core is selected...
    if (adcCoreInstance > 6)
    {
        // Shared core configuration may be addressed with indices
        // greater than or equal #7 as no index-based register access
        // is used. However, correct indexing is recommended.

        adcCoreConfig.RES = _SHRRES;
        adcCoreConfig.SAMC = _SHRSAMC;
        adcCoreConfig.ADCS = _SHRADCS;
        adcCoreConfig.EISEL = _SHREISEL;
        
        adcCoreConfig.CIE = _SHRCIE;
        adcCoreConfig.CxEN = _SHREN;
        adcCoreConfig.CxPWR = _SHRPWR;

        return(adcCoreConfig);
    }
    else
    {
        // Dedicated ADC core configuration requires proper indexing
        // of the addressed ADC core instance. ADC core instances are
        // enumerated by 0, 1, 2, 3, ..., 6
        #if (P33C_ADC_CORE_COUNT > 1)

        ADCORExH_t ADCORExH;
        volatile uint16_t* _regPtr;

        // Capture pointer to ADCORExL register
        _regPtr = p33c_AdcCoreInstance_Handles[adcCoreInstance];
        adcCoreConfig.SAMC = (uint16_t)*_regPtr++;
        ADCORExH.value = *_regPtr;
        adcCoreConfig.RES = ADCORExH.bits.RES;
        adcCoreConfig.ADCS = ADCORExH.bits.ADCS;
        adcCoreConfig.EISEL = ADCORExH.bits.EISEL;
        
        adcCoreConfig.CIE = ((ADCON5H >> adcCoreInstance) & 0x0001);
        adcCoreConfig.SAMCxEN = ((ADCON4L >> adcCoreInstance) & 0x0001);
        adcCoreConfig.CHS = ((ADCON4H >> (adcCoreInstance << 1)) & 0x0003);
        adcCoreConfig.CxEN = ((ADCON3H >> adcCoreInstance) & 0x0001);
        adcCoreConfig.CxPWR = ((ADCON5L & adcCoreInstance) & 0x0003);
        
        #else
        
        adcCoreConfig = adcCoreConfigClear; // Return empty configuration

        #endif
    }
    
    return(adcCoreConfig);
}

/*********************************************************************************
 * @ingroup p33c-pral-adcore-methods
 * @brief   Verifies most recent ADC configuration is valid
 * @param   adcCoreConfig: ADC Core Configuration of type P33C_ADCORE_INSTANCE_t
 ********************************************************************************/
static P33C_ADCORE_INSTANCE_t p33c_AdcCoreSettingsCheck(P33C_ADCORE_INSTANCE_t adcCoreConfig)
{
    // Force Power and Enable bits to false before block-write of configuration
    adcCoreConfig.CxPWR = 0;
    adcCoreConfig.CxEN = 0;
    
    if (adcCoreConfig.EISEL > 6) adcCoreConfig.EISEL = 7;
    if (adcCoreConfig.ADCS > 62) adcCoreConfig.ADCS = 63;
    if (adcCoreConfig.SAMC > 1022) adcCoreConfig.SAMC = 1023;
    if (adcCoreConfig.RES > 2) adcCoreConfig.RES = 3;
    
    return(adcCoreConfig);
}

/*********************************************************************************
 * @ingroup p33c-pral-adcore-methods
 * @brief   Writes a new ADC core configuration to the specified ADC core instance registers
 * @param   adcCoreInstance: Index of the ADC core of type unsigned integer
 * @param   adcCoreConfig:   ADC core configuration data object of type P33C_ADCORE_INSTANCE_t
 * @return  0 = failure, writing to ADC core instance base registers was not successful
 * @return  1 = success, writing to ADC core instance base registers was successful
 *
 * @details
 *  This function writes a user-defined ADC core instance configuration of 
 *  type P33C_ADCORE_INSTANCE_t to the ADC core instance configuration registers. 
 *  The individual configurations must be set in user-code before calling this 
 *   function. 
 *  To simplify the configuration process of standard functions, this 
 *  abstraction module provides templates, which can be block written
 *  at runtime.
 * 
 * @note
 *  When a new configuration is written to a ADC core instance, the ADC core
 *  instance will be disabled by default before the WRITE action is performed. 
 *  The ADC core instance is NOT re-enabled automatically. Instead, please call 
 *  the dedicated p33c_AdcModule_Enable() function to ensure ADC cores and ADC
 *  module passes the enable sequence in a deterministic order, preventing 
 *  undesired behavior during the reconfiguration process.
 * 
 ********************************************************************************/
static inline int p33c_AdcCoreInstance_SetConfig(uint16_t adcCoreInstance, P33C_ADCORE_INSTANCE_t adcCoreConfig)
{
    int retval = 1;
    
    // If shared ADC core is selected...
    if (adcCoreInstance > 6)
    {
        // Shared core configuration may be addressed with indices
        // greater than or equal #7 as no index-based register access
        // is used. However, correct indexing is recommended.

        // Perform parameter check on ADC core settings
        adcCoreConfig = p33c_AdcCoreSettingsCheck(adcCoreConfig);
        
        // Block-write configuration
        _SHRRES = adcCoreConfig.RES;
        _SHRSAMC = adcCoreConfig.SAMC;
        _SHRADCS = adcCoreConfig.ADCS;
        _SHREISEL = adcCoreConfig.EISEL;
        
        _SHRCIE = adcCoreConfig.CIE;
        _SHREN = adcCoreConfig.CxEN;
        _SHRPWR = adcCoreConfig.CxPWR;
        
    }
    else
    {
        // Dedicated ADC core configuration requires proper indexing
        // of the addressed ADC core instance. ADC core instances are
        // enumerated by 0, 1, 2, 3, ..., 6

        #if (P33C_ADC_CORE_COUNT > 1)

        volatile uint16_t* _regPtr;
        uint16_t _bmsk=0;
        uint16_t _bset=0;
        ADCORExH_t ADCORExH;
        
        // Perform parameter check on ADC core settings
        adcCoreConfig = p33c_AdcCoreSettingsCheck(adcCoreConfig);
        
        // Set ADC Core Control Low Register
        _regPtr = p33c_AdcCoreInstance_Handles[adcCoreInstance];
        *_regPtr++ = adcCoreConfig.SAMC;

        // Set ADC Core Control High Register
        ADCORExH.bits.RES = adcCoreConfig.RES;
        ADCORExH.bits.ADCS = adcCoreConfig.ADCS;
        ADCORExH.bits.EISEL = adcCoreConfig.EISEL;
        *_regPtr = (uint16_t)ADCORExH.value;
        
        // Distribute control bit settings across registers
        _bmsk = ADCON5H; // Read destination register
        _bset = ~(0x0001 << adcCoreInstance); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcCoreConfig.CIE << adcCoreInstance);
        ADCON5H = _bmsk;
        
        _bmsk = ADCON4L; // Read destination register
        _bset = ~(0x0001 << adcCoreInstance); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcCoreConfig.SAMCxEN << adcCoreInstance);
        ADCON4L = _bmsk;

        _bmsk = ADCON4H; // Read destination register
        _bset = ~(0x0003 << (adcCoreInstance << 1)); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcCoreConfig.CHS << (adcCoreInstance << 1));
        ADCON4H = _bmsk;

        _bmsk = ADCON3H; // Read destination register
        _bset = ~(0x0001 << adcCoreInstance); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcCoreConfig.CxEN << adcCoreInstance);
        ADCON3H = _bmsk;
        
        _bmsk = ADCON5L; // Read destination register
        _bset = ~(0x0001 << adcCoreInstance); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcCoreConfig.CxPWR << adcCoreInstance);
        ADCON5L = _bmsk;

        #else
        retval = 0; // return error code
        #endif
    }

    return(retval);
}

static inline int p33c_AdcCoreInstance_SetDefaultConfig(uint16_t adcCoreInstance)
{
    int retval = 1;
    
    if ((P33C_ADC_CORE_COUNT-1) > adcCoreInstance)
    {
        retval &= p33c_AdcCoreInstance_SetConfig(adcCoreInstance, adcDedicatedCoreConfigDefault);
    }
    else if ((P33C_ADC_CORE_COUNT-1) == adcCoreInstance)
    {
        retval &= p33c_AdcCoreInstance_SetConfig(adcCoreInstance, adcSharedCoreConfigDefault);
    }
    else { retval = 0; }
    
    return(retval);
}

static inline int p33c_AdcCoreInstance_Enable(uint16_t adcCoreInstance)
{
    int retval = 1;
    ADCON3H |= ((0x01 << adcCoreInstance) & 0x00FF);
    return(retval);
}

/********************************************************************************/
/********************************************************************************/
/********************************************************************************/

// ==================================================================================
// ADC INPUT INSTANCE HANDLERS
// ==================================================================================

/*********************************************************************************
 * @ingroup p33c-pral-adcan-methods
 * @brief   Sets the respective input port configuration register bits of the ADC input instance
 * @param   adcAnInstance: ADC input instance index of type unsigned integer (e.g. 0 for AN0, 1 for AN1, etc.)
 * @param   enableState:   Enable/disable the analog input functions of the device pin of type Boolean
 * @return  0 = failure, writing to GPIO port registers was not successful
 * @return  1 = success, writing to GPIO port registers was successful
 *********************************************************************************/
static uint16_t p33c_AdcAnInput_Enable(uint16_t adcAnInstance, bool enableState)
{
    int retval = 1;
    uint16_t _bmsk=0;
    uint16_t _bset=0;
    
    // Set GPIO of analog input pin to ANALOG
    P33C_GPIO_t* anGpio = p33c_Gpio_GetAnalogInputGpio(adcAnInstance);
    int16_t _portNo = anGpio->Properties.Port;
    P33C_PORT_INSTANCE_t* gpioPort = p33c_PortInstance_GetHandle(_portNo);
    int16_t _pinNo = anGpio->Properties.Pin;
    _bmsk = ((uint16_t)enableState << (_pinNo));

    // Set GPIO of analog input pin to ANALOG
    _bset = gpioPort->ANSELx.value;
    _bset &= ~(_bmsk);
    _bset |= _bmsk;
    gpioPort->ANSELx.value = _bset;
    
    // Set GPIO of analog input pin as INPUT (high impedance)
    _bset = gpioPort->TRISx.value;
    _bset &= ~(_bmsk);
    _bset |= _bmsk;
    gpioPort->TRISx.value = _bset;
    
    // Set GPIO of analog input pin to LOW
    _bset = gpioPort->LATx.value;
    _bset &= ~(_bmsk);
    gpioPort->LATx.value = _bset;

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-adcan-methods
 * @brief   Read the current configuration from an ADC input instance 
 * @param   adcAnInstance: Index of the analog input of type unsigned integer (e.g. 0 for AN0, 1 for AN1, etc.)
 * @return  ADC input instance configuration data object of type P33C_ADCAN_INSTANCE_t
 * 
 * @details
 *  This function reads the most recent configuration of the specified ADC input
 *  from the ADC registers and returns the results in a data structure of type 
 *  P33C_ADCAN_INSTANCE_t. 
 *   
 * @note
 *  The ADC input configuration is not a direct replica of the actual Special
 *  Function Register set memory organization. The data type P33C_ADCAN_INSTANCE_t
 *  compiles all related ADC input configurations from across multiple, distributed 
 *  of registers.
 * 
 *********************************************************************************/
static inline P33C_ADCAN_INSTANCE_t p33c_AdcAnInstance_GetConfig(uint16_t adcAnInstance)
{
//    P33C_ADC_MODULE_t* adc;
    P33C_ADCAN_INSTANCE_t adcan;
    uint16_t _bmsk;
    uint16_t _bpos;
    
    // Capture Handle: set pointer to start memory address of the ADC module base registers
//    adc = p33c_AdcModule_GetHandle(); 
    
    // Capture ADC Differential and Signed Input configuration bits from ADC module registers
    if (adcAnInstance < 8)
    {
        _bpos = (adcAnInstance << 1); // Set bit position of ADC input index
        _bmsk = (0x0001 << _bpos); // Build ADC input filter bit mask
        adcan.SIGN = (bool)(ADMOD0L & _bmsk); // Get state of SIGN register bit
        _bmsk = (0x0001 << (_bpos+1)); // Build ADC input filter bit mask
        adcan.DIFF = (bool)(ADMOD0L & _bmsk); // Get state of DIFF register bit
    }
    else if (adcAnInstance < 16)
    {
        _bpos = ((adcAnInstance - 8) << 1); // Set bit position of ADC input index
        _bmsk = (0x0001 << _bpos); // Build ADC input filter bit mask
        adcan.SIGN = (bool)(ADMOD0H & _bmsk); // Get state of SIGN register bit
        _bmsk = (0x0001 << (_bpos+1)); // Build ADC input filter bit mask
        adcan.DIFF = (bool)(ADMOD0H & _bmsk); // Get state of DIFF register bit
    }
    else if (adcAnInstance < 24)
    {
        #ifdef ADMOD1L
        _bpos = ((adcAnInstance - 16) << 1); // Set bit position of ADC input index
        _bmsk = (0x0001 << _bpos); // Build ADC input filter bit mask
        adcan.SIGN = (bool)(ADMOD1L & _bmsk); // Get state of SIGN register bit
        _bmsk = (0x0001 << (_bpos+1)); // Build ADC input filter bit mask
        adcan.DIFF = (bool)(ADMOD1L & _bmsk); // Get state of DIFF register bit
        #endif
    }
    else if (adcAnInstance < 32)
    {
        #ifdef ADMOD1H
        _bpos = (adcAnInstance - 24); // Set bit position of ADC input index
        _bmsk = (0x0001 << _bpos); // Build ADC input filter bit mask
        adcan.SIGN = (bool)(ADMOD1H & _bmsk); // Get state of SIGN register bit
        _bmsk = (0x0001 << (_bpos+1)); // Build ADC input filter bit mask
        adcan.DIFF = (bool)(ADMOD1H & _bmsk); // Get state of DIFF register bit
        #endif
    }

    // Capture ADC Input Interrupt and Level Trigger configuration bits from ADC module registers
    if (adcAnInstance < 16)
    {
        _bpos = adcAnInstance; // Set bit position of ADC input index
        _bmsk = (0x0001 << _bpos); // Build ADC input filter bit mask
        adcan.IE = (bool)(ADIEL & _bmsk); // Get state of Interrupt Enable register bit
        adcan.EIE = (bool)(ADEIEL & _bmsk); // Get state of Early Interrupt Enable register bit
        adcan.LVLEN = (bool)(ADLVLTRGL & _bmsk); // Get state of Level Trigger Enable register bit
        adcan.EISTAT = (bool)(ADEISTATL & _bmsk); // Get state of Early Interrupt Status register bit
        adcan.ANxRDY = (bool)(ADSTATL & _bmsk); // Get state of Early Interrupt Status register bit
    }
    else if (adcAnInstance < 32)
    {
        _bpos = (adcAnInstance - 16); // Set bit position of ADC input index
        _bmsk = (0x0001 << _bpos); // Build ADC input filter bit mask
        adcan.IE = (bool)(ADIEH & _bmsk); // Get state of SIGN register bit
        adcan.EIE = (bool)(ADEIEH & _bmsk); // Get state of Early Interrupt Enable register bit
        adcan.LVLEN = (bool)(ADLVLTRGH & _bmsk); // Get state of Level Trigger Enable register bit
        adcan.EISTAT = (bool)(ADEISTATH & _bmsk); // Get state of Early Interrupt Status register bit
        adcan.ANxRDY = (bool)(ADSTATH & _bmsk); // Get state of Early Interrupt Status register bit
    }

    // Capture ADC input trigger source bits from ADC module registers
    volatile uint8_t* _regptr = (uint8_t*)(uint16_t*)&ADTRIG0L;
    _regptr += (uint8_t)adcAnInstance;
    adcan.TRGSRC = (uint8_t)*_regptr;

    // Capture pointer to ADC buffer memory address
    adcan.ADCBUF = (uint16_t*)p33c_AdcAnBuffer_GetHandle(adcAnInstance);
    
    return(adcan);
}

/********************************************************************************
 * @ingroup p33c-pral-adcan-methods
 * @brief   Writes a user-defined configuration to the ADC input instance registers
 * @param   adcAnInstance: Index of the analog input of type unsigned integer (e.g. 0 for AN0, 1 for AN1, etc.)
 * @param   adcAnConfig:   ADC input module Special Function Register set of type P33C_ADCAN_INSTANCE_t
 * @return  0 = failure, writing to ADC module base registers was not successful
 * @return  1 = success, writing to ADC module base registers was successful
 * 
 * @details
 *  This function writes a user-defined ADC input configuration of type
 *  P33C_ADCAN_INSTANCE_t to the ADC input instance registers. The individual
 *  register configurations have to be set in user-code before calling
 *  this function. To simplify the configuration process of standard 
 *  functions, this driver provides templates, which can be loaded and 
 *  written directly.
 * 
 *********************************************************************************/
static inline int p33c_AdcAnInstance_SetConfig(uint16_t adcAnInstance, P33C_ADCAN_INSTANCE_t adcAnConfig)
{
    int retval = 1;
    volatile uint16_t* _regPtr=0;
    uint16_t _bmsk=0;
    uint16_t _bset=0;
    uint16_t _bpos=0;

    // Set ADC Differential and Signed Input configuration bits from ADC module registers
    if (adcAnInstance < 8) {
        _bpos = (adcAnInstance << 1); // Set bit position of ADC input index
        _regPtr = &ADMOD0L; // Set pointer to destination register
    }
    else if (adcAnInstance < 16) {
        _bpos = ((adcAnInstance - 8) << 1); // Set bit position of ADC input index
        _regPtr = &ADMOD0H; // Set pointer to destination register
    }
    else if (adcAnInstance < 24) {
        #ifdef ADMOD1L
        _bpos = ((adcAnInstance - 16) << 1); // Set bit position of ADC input index
        _regPtr = &ADMOD1L; // Set pointer to destination register
        #endif
    } 
    else if (adcAnInstance < 32) {
        #ifdef ADMOD1H
        _bpos = ((adcAnInstance - 24) << 1); // Set bit position of ADC input index
        _regPtr = &ADMOD1H; // Set pointer to destination register
        #endif
    } 

    // Read, Modify Write bit settings 
    _bmsk = *_regPtr; // Read destination register
    _bset = ~((0x0001 << _bpos) | (0x0001 << (_bpos+1))); // Set bit mask of bits to be set
    _bmsk &= _bset; // Clear related bits in destination register
    _bmsk |= (adcAnConfig.SIGN << _bpos); // Set state of SIGN bit
    _bmsk |= (adcAnConfig.DIFF << (_bpos+1)); // Set state of DIFF bit
    *_regPtr = _bmsk; // write new value to destination register

    // Set group of single-bit per register configurations
    if (adcAnInstance < 16)
    {
        // Capture bit-position
        _bpos = adcAnInstance;
        
        // Read, Modify Write bit setting
        _bmsk = ADIEL; // Read destination register
        _bset = ~(0x0001 << _bpos); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcAnConfig.IE << _bpos); // Set state of SIGN bit
        ADIEL = _bmsk; // write new value to destination register
        
        _bmsk = ADEIEL; // Read destination register
        _bset = ~(0x0001 << _bpos); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcAnConfig.EIE << _bpos); // Set state of SIGN bit
        ADEIEL = _bmsk; // write new value to destination register

        _bmsk = ADLVLTRGL; // Read destination register
        _bset = ~(0x0001 << _bpos); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcAnConfig.LVLEN << _bpos); // Set state of SIGN bit
        ADLVLTRGL = _bmsk; // write new value to destination register
    }
    else if (adcAnInstance < 32)
    {
        // Capture bit-position
        _bpos = (adcAnInstance - 16);

        // Read, Modify Write bit setting
        _bmsk = ADIEH; // Read destination register
        _bset = ~(0x0001 << _bpos); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcAnConfig.IE << _bpos); // Set state of SIGN bit
        ADIEH = _bmsk; // write new value to destination register
        
        _bmsk = ADEIEH; // Read destination register
        _bset = ~(0x0001 << _bpos); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcAnConfig.EIE << _bpos); // Set state of SIGN bit
        ADEIEH = _bmsk; // write new value to destination register

        _bmsk = ADLVLTRGH; // Read destination register
        _bset = ~(0x0001 << _bpos); // Set bit mask of bits to be set
        _bmsk &= _bset; // Clear related bits in destination register
        _bmsk |= (adcAnConfig.LVLEN << _bpos); // Set state of SIGN bit
        ADLVLTRGH = _bmsk; // write new value to destination register
    }

    // Capture ADC input trigger source bits from ADC module registers
    volatile uint8_t* _ptr = (uint8_t*)(uint16_t*)&ADTRIG0L;
    _ptr += (uint8_t)adcAnInstance;
    *_ptr = (uint8_t)adcAnConfig.TRGSRC;
    
    // Capture pointer to ADC buffer memory address
    adcAnConfig.ADCBUF = (uint16_t*)p33c_AdcAnBuffer_GetHandle(adcAnInstance);
    
    // Enable analog input pin by enable analog circuits of ADC input pin
    retval &= p33c_AdcAnInput_Enable(adcAnInstance, adcAnConfig.Enable);

    
    return(retval);
}

#endif /* End of P33C_ADC_SFR_INTERFACE_H */

// _________________
// end of file
