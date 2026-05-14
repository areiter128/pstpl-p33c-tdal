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
 * @file    p33c_sent-d.h
 * @see     p33c_sent.h
 * @brief   Single-Edge Nibble Transmission (SENT) Driver Module peripheral register abstraction data type declarations
 * @author  A69612
 * @details
 *  This additional header file contains defines for all required bit-settings of all 
 *  related special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
*/

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_SENT_SFR_DECLARATIONS_H
#define	P33C_SENT_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // Include extended device identifier macros

#if (P33C_SENT_COUNT > 0)

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
 * Therefore this SENT configuration example uses a 'virtual SENT module' to set up 
 * the required SENT configuration but provides a function allowing users to write this 
 * configuration to any SENT module of choice. Hence, pre-defined configurations 
 * can be mapped on specific peripheral instance by using their index defined by the 
 * data sheet (e.g. sentInstance = 1 maps pre-defined configuration to SENT1)
 * 
 * The data types used for each SFR in the P33C_SENT_INSTANCE_t data structure below,
 * are data types declared in the common C-header file of the device (e.g. <p33CK256MP506.h>). 
 * These header files are provided with the XC16 C-Compiler installation and don't have to be 
 * written nor changed manually. 
 * 
 */

// Determine number of available SENT instances on the selected device
#if defined (SENT4CON1)
    static volatile uint16_t*p33c_SentInstance_Handles[4]={
        &SENT1CON1, &SENT2CON1, &SENT3CON1, &SENT4CON1
    };
#elif defined (SENT3CON1)
    static volatile uint16_t*p33c_SentInstance_Handles[3]={
        &SENT1CON1, &SENT2CON1, &SENT3CON1
    };
#elif defined (SENT2CON1)
    static volatile uint16_t*p33c_SentInstance_Handles[2]={
        &SENT1CON1, &SENT2CON1
    };
#elif defined (SENT1CON1)
    static volatile uint16_t*p33c_SentInstance_Handles[1]={
        &SENT1CON1
    };
#else
    static volatile uint16_t*p33c_SentInstance_Handles[0];
    #pragma message "selected device has no supported SENT module"
#endif

/*********************************************************************************
 * @ingroup p33c-pral-sent-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 *
 **********************************************************************************/
static const uint16_t p33c_SentInstances = (sizeof(p33c_SentInstance_Handles)/sizeof(p33c_SentInstance_Handles[0]));
    
// GENERIC MULTI-PROCESS SENT INSTANCE SPECIAL FUNCTION REGISTER SET
    
#ifndef P33C_SENT_INSTANCE_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-sent-inheritance
     * @extends     P33C_SENT_INSTANCE_s 
     * @{
     */

    /** 
     * @brief SENT Control Register 1 inherited from device header file
     */
    union SENTxCON1_u {
        struct tagSENT1CON1BITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SENTxCON1: SENTx CONTROL REGISTER 1

    /** 
     * @brief SENT Control Register 2 inherited from device header file
     */
    union SENTxCON2_u {
        struct {
            uint16_t CON2 : 16;
        } bits;                         // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SENTxCON2: SENTx CONTROL REGISTER 2

    /** 
     * @brief SENT Control Register 3 inherited from device header file
     */
    union SENTxCON3_u {
        struct {
            uint16_t CON3 : 16;
        } bits;                         // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SENTxCON3: SENTx CONTROL REGISTER 3

    /** 
     * @brief SENT Status Register inherited from device header file
     */
    union SENTxSTAT_u {
        struct tagSENT1STATBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SENTxSTAT: SENTx STATUS REGISTER

    /** 
     * @brief SENT Synchronization Time Period Register inherited from device header file
     */
    union SENTxSYNC_u {
        struct {
            uint16_t SYNC : 16;
        } bits;                         // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SENTxSYNC: SENTx SYNCHRONIZATION TIME PERIOD REGISTER

    /** 
     * @brief SENT Receive Data Register (Low) inherited from device header file
     */
    union SENTxDATL_u {
        struct tagSENT1DATLBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SENTxDATL: SENTx RECEIVE DATA REGISTER LOW

    /** 
     * @brief SENT Receive Data Register (High) inherited from device header file
     */
    union SENTxDATH_u {
        struct tagSENT1DATHBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SENTxDATH: SENTx RECEIVE DATA REGISTER HIGH

    /** @} */ // end of inheritance declarations **************************************

    typedef union SENTxCON1_u SENTxCON1_t; // SENTxCON1: SENTx CONTROL REGISTER 1 data type
    typedef union SENTxCON2_u SENTxCON2_t; // SENTxCON2: SENTx CONTROL REGISTER 2 data type
    typedef union SENTxCON3_u SENTxCON3_t; // SENTxCON3: SENTx CONTROL REGISTER 3 data type
    typedef union SENTxSTAT_u SENTxSTAT_t; // SENTxSTAT: SENTx STATUS REGISTER data type
    typedef union SENTxSYNC_u SENTxSYNC_t; // SENTxSYNC: SENTx SYNCHRONIZATION TIME PERIOD REGISTER data type
    typedef union SENTxDATL_u SENTxDATL_t; // SENTxDATL: SENTx RECEIVE DATA REGISTER LOW data type
    typedef union SENTxDATH_u SENTxDATH_t; // SENTxDATH: SENTx RECEIVE DATA REGISTER HIGH data type
    
    /***********************************************************************************
     * @struct  P33C_SENT_INSTANCE_s
     * @ingroup p33c-pral-sent-properties
     * @brief   Abstracted set of Special Function Registers of a Single-Edge Nibble Transmission (SENT) instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of a 
     *  Single-Edge Nibble Transmission (SENT) peripheral instance. 
     *  Users can use this abstracted set of registers to capture register settings 
     *  from or write generic register settings to a specific instance of this 
     *  peripheral instance.
     **********************************************************************************/
    struct P33C_SENT_INSTANCE_s {
        
        SENTxCON1_t SENTxCON1;  ///< SENTxCON1: SENTx CONTROL REGISTER 1
        unsigned    : 16;       ///< (reserved/unused memory section)
        SENTxCON2_t SENTxCON2;  ///< SENTxCON2: SENTx CONTROL REGISTER 2
        unsigned    : 16;       ///< (reserved/unused memory section)
        SENTxCON3_t SENTxCON3;  ///< SENTxCON3: SENTx CONTROL REGISTER 3
        unsigned    : 16;       ///< (reserved/unused memory section)
        SENTxSTAT_t SENTxSTAT;  ///< SENTxSTAT: SENTx STATUS REGISTER
        unsigned    : 16;       ///< (reserved/unused memory section)
        SENTxSYNC_t SENTxSYNC;  ///< SENTxSYNC: SENTx SYNCHRONIZATION TIME PERIOD REGISTER
        unsigned    : 16;       ///< (reserved/unused memory section)
        SENTxDATL_t SENTxDATL;  ///< SENTxDATL: SENTx RECEIVE DATA REGISTER LOW
        SENTxDATH_t SENTxDATH;  ///< SENTxDATH: SENTx RECEIVE DATA REGISTER HIGH

    }; ///< MULTI-PROCESS SENT INSTANCE SPECIAL FUNCTION REGISTER SET
    typedef struct P33C_SENT_INSTANCE_s P33C_SENT_INSTANCE_t; ///< MULTI-PROCESS SENT INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE
    
    /*********************************************************************************
     * @ingroup p33c-pral-sent-methods
     * @brief   Gets pointer to start address of SENT instance SFR set
     * @param   pInstance: Peripheral instance index of type unsigned integer
     * @return  Pointer address to SENT instance of type P33C_SENT_INSTANCE_t specified by parameter pInstance
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
     *  Please use @ref p33c_SentInstance_Exists to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_SentInstance_Exists
     * 
     **********************************************************************************/
	#define p33c_SentInstance_GetHandle(pInstance)  (P33C_SENT_INSTANCE_t*)p33c_SentInstance_Handles[(pInstance-1)]
	
    /*********************************************************************************
     * @ingroup p33c-pral-sent-methods
     * @brief   Checks if the peripheral instance specified by pInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  requested peripheral instance index does exist
     * @return  false: requested peripheral instance index does not exist
     * 
     * @details
     *  This function provides a guarding condition test to verify if a specific
     *  peripheral instance exists before accessing it.
     **********************************************************************************/
    #define p33c_SentInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_SentInstances)) ? true : false)
	
#endif /* End of P33C_SENT_INSTANCE_s */
#endif /* End of P33C_SENT_COUNT */
#endif /* End of P33C_SENT_SFR_DECLARATIONS_H */

// __________________________
// end of file
