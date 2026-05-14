/**
 * @file    p33c_clc.h
 * @see     p33c_clc-d.h
 * @brief   Configurable Logic Cell (CLC) peripheral register abstraction data type declarations
 * @author  A72333
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CLC_SFR_INTERFACE_H
#define	P33C_CLC_SFR_INTERFACE_H

#include "p33c_clc-d.h" // Include CLC peripheral register abstraction declarations header file

/*********************************************************************************************** 
 * CLC PORT CONFIGURATION TEMPLATES
 ***********************************************************************************************/

/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-templates
 * @brief   Default RESET configuration of one CLC instance SFRs
 *
 * @details
 *   Default configuration of the CLC port SFRs with all its registers 
 *   being reset to their default state when the device comes out of RESET.
 *   Programmers can use this template to reset (dispose) a previously used
 *   CLC port when it's not used anymore or to secure a known startup
 *   condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_CLC_INSTANCE_t clcInstanceConfigClear = 
{
    .CLCxCONL.value   = 0x0000,   // LCEN=0, (bit 14-12 unimplemented), INTP=0, INTN=0,(bit 9-8 unimplemented), LCOE=0, LCOUT=0, LCPOL=0, (bit 4-3 unimplemented), MODE[2:0]=0  
    .CLCxCONH.value   = 0x0000,   // (bit 15-4 unimplemented), G4POL=0, G3POL=0, G2POL=0, G1POL=0
    .CLCxSEL.value    = 0x0000,   // (bit 15 unimplemented), DS4[2:0]=0, (bit 11 unimplemented), DS3[2:0]=0, (bit 7 unimplemented), DS2[2:0]=0, (bit 3 unimplemented), DS1[2:0]=0
    .CLCxGLSL.value   = 0x0000,   // GxDyT=0, GxDyN=0 -- where x = 2 or 1, corresponding to Gate 2 and 1 / y = 4, 3, 2, or 1, corresponding to Data Source number / T is for True (Normal) Input Enable, N is for Negated or Inverted Input Enable / Numberings are in descending order  
    .CLCxGLSH.value   = 0x0000    // GxDyT=0, GxDyN=0 -- where x = 4 or 3, corresponding to Gate 4 and 3 / y = 4, 3, 2, or 1, corresponding to Data Source number / T is for True (Normal) Input Enable, N is for Negated or Inverted Input Enable / Numberings are in descending order   
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/**********************************************************************************
 * @ingroup p33c-pral-clc-instance-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 *
 **********************************************************************************/
static const uint16_t p33c_ClcInstances = (sizeof(p33c_ClcInstance_Handles)/sizeof(p33c_ClcInstance_Handles[0]));

/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-methods
 * @brief   Enables power to a CLC peripheral instance
 * @return  0 = failure, turning on power to CLC module was not successful
 * @return  1 = success, turning on power to CLC module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given CLC peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_ClcInstance_PowerOn(volatile uint16_t clcInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (clcInstance)
    { 
        #ifdef _CLC1MD
        case 1: _CLC1MD = 0; retval = (1 - _CLC1MD); break; // Enable power to CLC1 peripheral
        #endif
        #ifdef _CLC2MD
        case 2: _CLC2MD = 0; retval = (1 - _CLC2MD); break; // Enable power to CLC2 peripheral
        #endif
        #ifdef _CLC3MD
        case 3: _CLC3MD = 0; retval = (1 - _CLC3MD); break; // Enable power to CLC3 peripheral
        #endif
        #ifdef _CLC4MD
        case 4: _CLC4MD = 0; retval = (1 - _CLC4MD); break; // Enable power to CLC4 peripheral
        #endif
        #ifdef _CLC5MD
        case 5: _CLC5MD = 0; retval = (1 - _CLC5MD); break; // Enable power to CLC5 peripheral
        #endif
        #ifdef _CLC6MD
        case 6: _CLC6MD = 0; retval = (1 - _CLC6MD); break; // Enable power to CLC6 peripheral
        #endif
        #ifdef _CLC7MD
        case 7: _CLC7MD = 0; retval = (1 - _CLC7MD); break; // Enable power to CLC7 peripheral
        #endif
        #ifdef _CLC8MD
        case 8: _CLC8MD = 0; retval = (1 - _CLC8MD); break; // Enable power to CLC8 peripheral
        #endif
        default: retval=0; break;
    }

    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-methods
 * @brief   Disables power to a CLC peripheral instance
 * @return  0 = failure, turning off power to CLC module was not successful
 * @return  1 = success, turning off power to CLC module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  off the power supply to the given CLC peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned off, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_ClcInstance_PowerOff(volatile uint16_t clcInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (clcInstance)
    { 
        #ifdef _CLC1MD
        case 1: _CLC1MD = 1; retval = _CLC1MD; break; // Disable power to CLC1 peripheral
        #endif
        #ifdef _CLC2MD
        case 2: _CLC2MD = 1; retval = _CLC2MD; break; // Disable power to CLC2 peripheral
        #endif
        #ifdef _CLC3MD
        case 3: _CLC3MD = 1; retval = _CLC3MD; break; // Disable power to CLC3 peripheral
        #endif
        #ifdef _CLC4MD
        case 4: _CLC4MD = 1; retval = _CLC4MD; break; // Disable power to CLC4 peripheral
        #endif
        #ifdef _CLC5MD
        case 5: _CLC5MD = 1; retval = _CLC5MD; break; // Disable power to CLC5 peripheral
        #endif
        #ifdef _CLC6MD
        case 6: _CLC6MD = 1; retval = _CLC6MD; break; // Disable power to CLC6 peripheral
        #endif
        #ifdef _CLC7MD
        case 7: _CLC7MD = 1; retval = _CLC7MD; break; // Disable power to CLC7 peripheral
        #endif
        #ifdef _CLC8MD
        case 8: _CLC8MD = 1; retval = _CLC8MD; break; // Disable power to CLC8 peripheral
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-methods
 * @brief   Read the current configuration from the CLC module registers
 * @param   clcInstance Instance of the CLC (e.g. 1 = CLC1, 2=CLC2, etc.) of type unsigned integer
 * @return  Generic CLC Special Function Register set of type struct P33C_CLC_INSTANCE_t
 * 
 * @details
 *  This function copies the contents of all CLC registers of the 
 *  specified instance (e.g. CLC2) to a user variable of type 
 *  P33C_CLC_INSTANCE_t. This 'virtual' CLC configuration can then, for  
 *  example, be analyzed and/or modified in user code and applied to another 
 *  CLC using function p33c_ClcInstance_SetConfig(...). 
 * 
 *********************************************************************************/
static inline P33C_CLC_INSTANCE_t p33c_ClcInstance_GetConfig(volatile uint16_t clcInstance)
{
    volatile P33C_CLC_INSTANCE_t* clc;    

    // Check if addressed instance is within valid range
	if (p33c_ClcInstance_Exists(clcInstance))
	{
        // Set pointer to memory address of desired clc instance
        clc = p33c_ClcInstance_GetHandle(clcInstance);
        
        return(*clc);
    }
    else {return(clcInstanceConfigClear); } // Return clear config when addressed instance is out-of-range
}

/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-methods
 * @brief   Writes a user-defined configuration to the CLC module registers
 * @param   clcInstance Instance of the CLC port of type unsigned integer (e.g. 1=CLC1, 2=CLC2, etc.)
 * @param   clcConfig   Generic CLC Special Function Register set of type P33C_CLC_INSTANCE_t
 * @return  0 = failure, disposing CLC was not successful
 * @return  1 = success, disposing CLC was successful
 * 
 * @details
 *  This function writes a user-defined CLC port configuration of type 
 *  P33C_CLC_INSTANCE_t to the given CLC port peripheral instance (e.g. CLC2). 
 * 
 *********************************************************************************/
static inline int p33c_ClcInstance_SetConfig(volatile uint16_t clcInstance, volatile P33C_CLC_INSTANCE_t clcConfig)
{
    int retval = 1;
    volatile P33C_CLC_INSTANCE_t* clc;    

     // Check if addressed instance is within valid range
	if (p33c_ClcInstance_Exists(clcInstance))
	{
        // Set pointer to memory address of desired CLC instance
        clc = p33c_ClcInstance_GetHandle(clcInstance);
        *clc = clcConfig;

        // Verifying configuration process
        retval &= (bool)(clc->CLCxCONL.value == clcConfig.CLCxCONL.value);
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-methods
 * @brief   Enables a given CLC instance
 * @param   clcInstance  Pointer to CLC peripheral instance register set of type P33C_CLC_INSTANCE_t
 * @return  0 = failure, enabling CLC was not successful
 * @return  1 = success, enabling CLC generator was successful
 * 
 * @details
 *  This function enables the CLC module.  
 *     
 *********************************************************************************/
static inline int p33c_ClcInstance_Enable(volatile uint16_t clcInstance)
{
    int retval = 1;
    volatile P33C_CLC_INSTANCE_t* clc;
	
    // Check if addressed instance is within valid range
	if (p33c_ClcInstance_Exists(clcInstance))
    {    
        // Capture memory address of CLC peripheral Special Function Register block
		clc = p33c_ClcInstance_GetHandle(clcInstance);
        clc->CLCxCONL.bits.LCEN = 1;    // CLCx is enabled and mixing input signals

        // Verifying configuration process
        retval &= (bool)(clc->CLCxCONL.bits.LCEN == 1);
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-methods
 * @brief   Disables a given CLC instance
 * @param   clcInstance  Pointer to CLC peripheral instance register set of type P33C_CLC_INSTANCE_t
 * @return  0 = failure, disabling CLC was not successful
 * @return  1 = success, disabling CLC generator was successful
 * 
 * @details
 *  This function disables the CLC module.
 *  
 *********************************************************************************/
static inline int p33c_ClcInstance_Disable(volatile uint16_t clcInstance)
{
    int retval = 1;
    volatile P33C_CLC_INSTANCE_t* clc;
    
    // Check if addressed instance is within valid range
	if (p33c_ClcInstance_Exists(clcInstance))
    {
        // Capture memory address of CLC peripheral Special Function Register block
		clc = p33c_ClcInstance_GetHandle(clcInstance);
        clc->CLCxCONL.bits.LCEN = 0;    // CLCx is disabled and has logic zero outputs 

        // Verifying configuration process
        retval &= (bool)(clc->CLCxCONL.bits.LCEN == 0);
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-clc-instance-methods
 * @brief   Gets the ADC trigger source ID of the requesting CLC instance
 * @param   clcInstance Index of the CLC instance peripheral instance
 * @return  0 = failure, CLC instance was not successful
 * @return  1 = success, CLC instance was successful
 *
 * @details
 *      This function returns the ADC trigger soruce ID of the requesting CLC instance.
 *      The trigger source ID is a 5-bit value that is used to select the ADC trigger source.
 *      The trigger source ID is used to select the ADC trigger source.
 *
 *********************************************************************************/

static inline uint8_t p33c_ClcInstance_GetTriggerSource(uint16_t clcInstance)
{
    uint8_t trgsrc = 0;
      
    // Check if addressed instance is within valid range
    if (p33c_ClcInstance_Exists(clcInstance))
    {
        switch (clcInstance)
        {
            #if defined (CLC1CONL)
            case 1U: trgsrc = ADCAN_TRGSRC_CLC1; break;
            #endif
            #if defined (CLC2CONL)
            case 2U: trgsrc = ADCAN_TRGSRC_CLC2; break;
            #endif
            default: trgsrc = 0; break;
        }
    }

    return(trgsrc);
}

#endif /* End of P33C_CLC_SFR_INTERFACE_H */

// __________________________
// end of file
