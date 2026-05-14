/**
 * @file    p33c_spi.c
 * @see     p33c_spi.h
 * @author  A71596
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_SPI_SFR_INTERFACE_H
#define	P33C_SPI_SFR_INTERFACE_H

// Include standard header files
#include "p33c_spi-d.h" // include SPI peripheral abstraction data type declarations header file

/* ****************************************************************************** * 
 * SPI PORT CONFIGURATION TEMPLATES
 * ****************************************************************************** */

/*********************************************************************************
 * @ingroup p33c-pral-spi-templates
 * @brief   Default RESET configuration of one SPI instance SFRs
 *
 * @details
 *  Default configuration of the SPI port SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  Programmers can use this template to reset (dispose) a previously used
 *  SPI module when it's not used anymore or to secure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_SPI_INSTANCE_t spiInstanceConfigClear = 
{
    .SPIxCON1L.value  = 0x0000,    // SPIEN=0, SPISIDL=0, DISSDO=0, MODE32=0, MODE16=0, SMP=0, CKE=0, SSEN=0, CKP=0,  MSTEN=0, DISSDI=0, DISSCK=0, MCLKEN=0, SPIFE=0, ENHBUF=0
    .SPIxCON1H.value  = 0x0000,    // AUDEN=0, SPISGNEXT=0, IGNROV=0, IGNTUR=0, AUDMONO=0, URDTEN=0, AUDMOD[1:0]=0, FRMEN=0, FRMSYNC=0, FRMPOL=0, MSSEN=0, FRMSYPW=0, FRMCNT[2:0]=0
    .SPIxCON2L.value  = 0x0000,    // WLENGTH=0
    .SPIxSTATL.value  = 0x0000,    // FRMERR=0, SPIBUSY=0, SPITUR=0, SRMT=0, SPIROV=0, SPIRBE=0, SPITBE=0, SPITBF=0, SPIRBF=0 
    .SPIxSTATH.value  = 0x0000,    // RXELM[5:0]=0, TXELM[5:0]=0
    .SPIxIMSKL.value  = 0x0000,    // FRMERREN=0, BUSYEN=0, SPITUREN=0, SRMTEN=0, SPIROVEN=0, SPIRBEN=0, SPITBEN=0, SPITBFEN=0, SPIRBFEN=0 
    .SPIxIMSKH.value  = 0x0000,    // RXWIEN=0, RXMSK[5:0]=0, TXWIEN=0, TXMSK[5:0]=0
    .SPIxBUFL.value   = 0x0000,    // BUFL=0
    .SPIxBUFH.value   = 0x0000,    // BUFH=0
    .SPIxBRGL.value   = 0x0000,    // BRGL=0
    .SPIxURDTL.value  = 0x0000,    // URDTL=0
    .SPIxURDTH.value  = 0x0000,    // URDTH=0
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-spi-methods
 * @brief   Enables power to an SPI peripheral instance
 * @return  0 = failure, powering on SPI peripheral instance was not successful
 * @return  1 = success, powering on SPI peripheral instance was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given SPI peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 *********************************************************************************/
static inline int p33c_SpiInstance_PowerOn(uint16_t spiInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (spiInstance)
    { 
        #ifdef _SPI1MD
        case 1: _SPI1MD = 0; retval = (1 - _SPI1MD); break; // Enable power to SPI1 peripheral
        #endif
        #ifdef _SPI2MD
        case 2: _SPI2MD = 0; retval = (1 - _SPI2MD); break; // Enable power to SPI2 peripheral
        #endif
        #ifdef _SPI3MD
        case 3: _SPI3MD = 0; retval = (1 - _SPI3MD); break; // Enable power to SPI3 peripheral
        #endif
        #ifdef _SPI4MD
        case 4: _SPI4MD = 0; retval = (1 - _SPI4MD); break; // Enable power to SPI4 peripheral
        #endif
        #ifdef _SPI5MD
        case 5: _SPI5MD = 0; retval = (1 - _SPI5MD); break; // Enable power to SPI5 peripheral
        #endif
        #ifdef _SPI6MD
        case 6: _SPI6MD = 0; retval = (1 - _SPI6MD); break; // Enable power to SPI6 peripheral
        #endif
        #ifdef _SPI7MD
        case 7: _SPI7MD = 0; retval = (1 - _SPI7MD); break; // Enable power to SPI7 peripheral
        #endif
        #ifdef _SPI8MD
        case 8: _SPI8MD = 0; retval = (1 - _SPI8MD); break; // Enable power to SPI8 peripheral
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-spi-methods
 * @brief   Disables power to an SPI peripheral instance
 * @param   spiInstance - Instance of the SPI module of type unsigned integer (e.g. 1=SPI1, 2=SPI2, etc.) 
 * @return  0 = failure, powering off SPI peripheral module was not successful
 * @return  1 = success, powering off SPI peripheral module was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  off the power supply to the given SPI peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 * @see @ref p33c-pral-pmd
 * 
 *********************************************************************************/   
static inline int p33c_SpiInstance_PowerOff(uint16_t spiInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (spiInstance)
    { 
        #ifdef _SPI1MD
        case 1: _SPI1MD = 1; retval = _SPI1MD; break; // Disable power to SPI1 peripheral
        #endif
        #ifdef _SPI2MD
        case 2: _SPI2MD = 1; retval = _SPI2MD; break; // Disable power to SPI2 peripheral
        #endif
        #ifdef _SPI3MD
        case 3: _SPI3MD = 1; retval = _SPI3MD; break; // Disable power to SPI3 peripheral
        #endif
        #ifdef _SPI4MD
        case 4: _SPI4MD = 1; retval = _SPI4MD; break; // Disable power to SPI4 peripheral
        #endif
        #ifdef _SPI5MD
        case 5: _SPI5MD = 1; retval = _SPI5MD; break; // Disable power to SPI5 peripheral
        #endif
        #ifdef _SPI6MD
        case 6: _SPI6MD = 1; retval = _SPI6MD; break; // Disable power to SPI6 peripheral
        #endif
        #ifdef _SPI7MD
        case 7: _SPI7MD = 1; retval = _SPI7MD; break; // Disable power to SPI7 peripheral
        #endif
        #ifdef _SPI8MD
        case 8: _SPI8MD = 1; retval = _SPI8MD; break; // Disable power to SPI8 peripheral
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}    

/*********************************************************************************
 * @ingroup p33c-pral-spi-methods
 * @brief   Enables a given SPI peripheral instance
 * @param   spiInstance - Instance of the SPI module of type unsigned integer (e.g. 1=SPI1, 2=SPI2, etc.)
 * @return  0 = failure, enabling SPI module was not successful
 * @return  1 = success, enabling SPI module was successful
 * 
 * @details
 *  This function enables the peripheral of desired SPI instance. 
 * 
 *********************************************************************************/
static inline int p33c_SpiInstance_Enable(uint16_t spiInstance) 
{
    int retval = 1;
    volatile P33C_SPI_INSTANCE_t* spi;   
    
    // Check if addressed instance is within valid range
    if (p33c_SpiInstance_Exists(spiInstance))
    {
        // Set pointer to memory address of desired SPI instance
        spi = p33c_SpiInstance_GetHandle(spiInstance);
        spi->SPIxCON1L.bits.SPIEN = 1;  // SPI module is enabled

         // Verifying configuration process        
         retval &= (bool)(spi->SPIxCON1L.bits.SPIEN == 1);
    }
    else
    {
        return(0);  // Return error code when addressed instance is out-of-range
    }

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-spi-methods
 * @brief   Disables a given SPI peripheral instance
 * @param   spiInstance - Instance of the SPI module of type unsigned integer (e.g. 1=SPI1, 2=SPI2, etc.)
 * @return  0 = failure, disabling SPI module was not successful
 * @return  1 = success, disabling SPI module was successful
 * 
 * @details
 *  This function disables the peripheral of desired SPI instance. 
 * 
 *********************************************************************************/
static inline int p33c_SpiInstance_Disable(uint16_t spiInstance)
{
    int retval = 1;
    volatile P33C_SPI_INSTANCE_t* spi;    
    
    // Check if addressed instance is within valid range
    if (p33c_SpiInstance_Exists(spiInstance))
    {
        // Set pointer to memory address of desired SPI instance
        spi = p33c_SpiInstance_GetHandle(spiInstance);
        spi->SPIxCON1L.bits.SPIEN = 0;  // SPI module is disabled

        // Verifying configuration process        
        retval &= (bool)(spi->SPIxCON1L.bits.SPIEN == 0);
    }
    else
    {
        return(0);  // Return error code when addressed instance is out-of-range
    }

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-spi-methods
 * @brief   Getting the contents of all SPI ports registers to the desired SPI instance
 * @param   spiInstance - Instance of the SPI port (e.g. 1 = SPI1, 2=SPI2, etc.) of type unsigned integer
 * @return  Generic SPI port Special Function Register set of type struct P33C_SPI_INSTANCE_t
 * 
 * @details
 *  This function copies the contents of all SPI module registers of the 
 *  specified generator instance (e.g. SPI1) to a user variable of type 
 *  P33C_SPI_INSTANCE_t. This 'virtual' SPI configuration can then, for  
 *  example, be analyzed and/or modified in user code and applied to another 
 *  SPI module using function p33c_SpiInstance_SetConfig(...). 
 * 
 *********************************************************************************/
static inline P33C_SPI_INSTANCE_t p33c_SpiInstance_GetConfig(uint16_t spiInstance)
{
    volatile P33C_SPI_INSTANCE_t* spi;
    
    // Check if addressed instance is within valid range
    if (p33c_SpiInstance_Exists(spiInstance))
    {
        // Set pointer to memory address of desired SPI instance
        spi = p33c_SpiInstance_GetHandle(spiInstance);
        
        return(*spi);
    }
    else 
    {
        return(spiInstanceConfigClear);  // Return clear config when addressed instance is out-of-range
    }
}

/*********************************************************************************
 * @ingroup p33c-pral-spi-methods
 * @brief   Writes a user-defined configuration to the SPI module registers
 * @param   spiInstance - Instance of the SPI module of type unsigned integer (e.g. 1=SPI1, 2=SPI2, etc.)
 * @param   spiConfig - Generic SPI module Special Function Register set of type P33C_SPI_INSTANCE_t
 * @return  0 = failure, setting SPI module configuration for SPI peripheral instance was not successful
 * @return  1 = success, setting SPI module configuration for SPI peripheral instance was successful
 * 
 * @details
 *  This function writes a user-defined SPI module configuration of type 
 *  P33C_SPI_INSTANCE_t to the given SPI peripheral instance (e.g. SPI1).
 * 
 *********************************************************************************/
static inline int p33c_SpiInstance_SetConfig(uint16_t spiInstance, P33C_SPI_INSTANCE_t spiConfig)
{
    int retval = 1;
    volatile P33C_SPI_INSTANCE_t* spi;    

    // Check if addressed instance is within valid range
    if (p33c_SpiInstance_Exists(spiInstance))
    {
        // Set pointer to memory address of desired SPI instance
        spi = p33c_SpiInstance_GetHandle(spiInstance);
        *spi = spiConfig;

        // Verifying configuration process
        retval &= (bool)(spi->SPIxCON1L.value == spiConfig.SPIxCON1L.value);
    }
    else
    {
        return(0);  // Return error code when addressed instance is out-of-range
    }

    return(retval);
}

#endif /* End of P33C_SPI_SFR_INTERFACE_H */

// __________________________
// end of file

