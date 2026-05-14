/**
 * @file    p33c_canclk.h
 * @see     p33c_canclk-d.h
 * @brief   CAN Clock Configuration register access functions
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CANCLK_SFR_INTERFACE_H
#define	P33C_CANCLK_SFR_INTERFACE_H

#include "p33c_canclk-d.h"  // include CAN Clock Configuration register abstraction declarations header file

#if (P33C_CANFD_COUNT > 0) // Hide file contents for devices without CAN

/*********************************************************************************
 * @ingroup p33c-pral-canclk-templates
 * @brief   Clears all registers of the CAN Clock module configuration registers
 **********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_CANCLK_MODULE_t canclkConfigClear = {
    
    .CANCLKCON.bits.CANCLKDIV = 0,
    .CANCLKCON.bits.CANCLKSEL = 0,
    .CANCLKCON.bits.CANCLKEN = 0
    
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-canclk-methods
 * @brief   Gets the current configuration from the CAN Clock module base registers
 * @return  P33C_CANCLK_MODULE_t Returns data set of most recent CAN Clock module configuration register set
 * 
 * @details
 *  This function reads all registers with their current configuration 
 *  into a data structure of type P33C_CANCLK_MODULE_t. Users can read and
 *  verify or modify the configuration to write it back to the CAN clock
 *  module registers.
 *
 **********************************************************************************/
static inline P33C_CANCLK_MODULE_t p33c_CanClk_GetConfig(void)
{
	volatile P33C_CANCLK_MODULE_t* canclk;
    canclk = p33c_CanClk_GetHandle();
    return(*canclk);
}

/*********************************************************************************
 * @ingroup p33c-pral-canclk-methods
 * @brief   Writes a user-defined configuration to the CAN clock module base registers
 * @param   canclkConfig: CAN Clock Module SFR data object of type P33C_CANCLK_MODULE_t
 * @return  0 = failure, writing to CAN clock module was not successful
 * @return  1 = success, writing to CAN clock module was successful
 * 
 * @details
 *  This function writes a user-defined CAN clock module configuration of
 *  type P33C_CANCLK_MODULE_t to the CAN clock module base registers. The 
 *  individual register configurations have to be set in user-code 
 *  before calling this function. To simplify the configuration process
 *  of standard functions, this driver provides templates, which can be 
 *  loaded and written directly.
 *
 **********************************************************************************/
static inline int p33c_CanClk_SetConfig(P33C_CANCLK_MODULE_t canclkConfig)
{
    int retval = 1;
    volatile P33C_CANCLK_MODULE_t* canclk;    

    // Set pointer to memory address of the CAN clock module base registers
    canclk = p33c_CanClk_GetHandle();
    *canclk = canclkConfig;

    // Verifying configuration process
    retval &= (bool)(canclk->CANCLKCON.value == canclkConfig.CANCLKCON.value);
    
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-canclk-methods
 * @brief   Enables the CAN clock module
 * @return  0 = failure, enabling CAN clock module was not successful
 * @return  1 = success, enabling CAN clock module was successful
 * 
 * @details
 *  This function enables the CAN clock module.
 *
 **********************************************************************************/
static inline int p33c_CanClk_Enable(void)
{
    int retval = 1;
    volatile P33C_CANCLK_MODULE_t* canclk;

	// Capture memory address of CAN clock peripheral Special Function Register block
    canclk = p33c_CanClk_GetHandle();
    canclk->CANCLKCON.bits.CANCLKEN = 1; // CAN clock module is enabled
		
    // Verifying configuration process
    retval &= (bool)(canclk->CANCLKCON.bits.CANCLKEN == 1);

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-canclk-methods
 * @brief   Disables the CAN clock module
 * @return  0 = failure, disabling CAN clock module was not successful
 * @return  1 = success, disabling CAN clock module was successful
 * 
 * @details
 *  This function disables the CAN clock module.
 *
 **********************************************************************************/
static inline int p33c_CanClk_Disable(void)
{
    int retval = 1;
    volatile P33C_CANCLK_MODULE_t* canclk;

	// Capture memory address of CRC peripheral Special Function Register block
    canclk = p33c_CanClk_GetHandle();
    canclk->CANCLKCON.bits.CANCLKEN = 0; // CAN clock module is disabled
		
    // Verifying configuration process
    retval &= (bool)(canclk->CANCLKCON.bits.CANCLKEN == 0);

    return(retval);
}

#endif /* #if (P33C_CANFD_COUNT > 0) */

#endif /* End of P33C_CANCLK_SFR_INTERFACE_H */

// _____________________
// end of file
