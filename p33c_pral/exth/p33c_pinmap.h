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

/* 
 * @file    p33c_pinmap.h   
 * @author  M91406
 * @brief   Target device pin mapping header file
 * @version 1.0.4
 * @date    August 09, 2023
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PINMAP_DECLARATIONS_H
#define	P33C_PINMAP_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // include SMPS device family abstraction declarations
#include "p33c_gpio.h" // include generic GPIO data type declaration header file

// Dummy functions for PIN_NONE objects (not accessing hardware)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RNN_Get(void)                { return(0U); }                 ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_Set(void)                { asm volatile ("nop \n"); }    ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_Clear(void)              { asm volatile ("nop \n"); }    ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_Toggle(void)             { asm volatile ("nop \n"); }    ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetInput(void)           { asm volatile ("nop \n"); }    ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetOutput(void)          { asm volatile ("bclr _TRISA, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetState(const bool s)   { asm volatile ("nop \n"); }    ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_Init(const bool d, const bool s) { asm volatile ("nop \n"); } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_Dispose(void)            { asm volatile ("nop \n"); }    ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RNN_GetOpenDrain(void)       { return(0U); }                 ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetOpenDrain(const bool a) { asm volatile ("nop \n"); }  ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RNN_GetPullUp(void)          { return(0U); }                 ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetPullUp(const bool a)  { asm volatile ("nop \n"); }    ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RNN_GetPullDown(void)        { return(0U); }                 ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetPullDown(const bool a) { asm volatile ("nop \n"); }   ///< Sets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetAnalog(void)          { asm volatile ("nop \n"); }    ///< Enable analog functions of this pin
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RNN_SetDigital(void)         { asm volatile ("nop \n"); }    ///< Disable analog functions of this pin


// Function declarations for VSS connections
static const P33C_GPIO_t PIN_NONE = {
    .Properties.Port        = -1,       ///< (not available)
    .Properties.Pin         = -1,       ///< (not available)
    .Properties.RPid        = -1,       ///< (not available)
    .Properties.ADCAN       = -1,       ///< (not available)
    .Properties.ADCORE      = -1,       ///< (not available)
    .Properties.CMPxIN      = -1,       ///< (not available)
    .Properties.DAC         = -1,       ///< (not available)
    .Properties.I2C         = -1,       ///< (not available)
    .Properties.OPA         = -1,       ///< (not available)
    .Properties.PGA         = -1,       ///< (not available)
    .Properties.PG          = -1,       ///< (not available)
    .Properties.SPI         = -1,       ///< (not available)
    
    .Objects.DAC            = NULL,     ///< (not available)
    .Objects.I2C            = NULL,     ///< (not available)
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    .Objects.PG             = NULL,     ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    .Objects.SPI            = NULL,     ///< Pointer to SPI interface peripheral instance data object available at this device pin

    .Methods.Get            = &__builtin_RNN_Get,           ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RNN_Set,           ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RNN_Clear,         ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RNN_Toggle,        ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RNN_SetInput,      ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RNN_SetOutput,     ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RNN_SetState,      ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RNN_Init,          ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RNN_Dispose,       ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RNN_GetOpenDrain,  ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RNN_SetOpenDrain,  ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RNN_GetPullUp,     ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RNN_SetPullUp,     ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RNN_GetPullDown,   ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RNN_SetPullDown,   ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RNN_SetAnalog,     ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RNN_SetDigital     ///< Disable analog functions of this pin
};

#define PIN_VSS  PIN_NONE
#define PIN_VDD  PIN_NONE
#define PIN_AVSS PIN_NONE
#define PIN_AVDD PIN_NONE
#define PIN_MCLR PIN_NONE
#define PIN_NC   PIN_NONE
#define PIN_5V   PIN_NONE
#define PIN_3V3  PIN_NONE


// Support of dsPIC33C single core devices only
#if defined (__P33SMPS_CK__)

// ------------------------------------------------
#if defined (__P33SMPS_ARA__)
    #if (__P33SMPS_PINCOUNT__ == 28U)
        #include "../devices/p33c-ara-02.h"
    #elif (__P33SMPS_PINCOUNT__ == 36U)
        #include "../devices/p33c-ara-03.h"
    #elif (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-ara-05.h"
    #endif
#elif defined (__P33SMPS_SAGITTA__)
    #if (__P33SMPS_PINCOUNT__ == 28U)
        #include "../devices/p33c-sagitta-02.h"
    #elif (__P33SMPS_PINCOUNT__ == 36U)
        #include "../devices/p33c-sagitta-03.h"
    #elif (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-sagitta-05.h"
    #elif (__P33SMPS_PINCOUNT__ == 64U)
        #include "../devices/p33c-sagitta-06.h"
    #elif (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-sagitta-08.h"
    #endif
#elif defined (__P33SMPS_SAGITTAP__)
    #if (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-sagittap-05.h"
    #elif (__P33SMPS_PINCOUNT__ == 64U)
        #include "../devices/p33c-sagittap-06.h"
    #elif (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-sagittap-08.h"
    #endif
#elif defined (__P33SMPS_SAGITTAPP__)
    #if (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-sagittapp-05.h"
    #elif (__P33SMPS_PINCOUNT__ == 64U)
        #include "../devices/p33c-sagittapp-06.h"
    #elif (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-sagittapp-08.h"
    #elif (__P33SMPS_PINCOUNT__ == 100U)
        #include "../devices/p33c-sagittapp-10.h"
    #endif
#elif defined (__P33SMPS_OCTANSP__) 
    #if (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-octansp-08.h"
    #elif (__P33SMPS_PINCOUNT__ == 100U)
        #include "../devices/p33c-octansp-08.h"
    #endif
#endif
// ------------------------------------------------

// Support of dsPIC33C dual core devices only
#elif defined (__P33SMPS_CH__)

// ToDo: add device support for dual core devices
// Support of dsPIC33C dual core devices 
#if defined (__P33SMPS_GEMINIM__)
    #if (__P33SMPS_PINCOUNT__ == 28U)
        #include "../devices/p33c-geminim-02.h"
    #elif (__P33SMPS_PINCOUNT__ == 36U)
        #include "../devices/p33c-geminim-03.h"
    #elif (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-geminim-05.h"
    #elif (__P33SMPS_PINCOUNT__ == 64U)
        #include "../devices/p33c-geminim-06.h"
    #elif (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-geminim-08.h"
    #endif
#elif defined (__P33SMPS_GEMINIS__)
    #if (__P33SMPS_PINCOUNT__ == 28U)
        #include "../devices/p33c-geminis-02.h"
    #elif (__P33SMPS_PINCOUNT__ == 36U)
        #include "../devices/p33c-geminis-03.h"
    #elif (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-geminis-05.h"
    #elif (__P33SMPS_PINCOUNT__ == 64U)
        #include "../devices/p33c-geminis-06.h"
    #elif (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-geminis-08.h"
    #endif
#elif defined (__P33SMPS_SAGITTARIUSM__)
    #if (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-sagittariusm-05.h"
    #elif (__P33SMPS_PINCOUNT__ == 64U)
        #include "../devices/p33c-sagittariusm-06.h"
    #elif (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-sagittariusm-08.h"
    #endif
#elif defined (__P33SMPS_SAGITTARIUSS__)
    #if (__P33SMPS_PINCOUNT__ == 48U)
        #include "../devices/p33c-sagittariuss-05.h"
    #elif (__P33SMPS_PINCOUNT__ == 64U)
        #include "../devices/p33c-sagittariuss-06.h"
    #elif (__P33SMPS_PINCOUNT__ == 80U)
        #include "../devices/p33c-sagittariuss-08.h"
    #endif
#endif

#endif  /* __P33SMPS_CH__ / __P33SMPS_CK__ */
#endif	/* End of P33C_PINMAP_DECLARATIONS_H */

// __________________________
// end of file
