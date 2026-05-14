/**
 * @file    p33c_pmd.h
 * @see     p33c_pmd-d.h
 * @brief   Peripheral Module Disable Module register access interface
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PMD_SFR_INTERFACE_H
#define	P33C_PMD_SFR_INTERFACE_H

#include "p33c_pmd-d.h" // include Peripheral Module Disable register abstraction data type declarations header file

/*********************************************************************************
 * @ingroup p33c-pral-pmd-templates
 * @brief 	PMD Register Set Template disabling power to all peripherals
 * @details
 * 	This P33C_PMD_MODULE_t data object provides a register 
 *  configuration value set disabling power all peripherals.
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_PMD_MODULE_t pmdConfigDisableAll = 
{ 
	#ifdef PMDCON
	.PMDCON.value = 0xFFFF,
	#endif
	#ifdef PMD1
	.PMD1.value = 0xF7FF,
	#endif
	#ifdef PMD2
	.PMD2.value = 0xFFFF,
	#endif
	#ifdef PMD3
	.PMD3.value = 0xFFFF,
	#endif
	#ifdef PMD4
	.PMD4.value = 0xFFFF,
	#endif
	#ifdef PMD5
	.PMD5.value = 0xFFFF,
	#endif
	#ifdef PMD6
	.PMD6.value = 0xFFFF,
	#endif
	#ifdef PMD7
	.PMD7.value = 0xFFFF,
	#endif
	#ifdef PMD8
	.PMD8.value = 0xFFFF,
	#endif
	#ifdef PMD9
	.PMD9.value = 0xFFFF,
	#endif
    
};

/*********************************************************************************
 * @ingroup p33c-pral-pmd-templates
 * @brief 	PMD Register Set Template enabling power to all peripherals
 * @details
 * 	This P33C_PMD_MODULE_t data object provides a register 
 * 	configuration value set disabling power all peripherals.
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_PMD_MODULE_t pmdConfigEnableAll = 
{ 
	#ifdef PMDCON
	.PMDCON.value = 0x0000,
	#endif
	#ifdef PMD1
	.PMD1.value = 0x0000,
	#endif
	#ifdef PMD2
	.PMD2.value = 0x0000,
	#endif
	#ifdef PMD3
	.PMD3.value = 0x0000,
	#endif
	#ifdef PMD4
	.PMD4.value = 0x0000,
	#endif
	#ifdef PMD5
	.PMD5.value = 0x0000,
	#endif
	#ifdef PMD6
	.PMD6.value = 0x0000,
	#endif
	#ifdef PMD7
	.PMD7.value = 0x0000,
	#endif
	#ifdef PMD8
	.PMD8.value = 0x0000,
	#endif
	#ifdef PMD9
	.PMD9.value = 0x0000,
	#endif
    
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-pmd-methods
 * @brief  	Read the current configuration from the PMD instance registers
 * @return 	Peripheral Module Disable special function register data object of type P33C_PMD_MODULE_t
 * 
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_PMD_MODULE_t. Users can read and 
 *  verify of modify the configuration to write it back to any other PMD 
 *  peripheral instance.
 * 
 *********************************************************************************/
static inline P33C_PMD_MODULE_t p33c_Pmd_GetConfig(void)
{
	volatile P33C_PMD_MODULE_t* pmd;
    
    // Capture Handle: set pointer to memory address of the Peripheral Module Disable module
    pmd = p33c_Pmd_GetHandle(); 
    
    return(*pmd);
}

/********************************************************************************
 * @ingroup p33c-pral-pmd-methods
 * @brief  	Writes a user-defined configuration to the Peripheral Module Disable registers
 * @param  	pmdConfig Peripheral Module Disable special function register data object of type P33C_PMD_MODULE_t
 * @return 	0 = failure, writing to PMD module was not successful
 * @return 	1 = success, writing to PMD module was successful
 * 
 * @details
 *	This function writes a user-defined PMD module configuration of type 
 *  P33C_PMD_s to the Peripheral Module Disable module registers. The 
 *  individual register configurations have to be set in user-code 
 *  before calling this function. To simplify the configuration process
 *  of standard functions, this driver provides templates, which can be 
 *  loaded and written directly 
 * 
 *********************************************************************************/
static inline int p33c_Pmd_SetConfig(P33C_PMD_MODULE_t pmdConfig)
{
    int retval = 1;
    volatile P33C_PMD_MODULE_t* pmd;    

    // Set pointer to memory address of the Peripheral Module Disable module
    pmd = p33c_Pmd_GetHandle(); 

    // Unlock writes to PMD registers
    #ifdef PMDCON
    pmd->PMDCON.bits.PMDLOCK = 0; 
    #endif    
    
    // Load user configuration into PDM register set
    *pmd = pmdConfig;

    // Lock writes to PMD registers
    #ifdef PMDCON
    pmd->PMDCON.bits.PMDLOCK = 1; // Lock writes to PMD registers 
    #endif    
    
    // Return result
    return(retval);
    
}

#endif /* End of P33C_PMD_SFR_INTERFACE_H */

// ______________________________
// end of file
