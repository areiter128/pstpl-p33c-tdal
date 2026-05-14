/**
 * @file    p33c_opa.h
 * @see     p33c_opa-d.h
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_OPA_SFR_INTERFACE_H
#define P33C_OPA_SFR_INTERFACE_H

// Include header files
#include "p33c_opa-d.h" // Include op-amp peripheral abstraction driver header file

#if defined (__P33SMPS_CK__) // Hide file contents for dual core devices

/*********************************************************************************
 * @ingroup p33c-pral-opa-module-templates
 * @brief   Default RESET configuration of the op-amp module base SFRs
 * @return  OpAmp module special function register data object of type P33C_OPA_MODULE_t
 *
 * @details
 *  Default configuration of the op-amp module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  Programmers can use this template to reset (dispose) a previously used
 *  op-amp module when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_OPA_MODULE_t opaModuleConfigClear = 
{
    .AMPCON1L.value = 0x0000,
    .AMPCON1H.value = 0x0000
};

/*********************************************************************************
 * @ingroup p33c-pral-opa-module-templates
 * @brief   Default configuration of the op-amp module base SFRs
 *
 * @details
 *  Default configuration of the op-amp module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 * 
 *  Programmers can use this template to reset a previously set op-amp module
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_OPA_MODULE_t opaModuleDefault = 
{
    .AMPCON1L.value = 0x0000,
    .AMPCON1H.value = 0x0007,
};

/*********************************************************************************
 * @ingroup p33c-pral-opa-instance-templates
 * @brief   Default configuration of the op-amp instance configuration bits in the op-amp module base SFRs
 *
 * @details
 *  Default configuration of the op-amp instance SFR bits of the base module
 *  registers being reset to their default state when the device comes out of RESET.
 * 
 *  Programmers can use this template to reset a previously set op-amp instance
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_OPA_INSTANCE_t opaInstanceDefault = 
{
    .AMPEN = 0,
    .NCHDIS = 0
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-opa-module-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 **********************************************************************************/
static const uint16_t p33c_OpaInstances = P33C_OPA_COUNT;

/*********************************************************************************
 * @ingroup p33c-pral-opa-module-methods
 * @brief   Enables power to the Operational Amplifier peripheral module
 * @return  0 = failure, turning on power to Op-Amp module was not successful
 * @return  1 = success, turning on power to Op-Amp module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the Op-Amp peripheral module.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_OpaModule_PowerOn(void)
{
    #ifdef PMDCON
    _PMDLOCK = 1; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    _OPAMPMD = 0; // Turn on power to operational amplifier peripheral
    #ifdef PMDCON
    _PMDLOCK = 0; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif

    return(1 - _OPAMPMD);
} 

/*********************************************************************************
 * @ingroup p33c-pral-opa-module-methods
 * @brief   Disables power to the Operational Amplifier peripheral module
 * @return  0 = failure, turning off power to Op-Amp module was not successful
 * @return  1 = success, turning off power to Op-Amp module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  the power supply to the Op-Amp peripheral module off.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_OpaModule_PowerOff(void)
{
    #ifdef PMDCON
    _PMDLOCK = 1; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    _OPAMPMD = 1; // Turn off power to operational amplifier peripheral
    #ifdef PMDCON
    _PMDLOCK = 0; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif

    return(_OPAMPMD);
} 

/*********************************************************************************
 * @ingroup p33c-pral-opa-module-methods
 * @brief   Gets the current configuration from the Operational Amplifier peripheral module base registers
 * @return  P33C_OPA_MODULE_t
 * 
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_OPA_MODULE_t. Users can read and
 *  verify or modify the configuration to write it back to the op-amp
 *  module registers.
 * 
 *********************************************************************************/
static inline P33C_OPA_MODULE_t p33c_OpaModule_GetConfig(void)
{
    volatile P33C_OPA_MODULE_t* opa;

    // Set pointer to memory address of desired Op-Amp instance
    opa = p33c_OpaModule_GetHandle();

    return(*opa);
}

/*********************************************************************************
 * @ingroup p33c-pral-opa-module-methods
 * @brief   Writes a user-defined configuration to the op-amp module base registers
 * @param   opaModuleConfig Operation Amplifier Peripheral SFR data object of type P33C_OPA_MODULE_t
 * @return  0 = failure, writing op-amp module was not successful
 * @return  1 = success, writing op-amp module was successful
 * 
 * @details
 *  This function writes a user-defined op-amp module configuration of
 *  type P33C_OPA_MODULE_s to the op-amp module base registers. The 
 *  individual register configurations have to be set in user-code 
 *  before calling this function. To simplify the configuration process
 *  of standard functions, this driver provides templates, which can be 
 *  loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_OpaModule_SetConfig(P33C_OPA_MODULE_t opaModuleConfig)
{
    int retval = 1;
    volatile P33C_OPA_MODULE_t* opa;    

    // Set pointer to memory address of the op-amp module base registers
    opa = p33c_OpaModule_GetHandle();
    *opa = opaModuleConfig;
    
    return(retval);
}


/*********************************************************************************
 * @ingroup p33c-pral-opa-instance-methods
 * @brief   Gets the current configuration from the op-amp instance register bits
 * @param   opaInstance Instance of the op-amp module of type unsigned integer
 * @return  P33C_OPA_INSTANCE_t
 * 
 * @details
 *  This function reads all register bits of an operational amplifier instance
 *  into a data structure of type P33C_OPA_INSTANCE_t. Users can read and
 *  verify or modify the configuration to write it back to the op-amp
 *  instance register bit locations.
 * 
 * @note
 *  The Operational Amplifier peripheral module incorporates the individual 
 *  op-amp configuration bits into its base registers. The OpaInstance-related
 *  API functions provided by this interface module emulate op-amp instancing 
 *  to simplify instance management in user-code. Op-amp instance configurations
 *  cannot be directly written to the respective registers and must be applied
 *  by using the respective Instance_GetConfig and Instance_SetConfig function
 *  calls.
 * 
*********************************************************************************/
static inline P33C_OPA_INSTANCE_t p33c_OpaInstance_GetConfig(uint16_t opaInstance)
{
    uint16_t instMask = (0x0001 << (opaInstance-1));
    volatile P33C_OPA_MODULE_t* opa;
    P33C_OPA_INSTANCE_t regBuffer;
    
    // Guard against operations outside available instances
    if ((0 < opaInstance) && (opaInstance <= P33C_OPA_COUNT))
    {
        // Set pointer to memory address of desired Op-Amp instance
        opa = p33c_OpaModule_GetHandle();

        // Shift Op-Amp Instance settings to the correct bit position, 
        // preserving existing settings and the Op-Amp Module Enable bit
        regBuffer.AMPEN  = ((opa->AMPCON1L.value & instMask) >> (opaInstance-1));

        // Shift Op-Amp Instance settings to the correct bit position, 
        // preserving existing settings
        regBuffer.NCHDIS  = ((opa->AMPCON1H.value & instMask) >> (opaInstance-1));
        return(regBuffer);
    }
    else { return(opaInstanceDefault); }
}

/*********************************************************************************
 * @ingroup p33c-pral-opa-instance-methods
 * @brief   Writes a user-defined configuration to the op-amp instance register bit locations
 * @param   opaInstance       Instance of the op-amp module of type unsigned integer
 * @param   opaInstanceConfig Operation Amplifier Peripheral Instance SFR data object of type P33C_OPA_INSTANCE_t
 * @return  0 = failure, writing op-amp module was not successful
 * @return  1 = success, writing op-amp module was successful
 * 
 * @details
 *  This function writes a user-defined op-amp instance configuration of
 *  type P33C_OPA_INSTANCE_t to the op-amp instance register bits inside 
 *  the op-amp base registers. The individual register configurations have 
 *  to be set in user-code before calling this function. To simplify the 
 *  configuration process of standard functions, this driver provides templates, 
 *  which can be loaded and written directly.
 * 
 * @note
 *  The Operational Amplifier peripheral module incorporates the individual 
 *  op-amp configuration bits into its base registers. The OpeInstance-related
 *  API functions provided by this interface module emulate op-amp instancing 
 *  to simplify instance management in user-code. Op-amp instance configurations
 *  cannot be directly written to the respective registers and must be applied
 *  by using the respective Instance_GetConfig and Instance_SetConfig function
 *  calls.
 * 
 *********************************************************************************/
static inline int p33c_OpaInstance_SetConfig(uint16_t opaInstance, P33C_OPA_INSTANCE_t opaInstanceConfig)
{
    int retval = 1;
    uint16_t instMask = (0x0001 << (opaInstance-1));
    uint16_t regBuffer=0;

    // Guard against operations outside available instances
    if (opaInstance > P33C_OPA_COUNT) return(0);
    
    // Set pointer to memory address of the op-amp module base registers
    volatile P33C_OPA_MODULE_t* opa = p33c_OpaModule_GetHandle();
    
    // Shift Op-Amp Instance settings to the correct bit position, 
    // preserving existing settings and the Op-Amp Module Enable bit
    regBuffer  = (opa->AMPCON1L.value & ~(instMask & opaInstanceConfig.AMPEN));
    regBuffer |= instMask;
    opa->AMPCON1L.value |= regBuffer;

    // Shift Op-Amp Instance settings to the correct bit position, 
    // preserving existing settings
    regBuffer  = (opa->AMPCON1H.value & ~(instMask & opaInstanceConfig.NCHDIS));
    regBuffer |= instMask;
    opa->AMPCON1H.value |= regBuffer;
    
    return(retval);
}

#endif /* #if defined (__P33SMPS_CK__) */
#endif /* End of P33C_OPA_SFR_INTERFACE_H */

// __________________________
// end of file
