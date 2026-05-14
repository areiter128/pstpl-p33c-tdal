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
 * @file   p33c_timer-d.h
 * @see    p33c_timer.h
 * @author I62419
 * @brief  Standard Timer Module special function register abstraction data type declarations
 * @details
 *  This additional header file contains defines for all required bit-settings of all  
 *  related special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_TIMER16_SFR_DECLARATIONS_H
#define	P33C_TIMER16_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#ifndef P33C_TIMER_MODULE_s     

    /***********************************************************************************
     * Declaration of envelope data structures abstracting device special function
     * registers by extracting register content declarations form the default device
     * header file.
     **********************************************************************************/

    /***********************************************************************************     
    * @addtogroup  p33c-pral-timer-inheritance     
    * @extends     P33C_TIMER_MODULE_s     
    * @{     
    */

    /**
    * @brief   Timer1 Control Register inherited from device data sheet     
    */
    union TxCON_u {
        struct tagT1CONBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // TxCON: Timer X CONTROL REGISTER
    typedef union TxCON_u TxCON_t; // TxCON: Timer X CONTROL REGISTER data type

    /**
    * @brief   Timer Counter Register inherited from device data sheet     
    */
    struct TMRx_s {
        uint16_t CNT : 16;
    }; // Register bit-field
    union TMRx_u {
        struct TMRx_s bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // TMRx TIMER COUNTER REGISTER
    typedef union TMRx_u TMRx_t; // TMRx TIMER COUNTER REGISTER data type

    
    /**
    * @brief   Timer Period Register inherited from device data sheet     
    */
    struct PRx_s {
        uint16_t PER : 16;
    }; // Register bit-field
    union PRx_u {
        struct PRx_s bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // PRx TIMER PERIOD REGISTER
    typedef union PRx_u PRx_t; // PRx TIMER PERIOD REGISTER data type

    /***********************************************************************************
     * @struct  P33C_TIMER_MODULE_s
     * @ingroup p33c-pral-timer-properties
     * @brief   Abstracted set of Special Function Registers of the 16-bit timer peripheral module
     * @details
     *   This structure defines an abstracted set of Special Function Registers of the 
     *   single 16-bit general purpose timer peripheral. Users can use this abstracted
     *   set of registers to capture register settings from or write generic register 
     *   settings to a specific instance of this peripheral.
     * 
     **********************************************************************************/

    struct P33C_TIMER_MODULE_s {

        TxCON_t TxCON;  ///< TxCON Timer X CONTROL REGISTER
        unsigned : 16;  ///< (reserved)
        TMRx_t TMRx;    ///< TMR1 TIMER COUNTER REGISTER
        unsigned : 16;  ///< (reserved)
        PRx_t PRx;      ///< PR1 TIMER PERIOD REGISTER
        
    }; ///< 16-BIT TIMER INSTANCE SPECIAL FUNCTION REGISTER SET
    
    typedef struct P33C_TIMER_MODULE_s P33C_TIMER_MODULE_t;  ///< 16-BIT TIMER INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE
    

    /*********************************************************************************
     * @ingroup lib-layer-pral-functions-public-timer
     * @brief   Returns a pointer to the start address of the Timer SFR block
     * @return  Pointer address to Timer SFR block of type P33C_TIMER_MODULE_t
     *  
     * @details
     *  This macro returns the address pointer (tmrHandle) of the Timer Special
     *  Function Register. The handle can be used to assign a global variable 
     *  in user code, which allows to directly read from/write to Timer registers 
     *  with zero API overhead.
     * 
     *********************************************************************************/
    #define p33c_TimerModule_GetHandle()    (P33C_TIMER_MODULE_t*)&T1CON;
    
#endif /* End of P33C_TIMER_MODULE_s */
#endif /* End of P33C_TIMER16_SFR_DECLARATIONS_H */

// ________________________
// end of file
