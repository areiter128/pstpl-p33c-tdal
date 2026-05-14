/**
 * @file    p33c_adcmp.h
 * @see     p33c_adcmp-d.h
 * @brief   Analog-To-Digital Converter (ADC) Digital Comparator peripheral register access functions
 * @author  M91406
 * @date    December 1, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_ADCMP_SFR_INTERFACE_H
#define	P33C_ADCMP_SFR_INTERFACE_H

// Include Header Files
#include "p33c_adcmp-d.h" // include ADC Digital Comparator register declarations header file

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-templates
 * @brief   Default configuration of ADC Digital Comparator instance SFRs
 *
 * @details
 *  Default configuration of the ADC Digital Comparator SFRs with all its 
 *  registers being reset to their default state when the device comes out 
 *  of RESET.
 * 
 *  Programmers can use this template to reset a previously set
 *  configuration when this peripheral instance is not used anymore 
 *  or to ensure a known startup condition before writing individual 
 *  configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ADCMP_INSTANCE_t adcmpConfigClear = {

    .ADCMPxENL.value = 0x0000,
    .ADCMPxENH.value = 0x0000,
    .ADCMPxLO.value  = 0x0000,
    .ADCMPxHI.value  = 0x0000,
    .ADCMPxCON.value = 0x0000

};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 **********************************************************************************/
static const uint16_t p33c_AdCmpInstances = (sizeof(p33c_AdCmpInstance_Handles)/sizeof(p33c_AdCmpInstance_Handles[0]));

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Reads the current configuration from an ADC Digital Comparator instance 
 * @param   adcmpInstance: Index of the ADC Digital Comparator of type unsigned integer (e.g. 0 for ADCMP0, 1 for ADCMP1, etc.)
 * @return  ADC Digital Comparator configuration data object of type P33C_ADCMP_INSTANCE_t
 * 
 * @details
 *   This function reads the most recent configuration of the specified ADC Digital
 *   Comparator instance from the ADC module registers and returns the results in a 
 *   data structure of type P33C_ADCMP_INSTANCE_t.
 *  
 *********************************************************************************/
static inline P33C_ADCMP_INSTANCE_t p33c_AdCmpInstance_GetConfig(uint16_t adcmpInstance)
{
    P33C_ADCMP_INSTANCE_t adcmp;

    // Check if addressed instance is within valid range
    if (p33c_AdCmpInstance_Exists(adcmpInstance))
    {
        // Set pointer to ADCMPxEN register of selected ADC comparator instance
        volatile uint16_t* regptr = p33c_AdCmpInstance_Handles[adcmpInstance];

        adcmp.ADCMPxENL.value = (uint16_t)*regptr++;
        adcmp.ADCMPxENH.value = (uint16_t)*regptr++;
        adcmp.ADCMPxLO.value = (uint16_t)*regptr++;
        adcmp.ADCMPxHI.value = (uint16_t)*regptr;

        // Set pointer to ADCMPxCON register of selected ADC comparator instance
        ADCMPxCON_t* adcmpCon = (ADCMPxCON_t*)p33c_AdCmpInstance_Control[adcmpInstance]; 
        adcmp.ADCMPxCON.value = adcmpCon->value; // Read ADC comparator control register
    }
    else { return(adcmpConfigClear); }
        
    return(adcmp);
}

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Write a new configuration to an ADC Digital Comparator instance 
 * @param   adcmpInstance: Index of the ADC Digital Comparator instance of type unsigned integer (e.g. 0 for ADCMP0, 1 for ADCMP1, etc.)
 * @param   adcmpConfig:   ADC Digital Comparator configuration data object of type P33C_ADCMP_INSTANCE_t
 * @return  0 = failure, writing to ADC Digital Comparator instance registers was not successful
 * @return  1 = success, writing to ADC Digital Comparator instance registers was successful
 * 
 * @details
 *   This function writes a user-defined configuration of an ADC Digital Comparator
 *   of type P33C_ADCMP_INSTANCE_t to the specified ADC Digital Comparator instance
 *   of the ADC module registers.
 * 
 *********************************************************************************/
static inline int p33c_AdCmpInstance_SetConfig(uint16_t adcmpInstance, P33C_ADCMP_INSTANCE_t adcmpConfig)
{
    int retval = 1;
    
    // Check if addressed instance is within valid range
    if (p33c_AdCmpInstance_Exists(adcmpInstance))
    {
        volatile uint16_t* regptr;
        ADCMPxCON_t* adcmpCon;
        
        bool enableBit = adcmpConfig.ADCMPxCON.bits.CMPEN;  // Capture state of Enable bit
        adcmpConfig.ADCMPxCON.bits.CMPEN = false;   // Force Enable-bit to FALSE before block update

        // Set pointer to ADCMPxCON register of selected ADC comparator instance
        adcmpCon = (ADCMPxCON_t*)p33c_AdCmpInstance_Control[adcmpInstance]; 
        adcmpCon->value = adcmpConfig.ADCMPxCON.value; // Write ADC comparator control register

        // Capture start address of configuration register block of selected ADC comparator instance
        regptr = p33c_AdCmpInstance_Handles[adcmpInstance]; 

        // Block-update ADC comparator instance registers
        *regptr++ = (uint16_t)adcmpConfig.ADCMPxENL.value;
        *regptr++ = (uint16_t)adcmpConfig.ADCMPxENH.value;
        *regptr++ = (uint16_t)adcmpConfig.ADCMPxLO.value;
        *regptr = (uint16_t)adcmpConfig.ADCMPxHI.value;

        adcmpCon->bits.CMPEN = enableBit; // Restore initial state of Enable bit 
    }
    else { retval = 0; }

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Enables the ADC Digital Comparator peripheral instance
 * @param   adcmpInstance: Index of ADC Digital Comparator peripheral instance of type unsigned integer
 * @return  0 = failure, enabling ADC Digital Comparator instance was not successful
 * @return  1 = success, enabling ADC Digital Comparator instance was successful
 * 
 * @details
 *  Sets the ADC Digital Comparator instance enable register bit, effectively 
 *  enabling the ADC Digital Comparator peripheral instance.
 *
 **********************************************************************************/
static inline int p33c_AdCmpInstance_Enable(uint16_t adcmpInstance)
{
    int retval = 1;
    volatile __attribute__((unused)) uint16_t _dummy = 0;

    // Check if addressed instance is within valid range
    if (p33c_AdCmpInstance_Exists(adcmpInstance))
    {
        // Set pointer to ADCMPxCON register of desired ADC comparator instance
        ADCMPxCON_t* adcmp = (ADCMPxCON_t*)p33c_AdCmpInstance_Control[adcmpInstance]; 
        _dummy = adcmp->bits.CHNL; // Force READ of CHNL to clear it before ADC comparator is enabled
        adcmp->bits.CMPEN = true; // Enable ADC Digital Comparator peripheral instance
        
        // Verifying configuration process
        retval &= (bool)(adcmp->bits.CMPEN == true);
    }
    else { retval = 0; }

    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Disables the ADC Digital Comparator peripheral instance
 * @param   adcmpInstance: Index of ADC Digital Comparator peripheral instance of type unsigned integer
 * @return  0 = failure, disabling ADC Digital Comparator instance was not successful
 * @return  1 = success, disabling ADC Digital Comparator instance was successful
 * 
 * @details
 *  Clears the ADC Digital Comparator instance enable register bit, effectively 
 *  disabling the ADC Digital Comparator peripheral instance.
 *
 **********************************************************************************/
static inline int p33c_AdCmpInstance_Disable(uint16_t adcmpInstance)
{
    int retval = 1;

    // Check if addressed instance is within valid range
    if (p33c_AdCmpInstance_Exists(adcmpInstance))
    {
        // Set pointer to ADCMPxCON register of desired ADC comparator instance
        ADCMPxCON_t* adcmp = (ADCMPxCON_t*)p33c_AdCmpInstance_Control[adcmpInstance]; 
        adcmp->bits.CMPEN = false; // Disable ADC Digital Comparator peripheral instance
        
        // Verifying configuration process
        retval &= (bool)(adcmp->bits.CMPEN == false);
    }
    else { retval = 0; }
    
    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Sets the analog input channel to the ADC Digital Comparator peripheral instance
 * @param   adcmpInstance: Index of ADC Digital Comparator peripheral instance of type unsigned integer
 * @return  0 = failure, setting ADC Digital Comparator instance input channel was not successful
 * @return  1 = success, setting ADC Digital Comparator instance input channel  was successful
 * 
 * @details
 *  Selects the ADC Digital Comparator instance input channel to the given 
 *  analog input pin index number by setting the respective bit in the input
 *  channel selection low or high register (e.g. AN7 = 1 << 7 = 0x80).
 *
 **********************************************************************************/
static inline int p33c_AdCmpInstance_SetAnSource(uint16_t adcmpInstance, uint16_t adcanInstance)
{
    int retval = 1;
    
    // Check if addressed instance is within valid range
    if (p33c_AdCmpInstance_Exists(adcmpInstance))
    {
        // Capture pointer to ADCMPxENL
        volatile uint16_t* regptr = p33c_AdCmpInstance_Handles[adcmpInstance];
        
        // Set pointer to ADCMPxCON register of desired ADC comparator instance
        if (adcanInstance < 16)
        {
            *regptr = (uint16_t)(0x0001 << adcanInstance);
        }
        else if (adcanInstance < 32)
        {
            *(++regptr) = (uint16_t)(0x0001 << (adcanInstance-16));
        }
        else
        { retval = 0; }
    }
    else { retval = 0; }
    
    return (retval);
}

#endif /* End of P33C_ADCMP_SFR_INTERFACE_H */

// ____________________
// end of file
