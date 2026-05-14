/**
 * @file    p33c_pga.h
 * @see     p33c_pga-d.h
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PGA_SFR_INTERFACE_H
#define P33C_PGA_SFR_INTERFACE_H

#if defined (__P33SMPS_CHS__) // Hide file contents for dual core devices

// Include standard header files
#include "p33c_pga-d.h" // include Programmable Gain Amplifier register data type declarations header file

/*********************************************************************************
 * @ingroup p33c-pral-pga-templates
 * @brief   Clears the configuration of a programmable gain amplifier instance
 *
 * @details
 *  Default configuration of the programmable gain amplifier instance SFR bits 
 *  being reset to their default state when the device comes out of RESET.
 * 
 *  Programmers can use this template to reset a previously set Programmable Gain 
 *  Amplifier instance configuration when it's not used anymore or to ensure a known 
 *  startup condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_PGA_INSTANCE_t pgaInstanceClear = 
{
    .PGAxCON.value = 0,
    .PGAxCAL.value = 0
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-pga-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 **********************************************************************************/
static const uint16_t p33c_PgaInstances = P33C_PGA_COUNT;

/*********************************************************************************
 * @ingroup p33c-pral-pga-methods
 * @brief   Enables power to the Programmable Gain Amplifier peripheral instance
 * @param   pgaInstance  Programmable Gain Amplifier Instance Index of type unsigned integer
 * @return  0 = failure, turning on power to Programmable Gain Amplifier instance was not successful
 * @return  1 = success, turning on power to Programmable Gain Amplifier instance was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the PGA peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static uint16_t p33c_PgaInstance_PowerOn(uint16_t pgaInstance)
{
    int retval = 1;

    #ifdef PMDCON
    _PMDLOCK = 1; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    switch (pgaInstance)
    {
        #ifdef PGA1CON
        case 1: _PGA1MD = 0; retval = (1 - _PGA1MD); break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA2CON
        case 2: _PGA2MD = 0; retval = (1 - _PGA2MD); break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA3CON
        case 3: _PGA3MD = 0; retval = (1 - _PGA3MD); break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA4CON
        case 4: _PGA4MD = 0; retval = (1 - _PGA4MD); break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA4CON
        case 5: _PGA5MD = 0; retval = (1 - _PGA5MD); break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA6CON
        case 6: _PGA6MD = 0; retval = (1 - _PGA6MD); break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        default: retval = 0; break;
    }
    #ifdef PMDCON
    _PMDLOCK = 0; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif

    return(retval);
} 

/*********************************************************************************
 * @ingroup p33c-pral-pga-methods
 * @brief   Disables power to the Programmable Gain Amplifier peripheral module
 * @param   pgaInstance  Programmable Gain Amplifier Instance Index of type unsigned integer
 * @return  0 = failure, turning off power to Programmable Gain Amplifier instance was not successful
 * @return  1 = success, turning off power to Programmable Gain Amplifier instance was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  the power supply to the PGA peripheral instance off.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static uint16_t p33c_PgaModule_PowerOff(uint16_t pgaInstance)
{
    int retval = 1;

    #ifdef PMDCON
    _PMDLOCK = 1; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif
    switch (pgaInstance)
    {
        #ifdef PGA1CON
        case 1: _PGA1MD = 0; retval = _PGA1MD; break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA2CON
        case 2: _PGA2MD = 0; retval = _PGA2MD; break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA3CON
        case 3: _PGA3MD = 0; retval = _PGA3MD; break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA4CON
        case 4: _PGA4MD = 0; retval = _PGA4MD; break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA4CON
        case 5: _PGA5MD = 0; retval = _PGA5MD; break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        #ifdef PGA6CON
        case 6: _PGA6MD = 0; retval = _PGA6MD; break; // Turn on power to programmable gain amplifier peripheral instance
        #endif
        default: retval = 0; break;
    }
    #ifdef PMDCON
    _PMDLOCK = 0; // Peripheral Module Disable-bits (1=can be set, 0=cannot be set) in software
    #endif

    return(retval);
} 

/*********************************************************************************
 * @ingroup p33c-pral-pga-methods
 * @brief   Gets the current configuration from the Programmable Gain Amplifier peripheral module base registers
 * @param   pgaInstance  Programmable Gain Amplifier Instance Index of type unsigned integer
 * @return  Programmable Gain Amplifier instance configuration of type P33C_PGA_INSTANCE_t
 * 
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_PGA_INSTANCE_t. Users can read and
 *  verify or modify the configuration to write it back to the programmable
 *  gain amplifier instance registers.
 * 
 *********************************************************************************/
static P33C_PGA_INSTANCE_t p33c_PgaInstance_GetConfig(uint16_t pgaInstance)
{
    volatile P33C_PGA_INSTANCE_t* pga;

    // Set pointer to memory address of desired Programmable Gain Amplifier instance
    pga = p33c_PgaInstance_GetHandle(pgaInstance);

    return(*pga);
}

/*********************************************************************************
 * @ingroup p33c-pral-pga-methods
 * @brief   Writes a user-defined configuration to the programmable gain amplifier instance registers
 * @param   pgaInstance  Programmable Gain Amplifier Instance Index of type unsigned integer
 * @param   pgaInstanceConfig Programmable Gain Amplifier Peripheral iNSTANCE SFR data object of type P33C_PGA_INSTANCE_t
 * @return  0 = failure, writing Programmable Gain Amplifier instance was not successful
 * @return  1 = success, writing Programmable Gain Amplifier instance was successful
 * 
 * @details
 *  This function writes a user-defined programmable gain amplifier 
 *  configuration of type P33C_PGA_INSTANCE_t to the programmable gain 
 *  amplifier instance registers. The individual register configurations 
 *  MUST be set in user-code before calling this function. To simplify 
 *  the configuration process of standard functions, this driver provides 
 *  templates, which can be loaded into registers directly.
 * 
 *********************************************************************************/
static uint16_t p33c_PgaInstance_SetConfig(uint16_t pgaInstance, P33C_PGA_INSTANCE_t pgaInstanceConfig)
{
    int retval = 1;
    volatile P33C_PGA_INSTANCE_t* pga;    

    // Capture memory address of the selected Gain Amplifier peripheral instance Special Function Register block
    pga = p33c_PgaInstance_GetHandle(pgaInstance);
    *pga = pgaInstanceConfig;
    
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-pga-methods
 * @brief   Disables the Programmable Gain Amplifier instance peripheral
 * @param   pgaInstance  Programmable Gain Amplifier Instance Index of type unsigned integer
 * @return  0 = failure, enabling PGA instance was not successful
 * @return  1 = success, enabling PGA instance was successful
 * 
 * @details
 *  Clears the programmable gain amplifier enable bit disabling the selected
 *  gain amplifier instance.
 *
 **********************************************************************************/
static uint16_t p33c_PgaInstance_Disable(uint16_t pgaInstance)
{
    int retval = 1;
    volatile  P33C_PGA_INSTANCE_t* pga;

    // Capture memory address of the selected Gain Amplifier peripheral instance Special Function Register block
    pga = p33c_PgaInstance_GetHandle(pgaInstance);

    // PGAx On: S the Programmable Gain Amplifier instance
    pga->PGAxCON.bits.PGAEN = 0;    

    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-pga-methods
 * @brief   Enables the Programmable Gain Amplifier instance peripheral
 * @param   pgaInstance  Programmable Gain Amplifier Instance Index of type unsigned integer
 * @return  0 = failure, enabling PGA instance was not successful
 * @return  1 = success, enabling PGA instance was successful
 * 
 * @details
 *  Sets the programmable gain amplifier enable bit enabling the selected
 *  gain amplifier instance.
 *
 **********************************************************************************/
static uint16_t p33c_PgaInstance_Enable(uint16_t pgaInstance)
{
    int retval = 1;
    volatile  P33C_PGA_INSTANCE_t* pga;

    // Capture memory address of the selected Gain Amplifier peripheral instance Special Function Register block
    pga = p33c_PgaInstance_GetHandle(pgaInstance);

    // PGAx On: Starts the Programmable Gain Amplifier instance
    pga->PGAxCON.bits.PGAEN = 1;    

    return (retval);
}

#endif /* #if defined (__P33SMPS_CHS__) */
#endif /* End of P33C_PGA_SFR_INTERFACE_H */

// ______________________________
// end of file
