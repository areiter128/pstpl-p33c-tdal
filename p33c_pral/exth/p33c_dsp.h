/**
 * @file    p33c_dsp.h
 * @see     p33c_dsp-d.h
 * @author  M91406
 * @date    Created on February 19, 2018, 10:21 AM
 * @brief   Driver file for dsPIC33C DSP Configuration SFRs
 * 
 * @details
 *  The DSP engine of dsPIC33 offers several options to optimize data processing for integer 
 *  and fixed-point algorithmic, which can be defined and enabled using this library.
 */

// This is a guard condition so that contents of this file are not included
// more than once. 
#ifndef P33C_DSP_SFR_INTERFACE_H
#define P33C_DSP_SFR_INTERFACE_H

// Include Header Files
#include "p33c_dsp-d.h" // Include DSP peripheral register abstraction declarations header file

/*********************************************************************************
 * @ingroup p33c-pral-dsp-templates
 * @brief   Digital Signal Processor default RESET register configuration
 * @details
 *  This P33C_DSP_CONFIG_t data object provides a template of register 
 *  configuration values for a DSP core. 
 * 
 *  Default configuration:
 * 
 *    - all options are reset to their default values
 * 
 **********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DSP_CONFIG_t dspConfigClear = 
{
    .CORCON.value = 0x0000 // VAR=0, US=0, EDT=0, DL=0b000, SATA=0, SATB=0, SATDW=0, ACCSAT=0, IPL3=0, SFA=0, RND=0, IF=0
};

/*********************************************************************************
 * @ingroup p33c-pral-dsp-templates
 * @brief   Digital Signal Processor default register configuration
 * @details
 *  This P33C_DSP_CONFIG_t data object provides a template of register 
 *  configuration values for a DSP core. 
 * 
 *  Default configuration:
 * 
 *   - all options are set to their default values optimized for fixed-point real-time control computations
 *   - multiplications are performed in signed fractional mode
 *   - accumulator saturation mode is set to 1.31 number format (normal saturation)
 *   - saturation for accumulator A and B as well as for working register write back is turned on
 *   - Rounding is set to unbiased (convergent) mode (default)
 *   - Fixed exception processing latency is enabled
 * 
 **********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DSP_CONFIG_t dspConfigDefaultFixedPoint = 
{
    .CORCON.value = 0x00E0 // VAR=0, US=0, EDT=0, DL=0b000, SATA=1, SATB=1, SATDW=1, ACCSAT=0, IPL3=0, SFA=0, RND=0, IF=0
};

/*********************************************************************************
 * @ingroup p33c-pral-dsp-templates
 * @brief   Digital Signal Processor default register configuration
 * @details
 *  This P33C_DSP_CONFIG_t data object provides a template of register 
 *  configuration values for a DSP core. 
 * 
 *  Default configuration:
 * 
 *   - all options are set to their default values optimized for fixed-point real-time control computations
 *   - multiplications are performed in signed fractional mode
 *   - accumulator saturation mode is set to 9.31 number format (super saturation)
 *   - saturation for accumulator A and B as well as for working register write back is turned on
 *   - Rounding is set to unbiased (convergent) mode (default)
 *   - Fixed exception processing latency is enabled
 * 
 **********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DSP_CONFIG_t dspConfigExtendedFixedPoint = 
{
    .CORCON.value = 0x00F0 // VAR=0, US=0, EDT=0, DL=0b000, SATA=1, SATB=1, SATDW=1, ACCSAT=1, IPL3=0, SFA=0, RND=0, IF=0
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/******************************************************************************************************
 * @ingroup p33c-pral-dsp-methods
 * @brief   Initializes the DSP engine in accordance to user settings 
 * @param   dspConfig DSP configuration SFR data object of type P33C_DSP_CONFIG_t
 * @return  unsigned integer (0=failure, 1=success)
 * @details
 * This routine writes a DSP user-configuration into the core configuration register and verifies
 * the data has been written correctly.
 ******************************************************************************************************/
static inline int p33c_Dsp_SetConfig(P33C_DSP_CONFIG_t dspConfig)
{
	int retval = 1;
    volatile P33C_DSP_CONFIG_t* dsp = p33c_Dsp_GetHandle();
    *dsp = dspConfig;
    
    // Verifying configuration process
    retval &= (bool)((dsp->CORCON.value & P33C_DSP_CONFIG_COMPARE) == (dspConfig.CORCON.value & P33C_DSP_CONFIG_COMPARE));
	
    return(retval); 
} 

/******************************************************************************************************
 * @ingroup p33c-pral-dsp-methods
 * @brief   Reads the DSP engine configuration 
 * @return  P33C_DSP_CONFIG_t
 *
 * @details
 * This routine writes a DSP user-configuration into the core configuration register and verifies
 * the data has been written correctly.
 * 
 ******************************************************************************************************/
static inline P33C_DSP_CONFIG_t p33c_Dsp_GetConfig(void)
{
	volatile P33C_DSP_CONFIG_t* dsp = p33c_Dsp_GetHandle();
    return(*dsp);
} 

#endif /* End of P33C_DSP_SFR_INTERFACE_H */

// _________________________
// end of file
