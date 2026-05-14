/**
 * @file    p33c_refclk.h
 * @see     p33c_refclk-d.h
 * @author  M91406
 * @date    October 20, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_REFCLOCK_SFR_INTERFACE_H
#define P33C_REFCLOCK_SFR_INTERFACE_H

/* ************************************************************************************************
 * PRIVATE DEFINES
 * ************************************************************************************************/

// Include Header Files
#include "p33c_refclk-d.h" // Include peripheral abstraction driver header file

/* ************************************************************************************************
 * PRIVATE DEFINES
 * ************************************************************************************************/
#ifndef OSC_WAIT_TIMEOUT
#define OSC_WAIT_TIMEOUT	(uint16_t)60000     ///< value to set the timeout for clock switching wait states
#endif

/*********************************************************************************
 * @ingroup p33c-pral-refclk-templates
 * @brief   Default configuration of Reference CLock in Disabled State
 * @details
 *  Loading this configuration will set all Reference Clock registers 
 *  to their default state, disabling the clock and its output.
 * 
 * <p><b>Example</b></p>
 *  The following example loads this configuration into the target 
 *  device special function registers:
 * 
 * @code
 *  // Load default configuration of reference clock 
 *  p33c_RefClk_SetConfig (oscRefClkConfigDisabled);
 * @endcode
 **********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_REFOCLK_CONFIG_t refclkConfigDisabled = 
{
    .REFOCONL.bits.ROEN     = 0,        ///< Reference Clock is disabled
    .REFOCONL.bits.ROSIDL   = 0,        ///< Reference Clock Stop in Idle: continues to run in Idle mode
    .REFOCONL.bits.ROOUT    = 0,        ///< Clear Reference Clock Output Enable bit
    .REFOCONL.bits.ROSLP    = 0,        ///< Reference Clock Stops in Sleep
    .REFOCONL.bits.ROSWEN   = 0,        ///< Clear Reference Clock Switch Request and Status bit
    .REFOCONL.bits.ROSEL    = 0b0110,   ///< Reference Clock Source Selection: Fvco/4
    
    .REFOCONH.bits.RODIV    = 0,        ///< Clear Reference Clock Output Dividers
    .REFOTRIMH.bits.ROTRIM  = 0         ///< Clear Reference Oscillator Trimming
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-refclk-methods
 * @brief   Enables power to a Reference Clock peripheral module
 * @return  0 = failure, turning on Reference Clock peripheral module was not successful
 * @return  1 = success, turning on Reference Clock peripheral module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power 
 *  to unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given Reference Clock peripheral module.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_RefClk_PowerOn(void)    
{
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    #ifdef _REFOMD
    _REFOMD = 0; // Enable power to Reference Clock peripheral module
    #endif
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(1 - _REFOMD);
}

/*********************************************************************************
 * @ingroup p33c-pral-refclk-methods
 * @brief   Disables power to a Reference Clock peripheral module
 * @return  0 = failure, turning off Reference Clock peripheral module was not successful
 * @return  1 = success, turning off Reference Clock peripheral module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power 
 *  to unused peripherals to reduce power consumption. This routine turns
 *  off the power supply to the given Reference Clock peripheral module.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_RefClk_PowerOff(void)    
{
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    #ifdef _REFOMD
    _REFOMD = 1; // Disable power to Reference Clock peripheral module
    #endif
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(_REFOMD);
}

/*********************************************************************************
 * @ingroup p33c-pral-refclk-methods
 * @brief   Reads the current configuration from the Reference Clock module base registers
 * @return  0 = failure, reading Reference Clock module was not successful (returns NULL)
 * @return  n = success, reading Reference Clock module was successful (returns result of type P33C_REFOCLK_CONFIG_t)
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_REFOCLK_CONFIG_t. Users can read and 
 *  verify or modify the configuration to write it back to the Reference Clock
 *  module registers.
 *
 **********************************************************************************/
static inline P33C_REFOCLK_CONFIG_t p33c_RefClk_GetConfig(void)
{
    volatile P33C_REFOCLK_CONFIG_t* refclk;
    refclk = p33c_RefClk_GetHandle();
    return(*refclk);
}

/*********************************************************************************
 * @ingroup p33c-pral-refclk-methods
 * @brief   Writes a user-defined configuration to the Reference Clock module base registers
 * @param   refclkConfig Reference Clock module configuration of type P33C_REFOCLK_CONFIG_t
 * @return  0 = failure, writing Reference Clock module was not successful
 * @return  1 = success, writing Reference Clock module was successful
 * 
 * @details
 *  This function writes a user-defined Reference Clock module configuration of  
 *  type P33C_REFOCLK_CONFIG_t to the Reference Clock module base 
 *  registers. The individual register configurations have to be set in 
 *  user-code before calling this function. To simplify the configuration 
 *  process of standard functions, this driver provides templates, which 
 *  can be loaded and written directly.
 *
 **********************************************************************************/
static inline int p33c_RefClk_SetConfig(P33C_REFOCLK_CONFIG_t refclkConfig)
{
    int retval=0;
    uint16_t timeout=0;
    volatile P33C_REFOCLK_CONFIG_t* refclk;

    // Make sure power to Reference Clock module is turned on
    _REFOMD = 0; // Power on Reference Clock 
    
    // Capture start address of oscillator register block
    refclk = p33c_RefClk_GetHandle();
    
    // Clear REFOCONL register
    refclk->REFOCONL.bits.ROEN    = 0;   // Clear Reference Clock Enable bit
    refclk->REFOCONL.bits.ROOUT   = 0;   // Clear Reference Clock Output Enable bit
    refclk->REFOCONL.bits.ROSWEN  = 0;   // Clear Reference Clock Switch Request and Status bit

    // Wait until Reference Clock is ready to be switched
    while ((refclk->REFOCONL.bits.ROACTIVE != 0) && (++timeout < OSC_WAIT_TIMEOUT));
    if ((timeout > OSC_WAIT_TIMEOUT) || (refclk->REFOCONL.bits.ROACTIVE != 0))
    { return(0); } // Return error if Reference Clock is not getting ready

    // Write user oscillator configuration
    refclk->REFOCONL.bits.ROSIDL  = refclkConfig.REFOCONL.bits.ROSIDL;  // Copy Reference Clock Stop in Idle bit
    refclk->REFOCONL.bits.ROSLP   = refclkConfig.REFOCONL.bits.ROSLP ;  // Copy Reference Clock Stop in Sleep bit
    refclk->REFOCONL.bits.ROSEL   = refclkConfig.REFOCONL.bits.ROSEL;   // Copy Reference Clock Source Select bit
    
    // Write user oscillator configuration
    refclk->REFOCONH.value        = refclkConfig.REFOCONH.value;        // Copy Reference Clock Control High Register
    refclk->REFOTRIMH.value       = refclkConfig.REFOTRIMH.value;       // Copy Reference Oscillator Trim Register

    // If Reference Clock is enabled, perform switch to selected clock
    // and turn on reference clock
    if (1 == refclkConfig.REFOCONL.bits.ROEN)
    {
        // Turn on Reference Clock
        refclk->REFOCONL.bits.ROEN    = 1;
        
        // Set Reference Clock Switch Request
        refclk->REFOCONL.bits.ROSWEN  = 1; 
        
        // Wait until Reference Clock is ready to be switched
        timeout = 0;
        while ((refclk->REFOCONL.bits.ROSWEN != 0) && (timeout++ < OSC_WAIT_TIMEOUT));
        if ((timeout > OSC_WAIT_TIMEOUT) || (refclk->REFOCONL.bits.ROSWEN != 0))
        { return(0); } // Return error if Reference Clock is not switching
        
        timeout = 0;
        while ((refclk->REFOCONL.bits.ROACTIVE != 1) && (timeout++ < OSC_WAIT_TIMEOUT));
        if ((timeout > OSC_WAIT_TIMEOUT) || (refclk->REFOCONL.bits.ROACTIVE != 1))
        { return(0); } // Return error if Reference Clock is not getting ready

        // Set Clock Switch Request bit
        refclk->REFOCONL.bits.ROOUT   = refclkConfig.REFOCONL.bits.ROOUT;   // Copy Reference Clock Output Enable bit

        // Capture result
        retval = refclk->REFOCONL.bits.ROACTIVE;
    }
    // If Reference Clock is disabled, exit with "success"
    else 
    { 
        _REFOMD = 1; // if Reference Clock is not used, cut power to this peripheral
        retval = (1 - refclk->REFOCONL.bits.ROACTIVE); 
    }
    
    // Return result
    return(retval);
}

#endif /* End of P33C_REFCLOCK_SFR_INTERFACE_H */

// __________________
// end of file
