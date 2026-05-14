/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/**
 * @file    p33c_dma-d.h
 * @see     p33c_dma.h
 * @brief   Direct Memory Access Driver Module peripheral register abstraction data type declarations
 * @author  M91406
 * @details
 *   This additional header file contains defines for all required bit-settings of all related 
 *   special function registers of a peripheral module and/or instance. 
 *   This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_DMA_SFR_DECLARATIONS_H
#define	P33C_DMA_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_dma-f.h" // include register flags header file

#if defined (DMACH7)
static volatile uint16_t* p33c_DmaChannel_Handles[8]={
    &DMACH0, &DMACH1, &DMACH2, &DMACH3,
    &DMACH4, &DMACH5, &DMACH6, &DMACH7
};
#elif defined (DMACH6)
static volatile uint16_t* p33c_DmaChannel_Handles[7]={
    &DMACH0, &DMACH1, &DMACH2, &DMACH3,
    &DMACH4, &DMACH5, &DMACH6
};
#elif defined (DMACH5)
static volatile uint16_t* p33c_DmaChannel_Handles[6]={
    &DMACH0, &DMACH1, &DMACH2, &DMACH3,
    &DMACH4, &DMACH5
};
#elif defined (DMACH4)
static volatile uint16_t* p33c_DmaChannel_Handles[5]={
    &DMACH0, &DMACH1, &DMACH2, &DMACH3,
    &DMACH4
};
#elif defined (DMACH3)
static volatile uint16_t* p33c_DmaChannel_Handles[4]={
    &DMACH0, &DMACH1, &DMACH2, &DMACH3
};
#elif defined (DMACH2)
static volatile uint16_t* p33c_DmaChannel_Handles[3]={
    &DMACH0, &DMACH1, &DMACH2
};
#elif defined (DMACH1)
static volatile uint16_t* p33c_DmaChannel_Handles[2]={
    &DMACH0, &DMACH1
};
#elif defined (DMACH0)
static volatile uint16_t* p33c_DmaChannel_Handles[1]={
    &DMACH0
};
#else
#pragma message "selected device has no supported DMA channels"
#endif

// GENERIC PDM DMA MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_DMA_MODULE_s

    /***********************************************************************************
     * @addtogroup p33c-pral-dma-module-inheritance
     * @extends P33C_DMA_MODULE_s 
     * @{
     */

    /** 
     * @brief   DMA Engine Control Register inherited from device header file
     */
    union DMACON_u {
        struct tagDMACONBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register

    /** 
     * @brief   DMA Data Buffer Register inherited from device header file
     */
    union DMABUF_u {
        struct {
            uint16_t DBUF : 16; 
        } bits;                 // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // DMABUF: DMA Data Buffer Register

    /** 
     * @brief   DMA Low Address Limit Register inherited from device header file
     */
    union DMAL_u {
        struct {
            uint16_t LADDR : 16;
        } bits;                 // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // DMAL: DMA Low Address Limit Register
    
    /** 
     * @brief   DMA High Address Limit Register inherited from device header file
     */
    union DMAH_u {
        struct {
            uint16_t HADDR : 16;
        } bits;                 // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // DMAH: DMA High Address Limit Register    
    
    /** @} */ // end of inheritance declarations **************************************

    typedef union DMACON_u DMACON_t;    // DMACON: DMA Engine Control Register
    typedef union DMABUF_u DMABUF_t;    // DMABUF: DMA Data Buffer Register
    typedef union DMAL_u DMAL_t;        // DMAL: DMA Low Address Limit Register
    typedef union DMAH_u DMAH_t;        // DMAH: DMA High Address Limit Register
    
    /***********************************************************************************
     * @ingroup p33c-pral-dma-module-properties
     * @struct  P33C_DMA_MODULE_s
     * @brief   Abstracted set of Special Function Registers of the Direct Memory Access module 
     * @details
     *  This structure defines an abstracted set of Special Function Registers of 
     *  Direct Memory Access peripheral module base registers. Users can use this 
     *  abstracted set of registers to capture register settings from or write  
     *  generic register settings to these peripheral base registers.
     * 
     **********************************************************************************/

    struct P33C_DMA_MODULE_s {
        
        DMACON_t DMACON;    // DMACON: DMA Engine Control Register
        DMABUF_t DMABUF;    // DMABUF: DMA Data Buffer Register
        DMAL_t DMAL;        // DMAL: DMA Low Address Limit Register
        DMAH_t DMAH;        // DMAH: DMA High Address Limit Register
        
    } __attribute__((aligned));
    
    typedef struct P33C_DMA_MODULE_s P33C_DMA_MODULE_t; // DMA MODULE REGISTER SET
    
    /*********************************************************************************
     * @ingroup p33c-pral-dma-module-methods
     * @brief   Gets pointer to DMA Module SFR set
     * @param   void
     * @return  P33C_DMA_MODULE_t Pointer to DMA module special function register set object 
     *  
     * @details
     *  This function returns the pointer to a DMA module register set in
     *  Special Function Register memory space. This pointer can be used to 
     *  directly write to/read from the Special Function Registers of the 
     *  DMA peripheral module configuration.
     *********************************************************************************/
    #define p33c_DmaModule_GetHandle() (P33C_DMA_MODULE_t*)&DMACON
    
#endif // end of P33C_DMA_MODULE_s

// GENERIC DMA INSTANCE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_DMA_INSTANCE_s

    /***********************************************************************************
     * @addtogroup p33c-pral-dma-instance-inheritance
     * @extends P33C_DMA_INSTANCE_s 
     * @{
     */

    /** 
     * @brief   DMA Channel x Control Register inherited from device header file
     */
    union DMACHx_u {
        struct tagDMACH0BITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACHx: DMA Channel x Control Register
    
    /** 
     * @brief   DMA Channel n Interrupt Control Register inherited from device header file
     */
    union DMAINTx_u {
        struct tagDMAINT0BITS bits; // Register bit-field
        uint16_t value;             // 16-bit wide register value
    } __attribute__((packed)); // DMAINTn: DMA Channel n Interrupt Control Register
    
    /** 
     * @brief   DMA Channel x Source Address Register inherited from device header file
     */
    union DMASRCx_u {
        struct {
            uint16_t SADDR : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // DMASRCx: DMA Channel x Source Address Register

    /** 
     * @brief   DMA Channel x Destination Address Register inherited from device header file
     */
    union DMADSTx_u {
        struct {
            uint16_t DADDR : 16;    // Register bit-field
        } bits;                     // Register bit-field
        uint16_t value;             // 16-bit wide register value
    } __attribute__((packed)); // DDMADSTx: DMA Channel x Destination Address Register
    
    /** 
     * @brief   DMA Channel n Count Register inherited from device header file
     */
    union DMACNTx_u {
        struct {
            uint16_t CNT : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // DMACNTn: DMA Channel n Count Register
    
    /** @} */ // end of inheritance declarations **************************************
    
    typedef union DMACHx_u  DMACHx_t;   // DMACHx: DMA Channel x Control Register
    typedef union DMAINTx_u DMAINTx_t;  // DMAINTn: DMA Channel n Interrupt Control Register
    typedef union DMASRCx_u DMASRCx_t;  // DMASRCx: DMA Channel x Source Address Register
    typedef union DMADSTx_u DMADSTx_t;  // DDMADSTx: DMA Channel x Destination Address Register
    typedef union DMACNTx_u DMACNTx_t;  // DMACNTn: DMA Channel n Count Register
    
    /***********************************************************************************
     * @ingroup p33c-pral-dma-instance-properties
     * @struct  P33C_DMA_INSTANCE_s
     * @brief   Abstracted set of Special Function Registers of a Direct Memory Access peripheral instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of
     *  Direct Memory Access peripheral instance registers. It provides an 
     *  abstracted set of registers to capture register settings from or write   
     *  generic register settings to this peripheral instance.
     * 
     **********************************************************************************/
    struct P33C_DMA_INSTANCE_s{
        DMACHx_t  DMACHx;   // DMACHx: DMA Channel x Control Register
        DMAINTx_t  DMAINTx;  // DMAINTn: DMA Channel n Interrupt Control Register
        DMASRCx_t DMASRCx;  // DMASRCx: DMA Channel x Source Address Register
        DMADSTx_t DMADSTx;  // DDMADSTx: DMA Channel x Destination Address Register
        DMACNTx_t DMACNTx;  // DMACNTn: DMA Channel n Count Register
    } __attribute__((aligned));
    typedef struct P33C_DMA_INSTANCE_s P33C_DMA_INSTANCE_t; // DMA INSTANCE REGISTER SET

    /*********************************************************************************
     * @ingroup p33c-pral-dma-instance-constants
     * @brief   Gets the minimum address of the DMA addressable range
     * @details
     *  This macro returns the minimum memory address of the total memory range 
     *  addressable by the DMA peripheral instances. Users can use this address 
     *  to restore the default memory range addressable by the DMA peripheral.
     **********************************************************************************/

    #define P33C_DACL_DEFAULT   0x0000  // Default DMA address range minimum address

    /*********************************************************************************
     * @ingroup p33c-pral-dma-instance-constants
     * @brief   Gets the maximum address of the DMA addressable range
     * @details
     *  This macro derives the maximum memory address of the total memory range 
     *  addressable by the DMA peripheral instances. Users can use this address 
     *  to restore the default memory range addressable by the DMA peripheral.
     **********************************************************************************/

    #define P33C_DACH_DEFAULT   0x4FFF  // Default DMA address range maximum address

    /*********************************************************************************
     * @ingroup p33c-pral-dma-instance-methods
     * @brief   Gets pointer to DMA Module SFR set
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  P33C_DMA_INSTANCE_t* Pointer to DMA module special function register set object 
     *  
     * @details
     *  This function returns the pointer to a DMA peripheral instance register 
     *  set in Special Function Register memory space. This pointer can be used 
     *  to directly write to/read from the Special Function Registers of the 
     *  DMA peripheral instance configuration.
     * 
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     *  Please use @ref p33c_DmaInstance_Exists to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_DmaInstance_Exists
     *********************************************************************************/
    #define p33c_DmaInstance_GetHandle(pInstance)   (P33C_DMA_INSTANCE_t*)p33c_DmaChannel_Handles[(pInstance)]

    /*********************************************************************************
     * @ingroup p33c-pral-dma-instance-methods
     * @brief   Checks if the peripheral instance specified by dmaInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  requested peripheral instance index does exist 
     * @return  false: requested peripheral instance index does not exist 
     *  
     * @details
     *  This function provides a guarding condition test to verify if a specific 
     *  peripheral instance exists before accessing it. 
     *********************************************************************************/
    #define p33c_DmaInstance_Exists(pInstance) (bool)(((0 <= pInstance) && (pInstance < p33c_DmaInstances)) ? true : false)

#endif /* End of P33C_DMA_INSTANCE_s */
#endif /* End of P33C_DMA_SFR_DECLARATIONS_H */

// ______________________________
// end of file
