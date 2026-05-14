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
 * @file    p33c_msi-d.h
 * @see     p33c_msi.h
 * @brief   Main-to-Secondary Core Interface Module peripheral register abstraction data type declarations
 * @author  M91406
 * @details
 *   This additional header file contains defines for all required bit-settings of all related 
 *   special function registers of a peripheral module and/or instance. 
 *   This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_MSI_SFR_DECLARATIONS_H
#define	P33C_MSI_SFR_DECLARATIONS_H

// Include header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // Include extended device identifier macros

#if defined (__P33SMPS_CH__)

#if defined (__P33SMPS_CHM__) 
    static uint16_t*p33c_MsiMailBox_Handles[16]={
        &MSI1MBX0D, &MSI1MBX1D, &MSI1MBX2D, &MSI1MBX3D, &MSI1MBX4D, &MSI1MBX5D,
        &MSI1MBX6D, &MSI1MBX7D, &MSI1MBX8D, &MSI1MBX9D, &MSI1MBX10D, &MSI1MBX11D,
        &MSI1MBX12D, &MSI1MBX13D, &MSI1MBX14D, &MSI1MBX15D
    };
#elif defined(__P33SMPS_CHS__) 
    static uint16_t*p33c_MsiMailBox_Handles[16]={
        &SI1MBX0D, &SI1MBX1D, &SI1MBX2D, &SI1MBX3D, &SI1MBX4D, &SI1MBX5D,
        &SI1MBX6D, &SI1MBX7D, &SI1MBX8D, &SI1MBX9D, &SI1MBX10D, &SI1MBX11D,
        &SI1MBX12D, &SI1MBX13D, &SI1MBX14D, &SI1MBX15D
    };
#endif

// GENERIC MSI MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_MSI_MODULE_s

    /***********************************************************************************
     * @addtogroup p33c-pral-msi-module-inheritance
     * @extends P33C_MSI_MODULE_s 
     * @{
     */

#if defined (__P33SMPS_CHM__)

    /** 
     * @brief   MSI1 Master Control Register inherited from device header file
     */
    union MSI1CON_u {
        struct tagMSI1CONBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register

    /** 
     * @brief   MSI1 Master Status Register inherited from device header file
     */
    union MSI1STAT_u {
        struct tagMSI1STATBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register

    /** 
     * @brief   MSI1 Master InterLock Key Register inherited from device header file
     */
    union MSI1KEY_u {
        struct tagMSI1KEYBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox Data Transfer Status Register inherited from device header file
     */
    union MSI1MBXS_u {
        struct tagMSI1MBXSBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 0 Data Register inherited from device header file
     */
    union MSI1MBX0D_u {
        struct tagMSI1MBX0DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 1 Data Register inherited from device header file
     */
    union MSI1MBX1D_u {
        struct tagMSI1MBX1DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 2 Data Register inherited from device header file
     */
    union MSI1MBX2D_u {
        struct tagMSI1MBX2DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 3 Data Register inherited from device header file
     */
    union MSI1MBX3D_u {
        struct tagMSI1MBX3DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 4 Data Register inherited from device header file
     */
    union MSI1MBX4D_u {
        struct tagMSI1MBX4DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 5 Data Register inherited from device header file
     */
    union MSI1MBX5D_u {
        struct tagMSI1MBX5DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 6 Data Register inherited from device header file
     */
    union MSI1MBX6D_u {
        struct tagMSI1MBX6DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 7 Data Register inherited from device header file
     */
    union MSI1MBX7D_u {
        struct tagMSI1MBX7DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 8 Data Register inherited from device header file
     */
    union MSI1MBX8D_u {
        struct tagMSI1MBX8DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 9 Data Register inherited from device header file
     */
    union MSI1MBX9D_u {
        struct tagMSI1MBX9DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 10 Data Register inherited from device header file
     */
    union MSI1MBX10D_u {
        struct tagMSI1MBX10DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 11 Data Register inherited from device header file
     */
    union MSI1MBX11D_u {
        struct tagMSI1MBX11DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 12 Data Register inherited from device header file
     */
    union MSI1MBX12D_u {
        struct tagMSI1MBX12DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 13 Data Register inherited from device header file
     */
    union MSI1MBX13D_u {
        struct tagMSI1MBX13DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 14 Data Register inherited from device header file
     */
    union MSI1MBX14D_u {
        struct tagMSI1MBX14DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 15 Data Register inherited from device header file
     */
    union MSI1MBX15D_u {
        struct tagMSI1MBX15DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master FIFO Control/Status Register inherited from device header file
     */
    union MSI1FIFOCS_u {
        struct tagMSI1FIFOCSBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI Master Read (Slave Write) FIFO Data Register inherited from device header file
     */
    union MRSWFDATA_u {
        struct tagMRSWFDATABITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI Master Write (Slave Read) FIFO Data Register inherited from device header file
     */
    union MWSRFDATA_u {
        struct tagMWSRFDATABITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    
    /** @} */ // end of inheritance declarations **************************************

    typedef union MSI1CON_u     MSI1CON_t;    // MSI1CON: MSI Control Register
    typedef union MSI1STAT_u    MSI1STAT_t;   // MSI1STAT: MSI Status Register
    typedef union MSI1KEY_u     MSI1KEY_t;    // MSI1KEY: MSI InterLock Key Register
    typedef union MSI1MBXS_u    MSI1MBXS_t;   // MSI1MBXS: MSI Mailbox Data Transfer Status Register
    typedef union MSI1MBX0D_u   MSI1MBX0D_t;   // MSI1MBX0D: MSI Mailbox 0 Data Register
    typedef union MSI1MBX1D_u   MSI1MBX1D_t;   // MSI1MBX1D: MSI Mailbox 1 Data Register
    typedef union MSI1MBX2D_u   MSI1MBX2D_t;   // MSI1MBX2D: MSI Mailbox 2 Data Register
    typedef union MSI1MBX3D_u   MSI1MBX3D_t;   // MSI1MBX3D: MSI Mailbox 3 Data Register
    typedef union MSI1MBX4D_u   MSI1MBX4D_t;   // MSI1MBX4D: MSI Mailbox 4 Data Register
    typedef union MSI1MBX5D_u   MSI1MBX5D_t;   // MSI1MBX5D: MSI Mailbox 5 Data Register
    typedef union MSI1MBX6D_u   MSI1MBX6D_t;   // MSI1MBX6D: MSI Mailbox 6 Data Register
    typedef union MSI1MBX7D_u   MSI1MBX7D_t;   // MSI1MBX7D: MSI Mailbox 7 Data Register
    typedef union MSI1MBX8D_u   MSI1MBX8D_t;   // MSI1MBX8D: MSI Mailbox 8 Data Register
    typedef union MSI1MBX9D_u   MSI1MBX9D_t;   // MSI1MBX9D: MSI Mailbox 9 Data Register
    typedef union MSI1MBX10D_u  MSI1MBX10D_t;   // MSI1MBX10D: MSI Mailbox 10 Data Register
    typedef union MSI1MBX11D_u  MSI1MBX11D_t;   // MSI1MBX11D: MSI Mailbox 11 Data Register
    typedef union MSI1MBX12D_u  MSI1MBX12D_t;   // MSI1MBX12D: MSI Mailbox 12 Data Register
    typedef union MSI1MBX13D_u  MSI1MBX13D_t;   // MSI1MBX13D: MSI Mailbox 13 Data Register    
    typedef union MSI1MBX14D_u  MSI1MBX14D_t;   // MSI1MBX14D: MSI Mailbox 14 Data Register
    typedef union MSI1MBX15D_u  MSI1MBX15D_t;   // MSI1MBX15D: MSI Mailbox 15 Data Register
    typedef union MSI1FIFOCS_u  MSI1FIFOCS_t; // MSI1FIFOCS: MSI FIFO Control/Status Register 
    typedef union MRSWFDATA_u   MRSWFDATA_t;  // MRSWFDATA: MSI Master Read (Slave Write) FIFO Data Register
    typedef union MWSRFDATA_u   MWSRFDATA_t;  // MWSRFDATA: Master Write (Slave Read) FIFO Data Register
    
#elif defined (__P33SMPS_CHS__)  
    
   /** 
     * @brief   MSI1 Slave Control Register inherited from device header file
     */
    union SI1CON_u {
        struct tagSI1CONBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register

    /** 
     * @brief   MSI1 Slave Status Register inherited from device header file
     */
    union SI1STAT_u {
        struct tagSI1STATBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Slave Mailbox Data Transfer Status Register inherited from device header file
     */
    union SI1MBXS_u {
        struct tagSI1MBXSBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 0 Data Register inherited from device header file
     */
    union SI1MBX0D_u {
        struct tagSI1MBX0DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 1 Data Register inherited from device header file
     */
    union SI1MBX1D_u {
        struct tagSI1MBX1DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 2 Data Register inherited from device header file
     */
    union SI1MBX2D_u {
        struct tagSI1MBX2DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 3 Data Register inherited from device header file
     */
    union SI1MBX3D_u {
        struct tagSI1MBX3DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 4 Data Register inherited from device header file
     */
    union SI1MBX4D_u {
        struct tagSI1MBX4DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Master Mailbox 5 Data Register inherited from device header file
     */
    union SI1MBX5D_u {
        struct tagSI1MBX5DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 6 Data Register inherited from device header file
     */
    union SI1MBX6D_u {
        struct tagSI1MBX6DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 7 Data Register inherited from device header file
     */
    union SI1MBX7D_u {
        struct tagSI1MBX7DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Master Mailbox 8 Data Register inherited from device header file
     */
    union SI1MBX8D_u {
        struct tagSI1MBX8DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 9 Data Register inherited from device header file
     */
    union SI1MBX9D_u {
        struct tagSI1MBX9DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 10 Data Register inherited from device header file
     */
    union SI1MBX10D_u {
        struct tagSI1MBX10DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 11 Data Register inherited from device header file
     */
    union SI1MBX11D_u {
        struct tagSI1MBX11DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 12 Data Register inherited from device header file
     */
    union SI1MBX12D_u {
        struct tagSI1MBX12DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 13 Data Register inherited from device header file
     */
    union SI1MBX13D_u {
        struct tagSI1MBX13DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 14 Data Register inherited from device header file
     */
    union SI1MBX14D_u {
        struct tagSI1MBX14DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   SI1 Slave Mailbox 15 Data Register inherited from device header file
     */
    union SI1MBX15D_u {
        struct tagSI1MBX15DBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI1 Slave FIFO Control/Status Register inherited from device header file
     */
    union SI1FIFOCS_u {
        struct tagSI1FIFOCSBITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI Slave Write (Master Read) FIFO Data Register inherited from device header file
     */
    union SWMRFDATA_u {
        struct tagSRMWFDATABITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    
    /** 
     * @brief   MSI Slave Read (Master Write) FIFO Data Register inherited from device header file
     */
    union SRMWFDATA_u {
        struct tagSRMWFDATABITS bits; // Register bit-field
        uint16_t value;            // 16-bit wide register value
    } __attribute__((packed)); // DMACON: DMA Engine Control Register
    

    /** @} */ // end of inheritance declarations **************************************

    typedef union SI1CON_u      SI1CON_t;     // SI1CON: SI Control Register
    typedef union SI1STAT_u     SI1STAT_t;    // SI1STAT: SI Status Register
    typedef union SI1MBXS_u     SI1MBXS_t;    // SI1MBXS: SI Mailbox Data Transfer Status Register
    typedef union SI1MBX0D_u    SI1MBX0D_t;   // SI1MBX0D: MSI Mailbox 0 Data Register
    typedef union SI1MBX1D_u    SI1MBX1D_t;   // SI1MBX1D: MSI Mailbox 1 Data Register
    typedef union SI1MBX2D_u    SI1MBX2D_t;   // SI1MBX2D: MSI Mailbox 2 Data Register
    typedef union SI1MBX3D_u    SI1MBX3D_t;   // SI1MBX3D: MSI Mailbox 3 Data Register
    typedef union SI1MBX4D_u    SI1MBX4D_t;   // SI1MBX4D: MSI Mailbox 4 Data Register
    typedef union SI1MBX5D_u    SI1MBX5D_t;   // SI1MBX5D: MSI Mailbox 5 Data Register
    typedef union SI1MBX6D_u    SI1MBX6D_t;   // SI1MBX6D: MSI Mailbox 6 Data Register
    typedef union SI1MBX7D_u    SI1MBX7D_t;   // SI1MBX7D: MSI Mailbox 7 Data Register
    typedef union SI1MBX8D_u    SI1MBX8D_t;   // SI1MBX8D: MSI Mailbox 8 Data Register
    typedef union SI1MBX9D_u    SI1MBX9D_t;   // SI1MBX9D: MSI Mailbox 9 Data Register
    typedef union SI1MBX10D_u   SI1MBX10D_t;   // SI1MBX10D: MSI Mailbox 10 Data Register
    typedef union SI1MBX11D_u   SI1MBX11D_t;   // SI1MBX11D: MSI Mailbox 11 Data Register
    typedef union SI1MBX12D_u   SI1MBX12D_t;   // SI1MBX12D: MSI Mailbox 12 Data Register
    typedef union SI1MBX13D_u   SI1MBX13D_t;   // SI1MBX13D: MSI Mailbox 13 Data Register    
    typedef union SI1MBX14D_u   SI1MBX14D_t;   // SI1MBX14D: MSI Mailbox 14 Data Register
    typedef union SI1MBX15D_u   SI1MBX15D_t;   // SI1MBX15D: MSI Mailbox 15 Data Register
    typedef union SI1FIFOCS_u   SI1FIFOCS_t;  // SI1FIFOCS: SI FIFO Control/Status Register 
    typedef union SRMWFDATA_u   SRMWFDATA_t;  // SRMWFDATA: Slave Read (Master Write) FIFO Data Register
    typedef union SWMRFDATA_u   SWMRFDATA_t;  // SWMRFDATA: Slave Write (Master Read) FIFO Data Register
    
#endif

      
    /***********************************************************************************
     * @ingroup p33c-pral-msi-module-properties
     * @struct  P33C_MSI_MODULE_s
     * @brief   Abstracted set of Special Function Registers of the Master Slave Interface module 
     * @details
     *  This structure defines an abstracted set of Special Function Registers of 
     *  Direct Memory Access peripheral module base registers. Users can use this 
     *  abstracted set of registers to capture register settings from or write  
     *  generic register settings to these peripheral base registers.
     * 
     **********************************************************************************/

    struct P33C_MSI_MODULE_s {
  
    #if defined (__P33SMPS_CHM__) 

        MSI1CON_t   MSI1CON;    // MSI1CON: MSI Control Register
        MSI1STAT_t  MSI1STAT;   // MSI1STAT: MSI Status Register
        MSI1KEY_t   MSI1KEY;    // MSI1KEY: MSI InterLock Key Register
        MSI1MBXS_t  MSI1MBXS;   // MSI1MBXS: MSI Mailbox Data Transfer Status Register
        MSI1MBX0D_t  MSI1MBX0D;   // MSI1MBX0D: MSI Mailbox 0 Data Register 
        MSI1MBX1D_t  MSI1MBX1D;   // MSI1MBX1D: MSI Mailbox 1 Data Register
        MSI1MBX2D_t  MSI1MBX2D;   // MSI1MBX2D: MSI Mailbox 2 Data Register
        MSI1MBX3D_t  MSI1MBX3D;   // MSI1MBX3D: MSI Mailbox 3 Data Register
        MSI1MBX4D_t  MSI1MBX4D;   // MSI1MBX4D: MSI Mailbox 4 Data Register
        MSI1MBX5D_t  MSI1MBX5D;   // MSI1MBX5D: MSI Mailbox 5 Data Register
        MSI1MBX6D_t  MSI1MBX6D;   // MSI1MBX6D: MSI Mailbox 6 Data Register
        MSI1MBX7D_t  MSI1MBX7D;   // MSI1MBX7D: MSI Mailbox 7 Data Register
        MSI1MBX8D_t  MSI1MBX8D;   // MSI1MBX8D: MSI Mailbox 8 Data Register
        MSI1MBX9D_t  MSI1MBX9D;   // MSI1MBX9D: MSI Mailbox 9 Data Register
        MSI1MBX10D_t MSI1MBX10D; // MSI1MBX10D: MSI Mailbox 10 Data Register
        MSI1MBX11D_t MSI1MBX11D; // MSI1MBX11D: MSI Mailbox 11 Data Register
        MSI1MBX12D_t MSI1MBX12D; // MSI1MBX12D: MSI Mailbox 12 Data Register
        MSI1MBX13D_t MSI1MBX13D; // MSI1MBX13D: MSI Mailbox 13 Data Register    
        MSI1MBX14D_t MSI1MBX14D; // MSI1MBX14D: MSI Mailbox 14 Data Register
        MSI1MBX15D_t MSI1MBX15D; // MSI1MBX15D: MSI Mailbox 15 Data Register
        MSI1FIFOCS_t MSI1FIFOCS;// MSI1FIFOCS: MSI FIFO Control/Status Register  
        MRSWFDATA_t MRSWFDATA;  // MRSWFDATA: MSI Master Read (Slave Write) FIFO Data Register
        MWSRFDATA_t MWSRFDATA;  // MWSRFDATA: Master Write (Slave Read) FIFO Data Register

    #elif defined (__P33SMPS_CHS__)  
        SI1CON_t    SI1CON;     // SI1CON: SI Control Register
        SI1STAT_t   SI1STAT;    // SI1STAT: SI Status Register
        SI1MBXS_t   SI1MBXS;    // SI1MBXS: SI Mailbox Data Transfer Status Register
        SI1MBX0D_t  SI1MBX0D;   // SI1MBX0D: SI Mailbox 0 Data Register 
        SI1MBX1D_t  SI1MBX1D;   // SI1MBX1D: SI Mailbox 1 Data Register
        SI1MBX2D_t  SI1MBX2D;   // SI1MBX2D: SI Mailbox 2 Data Register
        SI1MBX3D_t  SI1MBX3D;   // SI1MBX3D: SI Mailbox 3 Data Register
        SI1MBX4D_t  SI1MBX4D;   // SI1MBX4D: SI Mailbox 4 Data Register
        SI1MBX5D_t  SI1MBX5D;   // SI1MBX5D: SI Mailbox 5 Data Register
        SI1MBX6D_t  SI1MBX6D;   // SI1MBX6D: SI Mailbox 6 Data Register
        SI1MBX7D_t  SI1MBX7D;   // SI1MBX7D: SI Mailbox 7 Data Register
        SI1MBX8D_t  SI1MBX8D;   // SI1MBX8D: SI Mailbox 8 Data Register
        SI1MBX9D_t  SI1MBX9D;   // SI1MBX9D: SI Mailbox 9 Data Register
        SI1MBX10D_t SI1MBX10D; // SI1MBX10D: SI Mailbox 10 Data Register
        SI1MBX11D_t SI1MBX11D; // SI1MBX11D: SI Mailbox 11 Data Register
        SI1MBX12D_t SI1MBX12D; // SI1MBX12D: SI Mailbox 12 Data Register
        SI1MBX13D_t SI1MBX13D; // SI1MBX13D: SI Mailbox 13 Data Register    
        SI1MBX14D_t SI1MBX14D; // SI1MBX14D: SI Mailbox 14 Data Register
        SI1MBX15D_t SI1MBX15D; // SI1MBX15D: SI Mailbox 15 Data Register
        SI1FIFOCS_t SI1FIFOCS;  // SI1FIFOCS: SI FIFO Control/Status Register 
        SWMRFDATA_t SWMRFDATA;  // SWMRFDATA: Slave Write (Master Read) FIFO Data Register
        SRMWFDATA_t SRMWFDATA;  // SRMWFDATA: Slave Read (Master Write) FIFO Data Register

    #endif
        
    } __attribute__((aligned));
    
    typedef struct P33C_MSI_MODULE_s P33C_MSI_MODULE_t; // MSI MODULE REGISTER SET
    
    /*********************************************************************************
     * @fn      volatile P33C_MSI_MODULE_t* p33c_MsiModule_GetHandle(void)
     * @ingroup p33c-pral-msi-module-methods
     * @brief   Gets pointer to MSI Module SFR set
     * @param   void
     * @return  P33C_MSI_MODULE_t Pointer to MSI module special function register set object 
     *  
     * @details
     *  This function returns the pointer to a MSI module register set in
     *  Special Function Register memory space. This pointer can be used to 
     *  directly write to/read from the Special Function Registers of the 
     *  DMA peripheral module configuration.
     *********************************************************************************/
    #if defined (__P33SMPS_CHM__) 
    #define p33c_MsiModule_GetHandle() (P33C_MSI_MODULE_t*)&MSI1CON
    #elif defined (__P33SMPS_CHS__) 
    #define p33c_MsiModule_GetHandle() (P33C_MSI_MODULE_t*)&SI1CON
    #endif
    
#endif // end of P33C_MSI_MODULE_s    
#endif  /* __P33SMPS_CH__ */
#endif	/* End of P33C_MSI_SFR_DECLARATIONS_H */

// ______________________________
// end of file
