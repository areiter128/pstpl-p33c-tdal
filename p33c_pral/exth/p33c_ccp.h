/**
 * @file    p33c_ccp.h
 * @see     p33c_ccp-d.h
 * @brief   Capture Compare (CCP) peripheral register access functions
 * @author  M91406
 * @date    Created on May 18, 2019, 1:51 PM
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CCP_SFR_INTERFACE_H
#define	P33C_CCP_SFR_INTERFACE_H

#include "p33c_ccp-d.h" // Include SCCP/MCCP peripheral register abstraction declarations header file

/* ********************************************************************************************* * 
 * CCP MODULE CONFIGURATION TEMPLATES
 * ********************************************************************************************* */

/*********************************************************************************
 * @ingroup p33c-pral-ccp-templates
 * @brief   CCP Register Set Reset State Template
 * 
 * @details
 *  This P33C_CCP_INSTANCE_t data object provides a template of register 
 *  configuration values for a CCP peripheral instance. 
 * 
 *  Default configuration:
 *  - All options are reset to their default state
 *
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_CCP_INSTANCE_t ccpConfigClear = 
{ 
    .CCPxCON1L.value = 0x0000, // CCPON=0, CCPSIDL=0, CCPSLP=0, TMRSYNC=0, CLKSEL=0b000, TMRPS=b00; T32=0, CCSEL=0, MOD=0b0000
    .CCPxCON1H.value = 0x0000, // OPSSRC=0, RTRGEN=0, OPS3=0b0000, TRIGEN=0, ONESHOT=0, ALTSYNC=0, SYNC=0b00000
    .CCPxCON2L.value = 0x0000, // PWMRSEN=0, ASDGM=0, SSDG=0, ASDG=0b00000000
    .CCPxCON2H.value = 0x0000, // OENSYNC=0, OC[F:A]EN=0b000000, ICGSM=0b00, AUXOUT=0b00, ICS=0b000
    #if defined (CCP9CON3L)
    .CCPxCON3L.value = 0x0000, // DT=0b000000
    #endif
    .CCPxCON3H.value = 0x0000, // OETRIG=0, OSCNT=0b000, OUTM=0b000, POLACE=0, POLBDF=0, PSSACE=0, PSSBDF=0
    .CCPxSTATL.value = 0x0000, // ICGARM=0, CCPTRIG=0, TRSET=0, TRCLR=0, ASEVT=0, SCEVT=0, ICDIS=0, ICOV=0, ICBNE=0
    .CCPxTMRL.value  = 0x0000, // Timer counter LOW register = 0
    .CCPxTMRH.value  = 0x0000, // Timer counter HIGH register = 0
    .CCPxPRL.value   = 0x0000, // Period compare LOW register = 0 
    .CCPxPRH.value   = 0x0000, // Period compare HIGH register = 0 
    .CCPxBUFL.value  = 0x0000, // Capture result LOW register = 0
    .CCPxBUFH.value  = 0x0000, // Capture result HIGH register = 0
    .CCPxRAL.value   = 0x0000, // Primary Output Compare Data Buffer register = 0
    .CCPxRBL.value   = 0x0000  // Secondary Output Compare Data Buffer register = 0
    
};

/*********************************************************************************
 * @ingroup p33c-pral-ccp-templates
 * @brief   CCP Register Set Template for Default Timer Configuration
 * 
 * @details
 *  This P33C_CCP_INSTANCE_t data object provides a template of register 
 *  configuration values for a CCP peripheral instance, configuring it 
 *  as default Timer. 
 * 
 *  Default configuration:
 *  - All options are set to operate peripheral instance as default 16-bit timer
 *  - Peripheral clock is selected as clock input
 *  - Period compare register is CCPxPRL
 *  - Timer is configured to be disabled and must be manually enabled in code
 * 
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_CCP_INSTANCE_t ccpConfig16bTimer = 
{ 
    .CCPxCON1L.value = 0x0000, // CCPON=0, CCPSIDL=0, CCPSLP=0, TMRSYNC=0, CLKSEL=0b000, TMRPS=b00; T32=0, CCSEL=0, MOD=0b0000
    .CCPxCON1H.value = 0x0000, // OPSSRC=0, RTRGEN=0, OPS3=0b0000, TRIGEN=0, ONESHOT=0, ALTSYNC=0, SYNC=0b00000
    .CCPxCON2L.value = 0x0000, // PWMRSEN=0, ASDGM=0, SSDG=0, ASDG=0b00000000
    .CCPxCON2H.value = 0x0000, // OENSYNC=0, OC[F:A]EN=0b000000, ICGSM=0b00, AUXOUT=0b00, ICS=0b000
    #if defined (CCP9CON3L)
    .CCPxCON3L.value = 0x0000, // DT=0b000000
    #endif
    .CCPxCON3H.value = 0x0000, // OETRIG=0, OSCNT=0b000, OUTM=0b000, POLACE=0, POLBDF=0, PSSACE=0, PSSBDF=0
    .CCPxSTATL.value = 0x0000, // ICGARM=0, CCPTRIG=0, TRSET=0, TRCLR=0, ASEVT=0, SCEVT=0, ICDIS=0, ICOV=0, ICBNE=0
    .CCPxTMRL.value  = 0x0000, // Timer counter LOW register = 0
    .CCPxTMRH.value  = 0x0000, // Timer counter HIGH register = 0
    .CCPxPRL.value   = 0x0000, // Period compare LOW register = 0 
    .CCPxPRH.value   = 0x0000, // Period compare HIGH register = 0 
    .CCPxBUFL.value  = 0x0000, // Capture result LOW register = 0
    .CCPxBUFH.value  = 0x0000, // Capture result HIGH register = 0
    .CCPxRAL.value   = 0x0000, // Primary Output Compare Data Buffer register = 0
    .CCPxRBL.value   = 0x0000  // Secondary Output Compare Data Buffer register = 0
    
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-ccp-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 *
 **********************************************************************************/
static const uint16_t p33c_CcpInstances = (sizeof(p33c_CcpInstance_Handles)/sizeof(p33c_CcpInstance_Handles[0]));

/*********************************************************************************
 * @ingroup p33c-pral-ccp-methods
 * @brief   Enables power to a CCP peripheral instance
 * @param   ccpInstance Index of the Capture/Compare peripheral instance of type unsigned integer (1=CCP1, 2=CCP2, etc.)
 * @return  0 = failure, turning on power to CCP instance was not successful
 * @return  1 = success, turning on power to CCP instance was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given CCP peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_CcpInstance_PowerOn(uint16_t ccpInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (ccpInstance)
    { 
        #ifdef _CCP1MD
        case 1: _CCP1MD = 0; retval = (1 - _CCP1MD); break; // Enable power to xCCP1 peripheral Instance
        #endif
        #ifdef _CCP2MD
        case 2: _CCP2MD = 0; retval = (1 - _CCP2MD); break; // Enable power to xCCP2 peripheral Instance
        #endif
        #ifdef _CCP3MD
        case 3: _CCP3MD = 0; retval = (1 - _CCP3MD); break; // Enable power to xCCP3 peripheral Instance
        #endif
        #ifdef _CCP4MD
        case 4: _CCP4MD = 0; retval = (1 - _CCP4MD); break; // Enable power to xCCP4 peripheral Instance
        #endif
        #ifdef _CCP5MD
        case 5: _CCP5MD = 0; retval = (1 - _CCP5MD); break; // Enable power to xCCP5 peripheral Instance
        #endif
        #ifdef _CCP6MD
        case 6: _CCP6MD = 0; retval = (1 - _CCP6MD); break; // Enable power to xCCP6 peripheral Instance
        #endif
        #ifdef _CCP7MD
        case 7: _CCP7MD = 0; retval = (1 - _CCP7MD); break; // Enable power to xCCP7 peripheral Instance
        #endif
        #ifdef _CCP8MD
        case 8: _CCP8MD = 0; retval = (1 - _CCP8MD); break; // Enable power to xCCP8 peripheral Instance
        #endif
        #ifdef _CCP9MD
        case 9: _CCP9MD = 0; retval = (1 - _CCP9MD); break; // Enable power to xCCP9 peripheral Instance
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-ccp-methods
 * @brief   Disables power to a CCP peripheral instance
 * @param   ccpInstance Index of the Capture/Compare peripheral instance of type unsigned integer (1=CCP1, 2=CCP2, etc.)
 * @return  0 = failure, turning off power to CCP instance was not successful
 * @return  1 = success, turning off power to CCP instance was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  the power supply to the given CCP peripheral instance off.
 *
 * @note
 *  When power to the peripheral is turned off, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_CcpInstance_PowerOff(uint16_t ccpInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (ccpInstance)
    { 
        #ifdef _CCP1MD
        case 1: _CCP1MD = 1; retval = _CCP1MD; break; // Disable power to xCCP1 peripheral Instance
        #endif
        #ifdef _CCP2MD
        case 2: _CCP2MD = 1; retval = _CCP2MD; break; // Disable power to xCCP2 peripheral Instance
        #endif
        #ifdef _CCP3MD
        case 3: _CCP3MD = 1; retval = _CCP3MD; break; // Disable power to xCCP3 peripheral Instance
        #endif
        #ifdef _CCP4MD
        case 4: _CCP4MD = 1; retval = _CCP4MD; break; // Disable power to xCCP4 peripheral Instance
        #endif
        #ifdef _CCP5MD
        case 5: _CCP5MD = 1; retval = _CCP5MD; break; // Disable power to xCCP5 peripheral Instance
        #endif
        #ifdef _CCP6MD
        case 6: _CCP6MD = 1; retval = _CCP6MD; break; // Disable power to xCCP6 peripheral Instance
        #endif
        #ifdef _CCP7MD
        case 7: _CCP7MD = 1; retval = _CCP7MD; break; // Disable power to xCCP7 peripheral Instance
        #endif
        #ifdef _CCP8MD
        case 8: _CCP8MD = 1; retval = _CCP8MD; break; // Disable power to xCCP8 peripheral Instance
        #endif
        #ifdef _CCP9MD
        case 9: _CCP9MD = 1; retval = _CCP9MD; break; // Disable power to xCCP9 peripheral Instance
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-ccp-methods
 * @brief   Read the current configuration from the CCP instance registers
 * @param   ccpInstance Index of the Capture/Compare peripheral instance of type unsigned integer (1=CCP1, 2=CCP2, etc.)
 * @return  SCCP/MCCP instance special function register data object of type P33C_CCP_INSTANCE_t
 * 
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_CCP_INSTANCE_t. Users can read and 
 *  verify or modify the configuration to write it back to any other CCP 
 *  peripheral instance.
 * 
 *********************************************************************************/
static inline P33C_CCP_INSTANCE_t p33c_CcpInstance_GetConfig(uint16_t ccpInstance)
{
    volatile P33C_CCP_INSTANCE_t* _ccp;
    
    // Check if addressed instance is within valid range
    if (p33c_CcpInstance_Exists(ccpInstance))
    {   
        // Set pointer to memory address of desired CCP instance
        _ccp = p33c_CcpInstance_GetHandle(ccpInstance); 
        return(*_ccp);
    }
    else 
    { 
        return(ccpConfigClear); 
    }
}

/********************************************************************************
 * @ingroup p33c-pral-ccp-methods
 * @brief   Writes a user-defined configuration to the CCP instance registers
 * @param   ccpInstance Index of the Capture/Compare peripheral instance of type unsigned integer (1=CCP1, 2=CCP2, etc.)
 * @param   ccpConfig SCCP/MCCP instance special function register data object of type P33C_CCP_INSTANCE_t
 * @return  0 = failure, writing to CCP instance was not successful
 * @return  1 = success, writing to CCP instance was successful
 * 
 * @details
 *  This function writes a user-defined CCP instance configuration of  
 *  type P33C_CCP_INSTANCE_t to the CCP instance registers. The individual
 *  register configurations have to be set in user-code before calling
 *  this function. To simplify the configuration process of standard
 *  functions, this driver provides templates, which can be loaded
 *  and written directly.
 * 
 *********************************************************************************/
static inline int p33c_CcpInstance_SetConfig(uint16_t ccpInstance, P33C_CCP_INSTANCE_t ccpConfig)
{
    int retval = 1;
    volatile P33C_CCP_INSTANCE_t* ccp;    

    // Check if addressed instance is within valid range
    if (p33c_CcpInstance_Exists(ccpInstance))
    {   
        // Set pointer to memory address of desired CCP instance
        ccp = p33c_CcpInstance_GetHandle(ccpInstance); 
        *ccp = ccpConfig;

        // Verifying configuration process
        retval &= (bool)(ccp->CCPxCON1L.value == ccpConfig.CCPxCON1L.value);
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range
    
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-ccp-methods
 * @brief   Enables the CCP peripheral instance
 * @param   ccpInstance Index of the Capture/Compare peripheral instance of type unsigned integer (1=CCP1, 2=CCP2, etc.)
 * @return  0 = failure, enabling CCP instance was not successful
 * @return  1 = success, enabling CCP instance was successful
 * 
 * @details
 *  Enables the CCP peripheral instance with its most recent configuration.
 *
 **********************************************************************************/
static inline int p33c_CcpInstance_Enable(uint16_t ccpInstance)
{
    int retval = 1;
    volatile P33C_CCP_INSTANCE_t* ccp;    

    // Check if addressed instance is within valid range
    if (p33c_CcpInstance_Exists(ccpInstance))
    {
        // Capture memory address of CCP peripheral instance Special Function Register block
        ccp = p33c_CcpInstance_GetHandle(ccpInstance); 

        ccp->CCPxCON1L.bits.CCPON = 1; // CCP On: Module is enabled with an operating mode specified by the MOD[3:0] control bits
        retval = ccp->CCPxCON1L.bits.CCPON; // Read register bit to verify success/failure
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range
     
    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-ccp-methods
 * @brief   Disables the CCP peripheral instance
 * @param   ccpInstance Index of the Capture/Compare peripheral instance of type unsigned integer (1=CCP1, 2=CCP2, etc.)
 * @return  0 = failure, disabling CCP instance was not successful
 * @return  1 = success, disabling CCP instance was successful
 * 
 * @details
 *  Disables the CCP peripheral instance with its most recent configuration.
 *
 **********************************************************************************/
static inline int p33c_CcpInstance_Disable(uint16_t ccpInstance)
{
    int retval = 1;
    volatile P33C_CCP_INSTANCE_t* ccp;

    // Check if addressed instance is within valid range
    if (p33c_CcpInstance_Exists(ccpInstance))
    {
        // Capture memory address of CCP peripheral instance Special Function Register block
        ccp = p33c_CcpInstance_GetHandle(ccpInstance); 

        ccp->CCPxCON1L.bits.CCPON = 0; // CCP Off: Module is disabled with an operating mode specified by the MOD[3:0] control bits
        retval -= ccp->CCPxCON1L.bits.CCPON; // Read register bit to verify success/failure 
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range
     
    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-ccp-instance-methods
 * @brief   Gets the ADC trigger source ID of the requesting CCP instance
 * @param   pgInstance Index of the CCP instance peripheral instance
 * @param   triggerIndex Can be =0 (primary trigger) or =1 (secondary trigger)
 * @return  0 = failure, CCP instance was not successful
 * @return  1 = success, CCP instance was successful
 *
 * @details
 *      This function returns the ADC trigger soruce ID of the requesting CCP instance.
 *      The trigger source ID is a 5-bit value that is used to select the ADC trigger source.
 *      The trigger source ID is used to select the ADC trigger source.
 *
 *********************************************************************************/

static inline uint8_t p33c_CcpInstance_GetTriggerSource(uint16_t ccpInstance)
{
    uint8_t trgsrc = 0;
     
    // Check if addressed instance is within valid range
    if (p33c_CcpInstance_Exists(ccpInstance))
    {
        switch (ccpInstance)
        {
            #if defined (CCP1CON1L)
            case 1U: trgsrc = ADCAN_TRGSRC_CCP1; break;
            #endif
            #if defined (CCP2CON1L)
            case 2U: trgsrc = ADCAN_TRGSRC_CCP2; break;
            #endif
            #if defined (CCP3CON1L)
            case 3U: trgsrc = ADCAN_TRGSRC_CCP3; break;
            #endif
            #if defined (CCP4CON1L)
            case 4U: trgsrc = ADCAN_TRGSRC_CCP4; break;
            #endif
            #if defined (CCP5CON1L)
            case 5U: trgsrc = ADCAN_TRGSRC_CCP5; break;
            #endif
            #if defined (CCP6CON1L)
            case 6U: trgsrc = ADCAN_TRGSRC_CCP6; break;
            #endif
            #if defined (CCP7CON1L)
            case 7U: trgsrc = ADCAN_TRGSRC_CCP7; break;
            #endif
            #if defined (CCP9CON1L)
            case 9U: trgsrc = ADCAN_TRGSRC_CCP9; break;
            #endif
            default: trgsrc = 0; break;
        }
    }
     return(trgsrc);
}


#endif /* End of P33C_CCP_SFR_INTERFACE_H */

// _____________________
// end of file
