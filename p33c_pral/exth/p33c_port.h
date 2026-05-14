/**
 * @file    p33c_port.h
 * @see     p33c_port-d.h
 * @author  M91406
 * @date    02/19/2018 10:27 AM
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PORT_SFR_INTERFACE_H
#define	P33C_PORT_SFR_INTERFACE_H

// Include header files
#include "p33c_port-d.h" // Include device port peripheral abstraction driver header file

/*********************************************************************************
 * @ingroup p33c-pral-port-templates
 * @brief   Default RESET configuration of one device port instance SFRs
 *
 * @details
 *   Default configuration of the device port instance SFRs with all its 
 *   registers being reset to their default state when the device comes out 
 *   of RESET. 
 *   Programmers can use this template to reset (dispose) a previously used
 *   device port instance when it's not used anymore or to secure a known 
 *   startup condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_PORT_INSTANCE_t portConfigClear = 
{
    .ANSELx.value  = 0x0000, // Disable all analog functions
    .CNCONx.value  = 0x0000, // Reset all change notification configurations
    .CNEN0x.value  = 0x0000, // Disable all change notification functions
    .CNEN1x.value  = 0x0000, // Disable all change notification functions
    .CNFx.value    = 0x0000, // Clear all change notification interrupt flags
    .CNPDx.value   = 0x0000, // Disable all dull-down resistors
    .CNPUx.value   = 0x0000, // Disable all dull-up resistors
    .CNSTATx.value = 0x0000, // Clear all change notification status notifications
    .LATx.value    = 0x0000, // Set all IOs of selected instance LOW
    .ODCx.value    = 0x0000, // Clear all open-drain configurations of instance
    .PORTx.value   = 0x0000, // CLear port registers of all IOs of instance 
    .TRISx.value   = 0xFFFF, // Set all IOs of instance to INPUT
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-port-methods
 * @brief   Read the current configuration from the device port instance registers  
 * @param   portInstance Index of the selected device port Instance (1=Port A, 2=Port B, etc.)
 * @return  0 = failure, reading device port instance was not successful (returns NULL)
 * @return  n = success, reading device port instance was successful (returns 16-bit wide pointer)
 * 
 * @details
 *     This function reads all registers with their current configuration into
 *     a data structure of type P33C_PORT_INSTANCE_s. Users can read and 
 *     verify or modify the configuration to write it back to the device port
 *     instance registers or copy configurations to other instances of the same 
 *     type.
 * 
 * ********************************************************************************/
static inline P33C_PORT_INSTANCE_t p33c_PortInstance_GetConfig(uint16_t portInstance)
{
    volatile P33C_PORT_INSTANCE_t* port;

    if (p33c_PortInstance_Exists(portInstance))
    {
        // Set pointer to memory address of desired device port instance
        port = p33c_PortInstance_GetHandle(portInstance);
        return(*port);
    }
    else { return(portConfigClear); }
    
}

/*********************************************************************************
 * @ingroup p33c-pral-port-methods
 * @brief   Writes a user-defined configuration to the device port instance registers
 * @param   portInstance Index of the selected Device Port Instance (1=Port A, 2=Port B, etc.)
 * @param   portConfig Device port peripheral instance SFR object of type P33C_PORT_INSTANCE_t
 * @return  0 = failure, writing device port instance was not successful
 * @return  1 = success, writing device port instance was successful
 * 
 * @details
 *     This function writes a user-defined device port instance configuration 
 *     of type P33C_PORT_INSTANCE_t to the device port instance registers. 
 *     The individual register configurations have to be set in user-code 
 *     before calling this function. To simplify the configuration process
 *     of standard functions, this driver provides templates, which can be 
 *     loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_PortInstance_SetConfig(uint16_t portInstance, P33C_PORT_INSTANCE_t portConfig)
{
    int retval = 1;
    volatile P33C_PORT_INSTANCE_t* port;    

    if (p33c_PortInstance_Exists(portInstance))
    {
        // Set pointer to memory address of desired device port instance
        port = p33c_PortInstance_GetHandle(portInstance);
        *port = portConfig;
    }
    else { retval = 0; }
    
    return(retval);
    
}

#endif /* End of P33C_PORT_SFR_INTERFACE_H */

// ____________________
// end of file
