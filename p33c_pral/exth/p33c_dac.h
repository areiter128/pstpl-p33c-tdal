/**
 * @file    p33c_dac.h
 * @see     p33c_dac-d.h
 * @author  M91406
 * @date    March 12, 2019
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_DAC_SFR_INTERFACE_H
#define	P33C_DAC_SFR_INTERFACE_H

// Include standard header files
#include "p33c_dac-d.h" // Include DAC peripheral register abstraction declarations header file

/*********************************************************************************
 * @ingroup p33c-pral-dac-module-templates
 * @brief   Default RESET configuration of the DAC module base SFRs
 *
 * @details
 *   Default configuration of the DAC module SFRs with all its registers 
 *   being reset to their default state when the device comes out of RESET.
 *   Programmers can use this template to reset (dispose) a previously used
 *   DAC module when it's not used anymore or to ensure a known startup
 *   condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DAC_MODULE_t dacModuleConfigClear = 
{
    .DACCTRL1L.value = 0x0000,
    .DACCTRL2L.value = 0x0000,
    .DACCTRL2H.value = 0x0000

};

/*********************************************************************************
 * @ingroup p33c-pral-dac-module-templates
 * @brief   Default configuration of DAC module running from 500 MHz input clock
 *
 * @details
 *  Default configuration of the DAC module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  The timing settings for settling time and transition mode time of the 
 *  built-in Pulse-Density Modulator ramp generator are reset to their
 *  recommended default values when operated from a 500 MHz clock input.
 *  (Please read the device data sheet for details)
 * 
 *  Programmers can use this template to reset a previously set DAC module
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DAC_MODULE_t dacModuleConfigDefault = 
{
    .DACCTRL1L.value = 0x0080, ///< DAC Module disabled, DAC Stop In Idle Mode=0, DAC Clock Source=AFPLLO, DAC Clock Divider=1:1, Filter Clock Divider=1:1
    .DACCTRL2H.bits.SSTIME = 0x008A, ///< Steady-state setting time is set to default of 0x8A
    .DACCTRL2L.bits.TMODTIME = 0x0055 ///< Transition mode duration is set to default of 0x55
};

/*********************************************************************************
 * @ingroup p33c-pral-dac-instance-templates
 * @brief   Default RESET configuration of one DAC instance channel SFRs
 *
 * @details
 *   RESET configuration of the DAC instance SFRs with all its registers 
 *   being reset to their default state when the device comes out of RESET.
 *   Programmers can use this template to reset (dispose) a previously used
 *   DAC instance when it's not used anymore or to secure a known startup
 *   condition before writing individual configurations to its SFRs.
 * 
 * *******************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DAC_INSTANCE_t dacInstanceConfigClear = 
{
    .DACxCONL.value = 0x0000,
    .DACxCONH.value = 0x0000,
    .DACxDATL.value = 0x0000,
    .DACxDATH.value = 0x0000,
    .SLPxCONL.value = 0x0000,
    .SLPxCONH.value = 0x0000,
    .SLPxDAT.value  = 0x0000
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-dac-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 **********************************************************************************/
static const uint16_t p33c_DacInstances = (sizeof(p33c_DacInstance_Handles)/sizeof(p33c_DacInstance_Handles[0]));

/*********************************************************************************
 * @ingroup p33c-pral-dac-module-methods
 * @brief   Read the current configuration from the DAC module base registers
 * @return  0 = failure, reading DAC module was not successful (returns NULL)
 * @return  n = success, reading DAC module was successful (returns 16-bit wide pointer)
 * 
 * @details
 *     This function reads all registers with their current configuration into
 *     a data structure of type P33C_DAC_MODULE_s. Users can read and 
 *     verify or modify the configuration to write it back to the DAC module  
 *     registers.
 * 
 *********************************************************************************/
static inline P33C_DAC_MODULE_t p33c_DacModule_GetConfig(void)
{
    volatile P33C_DAC_MODULE_t* dac;

    // Set pointer to memory address of desired DAC instance
    dac = p33c_DacModule_GetHandle();

    return(*dac);
    
}

/*********************************************************************************
 * @ingroup p33c-pral-dac-module-methods
 * @brief   Writes a user-defined configuration to the DAC module base registers
 * @param   dacModuleConfig Digital-to-Analog converter module configuration of type P33C_DAC_MODULE_t
 * @return  0 = failure, writing DAC module was not successful
 * @return  1 = success, writing DAC module was successful
 * 
 * @details
 *     This function writes a user-defined DAC module configuration of type 
 *     P33C_DAC_MODULE_s to the DAC module base registers. The 
 *     individual register configurations have to be set in user-code 
 *     before calling this function. To simplify the configuration process
 *     of standard functions, this driver provides templates, which can be 
 *     loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_DacModule_SetConfig(P33C_DAC_MODULE_t dacModuleConfig)
{
    int retval = 1;
    volatile P33C_DAC_MODULE_t* dac;    

    // Set pointer to memory address of the DAC module base registers
    dac = p33c_DacModule_GetHandle();
    *dac = dacModuleConfig;
    
    return(retval);
    
}

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-dac-instance-methods
 * @brief   Enables power to a DAC peripheral instance
 * @param   dacInstance Index of the selected DAC Instance (1=DAC1, 2=DAC2, etc.)
 * @return  0 = failure, turning on power to DAC instance was not successful
 * @return  1 = success, turning on power to DAC instance was successful
 * @details
 *  Peripheral Module Disable Module (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given DAC peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_DacInstance_PowerOn(uint16_t dacInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (dacInstance)
    { 
        #ifdef _CMP1MD
        case 1: _CMP1MD = 0; retval = (1 - _CMP1MD); break; // Enable power to Comparator 1 peripheral Instance
        #endif
        #ifdef _CMP2MD
        case 2: _CMP2MD = 0; retval = (1 - _CMP2MD); break; // Enable power to Comparator 2 peripheral Instance
        #endif
        #ifdef _CMP3MD
        case 3: _CMP3MD = 0; retval = (1 - _CMP3MD); break; // Enable power to Comparator 3 peripheral Instance
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-dac-instance-methods
 * @brief   Disables power to a DAC peripheral instance
 * @param   dacInstance Index of the selected DAC Instance (1=DAC1, 2=DAC2, etc.)
 * @return  0 = failure, turning off power to DAC instance was not successful
 * @return  1 = success, turning off power to DAC instance was successful
 * @details
 *  Peripheral Module Disable Module (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  the power supply to the given DAC peripheral instance off.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_DacInstance_PowerOff(uint16_t dacInstance)
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (dacInstance)
    { 
        #ifdef _CMP1MD
        case 1: _CMP1MD = 1; retval = _CMP1MD; break; // Disable power to Comparator 1 peripheral Instance
        #endif
        #ifdef _CMP2MD
        case 2: _CMP2MD = 1; retval = _CMP2MD; break; // Disable power to Comparator 2 peripheral Instance
        #endif
        #ifdef _CMP3MD
        case 3: _CMP3MD = 1; retval = _CMP3MD; break; // Disable power to Comparator 3 peripheral Instance
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-dac-methods
 * @brief   Enables the DAC peripheral instance
 * @param   dacInstance Index of the analog comparator/DAC peripheral instance of type unsigned integer
 * @return  0 = failure, writing to DAC instance registers was not successful
 * @return  1 = success, writing to DAC instance registers was successful
 * 
 * @details
 *  Enables the DAC peripheral instance with its most recent configuration.
 *
 **********************************************************************************/
static inline int p33c_DacInstance_Enable(uint16_t dacInstance)
{
    int retval = 1;
    volatile P33C_DAC_INSTANCE_t* dac;    

    // Check if addressed instance is within valid range
    if ((0 < dacInstance) && (dacInstance < p33c_DacInstances))
    {
        // Capture memory address of DAC peripheral instance Special Function Register block
        dac = p33c_DacInstance_GetHandle(dacInstance); 

        dac->DACxCONL.bits.DACEN = 1; // DACEN: Module instance is enabled 
        retval = dac->DACxCONL.bits.DACEN; // Read register bit to verify success/failure
    
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range
    
    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-dac-methods
 * @brief   Disables the DAC peripheral instance
 * @param   dacInstance Index of the analog comparator/DAC peripheral instance of type unsigned integer
 * @return  0 = failure, writing to DAC instance registers was not successful
 * @return  1 = success, writing to DAC instance registers was successful
 * 
 * @details
 *  Disables the DAC peripheral instance with its most recent configuration.
 *
 **********************************************************************************/
static inline int p33c_DacInstance_Disable(uint16_t dacInstance)
{
    int retval = 1;
    volatile P33C_DAC_INSTANCE_t* dac;

    // Check if addressed instance is within valid range
    if ((0 < dacInstance) && (dacInstance < p33c_DacInstances))
    {
        // Capture memory address of DAC peripheral instance Special Function Register block
        dac = p33c_DacInstance_GetHandle(dacInstance); 

        dac->DACxCONL.bits.DACEN = 0; // DACEN: Module instance is disabled 
        retval -= dac->DACxCONL.bits.DACEN; // Read register bit to verify success/failure
        
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range
    
    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-dac-instance-methods
 * @brief   Read the current configuration from the DAC instance registers
 * @param   dacInstance  Index of the selected DAC Instance (1=DAC1, 2=DAC2, etc.)
 * @return  DAC instance object of type P33C_DAC_INSTANCE_t of the selected DAC instance
 * 
 * @details
 *     This function reads all registers with their current configuration into
 *     a data structure of type P33C_DAC_INSTANCE_s. Users can read and 
 *     verify or modify the configuration to write it back to the DAC instance  
 *     registers or copy configurations to other instances of the same type.
 * 
 *********************************************************************************/
static inline P33C_DAC_INSTANCE_t p33c_DacInstance_GetConfig(uint16_t dacInstance)
{
    volatile P33C_DAC_INSTANCE_t* dac;

    if (p33c_DacInstance_Exists(dacInstance))
    {
        // Set pointer to memory address of desired DAC instance
        dac = p33c_DacInstance_GetHandle(dacInstance);
        return(*dac);
    }
    else { return(dacInstanceConfigClear); }
    
}

/*********************************************************************************
 * @ingroup p33c-pral-dac-instance-methods
 * @brief   Writes a user-defined configuration to the DAC instance registers
 * @param   dacInstance Index of the selected DAC Instance (1=DAC1, 2=DAC2, etc.)
 * @param   dacConfig DAC instance object of type P33C_DAC_INSTANCE_t of the selected DAC instance
 * @return  0 = failure, writing DAC instance was not successful
 * @return  1 = success, writing DAC instance was successful
 * 
 * @details
 *     This function writes a user-defined DAC instance configuration of type 
 *     P33C_DAC_INSTANCE_s to the DAC instance registers. The 
 *     individual register configurations have to be set in user-code 
 *     before calling this function. To simplify the configuration process
 *     of standard functions, this driver provides templates, which can be 
 *     loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_DacInstance_SetConfig(uint16_t dacInstance, P33C_DAC_INSTANCE_t dacConfig)
{
    int retval = 1;
    volatile P33C_DAC_INSTANCE_t* dac;    

    if (p33c_DacInstance_Exists(dacInstance))
    {
        // Set pointer to memory address of desired DAC instance
        dac = p33c_DacInstance_GetHandle(dacInstance);
        *dac = dacConfig;
        
        // Verifying configuration process
        retval &= (bool)(dac->DACxCONL.value == dacConfig.DACxCONL.value);
    }
    else { retval = 0; }
    
    return(retval);
    
}

#endif /* End of P33C_DAC_SFR_INTERFACE_H */

// __________________________
// end of file
