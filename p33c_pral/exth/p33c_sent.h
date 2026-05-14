/**
 * @file    p33c_sent.h
 * @see     p33c_sent-d.h
 * @author  A69612
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_SENT_SFR_INTERFACE_H
#define	P33C_SENT_SFR_INTERFACE_H

// Include header files
#include "p33c_sent-d.h" // Include SENT peripheral abstraction data type declarations header file

#if (P33C_SENT_COUNT > 0)

/* ********************************************************************************************* * 
 * SENT MODULE CONFIGURATION TEMPLATES
 * ********************************************************************************************* */

/*********************************************************************************
 * @ingroup p33c-pral-sent-templates
 * @brief   Default RESET configuration of one SENT instance SFRs
 *
 * @details
 *  Default configuration of the SENT module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  Programmers can use this template to reset (dispose) a previously used
 *  SENT module when it's not used anymore or to secure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_SENT_INSTANCE_t sentInstanceConfigClear = 
{
	.SENTxCON1.value    = 0x0000,   // SNTEN=0, SNTSIDL=0, RCVEN=0, TXM=0, TXPOL=0, CRCEN=0, PPP=0, SPCEN=0, PS=0, NIBCNT[2:0]=0
	.SENTxCON2.value    = 0x0000,   // CON2=0
	.SENTxCON3.value    = 0x0000,   // CON3=0
	.SENTxSTAT.value    = 0x0000,   // PAUSE=0, NIB[2:0]=0, CRCERR=0, FRMERR=0, RXIDLE=0, SYNCTXEN=0
	.SENTxSYNC.value    = 0x0000,   // SYNC=0
	.SENTxDATL.value    = 0x0000,   // DATA4[3:0]=0, DATA5[3:0]=0, DATA6[3:0]=0, CRC[3:0]=0
	.SENTxDATH.value    = 0x0000,   // STAT[3:0]=0, DATA1[3:0]=0, DATA2[3:0]=0, DATA3[3:0]=0
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-sent-methods
 * @brief   Enables power to a SENT peripheral instance
 * @param   sentInstance Instance of the SENT module of type unsigned integer (e.g. 1=SENT1, 2=SENT2, etc.)
 * @return  0 = failure, turning on power to SENT module was not successful
 * @return  1 = success, turning on power to SENT module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given SENT peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_SentInstance_PowerOn(uint16_t sentInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (sentInstance)
    { 
        #ifdef _SENT1MD
        case 1: _SENT1MD = 0; retval = (1 - _SENT1MD); break; // Enable power to SENT1 peripheral
        #endif
        #ifdef _SENT2MD
        case 2: _SENT2MD = 0; retval = (1 - _SENT2MD); break; // Enable power to SENT2 peripheral
        #endif
        #ifdef _SENT3MD
        case 3: _SENT3MD = 0; retval = (1 - _SENT3MD); break; // Enable power to SENT3 peripheral
        #endif
        #ifdef _SENT4MD
        case 4: _SENT4MD = 0; retval = (1 - _SENT4MD); break; // Enable power to SENT4 peripheral
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-sent-methods
 * @brief   Disables power to a SENT peripheral instance
 * @param   sentInstance Instance of the SENT module of type unsigned integer (e.g. 1=SENT1, 2=SENT2, etc.)
 * @return  0 = failure, turning off power to SENT module was not successful
 * @return  1 = success, turning off power to SENT module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  off the power supply to the given SENT peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_SentInstance_PowerOff(uint16_t sentInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (sentInstance)
    { 
        #ifdef _SENT1MD
        case 1: _SENT1MD = 1; retval = _SENT1MD; break; // Disable power to SENT1 peripheral
        #endif
        #ifdef _SENT2MD
        case 2: _SENT2MD = 1; retval = _SENT2MD; break; // Disable power to SENT2 peripheral
        #endif
        #ifdef _SENT3MD
        case 3: _SENT3MD = 1; retval = _SENT3MD; break; // Disable power to SENT3 peripheral
        #endif
        #ifdef _SENT4MD
        case 4: _SENT4MD = 1; retval = _SENT4MD; break; // Disable power to SENT4 peripheral
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-sent-methods
 * @brief   Read the current configuration from the SENT module registers
 * @param   sentInstance Instance of the SENT module (e.g. 1=SENT1, 2=SENT2, etc.) of type unsigned integer
 * @return  Generic SENT module Special Function Register set of type struct P33C_SENT_INSTANCE_t
 * 
 * @details
 *  This function copies the contents of all SENT module registers of the
 *  specified generator instance (e.g. SENT1) to a user variable of type
 *  P33C_SENT_INSTANCE_t. This 'virtual' SENT configuration can then, for
 *  example, be analyzed and/or modified in user code and applied to another
 *  SENT module using function p33c_SentInstance_SetConfig(...).
 * 
 *********************************************************************************/
static inline P33C_SENT_INSTANCE_t p33c_SentInstance_GetConfig(uint16_t sentInstance)
{
    volatile P33C_SENT_INSTANCE_t* sent;

	// Check if addressed instance is within valid range
	if (p33c_SentInstance_Exists(sentInstance))
	{
		// Set pointer to memory address of desired SENT instance
		sent = p33c_SentInstance_GetHandle(sentInstance);
		
		return(*sent);
	}
	else
	{ 
		return(sentInstanceConfigClear); // Return clear config when addressed instance is out-of-range
	}
}

/*********************************************************************************
 * @ingroup p33c-pral-sent-methods
 * @brief   Writes a user-defined configuration to the SENT module registers
 * @param   sentInstance Instance of the SENT module of type unsigned integer (e.g. 1=SENT1, 2=SENT2, etc.)
 * @param   sentConfig   Generic SENT module Special Function Register set of type P33C_SENT_INSTANCE_t
 * @return  0 = failure, writing to SENT module registers was not successful
 * @return  1 = success, writing to SENT module registers was successful
 * 
 * @details
 *  This function writes a user-defined SENT module configuration of type 
 *  P33C_SENT_INSTANCE_t to the given SENT peripheral instance (e.g. SENT1). 
 * 
 *********************************************************************************/
static inline int p33c_SentInstance_SetConfig(uint16_t sentInstance, P33C_SENT_INSTANCE_t sentConfig)
{
    int retval = 1;
    volatile P33C_SENT_INSTANCE_t* sent;

	// Check if addressed instance is within valid range
	if (p33c_SentInstance_Exists(sentInstance))
	{
		// Set pointer to memory address of desired SENT instance
		sent = p33c_SentInstance_GetHandle(sentInstance);
		*sent = sentConfig;
		
        // Verifying configuration process
        retval &= (bool)(sent->SENTxCON1.value == sentConfig.SENTxCON1.value);
	}
	else
	{ 
		retval = 0; // Return error code when addressed instance is out-of-range
	}

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-sent-methods
 * @brief   Enables the SENT peripheral instance
 * @param   sentInstance Instance of the SENT module of type unsigned integer (e.g. 1=SENT1, 2=SENT2, etc.)
 * @return  0 = failure, enabling SENT module was not successful
 * @return  1 = success, enabling SENT module was successful
 * 
 * @details
 *  This function enables the peripheral of desired SENT instance.
 *
 **********************************************************************************/
static inline int p33c_SentInstance_Enable(uint16_t sentInstance)
{
    int retval = 1;
    volatile P33C_SENT_INSTANCE_t* sent;

	// Check if addressed instance is within valid range
	if (p33c_SentInstance_Exists(sentInstance))
	{
		// Capture memory address of SENT peripheral Special Function Register block
		sent = p33c_SentInstance_GetHandle(sentInstance);
		sent->SENTxCON1.bits.SNTEN = 1; // SENT instance is enabled
		
        // Verifying configuration process
        retval &= (bool)(sent->SENTxCON1.bits.SNTEN == 1);
	}
	else
	{ 
		retval = 0; // Return error code when addressed instance is out-of-range
	}

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-sent-methods
 * @brief   Disables the SENT peripheral instance
 * @param   sentInstance Instance of the SENT module of type unsigned integer (e.g. 1=SENT1, 2=SENT2, etc.)
 * @return  0 = failure, disabling SENT module was not successful
 * @return  1 = success, disabling SENT module was successful
 * 
 * @details
 *  This function disables the peripheral of desired SENT instance.
 *
 **********************************************************************************/
static inline int p33c_SentInstance_Disable(uint16_t sentInstance)
{
    int retval = 1;
    volatile P33C_SENT_INSTANCE_t* sent;

	// Check if addressed instance is within valid range
	if (p33c_SentInstance_Exists(sentInstance))
	{
		// Capture memory address of SENT peripheral Special Function Register block
		sent = p33c_SentInstance_GetHandle(sentInstance);
		sent->SENTxCON1.bits.SNTEN = 0; // SENT instance is disabled
		
        // Verifying configuration process
        retval &= (bool)(sent->SENTxCON1.bits.SNTEN == 0);
	}
	else
	{ 
		retval = 0; // Return error code when addressed instance is out-of-range
	}

    return(retval);
}

#endif /* P33C_SENT_COUNT */
#endif /* End of P33C_SENT_SFR_INTERFACE_H */

// __________________________
// end of file
