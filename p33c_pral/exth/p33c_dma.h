/**
 * @file    p33c_dma.c
 * @see     p33c_dma.h
 * @author  M91406
 * @date    Created on June 3, 2020, 3:41 PM
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_DMA_SFR_INTERFACE_H
#define	P33C_DMA_SFR_INTERFACE_H

// Include standard header files
#include "p33c_dma-d.h" // include Direct Memory Access peripheral register abstraction declarations header file

/*********************************************************************************
 * @ingroup p33c-pral-dma-module-templates
 * @brief Default RESET configuration of DMA module 
 *
 * @details
 *  Default configuration of the DMA module SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  The minimum and maximum addresses specifying the memory range addressable
 *  by the DMA module affects/limits all DMA channels. 
 *  (Please read the device data sheet for details)
 * 
 *  Programmers can use this template to reset a previously set DMA module
 *  configuration when it's not used anymore or to ensure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DMA_MODULE_t dmaModuleConfigClear = 
{
    .DMACON.value = 0x0000, ///< DMA Module disabled, DMA Stop In Idle Mode, Channel FIxed Priority Scheme Selection
    .DMABUF.value = 0x0000, ///< DMA buffer is Read Only (Writes are performed with zeros)
    .DMAL.value   = P33C_DACL_DEFAULT, ///< DMA address range minimum is reset to Default
    .DMAH.value   = P33C_DACH_DEFAULT, ///< DMA address range maximum is reset to Default
};

/*********************************************************************************
 * @ingroup p33c-pral-dma-instance-templates
 * @brief   Default RESET configuration of DMA instance SFRs
 * @param   dmaConfigClear DMA instance Special Function Register (SFR) set
 *
 * @details
 *  Default configuration of the DMA instance SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  Programmers can use this template to reset (dispose) a previously used
 *  DMA instance when it's not used anymore or to secure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 * *******************************************************************************/
static const __attribute__((space(auto_psv))) P33C_DMA_INSTANCE_t dmaInstanceConfigClear = 
{
    .DMACHx.value  = 0x0000,    // Clear DMA Channel n Control Register
    .DMAINTx.value = 0x0000,    // Clear DMA Channel n Interrupt Control Register
    .DMASRCx.value = 0x0000,    // Clear DMA Channel n Source Address Register
    .DMADSTx.value = 0x0000,    // DMA Channel n Destination Address Register
    .DMACNTx.value = 0x0000     // DMA Channel n Count Register
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-dma-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 **********************************************************************************/
static const uint16_t p33c_DmaInstances = (sizeof(p33c_DmaChannel_Handles)/sizeof(p33c_DmaChannel_Handles[0]));

/*********************************************************************************
 * @ingroup p33c-pral-dma-module-methods
 * @brief   Read the current configuration from the DMA module base registers
 * @return  P33C_DMA_MODULE_t Returns data set of most recent DMA module configuration register set
 * 
 * @details
 *     This function reads all registers with their current configuration into
 *     a data structure of type P33C_DMA_MODULE_t. Users can read and 
 *     verify or modify the configuration to write it back to the DMA module  
 *     registers.
 * 
 *********************************************************************************/
static inline P33C_DMA_MODULE_t p33c_DmaModule_GetConfig(void)
{
    volatile P33C_DMA_MODULE_t* dmac;

    // Set pointer to memory address of DMA base register set
    dmac = p33c_DmaModule_GetHandle();

    return(*dmac);
    
}

/*********************************************************************************
 * @ingroup p33c-pral-dma-module-methods
 * @brief   Writes a user-defined configuration to the DMA module base registers
 * @param   dmaModuleConfig Direct Memory Access module configuration of type P33C_DMA_MODULE_t
 * @return  0 = failure, writing DMA module was not successful
 * @return  1 = success, writing DMA module was successful
 * 
 * @details
 *     This function writes a user-defined DMA module configuration of  
 *     type P33C_DMA_MODULE_t to the DMA module base registers. The 
 *     individual register configurations have to be set in user-code 
 *     before calling this function. To simplify the configuration process
 *     of standard functions, this driver provides templates, which can be 
 *     loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_DmaModule_SetConfig(P33C_DMA_MODULE_t dmaModuleConfig)
{
    int retval = 1;
    volatile P33C_DMA_MODULE_t* dmac;    

    // Set pointer to memory address of the DMA module base registers
    dmac = p33c_DmaModule_GetHandle();
    *dmac = dmaModuleConfig;
    
    return(retval);
    
}

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-dma-instance-methods
 * @brief   Enables power to a DMA peripheral instance
 * @param   dmaInstance  Index of the selected DMA Instance (0=DMA0, 1=DMA1, 2=DMA2, etc.)
 * @return  0 = failure, writing to DMA registers was not successful
 * @return  1 = success, writing to DMA registers was successful
 * @details
 *  Peripheral Module Disable Module (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given DMA peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 *  @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_DmaInstance_PowerOn(uint16_t dmaInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (dmaInstance)
    { 
        #ifdef _DMA0MD
        case 0: _DMA0MD = 0; break; // Enable power to DMA1 peripheral Instance
        #endif
        #ifdef _DMA1MD
        case 1: _DMA1MD = 0; break; // Enable power to DMA1 peripheral Instance
        #endif
        #ifdef _DMA2MD
        case 2: _DMA2MD = 0; break; // Enable power to DMA2 peripheral Instance
        #endif
        #ifdef _DMA3MD
        case 3: _DMA3MD = 0; break; // Enable power to DMA3 peripheral Instance
        #endif
        #ifdef _DMA4MD
        case 4: _DMA4MD = 0; break; // Enable power to DMA4 peripheral Instance
        #endif
        #ifdef _DMA5MD
        case 5: _DMA5MD = 0; break; // Enable power to DMA5 peripheral Instance
        #endif
        #ifdef _DMA6MD
        case 6: _DMA6MD = 0; break; // Enable power to DMA6 peripheral Instance
        #endif
        #ifdef _DMA7MD
        case 7: _DMA7MD = 0; break; // Enable power to DMA7 peripheral Instance
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-dma-instance-methods
 * @brief   Disables power to a DMA peripheral instance
 * @param   dmaInstance  Index of the selected DMA Instance (0=DMA0, 1=DMA1, 2=DMA2, etc.)
 * @return  0 = failure, writing to DMA registers was not successful
 * @return  1 = success, writing to DMA registers was successful
 * @details
 *  Peripheral Module Disable Module (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  the power supply to the given DMA peripheral instance off.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_DmaInstance_PowerOff(uint16_t dmaInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (dmaInstance)
    { 
        #ifdef _DMA0MD
        case 0: _DMA0MD = 1; break; // Disable power to DMA1 peripheral Instance
        #endif
        #ifdef _DMA1MD
        case 1: _DMA1MD = 1; break; // Disable power to DMA1 peripheral Instance
        #endif
        #ifdef _DMA2MD
        case 2: _DMA2MD = 1; break; // Disable power to DMA2 peripheral Instance
        #endif
        #ifdef _DMA3MD
        case 3: _DMA3MD = 1; break; // Disable power to DMA3 peripheral Instance
        #endif
        #ifdef _DMA4MD
        case 4: _DMA4MD = 1; break; // Disable power to DMA4 peripheral Instance
        #endif
        #ifdef _DMA5MD
        case 5: _DMA5MD = 1; break; // Disable power to DMA5 peripheral Instance
        #endif
        #ifdef _DMA6MD
        case 6: _DMA6MD = 1; break; // Disable power to DMA6 peripheral Instance
        #endif
        #ifdef _DMA7MD
        case 7: _DMA7MD = 1; break; // Disable power to DMA7 peripheral Instance
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-dma-instance-methods
 * @brief   Read the current configuration from the DMA instance registers
 * @param   dmaInstance  Index of the selected DMA Instance (0=DMA0, 1=DMA1, 2=DMA2, etc.)
 * @return  DMA instance object of type P33C_DMA_INSTANCE_t of the selected DMA instance
 * 
 * @details
 *  This function reads all registers with their current configuration into
 *  a data structure of type P33C_DMA_INSTANCE_t. Users can read and 
 *  verify or modify the configuration to write it back to the DMA instance  
 *  registers or copy configurations to other instances of the same type.
 * 
 *********************************************************************************/
static inline P33C_DMA_INSTANCE_t p33c_DmaInstance_GetConfig(uint16_t dmaInstance)
{
    volatile P33C_DMA_INSTANCE_t* _dma;

    if (p33c_DmaInstance_Exists(dmaInstance))
    {
        // Set pointer to memory address of desired DMA instance
        _dma = p33c_DmaInstance_GetHandle(dmaInstance);
        return(*_dma);
    }
    else { return(dmaInstanceConfigClear); }

}

/*********************************************************************************
 * @ingroup p33c-pral-dma-instance-methods
 * @brief   Writes a user-defined configuration to the DMA instance registers
 * @param   dmaInstance  Index of the selected DMA Instance (0=DMA0, 1=DMA1, 2=DMA2, etc.)
 * @param   dmaConfig    DMA instance object of type P33C_DMA_INSTANCE_t of the selected DMA instance
 * @return  0 = failure, writing DMA instance was not successful
 * @return  1 = success, writing DMA instance was successful
 * 
 * @details
 *  This function writes a user-defined DMA instance configuration of type 
 *  P33C_DMA_INSTANCE_t to the DMA instance registers. The 
 *  individual register configurations have to be set in user-code 
 *  before calling this function. To simplify the configuration process
 *  of standard functions, this driver provides templates, which can be 
 *  loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_DmaInstance_SetConfig(uint16_t dmaInstance, P33C_DMA_INSTANCE_t dmaConfig)
{
    int retval = 1;
    volatile P33C_DMA_INSTANCE_t* dma;    

    if (p33c_DmaInstance_Exists(dmaInstance))
    {
        // Set pointer to memory address of desired DMA instance
        dma = p33c_DmaInstance_GetHandle(dmaInstance);
        *dma = dmaConfig;
    }
    else { retval = 0; }
     
    return(retval);
    
}

/*********************************************************************************
 * @ingroup p33c-pral-dma-methods
 * @brief   Enables the DMA peripheral instance
 * @param   dmaInstance Index of the analog comparator/DAC peripheral instance of type unsigned integer
 * @return  0 = failure, writing to DAC instance registers was not successful
 * @return  1 = success, writing to DAC instance registers was successful
 * 
 * @details
 *  Enables the DMA peripheral instance with its most recent configuration.
 *
 **********************************************************************************/
static inline int p33c_DmaInstance_Enable(uint16_t dmaInstance)
{
    uint16_t _retval = 1;
    volatile P33C_DMA_INSTANCE_t* _dma;    

    // Check if addressed instance is within valid range
    if (p33c_DmaInstance_Exists(dmaInstance))
    {
        // Capture memory address of DMA peripheral instance Special Function Register block
        _dma = p33c_DmaInstance_GetHandle(dmaInstance); 

        _dma->DMACHx.bits.CHEN = 1; // DMA CHEN: Module instance is enabled 
        _retval = _dma->DMACHx.bits.CHEN; // Read register bit to verify success/failure
    
    }
    else { _retval = 0; } // Return error code when addressed instance is out-of-range
     
    return (_retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-dma-methods
 * @brief   Disables the DMA peripheral instance
 * @param   dmaInstance Index of the analog comparator/DAC peripheral instance of type unsigned integer
 * @return  0 = failure, writing to DAC instance registers was not successful
 * @return  1 = success, writing to DAC instance registers was successful
 * 
 * @details
 *  Disables the DMA peripheral instance with its most recent configuration.
 *
 **********************************************************************************/
static inline int p33c_DmaInstance_Disable(uint16_t dmaInstance)
{
    uint16_t _retval = 1;
    volatile P33C_DMA_INSTANCE_t* _dma;

    // Check if addressed instance is within valid range
    if (p33c_DmaInstance_Exists(dmaInstance))
    {
        // Capture memory address of DMA peripheral instance Special Function Register block
        _dma = p33c_DmaInstance_GetHandle(dmaInstance); 

        _dma->DMACHx.bits.CHEN = 0; // DMA CHEN: Module instance is disabled 
        _retval -= _dma->DMACHx.bits.CHEN; // Read register bit to verify success/failure
        
    }
    else { _retval = 0; } // Return error code when addressed instance is out-of-range
     
    return (_retval);
}

#endif /* End of P33C_DMA_SFR_INTERFACE_H */

// ______________________________
// end of file
