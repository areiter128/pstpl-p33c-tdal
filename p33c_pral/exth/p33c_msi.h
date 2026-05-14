/**
 * @file    p33c_msi.c
 * @see     p33c_msi.h
 * @author  M15690
 * @date    Created on May 18, 2023, 1:21 PM
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_MSI_SFR_INTERFACE_H
#define	P33C_MSI_SFR_INTERFACE_H

// Include header files
#include "p33c_msi-d.h" // Include Main Secondary Core Interface register data type declarations header file

#if defined (__P33SMPS_CH__) 

#include "p33c_msi.h"

/*********************************************************************************
 * @ingroup p33c-pral-msi-module-templates
 * @brief Default RESET configuration of MSI module 
 *
 * @details
 *  Default configuration of the MSI module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  The minimum and maximum addresses specifying the memory range addressable
 *  by the MSI module affects/limits all MSI channels. 
 *  (Please read the device data sheet for details)
 * 
 *  Programmers can use this template to reset a previously set MSI module
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
#if defined (__P33SMPS_CHM__)
static const __attribute__((space(auto_psv))) P33C_MSI_MODULE_t msiModuleConfigClear = 
{    
    .MSI1CON.value = 0x0000,
    .MSI1KEY.value = 0x0000,
    .MSI1MBXS.value = 0x0000,
    .MSI1MBX0D.value = 0x0000,
    .MSI1MBX1D.value = 0x0000,
    .MSI1MBX2D.value = 0x0000,
    .MSI1MBX3D.value = 0x0000,
    .MSI1MBX4D.value = 0x0000,
    .MSI1MBX5D.value = 0x0000,
    .MSI1MBX6D.value = 0x0000,
    .MSI1MBX7D.value = 0x0000,
    .MSI1MBX8D.value = 0x0000,
    .MSI1MBX9D.value = 0x0000,
    .MSI1MBX10D.value = 0x0000,
    .MSI1MBX11D.value = 0x0000,
    .MSI1MBX12D.value = 0x0000,
    .MSI1MBX13D.value = 0x0000,
    .MSI1MBX14D.value = 0x0000,
    .MSI1MBX15D.value = 0x0000,
    .MSI1FIFOCS.value = 0x0000,
    .MRSWFDATA.value = 0x0000,
    .MWSRFDATA.value = 0x0000
};

#elif defined (__P33SMPS_CHS__)         
static const __attribute__((space(auto_psv))) P33C_MSI_MODULE_t msiModuleConfigClear = 
{    
    .SI1CON.value = 0x0000,
    .SI1MBXS.value = 0x0000,
    .SI1MBX0D.value = 0x0000,
    .SI1MBX1D.value = 0x0000,
    .SI1MBX2D.value = 0x0000,
    .SI1MBX3D.value = 0x0000,
    .SI1MBX4D.value = 0x0000,
    .SI1MBX5D.value = 0x0000,
    .SI1MBX6D.value = 0x0000,
    .SI1MBX7D.value = 0x0000,
    .SI1MBX8D.value = 0x0000,
    .SI1MBX9D.value = 0x0000,
    .SI1MBX10D.value = 0x0000,
    .SI1MBX11D.value = 0x0000,
    .SI1MBX12D.value = 0x0000,
    .SI1MBX13D.value = 0x0000,
    .SI1MBX14D.value = 0x0000,
    .SI1MBX15D.value = 0x0000,
    .SI1FIFOCS.value = 0x0000,
    .SRMWFDATA.value = 0x0000,
    .SWMRFDATA.value = 0x0000
};
#endif         

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-msi-module-methods
 * @brief   Read the current configuration from the MSI module base registers
 * @return  P33C_MSI_MODULE_t Returns data set of most recent MSI module configuration register set
 * 
 * @details
 *     This function reads all registers with their current configuration into
 *     a data structure of type P33C_MSI_MODULE_t. Users can read and 
 *     verify or modify the configuration to write it back to the MSI module  
 *     registers.
 * 
 *********************************************************************************/
static P33C_MSI_MODULE_t p33c_MsiModule_GetConfig(void)
{
    volatile P33C_MSI_MODULE_t* msic;

    // Set pointer to memory address of MSI base register set
    msic = p33c_MsiModule_GetHandle();

    return(*msic);
    
}

/*********************************************************************************
 * @ingroup p33c-pral-msi-module-methods
 * @brief   Writes a user-defined configuration to the MSI module base registers
 * @param   msiModuleConfig Direct Memory Access module configuration of type P33C_MSI_MODULE_t
 * @return  0 = failure, writing MSI module was not successful
 * @return  1 = success, writing MSI module was successful
 * 
 * @details
 *     This function writes a user-defined MSI module configuration of  
 *     type P33C_MSI_MODULE_t to the MSI module base registers. The 
 *     individual register configurations have to be set in user-code 
 *     before calling this function. To simplify the configuration process
 *     of standard functions, this driver provides templates, which can be 
 *     loaded and written directly.
 * 
 *********************************************************************************/
static uint16_t p33c_MsiModule_SetConfig(volatile P33C_MSI_MODULE_t msiModuleConfig)
{
    int retval = 1;
    volatile P33C_MSI_MODULE_t* msic;    

    // Set pointer to memory address of the MSI module base registers
    msic = p33c_MsiModule_GetHandle();
    *msic = msiModuleConfig;
    
    return(retval);
    
}

#endif /* __P33SMPS_CH__ */
#endif /* End of P33C_MSI_SFR_INTERFACE_H */

// ______________________________
// end of file
