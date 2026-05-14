/**
 * @file    p33c_adfl.h
 * @see     p33c_adfl-d.h
 * @brief   Analog-To-Digital Converter (ADC) Digital Filter peripheral register access functions
 * @author  M91406
 * @date    December 1, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_ADFL_SFR_INTERFACE_H
#define	P33C_ADFL_SFR_INTERFACE_H

// Include Header Files
#include "p33c_adfl-d.h" // include ADC Digital Filter register declarations header file

/*********************************************************************************
 * @ingroup p33c-pral-adfl-templates
 * @brief   Default configuration of ADC Digital Filter instance SFRs
 *
 * @details
 *  Default configuration of the ADC Digital Filter SFRs with all its 
 *  registers being reset to their default state when the device comes out 
 *  of RESET.
 * 
 *  Programmers can use this template to reset a previously set
 *  configuration when this peripheral instance is not used anymore 
 *  or to ensure a known startup condition before writing individual 
 *  configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADFL_INSTANCE_t adflConfigClear = {

    .ADFLxDAT.value = 0x0000,
    .ADFLxCON.value = 0x0000

};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-adfl-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 * 
 **********************************************************************************/
static const uint16_t p33c_AdFilterInstances = (sizeof(p33c_AdFilterInstance_Handles)/sizeof(p33c_AdFilterInstance_Handles[0]));

/*********************************************************************************
 * @ingroup p33c-pral-adfl-methods
 * @brief   Reads the current configuration from an ADC Digital Filter instance 
 * @param   adflInstance: Index of the ADC Digital Filter of type unsigned integer (e.g. 0 for ADFL0, 1 for ADFL1, etc.)
 * @return  ADC Digital Filter configuration data object of type P33C_ADFL_INSTANCE_t
 * 
 * @details
 *  This function reads the most recent configuration of the specified ADC Digital
 *  Filter instance from the ADC Digital Filter module registers and returns the
 *  results in a data structure of type P33C_ADFL_INSTANCE_t.
 * 
 *********************************************************************************/
static inline P33C_ADFL_INSTANCE_t p33c_AdFlInstance_GetConfig(uint16_t adflInstance)
{
    volatile P33C_ADFL_INSTANCE_t* _adfl;
    
    // Check if addressed instance is within valid range
    if (p33c_AdFltInstance_Exists(adflInstance))
    {
        // Set pointer to memory address of desired ADC Digital Filter instance
        _adfl = p33c_AdFltInstance_GetHandle(adflInstance);
        return(*_adfl);
    }
    else { return(adflConfigClear); }
}

/*********************************************************************************
 * @ingroup p33c-pral-adfl-methods
 * @brief   Write a new configuration to an ADC Digital Filter instance 
 * @param   adflInstance: Index of the ADC Digital Filter instance of type unsigned integer (e.g. 0 for ADFL0, 1 for ADFL1, etc.)
 * @param   adflConfig:   ADC Digital Filter configuration data object of type P33C_ADFL_INSTANCE_t
 * @return  0 = failure, writing to ADC Digital Filter instance registers was not successful
 * @return  1 = success, writing to ADC Digital Filter instance registers was successful
 * 
 * @details
 *  This function writes a user-defined configuration of an ADC Digital Filter
 *  of type P33C_ADFL_INSTANCE_t to the specified ADC Digital Filter instance
 *  of the ADC module registers.
 * 
 *********************************************************************************/
static inline int p33c_AdFlInstance_SetConfig(uint16_t adflInstance, P33C_ADFL_INSTANCE_t adflConfig)
{
    int retval = 1;
    volatile P33C_ADFL_INSTANCE_t *_adfl;
    bool _enBit = false;

    // Check if addressed instance is within valid range
    if (p33c_AdFltInstance_Exists(adflInstance))
    {
        _enBit = adflConfig.ADFLxCON.bits.FLEN; // Capture state of Enable-bit
        adflConfig.ADFLxCON.bits.FLEN = 0; // Force Enable-bit to FALSE before block update

        _adfl = p33c_AdFltInstance_GetHandle(adflInstance); // Set pointer to memory address of desired ADC digital filter instance
        *_adfl = adflConfig; // Block-update register set
        _adfl->ADFLxCON.bits.FLEN = _enBit; // Restore initial state of Enable bit
    }
    else { retval = 0; }
    
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-adfl-methods
 * @brief   Enables the ADC Digital Filter peripheral instance
 * @param   adflInstance: Index of the ADC Digital Filter instance of type unsigned integer (e.g. 0 for ADFL0, 1 for ADFL1, etc.)
 * @return  0 = failure, enabling ADC Digital Filter instance was not successful
 * @return  1 = success, enabling ADC Digital Filter instance was successful
 * 
 * @details
 *  Sets the ADC Digital Filter instance enable register bit, effectively 
 *  enabling the ADC Digital Filter peripheral instance.
 *
 **********************************************************************************/
static inline int p33c_AdFlInstance_Enable(uint16_t adflInstance)
{
    int retval = 1;
    volatile P33C_ADFL_INSTANCE_t *_adfl;

    // Check if addressed instance is within valid range
    if (p33c_AdFltInstance_Exists(adflInstance))
    {
        _adfl = p33c_AdFltInstance_GetHandle(adflInstance); // Set pointer to memory address of desired ADC digital filter instance
        _adfl->ADFLxCON.bits.FLEN = true; // Enable ADC Digital Filter peripheral instance
        
        // Verifying configuration process
        retval &= (bool)(_adfl->ADFLxCON.bits.FLEN == true);
    }
    else { retval = 0; }

    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-adfl-methods
 * @brief   Disables the ADC Digital Filter peripheral instance
 * @param   adflInstance: Index of the ADC Digital Filter instance of type unsigned integer (e.g. 0 for ADFL0, 1 for ADFL1, etc.)
 * @return  0 = failure, disabling ADC Digital Filter instance was not successful
 * @return  1 = success, disabling ADC Digital Filter instance was successful
 * 
 * @details
 *  Clears the ADC Digital Filter instance enable register bit, effectively 
 *  disabling the ADC Digital Filter peripheral instance.
 *
 **********************************************************************************/
static inline int p33c_AdFlInstance_Disable(uint16_t adflInstance)
{
    int retval = 1;
    volatile P33C_ADFL_INSTANCE_t*_adfl;

    // Check if addressed instance is within valid range
    if (p33c_AdFltInstance_Exists(adflInstance))
    {
        _adfl = p33c_AdFltInstance_GetHandle(adflInstance); // Set pointer to memory address of desired ADC digital filter instance
        _adfl->ADFLxCON.bits.FLEN = false; // Disable ADC Digital Filter peripheral instance
        
        // Verifying configuration process
        retval &= (bool)(_adfl->ADFLxCON.bits.FLEN == false);
    }
    else { retval = 0; }

    return (retval);
}

#endif /* End of P33C_ADFL_SFR_INTERFACE_H */

// ____________________
// end of file
