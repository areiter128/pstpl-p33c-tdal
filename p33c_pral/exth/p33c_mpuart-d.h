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
 * @file    p33c_mpuart-d.h
 * @see     p33c_mpuart.h
 * @brief   Universal Asynchronous Receiver/Transmitter (UART) Driver Module & Generator Instances peripheral register abstraction data type declarations
 * @author  M91406
 * @details
 *  This additional header file contains defines for all required bit-settings of all related 
 *  special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
*/

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_UART_SFR_DECLARATIONS_H
#define	P33C_UART_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

/* GENERIC SPECIAL FUNCTION REGISTER (SFR) SETS
 * ============================================
 * 
 * Direct addressing of Special Function Registers (SFR) in user code is good 
 * enough for a specific application but makes it harder to maintain the code 
 * or migrate the code across devices and applications. 
 * 
 * Especially with complex configurations with multiple dependencies across various 
 * peripherals, migrating configurations can become very challenging to review, 
 * debug and migrate. 
 * 
 * Therefore this UART configuration example uses a 'virtual UART port' to set up 
 * the required UART configuration but provides a function allowing users to write this 
 * configuration to any UART port of choice. Hence, pre-defined configurations 
 * can be mapped on specific peripheral instance by using their index defined by the 
 * data sheet (e.g. uartInstance = 1 maps pre-defined configuration to UART1)
 * 
 * The data types used for each SFR in the P33C_UART_INSTANCE_t data structure below,
 * are data types declared in the common C-header file of the device (e.g. <d33CK256MP506.h>). 
 * These header files are provided with the XC16 C-Compiler installation and don't have to be 
 * written nor changed manually. 
 * 
 */

// Determine number of available UART instances on the selected device
#if defined (U8MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[8]={
        &U1MODE, &U2MODE, &U3MODE, &U4MODE, 
        &U5MODE, &U6MODE, &U7MODE, &U8MODE 
    };
#elif defined (U7MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[7]={
        &U1MODE, &U2MODE, &U3MODE, &U4MODE, 
        &U5MODE, &U6MODE, &U7MODE
    };
#elif defined (U6MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[6]={
        &U1MODE, &U2MODE, &U3MODE, &U4MODE, 
        &U5MODE, &U6MODE
    };
#elif defined (U5MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[5]={
        &U1MODE, &U2MODE, &U3MODE, &U4MODE, 
        &U5MODE
    };
#elif defined (U4MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[4]={
        &U1MODE, &U2MODE, &U3MODE, &U4MODE
    };
#elif defined (U3MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[3]={
        &U1MODE, &U2MODE, &U3MODE
    };
#elif defined (U2MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[2]={
        &U1MODE, &U2MODE
    };
#elif defined (U1MODE)
    static volatile uint16_t* p33c_UartInstance_Handles[1]={
        &U1MODE
    };
#else
    static volatile uint16_t* p33c_UartInstance_Handles[0]
    #pragma message "selected device has no supported UART ports"
#endif

// GENERIC MULTI-PROCESS UART INSTANCE SPECIAL FUNCTION REGISTER SET
    
#ifndef P33C_UART_INSTANCE_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-uart-inheritance
     * @extends     P33C_UART_INSTANCE_s 
     * @{
     */

    /** 
     * @brief   UART Configuration Register (Low) inherited from device data sheet
     */
    union UxMODE_u {
        struct tagU1MODEBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxMODE: UARTx CONFIGURATION REGISTER

    /** 
     * @brief   UART Configuration Register (High) inherited from device data sheet
     */
    union UxMODEH_u {
        struct tagU1MODEHBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxMODEH: UARTx CONFIGURATION REGISTER HIGH

    /** 
     * @brief   UART Status Register (Low) inherited from device data sheet
     */
    union UxSTA_u {
        struct tagU1STABITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxSTA: UARTx STATUS REGISTER

    /** 
     * @brief   UART Status Register (High) inherited from device data sheet
     */
    union UxSTAH_u {
        struct tagU1STAHBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxSTAH: UARTx STATUS REGISTER HIGH

    /** 
     * @brief   UART Baudrate Register (Low) inherited from device data sheet
     */
    union UxBRG_u {
        struct tagU1BRGBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxBRG: UARTx BAUD RATE REGISTER

    /** 
     * @brief   UART Baudrate Register (High) inherited from device data sheet
     */
    union UxBRGH_u {
        struct tagU1BRGHBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxBRGH: UARTx BAUD RATE REGISTER HIGH

    /** 
     * @brief   UART Receive Buffer Register inherited from device data sheet
     */
    union UxRXREG_u {
       struct tagU1RXREGBITS bits; // Register bit-field
       uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxRXREG: UARTx RECEIVE BUFFER REGISTER

    /** 
     * @brief   UART Transmit Buffer Register inherited from device data sheet
     */
    union UxTXREG_u {
        struct tagU1TXREGBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxTXREG: UARTx TRANSMIT BUFFER REGISTER
    
    /** 
     * @brief   UART Timing Parameter #1 Register inherited from device data sheet
     */
    union UxP1_u {
        struct tagU1P1BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxP1: UARTx TIMING PARAMETER 1 REGISTER

    /** 
     * @brief   UART Timing Parameter #2 Register inherited from device data sheet
     */
    union UxP2_u {
        struct tagU1P2BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxP2: UARTx TIMING PARAMETER 2 REGISTER
    
    /** 
     * @brief   UART Timing Parameter #3 Register (Low) inherited from device data sheet
     */
    union UxP3_u {
        struct tagU1P3BITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxP3: UARTx TIMING PARAMETER 3 REGISTER
    
    /** 
     * @brief   UART Timing Parameter #3 Register (High) inherited from device data sheet
     */
    union UxP3H_u {
        struct tagU1P3HBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed));   // UxP3H: UARTx TIMING PARAMETER 3H REGISTER

    /** 
     * @brief   UART Transmit Checksum Register inherited from device data sheet
     */
    union UxTXCHK_u {
        struct tagU1TXCHKBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxTXCHK: UARTx TRANSMIT CHECKSUM REGISTER

    /** 
     * @brief   UART Receive Checksum Register inherited from device data sheet
     */
    union UxRXCHK_u {
        struct tagU1RXCHKBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxRXCHK: UARTx RECEIVE CHECKSUM REGISTER

    /** 
     * @brief   UART SmartCard Configuration Register inherited from device data sheet
     */
    union UxSCCON_u {
        struct tagU1SCCONBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxSCCON: UARTx SMART CARD CONFIGURATION REGISTER

    /** 
     * @brief   UART SmartCard Interrupt Register inherited from device data sheet
     */
    union UxSCINT_u {
        struct tagU1SCINTBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxSCINT: UARTx SMART CARD INTERRUPT REGISTER

    /** 
     * @brief   UART Interrupt Register inherited from device data sheet
     */
    union UxINT_u {
        struct tagU1INTBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // UxINT: UARTx INTERRUPT REGISTER

    /** @} */ // end of inheritance declarations **************************************

    typedef union UxMODE_u UxMODE_t; // UxMODE: UARTx CONFIGURATION REGISTER data type
    typedef union UxMODEH_u UxMODEH_t; // UxMODEH: UARTx CONFIGURATION REGISTER HIGH data type
    typedef union UxSTA_u UxSTA_t; // UxSTA: UARTx STATUS REGISTER data type
    typedef union UxSTAH_u UxSTAH_t; // UxSTAH: UARTx STATUS REGISTER HIGH data type
    typedef union UxBRG_u UxBRG_t; // UxBRG: UARTx BAUD RATE REGISTER data type
    typedef union UxBRGH_u UxBRGH_t; // UxBRG: UARTx BAUD RATE REGISTER HIGH data type
    typedef union UxRXREG_u UxRXREG_t; // UxRXREG: UARTx RECEIVE BUFFER REGISTER data type
    typedef union UxTXREG_u UxTXREG_t; // UxTXREG: UARTx TRANSMIT BUFFER REGISTER data type
    typedef union UxP1_u UxP1_t; // UxP1: UARTx TIMING PARAMETER 1 REGISTER data type
    typedef union UxP2_u UxP2_t; // UxP2: UARTx TIMING PARAMETER 2 REGISTER data type
    typedef union UxP3_u UxP3_t; // UxP3: UARTx TIMING PARAMETER 3 REGISTER data type
    typedef union UxP3H_u UxP3H_t; // UxP3H: UARTx TIMING PARAMETER 3 REGISTER HIGH data type
    typedef union UxTXCHK_u UxTXCHK_t; // UxTXCHK: UARTx TRANSMIT CHECKSUM REGISTER data type
    typedef union UxRXCHK_u UxRXCHK_t; // UxRXCHK: UARTx RECEIVE CHECKSUM REGISTER data type
    typedef union UxSCCON_u UxSCCON_t; // UxSCCON: UARTx SMART CARD CONFIGURATION REGISTER data type
    typedef union UxSCINT_u UxSCINT_t; // UxSCINT: UARTx SMART CARD INTERRUPT REGISTER data type
    typedef union UxINT_u UxINT_t; // UxINT: UARTx INTERRUPT REGISTER data type
    
    /***********************************************************************************
     * @struct  P33C_UART_INSTANCE_s
     * @ingroup p33c-pral-uart-properties
     * @brief   Abstracted set of Special Function Registers of an Universal Asynchronous Receiver Transmitter (UART) instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of a 
     *  Universal Asynchronous Receiver Transmitter (UART) peripheral instance. 
     *  Users can use this abstracted set of registers to capture register settings 
     *  from or write generic register settings to a specific instance of this 
     *  peripheral instance.
     **********************************************************************************/
    struct P33C_UART_INSTANCE_s {
        
        UxMODE_t  UxMODE;  ///< UxMODE: UARTx CONFIGURATION REGISTER
        UxMODEH_t UxMODEH; ///< UxMODEH: UARTx CONFIGURATION REGISTER HIGH
        UxSTA_t   UxSTA;   ///< UxSTA: UARTx STATUS REGISTER
        UxSTAH_t  UxSTAH;  ///< UxSTAH: UARTx STATUS REGISTER HIGH
        UxBRG_t   UxBRG;   ///< UxBRG: UARTx BAUD RATE REGISTER
        UxBRGH_t  UxBRGH;  ///< UxBRGH: UARTx BAUD RATE REGISTER HIGH
        UxRXREG_t UxRXREG; ///< UxRXREG: UARTx RECEIVE BUFFER REGISTER
        unsigned  : 16;    ///< (reserved/unused memory section)
        UxTXREG_t UxTXREG; ///< UxTXREG: UARTx TRANSMIT BUFFER REGISTER
        unsigned  : 16;    ///< (reserved/unused memory section)
        UxP1_t    UxP1;    ///< UxP1: UARTx TIMING PARAMETER 1 REGISTER
        UxP2_t    UxP2;    ///< UxP2: UARTx TIMING PARAMETER 2 REGISTER
        UxP3_t    UxP3;    ///< UxP3: UARTx TIMING PARAMETER 3 REGISTER
        UxP3H_t   UxP3H;   ///< UxP3H: UARTx TIMING PARAMETER 3 REGISTER HIGH
        UxTXCHK_t UxTXCHK; ///< UxTXCHK: UARTx TRANSMIT CHECKSUM REGISTER
        UxRXCHK_t UxRXCHK; ///< UxRXCHK: UARTx RECEIVE CHECKSUM REGISTER
        UxSCCON_t UxSCCON; ///< UxSCCON: UARTx SMART CARD CONFIGURATION REGISTER
        UxSCINT_t UxSCINT; ///< UxSCINT: UARTx SMART CARD INTERRUPT REGISTER
        UxINT_t   UxINT;   ///< UxINT: UARTx INTERRUPT REGISTER

    }; ///< MULTI-PROCESS UART INSTANCE SPECIAL FUNCTION REGISTER SET
    typedef struct P33C_UART_INSTANCE_s P33C_UART_INSTANCE_t; ///< MULTI-PROCESS UART INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE
		
    /*********************************************************************************
     * @ingroup p33c-pral-uart-methods
     * @param   pInstance: Peripheral instance index of type unsigned integer
     * @return  Pointer to start address if UART instance special function register set of type P33C_UART_INSTANCE_t 
     * @brief   Gets pointer to start address of UART instance SFR set
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
     *  Please use @ref p33c_UartInstance_Exists to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_UartInstance_Exists
     * 
     *********************************************************************************/
	#define p33c_UartInstance_GetHandle(pInstance) (P33C_UART_INSTANCE_t*)p33c_UartInstance_Handles[(pInstance-1)]

    /*********************************************************************************
     * @ingroup p33c-pral-uart-methods
     * @brief   Checks if the peripheral instance specified by pInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  requested peripheral instance index does exist 
     * @return  false: requested peripheral instance index does not exist 
     *  
     * @details
     *  This function provides a guarding condition test to verify if a specific 
     *  peripheral instance exists before accessing it. 
     *********************************************************************************/
    #define p33c_UartInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_UartInstances)) ? true : false)
    
#endif // end of P33C_UART_INSTANCE_s
#endif	/* End of P33C_UART_SFR_DECLARATIONS_H */

// ______________________________
// end of file
