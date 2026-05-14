/**
 * @file    p33c_crc.h
 * @see     p33c_crc-d.h
 * @author  M91406
 * @date    April 8, 2020
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CRC_SFR_INTERFACE_H
#define	P33C_CRC_SFR_INTERFACE_H

// Include standard header files
#include "p33c_crc-d.h"

#if (!defined (__P33SMPS_CHS__)) // Hide file contents for secondary core devices

/* ********************************************************************************************* * 
 * CRC MODULE CONFIGURATION TEMPLATES
 * ********************************************************************************************* */

/*********************************************************************************
 * @ingroup p33c-pral-crc-templates
 * @brief   Default RESET configuration of CRC module 
 *
 * @details
 *  Default configuration of the CRC module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  The minimum and maximum addresses specifying the memory range addressable
 *  by the CRC module affects/limits all CRC channels. 
 *  (Please read the device data sheet for details)
 * 
 *  Programmers can use this template to reset a previously used
 *  CRC module when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_CRC_MODULE_t crcModuleConfigClear = 
{
    .CRCCONL.value = 0x0000,    ///< Clear CRC Control Register, Low
    .CRCCONH.value = 0x0000,    ///< Clear CRC Control Register, High
    .CRCXORL.value = 0x0000,    ///< Clear CRC XOR Register, Low
    .CRCXORH.value = 0x0000,    ///< Clear CRC XOR Register, High
    .CRCDATL.value = 0x0000,    ///< Clear CRC Data Register, Low
    .CRCDATH.value = 0x0000,    ///< Clear CRC Data Register, High
    .CRCWDATL.value = 0x0000,   ///< Clear CRC Shift Register, Low
    .CRCWDATH.value = 0x0000    ///< Clear CRC Shift Register, High
    
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-crc-methods
 * @brief   Enables power to a CRC peripheral module
 * @return  0 = failure, turning on power to CRC module was not successful
 * @return  1 = success, turning on power to CRC module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power 
 *  to unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given CRC peripheral module.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_CrcModule_PowerOn(void)    
{
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    #ifdef _CRCMD
    _CRCMD = 0; // Enable power to CRC peripheral module
    #endif
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(1 -_CRCMD);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-crc-methods
 * @brief   Disables power to a CRC peripheral module
 * @return  0 = failure, turning off power to CRC module was not successful
 * @return  1 = success, turning off power to CRC module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power 
 *  to unused peripherals to reduce power consumption. This routine turns
 *  off the power supply to the given CRC peripheral module.
 *
 * @note
 *  When power to the peripheral is turned off, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_CrcModule_PowerOff(void)    
{
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    #ifdef _CRCMD
    _CRCMD = 1; // Disable power to CRC peripheral module
    #endif
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(_CRCMD);
}

/*********************************************************************************
 * @ingroup p33c-pral-crc-methods
 * @brief   Reads the current configuration from the CRC module base registers
 * @return  Generic CRC module Special Function Register set of type P33C_CRC_MODULE_t
 * 
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_CRC_MODULE_t. Users can read and 
 *  verify or modify the configuration to write (?) it back to the CRC module  
 *  registers.
 * 
 *********************************************************************************/
static inline P33C_CRC_MODULE_t p33c_CrcModule_GetConfig(void)
{
    volatile P33C_CRC_MODULE_t* crc;

    // Set pointer to memory address of the CRC module base registers
    crc = p33c_CrcModule_GetHandle();

    return(*crc);
}

/*********************************************************************************
 * @ingroup p33c-pral-crc-methods
 * @brief   Writes a user-defined configuration to the CRC module base registers
 * @param   crcModuleConfig Cyclic Redundancy Check module configuration of type P33C_CRC_MODULE_t
 * @return  0 = failure, writing CRC module was not successful
 * @return  1 = success, writing CRC module was successful
 * 
 * @details
 *  This function writes a user-defined CRC module configuration of  
 *  type P33C_CRC_MODULE_t to the CRC module base registers. The 
 *  individual register configurations have to be set in user-code 
 *  before calling this function. To simplify the configuration process
 *  of standard functions, this driver provides templates, which can be 
 *  loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_CrcModule_SetConfig(volatile P33C_CRC_MODULE_t crcModuleConfig)
{
    int retval = 1;
    volatile P33C_CRC_MODULE_t* crc;    

    // Set pointer to memory address of the CRC module base registers
    crc = p33c_CrcModule_GetHandle();
    *crc = crcModuleConfig;
    
    // Verifying configuration process
    retval &= (bool)(crc->CRCCONL.value == crcModuleConfig.CRCCONL.value);
    
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-crc-methods
 * @brief   Enables the CRC module
 * @return  0 = failure, enabling CRC module was not successful
 * @return  1 = success, enabling CRC module was successful
 * 
 * @details
 *  This function enables the CRC module.
 *
 **********************************************************************************/
static inline int p33c_CrcModule_Enable(void)
{
    int retval = 1;
    volatile P33C_CRC_MODULE_t* crc;

	// Capture memory address of CRC peripheral Special Function Register block
    crc = p33c_CrcModule_GetHandle();
    crc->CRCCONL.bits.CRCEN = 1; // CRC module is enabled
		
    // Verifying configuration process
    retval &= (bool)(crc->CRCCONL.bits.CRCEN == 1);

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-crc-methods
 * @brief   Disables the CRC module
 * @return  0 = failure, disabling CRC module was not successful
 * @return  1 = success, disabling CRC module was successful
 * 
 * @details
 *  This function disables the CRC module.
 *
 **********************************************************************************/
static inline int p33c_CrcModule_Disable(void)
{
    int retval = 1;
    volatile P33C_CRC_MODULE_t* crc;

	// Capture memory address of CRC peripheral Special Function Register block
    crc = p33c_CrcModule_GetHandle();
    crc->CRCCONL.bits.CRCEN = 0; // CRC module is disabled
		
    // Verifying configuration process
    retval &= (bool)(crc->CRCCONL.bits.CRCEN == 0);

    return(retval);
}

#endif /* #if (!defined (__P33SMPS_CHS__)) */
#endif /* End of P33C_CRC_SFR_INTERFACE_H */

// ____________________
// end of file
