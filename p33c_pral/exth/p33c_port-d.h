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
 * @file    p33c_port-d.h
 * @see     p33c_port.h
 * @brief   Device Port Instance register abstraction data type declarations
 * @author  M91406
 * @details
 *  This additional header file contains defines for all required bit-settings of all 
 *  related special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PORT_SFR_DECLARATIONS_H
#define	P33C_PORT_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // include SMPS device family abstraction declarations

#if defined (ANSELF)
static volatile uint16_t* p33c_PortInstance_Handles[6]={
    &ANSELA, &ANSELB, &ANSELC, &ANSELD, 
    &ANSELE, &ANSELF
};
#elif defined (ANSELE)
static volatile uint16_t* p33c_PortInstance_Handles[5]={
    &ANSELA, &ANSELB, &ANSELC, &ANSELD, 
    &ANSELE
};
#elif defined (ANSELD)
static volatile uint16_t* p33c_PortInstance_Handles[4]={
    &ANSELA, &ANSELB, &ANSELC, &ANSELD
};
#elif defined (ANSELC)
static volatile uint16_t* p33c_PortInstance_Handles[3]={
    &ANSELA, &ANSELB, &ANSELC
};
#elif defined (ANSELB)
static volatile uint16_t* p33c_PortInstance_Handles[2]={
    &ANSELA, &ANSELB
};
#elif defined (ANSELA)
static volatile uint16_t* p33c_PortInstance_Handles[1]={
    &ANSELA
};
#else
static volatile uint16_t* p33c_PortInstance_Handles[0];
#pragma message "selected device has no supported ports"
#endif

/*********************************************************************************
 * @ingroup p33c-pral-port-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 **********************************************************************************/
static const uint16_t p33c_PortInstances = (sizeof(p33c_PortInstance_Handles)/sizeof(p33c_PortInstance_Handles[0]));

// GENERIC DEVICE PORT INSTANCE SPECIAL FUNCTION REGISTER SET
// DO NOT REORDER ELEMENTS AS THEY MAP ONTO DEVICE REGISTER MEMORY !!!
#ifndef P33C_PORT_INSTANCE_s

    /***********************************************************************************
     * @addtogroup p33c-pral-port-inheritance
     * @extends P33C_PORT_INSTANCE_s 
     * @{
     */

    /** 
     * @brief   Device Port Analog Select Register (emulated)
     */
    struct ANSELx_s {
        uint16_t ANSELx0:1;     // Bit 0:  Device Port Analog Select Register bit 
        uint16_t ANSELx1:1;     // Bit 1:  Device Port Analog Select Register bit 
        uint16_t ANSELx2:1;     // Bit 2:  Device Port Analog Select Register bit 
        uint16_t ANSELx3:1;     // Bit 3:  Device Port Analog Select Register bit 
        uint16_t ANSELx4:1;     // Bit 4:  Device Port Analog Select Register bit 
        uint16_t ANSELx5:1;     // Bit 5:  Device Port Analog Select Register bit 
        uint16_t ANSELx6:1;     // Bit 6:  Device Port Analog Select Register bit 
        uint16_t ANSELx7:1;     // Bit 7:  Device Port Analog Select Register bit 
        uint16_t ANSELx8:1;     // Bit 8:  Device Port Analog Select Register bit 
        uint16_t ANSELx9:1;     // Bit 9:  Device Port Analog Select Register bit 
        uint16_t ANSELx10:1;    // Bit 10: Device Port Analog Select Register bit 
        uint16_t ANSELx11:1;    // Bit 11: Device Port Analog Select Register bit 
        uint16_t ANSELx12:1;    // Bit 12: Device Port Analog Select Register bit 
        uint16_t ANSELx13:1;    // Bit 13: Device Port Analog Select Register bit 
        uint16_t ANSELx14:1;    // Bit 14: Device Port Analog Select Register bit 
        uint16_t ANSELx15:1;    // Bit 15: Device Port Analog Select Register bit 
    } __attribute__((packed)); //ANSELx: ANALOG SELECT FOR PORTx REGISTER 
    union ANSELx_u {   
        volatile struct ANSELx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // ANSELx: ANALOG SELECT FOR PORTx REGISTER
    
    /** 
     * @brief   Device Port Output Enable Register (emulated)
     */
    struct TRISx_s {
      uint16_t TRISx0:1;     // Bit 0:  Device Port Output Enable Register bit 
      uint16_t TRISx1:1;     // Bit 1:  Device Port Output Enable Register bit 
      uint16_t TRISx2:1;     // Bit 2:  Device Port Output Enable Register bit 
      uint16_t TRISx3:1;     // Bit 3:  Device Port Output Enable Register bit 
      uint16_t TRISx4:1;     // Bit 4:  Device Port Output Enable Register bit 
      uint16_t TRISx5:1;     // Bit 5:  Device Port Output Enable Register bit 
      uint16_t TRISx6:1;     // Bit 6:  Device Port Output Enable Register bit 
      uint16_t TRISx7:1;     // Bit 7:  Device Port Output Enable Register bit 
      uint16_t TRISx8:1;     // Bit 8:  Device Port Output Enable Register bit 
      uint16_t TRISx9:1;     // Bit 9:  Device Port Output Enable Register bit 
      uint16_t TRISx10:1;    // Bit 10: Device Port Output Enable Register bit 
      uint16_t TRISx11:1;    // Bit 11: Device Port Output Enable Register bit 
      uint16_t TRISx12:1;    // Bit 12: Device Port Output Enable Register bit 
      uint16_t TRISx13:1;    // Bit 13: Device Port Output Enable Register bit 
      uint16_t TRISx14:1;    // Bit 14: Device Port Output Enable Register bit 
      uint16_t TRISx15:1;    // Bit 15: Device Port Output Enable Register bit 
    } __attribute__((packed)); //TRISx: OUTPUT ENABLE FOR PORTx REGISTER 
    union TRISx_u {   
        volatile struct TRISx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // TRISx: OUTPUT ENABLE FOR PORTx REGISTER
    
    /** 
     * @brief   Device Port Input Data Register (emulated)
     */
    struct PORTx_s {
      uint16_t PORTx0:1;     // Bit 0:  Device Port Data Input Value Register bit 
      uint16_t PORTx1:1;     // Bit 1:  Device Port Data Input Value Register bit 
      uint16_t PORTx2:1;     // Bit 2:  Device Port Data Input Value Register bit 
      uint16_t PORTx3:1;     // Bit 3:  Device Port Data Input Value Register bit 
      uint16_t PORTx4:1;     // Bit 4:  Device Port Data Input Value Register bit 
      uint16_t PORTx5:1;     // Bit 5:  Device Port Data Input Value Register bit 
      uint16_t PORTx6:1;     // Bit 6:  Device Port Data Input Value Register bit 
      uint16_t PORTx7:1;     // Bit 7:  Device Port Data Input Value Register bit 
      uint16_t PORTx8:1;     // Bit 8:  Device Port Data Input Value Register bit 
      uint16_t PORTx9:1;     // Bit 9:  Device Port Data Input Value Register bit 
      uint16_t PORTx10:1;    // Bit 10: Device Port Data Input Value Register bit 
      uint16_t PORTx11:1;    // Bit 11: Device Port Data Input Value Register bit 
      uint16_t PORTx12:1;    // Bit 12: Device Port Data Input Value Register bit 
      uint16_t PORTx13:1;    // Bit 13: Device Port Data Input Value Register bit 
      uint16_t PORTx14:1;    // Bit 14: Device Port Data Input Value Register bit 
      uint16_t PORTx15:1;    // Bit 15: Device Port Data Input Value Register bit 
    }__attribute__((packed)); // PORTx: INPUT DATA FOR PORTx REGISTER
    union PORTx_u {   
        volatile struct PORTx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // PORTx: INPUT DATA FOR PORTx REGISTER

    /** 
     * @brief   Device Port Output Port Latch Register (emulated)
     */
    struct LATx_s {
      uint16_t LATx0:1;     // Bit 0:  Device Port Latch Register bit 
      uint16_t LATx1:1;     // Bit 1:  Device Port Latch Register bit 
      uint16_t LATx2:1;     // Bit 2:  Device Port Latch Register bit 
      uint16_t LATx3:1;     // Bit 3:  Device Port Latch Register bit 
      uint16_t LATx4:1;     // Bit 4:  Device Port Latch Register bit 
      uint16_t LATx5:1;     // Bit 5:  Device Port Latch Register bit 
      uint16_t LATx6:1;     // Bit 6:  Device Port Latch Register bit 
      uint16_t LATx7:1;     // Bit 7:  Device Port Latch Register bit 
      uint16_t LATx8:1;     // Bit 8:  Device Port Latch Register bit 
      uint16_t LATx9:1;     // Bit 9:  Device Port Latch Register bit 
      uint16_t LATx10:1;    // Bit 10: Device Port Latch Register bit 
      uint16_t LATx11:1;    // Bit 11: Device Port Latch Register bit 
      uint16_t LATx12:1;    // Bit 12: Device Port Latch Register bit 
      uint16_t LATx13:1;    // Bit 13: Device Port Latch Register bit 
      uint16_t LATx14:1;    // Bit 14: Device Port Latch Register bit 
      uint16_t LATx15:1;    // Bit 15: Device Port Latch Register bit 
    }__attribute__((packed)); // LATx: OUTPUT PORT LATCH DATA FOR PORTx REGISTER
    union LATx_u {   
        volatile struct LATx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // LATx: OUTPUT DATA FOR PORTx REGISTER

    /** 
     * @brief   Device Port Open-Drain Enable Register (emulated)
     */
    struct ODCx_s {
      uint16_t ODCx0:1;     // Bit 0:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx1:1;     // Bit 1:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx2:1;     // Bit 2:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx3:1;     // Bit 3:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx4:1;     // Bit 4:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx5:1;     // Bit 5:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx6:1;     // Bit 6:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx7:1;     // Bit 7:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx8:1;     // Bit 8:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx9:1;     // Bit 9:  Device Port Open-Drain Enable Register bit 
      uint16_t ODCx10:1;    // Bit 10: Device Port Open-Drain Enable Register bit 
      uint16_t ODCx11:1;    // Bit 11: Device Port Open-Drain Enable Register bit 
      uint16_t ODCx12:1;    // Bit 12: Device Port Open-Drain Enable Register bit 
      uint16_t ODCx13:1;    // Bit 13: Device Port Open-Drain Enable Register bit 
      uint16_t ODCx14:1;    // Bit 14: Device Port Open-Drain Enable Register bit 
      uint16_t ODCx15:1;    // Bit 15: Device Port Open-Drain Enable Register bit 
    }__attribute__((packed)); // ODCx: OPEN-DRAIN ENABLE FOR PORTx REGISTER
    union ODCx_u {   
        volatile struct ODCx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // ODCx: OPEN-DRAIN ENABLE FOR PORTx REGISTER

    /** 
     * @brief   Device Port Change Notification Pull-Up Enable Register (emulated)
     */
    struct CNPUx_s {
      uint16_t CNPUx0:1;     // Bit 0:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx1:1;     // Bit 1:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx2:1;     // Bit 2:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx3:1;     // Bit 3:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx4:1;     // Bit 4:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx5:1;     // Bit 5:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx6:1;     // Bit 6:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx7:1;     // Bit 7:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx8:1;     // Bit 8:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx9:1;     // Bit 9:  Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx10:1;    // Bit 10: Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx11:1;    // Bit 11: Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx12:1;    // Bit 12: Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx13:1;    // Bit 13: Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx14:1;    // Bit 14: Device Port Change Notification Pull-Up Enable Register bit 
      uint16_t CNPUx15:1;    // Bit 15: Device Port Change Notification Pull-Up Enable Register bit 
    }__attribute__((packed)); // CNPUx: CHANGE NOTIFICATION PULL-UP ENABLE FOR PORTx REGISTER
    union CNPUx_u {   
        volatile struct CNPUx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // CNPUx: CHANGE NOTIFICATION PULL-UP ENABLE FOR PORTx REGISTER

    /** 
     * @brief   Device Port Change Notification Pull-Down Enable Register (emulated)
     */
    struct CNPDx_s {
      uint16_t CNPDx0:1;     // Bit 0:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx1:1;     // Bit 1:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx2:1;     // Bit 2:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx3:1;     // Bit 3:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx4:1;     // Bit 4:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx5:1;     // Bit 5:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx6:1;     // Bit 6:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx7:1;     // Bit 7:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx8:1;     // Bit 8:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx9:1;     // Bit 9:  Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx10:1;    // Bit 10: Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx11:1;    // Bit 11: Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx12:1;    // Bit 12: Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx13:1;    // Bit 13: Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx14:1;    // Bit 14: Device Port Change Notification Pull-Down Enable Register bit 
      uint16_t CNPDx15:1;    // Bit 15: Device Port Change Notification Pull-Down Enable Register bit 
    }__attribute__((packed)); // CNPDx: CHANGE NOTIFICATION PULL-DOWN ENABLE FOR PORTx REGISTER
    union CNPDx_u {   
        volatile struct CNPDx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // CNPDx: CHANGE NOTIFICATION PULL-DOWN ENABLE FOR PORTx REGISTER
    
    /** 
     * @brief   Device Port Change Notification Control Register (emulated)
     */
    union CNCONx_u {   
        volatile struct tagCNCONABITS bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // CNCONx: CHANGE NOTIFICATION CONTROL FOR PORTx REGISTER
    
    /** 
     * @brief   Device Port Change Notification Enable Register (emulated)
     */
    struct CNEN0x_s {
      uint16_t CNEN0x0:1;     // Bit 0:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x1:1;     // Bit 1:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x2:1;     // Bit 2:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x3:1;     // Bit 3:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x4:1;     // Bit 4:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x5:1;     // Bit 5:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x6:1;     // Bit 6:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x7:1;     // Bit 7:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x8:1;     // Bit 8:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x9:1;     // Bit 9:  Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x10:1;    // Bit 10: Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x11:1;    // Bit 11: Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x12:1;    // Bit 12: Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x13:1;    // Bit 13: Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x14:1;    // Bit 14: Device Port Change Notification Interrupt Enable Register bit 
      uint16_t CNEN0x15:1;    // Bit 15: Device Port Change Notification Interrupt Enable Register bit 
    }__attribute__((packed)); // CNEN0x: CHANGE NOTIFICATION INTERRUPT ENABLE FOR PORTx REGISTER
    union CNEN0x_u {   
        volatile struct CNEN0x_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // CNCONx: CHANGE NOTIFICATION CONTROL FOR PORTx REGISTER

    /** 
     * @brief   Device Port Change Notification Status Register (emulated)
     */
    struct CNSTATx_s {
      uint16_t CNSTATx0:1;     // Bit 0:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx1:1;     // Bit 1:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx2:1;     // Bit 2:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx3:1;     // Bit 3:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx4:1;     // Bit 4:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx5:1;     // Bit 5:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx6:1;     // Bit 6:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx7:1;     // Bit 7:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx8:1;     // Bit 8:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx9:1;     // Bit 9:  Device Port Change Notification Status Register bit 
      uint16_t CNSTATx10:1;    // Bit 10: Device Port Change Notification Status Register bit 
      uint16_t CNSTATx11:1;    // Bit 11: Device Port Change Notification Status Register bit 
      uint16_t CNSTATx12:1;    // Bit 12: Device Port Change Notification Status Register bit 
      uint16_t CNSTATx13:1;    // Bit 13: Device Port Change Notification Status Register bit 
      uint16_t CNSTATx14:1;    // Bit 14: Device Port Change Notification Status Register bit 
      uint16_t CNSTATx15:1;    // Bit 15: Device Port Change Notification Status Register bit 
    }__attribute__((packed)); // CNSTATx: CHANGE NOTIFICATION STATUS FOR PORTx REGISTER
    union CNSTATx_u {   
        volatile struct CNSTATx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // CNSTATx: CHANGE NOTIFICATION STATUS FOR PORTx REGISTER

    /** 
     * @brief   Device Port Change Notification Edge Select Register (emulated)
     */
    struct CNEN1x_s {
      uint16_t CNEN1x0:1;     // Bit 0:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x1:1;     // Bit 1:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x2:1;     // Bit 2:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x3:1;     // Bit 3:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x4:1;     // Bit 4:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x5:1;     // Bit 5:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x6:1;     // Bit 6:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x7:1;     // Bit 7:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x8:1;     // Bit 8:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x9:1;     // Bit 9:  Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x10:1;    // Bit 10: Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x11:1;    // Bit 11: Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x12:1;    // Bit 12: Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x13:1;    // Bit 13: Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x14:1;    // Bit 14: Device Port Change Notification Edge Select Register bit 
      uint16_t CNEN1x15:1;    // Bit 15: Device Port Change Notification Edge Select Register bit 
    }__attribute__((packed)); // CNEN1x: CHANGE NOTIFICATION EDGE SELECT FOR PORTx REGISTER
    union CNEN1x_u {   
        volatile struct CNEN1x_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // CNEN1x: CHANGE NOTIFICATION EDGE SELECT FOR PORTx REGISTER

    /** 
     * @brief   Device Port Change Notification Interrupt Flag Register (emulated)
     */
    struct CNFx_s {
      uint16_t CNFx0:1;     // Bit 0:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx1:1;     // Bit 1:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx2:1;     // Bit 2:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx3:1;     // Bit 3:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx4:1;     // Bit 4:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx5:1;     // Bit 5:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx6:1;     // Bit 6:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx7:1;     // Bit 7:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx8:1;     // Bit 8:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx9:1;     // Bit 9:  Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx10:1;    // Bit 10: Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx11:1;    // Bit 11: Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx12:1;    // Bit 12: Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx13:1;    // Bit 13: Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx14:1;    // Bit 14: Device Port Change Notification Interrupt Flag Register bit 
      uint16_t CNFx15:1;    // Bit 15: Device Port Change Notification Interrupt Flag Register bit 
    }__attribute__((packed)); // CNFx: CHANGE NOTIFICATION INTERRUPT FLAG FOR PORTx REGISTER
    union CNFx_u {   
        volatile struct CNFx_s bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    }__attribute__((packed)); // CNFx: CHANGE NOTIFICATION INTERRUPT FLAG FOR PORTx REGISTER

    /** @} */ // end of inheritance declarations **************************************

    typedef union ANSELx_u ANSELx_t; // ANSELx: ANALOG SELECT FOR PORTx REGISTER data type
    typedef union TRISx_u TRISx_t; //TRISx: OUTPUT ENABLE FOR PORTx REGISTER DATA TYPE
    typedef union PORTx_u PORTx_t; // PORTx: INPUT DATA FOR PORTx REGISTER DATA TYPE
    typedef union LATx_u LATx_t; // LATx: OUTPUT PORT LATCH DATA FOR PORTx REGISTER DATA TYPE
    typedef union ODCx_u ODCx_t; // ODCx: OPEN-DRAIN ENABLE FOR PORTx REGISTER DATA TYPE
    typedef union CNPUx_u  CNPUx_t; // CNPUx: CHANGE NOTIFICATION PULL-UP ENABLE FOR PORTx REGISTER DATA TYPE
    typedef union CNPDx_u CNPDx_t; // CNPDx: CHANGE NOTIFICATION PULL-DOWN ENABLE FOR PORTx REGISTER DATA TYPE
    typedef union CNCONx_u  CNCONx_t; // CNCONx: CHANGE NOTIFICATION CONTROL FOR PORTx REGISTER DATA TYPE
    typedef union CNEN0x_u CNEN0x_t; // CNEN0x: CHANGE NOTIFICATION INTERRUPT ENABLE FOR PORTx REGISTER DATA TYPE
    typedef union CNSTATx_u CNSTATx_t; // CNSTATx: CHANGE NOTIFICATION STATUS FOR PORTx REGISTER DATA TYPE
    typedef union CNEN1x_u CNCEN1x_t; // CNEN1x: CHANGE NOTIFICATION EDGE SELECT FOR PORTx REGISTER DATA TYPE
    typedef union CNFx_u CNFx_t; // CNFx: CHANGE NOTIFICATION INTERRUPT FLAG FOR PORTx REGISTER DATA TYPE
    
    /***********************************************************************************
    * @struct   P33C_PORT_INSTANCE_s
    * @ingroup  p33c-pral-port-properties
    * @brief    Abstracted set of Special Function Registers of a GPIO Port instance
    * @details
    *  This structure defines an abstracted set of Special Function Registers of a 
    *  General Purpose Input/Output port instance. Users can use this abstracted
    *  set of registers to capture register settings from or write generic register 
    *  settings to a specific instance of this port.
    **********************************************************************************/
    
    struct P33C_PORT_INSTANCE_s {
        
        ANSELx_t  ANSELx;   ///< ANSELx: ANALOG SELECT FOR PORTx REGISTER DATA TYPE
        TRISx_t   TRISx;    ///< TRISx: OUTPUT ENABLE FOR PORTx REGISTER
        PORTx_t   PORTx;    ///< PORTx: INPUT DATA FOR PORTx REGISTER
        LATx_t    LATx;     ///< LATx: OUTPUT DATA FOR PORTx REGISTER
        ODCx_t    ODCx;     ///< ODCx: OPEN-DRAIN ENABLE FOR PORTx REGISTER
        CNPUx_t   CNPUx;    ///< CNPUx: CHANGE NOTIFICATION PULL-UP ENABLE FOR PORTx REGISTER
        CNPDx_t   CNPDx;    ///< CNPDx: CHANGE NOTIFICATION PULL-DOWN ENABLE FOR PORTx REGISTER
        CNCONx_t  CNCONx;   ///< CNCONx: CHANGE NOTIFICATION CONTROL FOR PORTx REGISTER
        CNEN0x_t  CNEN0x;   ///< CNEN0x: CHANGE NOTIFICATION INTERRUPT ENABLE FOR PORTx REGISTER
        CNSTATx_t CNSTATx;  ///< CNSTATx: CHANGE NOTIFICATION STATUS FOR PORTx REGISTER
        CNCEN1x_t CNEN1x;   ///< CNEN1x: CHANGE NOTIFICATION EDGE SELECT FOR PORTx REGISTER
        CNFx_t    CNFx;     ///< CNFx: CHANGE NOTIFICATION INTERRUPT FLAG FOR PORTx REGISTER

    }; ///< DEVICE PORT REGISTER SET
	typedef struct P33C_PORT_INSTANCE_s P33C_PORT_INSTANCE_t; ///< DEVICE PORT REGISTER SET data type

    /*********************************************************************************
     * @ingroup p33c-pral-port-methods
     * @brief   Gets pointer to Device Port Instance SFR set
     * @param   pInstance: Index of the selected Device Port Instance (0=Port A, 1=Port B, 2=Port C, etc.)
     * @return  Pointer to device port instance object of type P33C_PORT_INSTANCE_t of the selected device port instance
     *  
     * @details
     *  This function returns the pointer to a peripheral instance register set
     *  in Special Function Register memory space. This pointer can be used to 
     *  directly write to/read from the Special Function Registers of the 
     *  peripheral instance configuration.
     * 
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     *  Please use @ref p33c_PortInstance_Exists to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_PortInstance_Exists
     * 
     *********************************************************************************/
	#define p33c_PortInstance_GetHandle(pInstance) (P33C_PORT_INSTANCE_t*)p33c_PortInstance_Handles[(uint16_t)(pInstance)]
    
    /*********************************************************************************
     * @ingroup p33c-pral-port-methods
     * @brief   Checks if the peripheral instance specified by pInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  requested peripheral instance index does exist 
     * @return  false: requested peripheral instance index does not exist 
     *  
     * @details
     *  This function provides a guarding condition test to verify if a specific 
     *  peripheral instance exists before accessing it. 
     *********************************************************************************/
    #define p33c_PortInstance_Exists(pInstance) (bool)(((0 <= pInstance) && (pInstance < p33c_PortInstances)) ? true : false)

#endif /* End of P33C_PORT_INSTANCE_s */
#endif /* End of P33C_PORT_SFR_DECLARATIONS_H */

// ______________________________
// end of file
