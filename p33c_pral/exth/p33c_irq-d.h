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
 * @file    p33c_irq-d.h
 * @see     p33c_irq.h
 * @brief   Interrupt Controller SFR abstraction data type declarations header file
 * @author  M91406
 * @date    September 26, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_IRQ_SFR_DECLARATIONS_H
#define	P33C_IRQ_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

// Number of ISR register blocks
#define P33C_IFS_SFR_COUNT  13  ///< Number of interrupt flag register blocks per SFR unit
#define P33C_IEC_SFR_COUNT  13  ///< Number of interrupt enable register blocks per SFR unit
#define P33C_IPC_SFR_COUNT  49  ///< Number of interrupt priority register blocks per SFR unit

#define P33C_SFR_BLOCK_OFFSET 0x0010 // Offset between IFS and IEC as well as between IEC and IPC register blocks

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Special register masking for small pin-count devices
// of family dsPIC33CKxxMP10x
#if defined (IFS10) || defined (IFS11) || defined (IFS12) || defined (IFS13) || defined (IFS14) || defined (IFS15)  

    #ifndef IFS9
        // Declaring dummy-variables redirecting calls 
        // to this interrupt flag register to a safe 
        // memory address
        volatile uint16_t IFS9;
    #endif

    #ifndef IEC9
        // Declaring dummy-variables redirecting calls 
        // to this interrupt flag register to a safe 
        // memory address
        volatile uint16_t IEC9;
    #endif
        
#endif
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#if defined (IFS15)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8, &IFS9, &IFS10, &IFS11, &IFS12, &IFS13, &IFS14, &IFS15
};
#elif defined (IFS14)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8, &IFS9, &IFS10, &IFS11, &IFS12, &IFS13, &IFS14
};
#elif defined (IFS13)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8, &IFS9, &IFS10, &IFS11, &IFS12, &IFS13
};
#elif defined (IFS12)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8, &IFS9, &IFS10, &IFS11, &IFS12
};
#elif defined (IFS11)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8, &IFS9, &IFS10, &IFS11
};
#elif defined (IFS10)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8, &IFS9, &IFS10
};
#elif defined (IFS9)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8, &IFS9
};
#elif defined (IFS8)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7,
        &IFS8
};
#elif defined (IFS7)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6, &IFS7
};
#elif defined (IFS6)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5, &IFS6
};
#elif defined (IFS5)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4, &IFS5
};
#elif defined (IFS4)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3, &IFS4
};
#elif defined (IFS3)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2, &IFS3
};
#elif defined (IFS2)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1, &IFS2
};
#elif defined (IFS1)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0, &IFS1
};
#elif defined (IFS0)
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[]={
        &IFS0
};
#else
static volatile const __attribute__((unused)) uint16_t* p33c_Ifs_Handles[0];
#pragma message "-- no interrupt status flag bit registers declared for selected device"
#endif

#if defined (IEC15)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8, &IEC9, &IEC10, &IEC11, &IEC12, &IEC13, &IEC14, &IEC15
};
#elif defined (IEC14)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8, &IEC9, &IEC10, &IEC11, &IEC12, &IEC13, &IEC14
};
#elif defined (IEC13)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8, &IEC9, &IEC10, &IEC11, &IEC12, &IEC13
};
#elif defined (IEC12)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8, &IEC9, &IEC10, &IEC11, &IEC12
};
#elif defined (IEC11)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8, &IEC9, &IEC10, &IEC11
};
#elif defined (IEC10)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8, &IEC9, &IEC10
};
#elif defined (IEC9)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8, &IEC9
};
#elif defined (IEC8)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7,
        &IEC8
};
#elif defined (IEC7)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6, &IEC7
};
#elif defined (IEC6)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5, &IEC6
};
#elif defined (IEC5)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4, &IEC5
};
#elif defined (IEC4)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3, &IEC4
};
#elif defined (IEC3)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2, &IEC3
};
#elif defined (IEC2)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1, &IEC2
};
#elif defined (IEC1)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0, &IEC1
};
#elif defined (IEC0)
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[]={
        &IEC0
};
#else
static volatile const __attribute__((unused)) uint16_t* p33c_Iec_Handles[0];
#pragma message "-- no interrupt enable registers declared for selected device"
#endif

#ifndef P33C_ISR_MODULE_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-irq-inheritance
     * @extends     P33C_ISR_MODULE_s 
     * @{
     */

    /** 
     * @brief Interrupt Flag Bit Register #0 inherited from device header file
     */
    union IFS0_u {
        struct tagIFS0BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS0: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #1 inherited from device header file
     */
    union IFS1_u {
        struct tagIFS1BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS1: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #2 inherited from device header file
     */
    union IFS2_u {
        struct tagIFS2BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS2: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #3 inherited from device header file
     */
    union IFS3_u {
        struct tagIFS3BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS3: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #4 inherited from device header file
     */
    union IFS4_u {
        struct tagIFS4BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS4: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #5 inherited from device header file
     */
    union IFS5_u {
        struct tagIFS5BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS5: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #6 inherited from device header file
     */
    union IFS6_u {
        struct tagIFS6BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS6: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #7 inherited from device header file
     */
    union IFS7_u {
        struct tagIFS7BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS7: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #8 inherited from device header file
     */
    union IFS8_u {
        struct tagIFS8BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS8: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #9 inherited from device header file
     */
    union IFS9_u {
        #ifdef IFS9
        struct tagIFS9BITS bits; // Register bit-field
        #else
        unsigned : 16;  // (not implemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS9: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #10 inherited from device header file
     */
    union IFS10_u {
        struct tagIFS10BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS10: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #11 inherited from device header file
     */
    union IFS11_u {
        struct tagIFS11BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS11: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #12 inherited from device header file
     */
    union IFS12_u {
        #ifdef tagIFS12BITS
        struct tagIFS12BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS12: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #13 inherited from device header file
     */
    union IFS13_u {
        #ifdef tagIFS13BITS
        struct tagIFS13BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS13: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #14 inherited from device header file
     */
    union IFS14_u {
        #ifdef tagIFS14BITS
        struct tagIFS14BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS14: IFSx STATUS REGISTER

    /** 
     * @brief Interrupt Flag Bit Register #15 inherited from device header file
     */
    union IFS15_u {
        #ifdef tagIFS15BITS
        struct tagIFS15BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IFS15: IFSx STATUS REGISTER

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /** 
     * @brief Interrupt Enable Bit Register #0 inherited from device header file
     */
    union IEC0_u {
        struct tagIEC0BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC0: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #1 inherited from device header file
     */
    union IEC1_u {
        struct tagIEC1BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC1: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #2 inherited from device header file
     */
    union IEC2_u {
        struct tagIEC2BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC2: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #3 inherited from device header file
     */
    union IEC3_u {
        struct tagIEC3BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC3: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #4 inherited from device header file
     */
    union IEC4_u {
        struct tagIEC4BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC4: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #5 inherited from device header file
     */
    union IEC5_u {
        struct tagIEC5BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC5: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #6 inherited from device header file
     */
    union IEC6_u {
        struct tagIEC6BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC6: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #7 inherited from device header file
     */
    union IEC7_u {
        struct tagIEC7BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC7: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #8 inherited from device header file
     */
    union IEC8_u {
        struct tagIEC8BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC8: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #9 inherited from device header file
     */
    union IEC9_u {
        #ifdef IEC9
        struct tagIEC9BITS bits; // Register bit-field
        #else
        unsigned : 16;  // (not implemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC9: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #10 inherited from device header file
     */
    union IEC10_u {
        struct tagIEC10BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC10: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #11 inherited from device header file
     */
    union IEC11_u {
        struct tagIEC11BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC11: IECx ENABLE REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #12 inherited from device header file
     */
    union IEC12_u {
        #ifdef tagIEC12BITS
        struct tagIEC12BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC12: IECx ENABLE REGISTER
    
    /** 
     * @brief Interrupt Enable Bit Register #13 inherited from device header file
     */
    union IEC13_u {
        #ifdef tagIEC13BITS
        struct tagIEC13BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC13: IECx ENABLE REGISTER
    
    /** 
     * @brief Interrupt Enable Bit Register #14 inherited from device header file
     */
    union IEC14_u {
        #ifdef tagIEC14BITS
        struct tagIEC14BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC14: IECx ENABLE REGISTER
    
    /** 
     * @brief Interrupt Enable Bit Register #15 inherited from device header file
     */
    union IEC15_u {
        #ifdef tagIEC15BITS
        struct tagIEC15BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IEC15: IECx ENABLE REGISTER
    
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    /** 
     * @brief Interrupt Enable Bit Register #0 inherited from device header file
     */
    union IPC0_u {
        struct tagIPC0BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC0: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #1 inherited from device header file
     */
    union IPC1_u {
        struct tagIPC1BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC1: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #2 inherited from device header file
     */
    union IPC2_u {
        struct tagIPC2BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC2: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #3 inherited from device header file
     */
    union IPC3_u {
        struct tagIPC3BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC3: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #4 inherited from device header file
     */
    union IPC4_u {
        struct tagIPC4BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC4: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #5 inherited from device header file
     */
    union IPC5_u {
        struct tagIPC5BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC5: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #6 inherited from device header file
     */
    union IPC6_u {
        struct tagIPC6BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC6: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #7 inherited from device header file
     */
    union IPC7_u {
        #ifdef tagIPC7BITS
        struct tagIPC7BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC7: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #8 inherited from device header file
     */
    union IPC8_u {
        struct tagIPC8BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC8: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #9 inherited from device header file
     */
    union IPC9_u {
        struct tagIPC9BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC9: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #10 inherited from device header file
     */
    union IPC10_u {
        struct tagIPC10BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC10: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #11 inherited from device header file
     */
    union IPC11_u {
        struct tagIPC11BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC11: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #12 inherited from device header file
     */
    union IPC12_u {
        struct tagIPC12BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC12: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #13 inherited from device header file
     */
    union IPC13_u {
        #ifdef tagIPC13BITS
        struct tagIPC13BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC13: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #14 inherited from device header file
     */
    union IPC14_u {
        #ifdef tagIPC14BITS
        struct tagIPC14BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC14: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #15 inherited from device header file
     */
    union IPC15_u {
        struct tagIPC15BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC15: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #16 inherited from device header file
     */
    union IPC16_u {
        struct tagIPC16BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC16: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #17 inherited from device header file
     */
    union IPC17_u {
        struct tagIPC17BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC17: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #18 inherited from device header file
     */
    union IPC18_u {
        struct tagIPC18BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC18: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #19 inherited from device header file
     */
    union IPC19_u {
        struct tagIPC19BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC19: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #20 inherited from device header file
     */
    union IPC20_u {
        struct tagIPC20BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC20: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #21 inherited from device header file
     */
    union IPC21_u {
        struct tagIPC21BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC21: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #22 inherited from device header file
     */
    union IPC22_u {
        struct tagIPC22BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC22: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #23 inherited from device header file
     */
    union IPC23_u {
        struct tagIPC23BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC23: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #24 inherited from device header file
     */
    union IPC24_u {
        struct tagIPC24BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC24: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #25 inherited from device header file
     */
    union IPC25_u {
        struct tagIPC25BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC25: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #26 inherited from device header file
     */
    union IPC26_u {
        #ifdef tagIPC26BITS
        struct tagIPC26BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC26: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #27 inherited from device header file
     */
    union IPC27_u {
        #ifdef tagIPC27BITS
        struct tagIPC27BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC27: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #28 inherited from device header file
     */
    union IPC28_u {
        struct tagIPC28BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC28: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #29 inherited from device header file
     */
    union IPC29_u {
        struct tagIPC29BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC29: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #30 inherited from device header file
     */
    union IPC30_u {
        struct tagIPC30BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC30: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #31 inherited from device header file
     */
    union IPC31_u {
        struct tagIPC31BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC31: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #32 inherited from device header file
     */
    union IPC32_u {
        struct tagIPC32BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC32: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #33 inherited from device header file
     */
    union IPC33_u {
        #ifdef tagIPC33BITS
        struct tagIPC33BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC33: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #34 inherited from device header file
     */
    union IPC34_u {
        #ifdef tagIPC34BITS
        struct tagIPC34BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC34: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #35 inherited from device header file
     */
    union IPC35_u {
        struct tagIPC35BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC35: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #36 inherited from device header file
     */
    union IPC36_u {
        struct tagIPC36BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC36: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #37 inherited from device header file
     */
    union IPC37_u {
        #ifdef IPC37
        struct tagIPC37BITS bits; // Register bit-field
        #else
        unsigned : 16;  // (not implemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC37: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #38 inherited from device header file
     */
    union IPC38_u {
        #ifdef IPC38
        struct tagIPC38BITS bits; // Register bit-field
        #else
        unsigned : 16;  // (not implemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC38: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #39 inherited from device header file
     */
    union IPC39_u {
        #ifdef tagIPC39BITS
        struct tagIPC39BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC39: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #40 inherited from device header file
     */
    union IPC40_u {
        #ifdef tagIPC40BITS
        struct tagIPC40BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC40: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #41 inherited from device header file
     */
    union IPC41_u {
        #ifdef tagIPC41BITS
        struct tagIPC41BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC41: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #42 inherited from device header file
     */
    union IPC42_u {
        struct tagIPC42BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC42: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #43 inherited from device header file
     */
    union IPC43_u {
        struct tagIPC43BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC43: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #44 inherited from device header file
     */
    union IPC44_u {
        struct tagIPC44BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC44: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #45 inherited from device header file
     */
    union IPC45_u {
        struct tagIPC45BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC45: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #46 inherited from device header file
     */
    union IPC46_u {
        #ifdef tagIPC46BITS
        struct tagIPC46BITS bits; // Register bit-field
        #else
        uint16_t : 16;            // (unimplemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC46: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #47 inherited from device header file
     */
    union IPC47_u {
        struct tagIPC47BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC47: IPCx PRIORITY REGISTER

    /** 
     * @brief Interrupt Enable Bit Register #47 inherited from device header file
     */
    union IPC48_u {
        #ifdef IPC48
        struct tagIPC48BITS bits; // Register bit-field
        #else
        unsigned : 16;  // (not implemented)
        #endif
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // IPC48: IPCx PRIORITY REGISTER
    
    /** @} */ // end of inheritance declarations **************************************
    
    typedef union IFS0_u  IFS0_t;  // IFS0:  IFSx STATUS BIT REGISTER
    typedef union IFS1_u  IFS1_t;  // IFS1:  IFSx STATUS BIT REGISTER
    typedef union IFS2_u  IFS2_t;  // IFS2:  IFSx STATUS BIT REGISTER
    typedef union IFS3_u  IFS3_t;  // IFS3:  IFSx STATUS BIT REGISTER
    typedef union IFS4_u  IFS4_t;  // IFS4:  IFSx STATUS BIT REGISTER
    typedef union IFS5_u  IFS5_t;  // IFS5:  IFSx STATUS BIT REGISTER
    typedef union IFS6_u  IFS6_t;  // IFS6:  IFSx STATUS BIT REGISTER
    typedef union IFS7_u  IFS7_t;  // IFS7:  IFSx STATUS BIT REGISTER
    typedef union IFS8_u  IFS8_t;  // IFS8:  IFSx STATUS BIT REGISTER
    typedef union IFS9_u  IFS9_t;  // IFS9:  IFSx STATUS BIT REGISTER
    typedef union IFS10_u IFS10_t; // IFS10: IFSx STATUS BIT REGISTER
    typedef union IFS11_u IFS11_t; // IFS11: IFSx STATUS BIT REGISTER
    typedef union IFS12_u IFS12_t; // IFS12: IFSx STATUS BIT REGISTER
    typedef union IFS13_u IFS13_t; // IFS13: IFSx STATUS BIT REGISTER
    typedef union IFS14_u IFS14_t; // IFS14: IFSx STATUS BIT REGISTER
    typedef union IFS15_u IFS15_t; // IFS15: IFSx STATUS BIT REGISTER
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    typedef union IEC0_u  IEC0_t;  // IEC0:  IECx ENABLE BIT REGISTER
    typedef union IEC1_u  IEC1_t;  // IEC1:  IECx ENABLE BIT REGISTER
    typedef union IEC2_u  IEC2_t;  // IEC2:  IECx ENABLE BIT REGISTER
    typedef union IEC3_u  IEC3_t;  // IEC3:  IECx ENABLE BIT REGISTER
    typedef union IEC4_u  IEC4_t;  // IEC4:  IECx ENABLE BIT REGISTER
    typedef union IEC5_u  IEC5_t;  // IEC5:  IECx ENABLE BIT REGISTER
    typedef union IEC6_u  IEC6_t;  // IEC6:  IECx ENABLE BIT REGISTER
    typedef union IEC7_u  IEC7_t;  // IEC7:  IECx ENABLE BIT REGISTER
    typedef union IEC8_u  IEC8_t;  // IEC8:  IECx ENABLE BIT REGISTER
    typedef union IEC9_u  IEC9_t;  // IEC9:  IECx ENABLE BIT REGISTER
    typedef union IEC10_u IEC10_t; // IEC10: IECx ENABLE BIT REGISTER
    typedef union IEC11_u IEC11_t; // IEC11: IECx ENABLE BIT REGISTER
    typedef union IEC12_u IEC12_t; // IEC12: IECx ENABLE BIT REGISTER
    typedef union IEC13_u IEC13_t; // IEC13: IECx ENABLE BIT REGISTER
    typedef union IEC14_u IEC14_t; // IEC14: IECx ENABLE BIT REGISTER
    typedef union IEC15_u IEC15_t; // IEC15: IECx ENABLE BIT REGISTER
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    typedef union IPC0_u  IPC0_t;  // IPC0:  IPCx PRIORITY BITS REGISTER
    typedef union IPC1_u  IPC1_t;  // IPC1:  IPCx PRIORITY BITS REGISTER
    typedef union IPC2_u  IPC2_t;  // IPC2:  IPCx PRIORITY BITS REGISTER
    typedef union IPC3_u  IPC3_t;  // IPC3:  IPCx PRIORITY BITS REGISTER
    typedef union IPC4_u  IPC4_t;  // IPC4:  IPCx PRIORITY BITS REGISTER
    typedef union IPC5_u  IPC5_t;  // IPC5:  IPCx PRIORITY BITS REGISTER
    typedef union IPC6_u  IPC6_t;  // IPC6:  IPCx PRIORITY BITS REGISTER
    typedef union IPC7_u  IPC7_t;  // IPC7:  IPCx PRIORITY BITS REGISTER
    typedef union IPC8_u  IPC8_t;  // IPC8:  IPCx PRIORITY BITS REGISTER
    typedef union IPC9_u  IPC9_t;  // IPC9:  IPCx PRIORITY BITS REGISTER
    typedef union IPC10_u IPC10_t; // IPC10: IPCx PRIORITY BITS REGISTER
    typedef union IPC11_u IPC11_t; // IPC11: IPCx PRIORITY BITS REGISTER
    typedef union IPC12_u IPC12_t; // IPC12: IPCx PRIORITY BITS REGISTER
    typedef union IPC13_u IPC13_t; // IPC13: IPCx PRIORITY BITS REGISTER
    typedef union IPC14_u IPC14_t; // IPC14: IPCx PRIORITY BITS REGISTER
    typedef union IPC15_u IPC15_t; // IPC15: IPCx PRIORITY BITS REGISTER
    typedef union IPC16_u IPC16_t; // IPC16: IPCx PRIORITY BITS REGISTER
    typedef union IPC17_u IPC17_t; // IPC17: IPCx PRIORITY BITS REGISTER
    typedef union IPC18_u IPC18_t; // IPC18: IPCx PRIORITY BITS REGISTER
    typedef union IPC19_u IPC19_t; // IPC19: IPCx PRIORITY BITS REGISTER
    typedef union IPC20_u IPC20_t; // IPC20: IPCx PRIORITY BITS REGISTER
    typedef union IPC21_u IPC21_t; // IPC21: IPCx PRIORITY BITS REGISTER
    typedef union IPC22_u IPC22_t; // IPC22: IPCx PRIORITY BITS REGISTER
    typedef union IPC23_u IPC23_t; // IPC23: IPCx PRIORITY BITS REGISTER
    typedef union IPC24_u IPC24_t; // IPC24: IPCx PRIORITY BITS REGISTER
    typedef union IPC25_u IPC25_t; // IPC25: IPCx PRIORITY BITS REGISTER
    typedef union IPC26_u IPC26_t; // IPC26: IPCx PRIORITY BITS REGISTER
    typedef union IPC27_u IPC27_t; // IPC27: IPCx PRIORITY BITS REGISTER
    typedef union IPC28_u IPC28_t; // IPC28: IPCx PRIORITY BITS REGISTER
    typedef union IPC29_u IPC29_t; // IPC29: IPCx PRIORITY BITS REGISTER
    typedef union IPC30_u IPC30_t; // IPC30: IPCx PRIORITY BITS REGISTER
    typedef union IPC31_u IPC31_t; // IPC31: IPCx PRIORITY BITS REGISTER
    typedef union IPC32_u IPC32_t; // IPC32: IPCx PRIORITY BITS REGISTER
    typedef union IPC33_u IPC33_t; // IPC33: IPCx PRIORITY BITS REGISTER
    typedef union IPC34_u IPC34_t; // IPC34: IPCx PRIORITY BITS REGISTER
    typedef union IPC35_u IPC35_t; // IPC35: IPCx PRIORITY BITS REGISTER
    typedef union IPC36_u IPC36_t; // IPC36: IPCx PRIORITY BITS REGISTER
    typedef union IPC37_u IPC37_t; // IPC37: IPCx PRIORITY BITS REGISTER
    typedef union IPC38_u IPC38_t; // IPC38: IPCx PRIORITY BITS REGISTER
    typedef union IPC39_u IPC39_t; // IPC39: IPCx PRIORITY BITS REGISTER
    typedef union IPC40_u IPC40_t; // IPC40: IPCx PRIORITY BITS REGISTER
    typedef union IPC41_u IPC41_t; // IPC41: IPCx PRIORITY BITS REGISTER
    typedef union IPC42_u IPC42_t; // IPC42: IPCx PRIORITY BITS REGISTER
    typedef union IPC43_u IPC43_t; // IPC43: IPCx PRIORITY BITS REGISTER
    typedef union IPC44_u IPC44_t; // IPC44: IPCx PRIORITY BITS REGISTER
    typedef union IPC45_u IPC45_t; // IPC45: IPCx PRIORITY BITS REGISTER
    typedef union IPC46_u IPC46_t; // IPC46: IPCx PRIORITY BITS REGISTER
    typedef union IPC47_u IPC47_t; // IPC47: IPCx PRIORITY BITS REGISTER
    typedef union IPC48_u IPC48_t; // IPC48: IPCx PRIORITY BITS REGISTER

    
    /***********************************************************************************
     * @ingroup p33c-pral-irq-properties
     * @struct  P33C_IFS_s
     * @extends P33C_ISR_MODULE_s
     * @brief   Abstracted set of Special Function Registers of interrupt flag bits
     * @details
     * This structure defines an abstracted set of Special Function Registers of a 
     * all interrupt status flag bit registers. Users can use this abstracted set of 
     * registers to capture register settings from or write generic register settings 
     * to a specific instance of the interrupt register set.
     * 
     **********************************************************************************/
    
    struct P33C_IFS_s {
        
        IFS0_t  IFS0;     // IFS0:  IFSx STATUS BIT REGISTER
        IFS1_t  IFS1;     // IFS1:  IFSx STATUS BIT REGISTER
        IFS2_t  IFS2;     // IFS2:  IFSx STATUS BIT REGISTER
        IFS3_t  IFS3;     // IFS3:  IFSx STATUS BIT REGISTER
        IFS4_t  IFS4;     // IFS4:  IFSx STATUS BIT REGISTER
        IFS5_t  IFS5;     // IFS5:  IFSx STATUS BIT REGISTER
        IFS6_t  IFS6;     // IFS6:  IFSx STATUS BIT REGISTER
        IFS7_t  IFS7;     // IFS7:  IFSx STATUS BIT REGISTER
        IFS8_t  IFS8;     // IFS8:  IFSx STATUS BIT REGISTER
        IFS9_t  IFS9;     // IFS9:  IFSx STATUS BIT REGISTER
        IFS10_t IFS10;    // IFS10: IFSx STATUS BIT REGISTER
        IFS11_t IFS11;    // IFS11: IFSx STATUS BIT REGISTER
        IFS12_t IFS12;    // IFS12: IFSx STATUS BIT REGISTER
        IFS13_t IFS13;    // IFS13: IFSx STATUS BIT REGISTER
        IFS14_t IFS14;    // IFS14: IFSx STATUS BIT REGISTER
        IFS15_t IFS15;    // IFS15: IFSx STATUS BIT REGISTER
        
    };
    
    typedef struct P33C_IFS_s P33C_IFS_t;  ///< IFS SPECIAL FUNCTION REGISTER SET
    
    /***********************************************************************************
     * @ingroup p33c-pral-irq-properties
     * @struct  P33C_IEC_s
     * @extends P33C_ISR_MODULE_s
     * @brief   Abstracted set of Special Function Registers of interrupt enable bits
     * @details
     * This structure defines an abstracted set of Special Function Registers of a 
     * all interrupt enable bit registers. Users can use this abstracted set of 
     * registers to capture register settings from or write generic register settings 
     * to a specific instance of the interrupt register set.
     * 
     **********************************************************************************/
    
    struct P33C_IEC_s {
        
        IEC0_t  IEC0;     // IEC0:  IECx ENABLE BIT REGISTER
        IEC1_t  IEC1;     // IEC1:  IECx ENABLE BIT REGISTER
        IEC2_t  IEC2;     // IEC2:  IECx ENABLE BIT REGISTER
        IEC3_t  IEC3;     // IEC3:  IECx ENABLE BIT REGISTER
        IEC4_t  IEC4;     // IEC4:  IECx ENABLE BIT REGISTER
        IEC5_t  IEC5;     // IEC5:  IECx ENABLE BIT REGISTER
        IEC6_t  IEC6;     // IEC6:  IECx ENABLE BIT REGISTER
        IEC7_t  IEC7;     // IEC7:  IECx ENABLE BIT REGISTER
        IEC8_t  IEC8;     // IEC8:  IECx ENABLE BIT REGISTER
        IEC9_t  IEC9;     // IEC9:  IECx ENABLE BIT REGISTER
        IEC10_t IEC10;    // IEC10: IECx ENABLE BIT REGISTER
        IEC11_t IEC11;    // IEC11: IECx ENABLE BIT REGISTER
        IEC12_t IEC12;    // IEC12: IECx ENABLE BIT REGISTER
        IEC13_t IEC13;    // IEC13: IECx ENABLE BIT REGISTER
        IEC14_t IEC14;    // IEC14: IECx ENABLE BIT REGISTER
        IEC15_t IEC15;    // IEC15: IECx ENABLE BIT REGISTER
        
    };
    
    typedef struct P33C_IEC_s P33C_IEC_t;  ///< IEC SPECIAL FUNCTION REGISTER SET

    /***********************************************************************************
     * @ingroup p33c-pral-irq-properties
     * @struct  P33C_IPC_s
     * @extends P33C_ISR_MODULE_s
     * @brief   Abstracted set of Special Function Registers of interrupt priority bits
     * @details
     * This structure defines an abstracted set of Special Function Registers of a 
     * all interrupt priority bits registers. Users can use this abstracted set of 
     * registers to capture register settings from or write generic register settings 
     * to a specific instance of the interrupt register set.
     * 
     **********************************************************************************/
    
    struct P33C_IPC_s {
        
        IPC0_t  IPC0;     // IPC0:  IPCx PRIORITY BITS REGISTER
        IPC1_t  IPC1;     // IPC1:  IPCx PRIORITY BITS REGISTER
        IPC2_t  IPC2;     // IPC2:  IPCx PRIORITY BITS REGISTER
        IPC3_t  IPC3;     // IPC3:  IPCx PRIORITY BITS REGISTER
        IPC4_t  IPC4;     // IPC4:  IPCx PRIORITY BITS REGISTER
        IPC5_t  IPC5;     // IPC5:  IPCx PRIORITY BITS REGISTER
        IPC6_t  IPC6;     // IPC6:  IPCx PRIORITY BITS REGISTER
        IPC7_t  IPC7;     // IPC7:  IPCx PRIORITY BITS REGISTER
        IPC8_t  IPC8;     // IPC8:  IPCx PRIORITY BITS REGISTER
        IPC9_t  IPC9;     // IPC9:  IPCx PRIORITY BITS REGISTER
        IPC10_t IPC10;    // IPC10: IPCx PRIORITY BITS REGISTER
        IPC11_t IPC11;    // IPC11: IPCx PRIORITY BITS REGISTER
        IPC12_t IPC12;    // IPC12: IPCx PRIORITY BITS REGISTER
        IPC13_t IPC13;    // IPC13: IPCx PRIORITY BITS REGISTER
        IPC14_t IPC14;    // IPC14: IPCx PRIORITY BITS REGISTER
        IPC15_t IPC15;    // IPC15: IPCx PRIORITY BITS REGISTER
        IPC16_t IPC16;    // IPC16: IPCx PRIORITY BITS REGISTER
        IPC17_t IPC17;    // IPC17: IPCx PRIORITY BITS REGISTER
        IPC18_t IPC18;    // IPC18: IPCx PRIORITY BITS REGISTER
        IPC19_t IPC19;    // IPC19: IPCx PRIORITY BITS REGISTER
        IPC20_t IPC20;    // IPC20: IPCx PRIORITY BITS REGISTER
        IPC21_t IPC21;    // IPC21: IPCx PRIORITY BITS REGISTER
        IPC22_t IPC22;    // IPC22: IPCx PRIORITY BITS REGISTER
        IPC23_t IPC23;    // IPC23: IPCx PRIORITY BITS REGISTER
        IPC24_t IPC24;    // IPC24: IPCx PRIORITY BITS REGISTER
        IPC25_t IPC25;    // IPC25: IPCx PRIORITY BITS REGISTER
        IPC26_t IPC26;    // IPC26: IPCx PRIORITY BITS REGISTER
        IPC27_t IPC27;    // IPC27: IPCx PRIORITY BITS REGISTER
        IPC28_t IPC28;    // IPC28: IPCx PRIORITY BITS REGISTER
        IPC29_t IPC29;    // IPC29: IPCx PRIORITY BITS REGISTER
        IPC30_t IPC30;    // IPC30: IPCx PRIORITY BITS REGISTER
        IPC31_t IPC31;    // IPC31: IPCx PRIORITY BITS REGISTER
        IPC32_t IPC32;    // IPC32: IPCx PRIORITY BITS REGISTER
        IPC33_t IPC33;    // IPC33: IPCx PRIORITY BITS REGISTER
        IPC34_t IPC34;    // IPC34: IPCx PRIORITY BITS REGISTER
        IPC35_t IPC35;    // IPC35: IPCx PRIORITY BITS REGISTER
        IPC36_t IPC36;    // IPC36: IPCx PRIORITY BITS REGISTER
        IPC37_t IPC37;    // IPC37: IPCx PRIORITY BITS REGISTER
        IPC38_t IPC38;    // IPC38: IPCx PRIORITY BITS REGISTER
        IPC39_t IPC39;    // IPC39: IPCx PRIORITY BITS REGISTER
        IPC40_t IPC40;    // IPC40: IPCx PRIORITY BITS REGISTER
        IPC41_t IPC41;    // IPC41: IPCx PRIORITY BITS REGISTER
        IPC42_t IPC42;    // IPC42: IPCx PRIORITY BITS REGISTER
        IPC43_t IPC43;    // IPC43: IPCx PRIORITY BITS REGISTER
        IPC44_t IPC44;    // IPC44: IPCx PRIORITY BITS REGISTER
        IPC45_t IPC45;    // IPC45: IPCx PRIORITY BITS REGISTER
        IPC46_t IPC46;    // IPC46: IPCx PRIORITY BITS REGISTER
        IPC47_t IPC47;    // IPC47: IPCx PRIORITY BITS REGISTER
        IPC48_t IPC48;    // IPC48: IPCx PRIORITY BITS REGISTER
        
    };
    
    typedef struct P33C_IPC_s P33C_IPC_t;  ///< IEC SPECIAL FUNCTION REGISTER SET
     
    
    /***********************************************************************************
     * @ingroup p33c-pral-irq-properties
     * @struct  P33C_ISR_MODULE_s
     * @brief   Abstracted set of Special Function Registers of interrupt flag, enable and priority bits
     * @details
     * This structure defines an abstracted set of Special Function Registers of a 
     * all interrupt status flag, enable and priority bit registers. Users can use 
     * this abstracted set of registers to capture register settings from or write 
     * generic register settings to the interrupt flag/enable/priority register set.
     * 
     **********************************************************************************/

    struct P33C_ISR_MODULE_s {
        P33C_IFS_t IFS;  ///< ISR STATUS FLAG BIT SPECIAL FUNCTION REGISTER SET 
        P33C_IEC_t IEC;  ///< ISR ENABLE BIT SPECIAL FUNCTION REGISTER SET
        P33C_IPC_t IPC;  ///< ISR PRIORITY BITS SPECIAL FUNCTION REGISTER SET
    };
    
    typedef struct P33C_ISR_MODULE_s P33C_ISR_MODULE_t;  ///< ISR SPECIAL FUNCTION REGISTER SET

    /*********************************************************************************
     * @ingroup p33c-pral-irq-methods
     * @brief   Gets pointer to IFS/IEC/IPC SFR set
     * @return  Pointer to interrupt flags/enable/priority special function register data object of type P33C_ISR_MODULE_t
     *  
     * @details
     *  This function returns the pointer to the IFS interrupt flags register 
     *  set in Special Function Register memory space. This pointer can be used 
     *  to directly write to/read from the Special Function Registers of the 
     *  IFS/IEC/IPC peripheral instance configuration.
     * 
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     * 
     *********************************************************************************/
    #define p33c_IsrModule_GetHandle(pInstance) (P33C_ISR_MODULE_t*)&IFS0;
    
#endif // end of P33C_ISR_MODULE_s
#endif /* End of P33C_IRQ_SFR_DECLARATIONS_H */

// __________________________
// end of file
