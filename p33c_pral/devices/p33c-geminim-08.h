/*
 * @file    p33c-geminim-08.h
 * @author  Andreas Reiter - M91406
 * @brief   80-pin Sagitta pin mapping header file
 * @version 1.0.7
 * @date    11/06/23
 */

// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef P33C_GEMINIM_80PIN_H
#define P33C_GEMINIM_80PIN_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "../exth/p33c_gpio.h" // include GPIO class object declaration header file
#include "../exth/p33c_devices.h" // include dsPIC33C SMPS device families identification macros header file
#include "p33c_pin_intrinsics.h" // include device pin control intrisic functions header file

#if defined (__P33SMPS_GEMINIM__)
#if (__P33SMPS_PINCOUNT__ == 80U)

// Function declarations of port pin RA0
#if defined (_TRISA0)
static const P33C_GPIO_t PIN_RA0 = {
    .Properties.Port         = 0,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 0,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = 0,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = 0,                       ///< Index of comparator input multiplexer channel available at this pin (0=A, 1=B, 2=C, 3=D), =-1 if not available
    .Properties.DAC          = 1,                       ///< Index of DAC instance available at this device pin, =-1 if not available
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #ifdef DAC1CONL
    .Objects.DAC             = (P33C_DAC_INSTANCE_t*)&DAC1CONL, ///< Pointer to DAC/Comparator instance data object available at this device pin
    #else
    .Objects.DAC             = NULL,                    ///< (not available)
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RA0_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RA0_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RA0_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RA0_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RA0_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RA0_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RA0_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RA0_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RA0_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RA0_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RA0_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RA0_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RA0_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RA0_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RA0_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RA0_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RA0_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RA0

// Function declarations of port pin RA1
#if defined (_TRISA1)
static const P33C_GPIO_t PIN_RA1 = {
    .Properties.Port         = 0,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 1,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = 1,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RA1_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RA1_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RA1_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RA1_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RA1_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RA1_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RA1_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RA1_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RA1_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RA1_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RA1_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RA1_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RA1_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RA1_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RA1_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RA1_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RA1_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RA1

// Function declarations of port pin RA2
#if defined (_TRISA2)
static const P33C_GPIO_t PIN_RA2 = {
    .Properties.Port         = 0,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 2,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = 2,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RA2_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RA2_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RA2_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RA2_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RA2_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RA2_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RA2_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RA2_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RA2_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RA2_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RA2_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RA2_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RA2_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RA2_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RA2_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RA2_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RA2_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RA2

// Function declarations of port pin RA3
#if defined (_TRISA3)
static const P33C_GPIO_t PIN_RA3 = {
    .Properties.Port         = 0,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 3,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = 3,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RA3_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RA3_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RA3_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RA3_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RA3_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RA3_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RA3_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RA3_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RA3_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RA3_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RA3_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RA3_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RA3_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RA3_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RA3_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RA3_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RA3_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RA3

// Function declarations of port pin RA4
#if defined (_TRISA4)
static const P33C_GPIO_t PIN_RA4 = {
    .Properties.Port         = 0,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 4,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = 4,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RA4_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RA4_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RA4_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RA4_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RA4_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RA4_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RA4_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RA4_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RA4_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RA4_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RA4_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RA4_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RA4_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RA4_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RA4_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RA4_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RA4_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RA4

// Function declarations of port pin RB0
#if defined (_TRISB0)
static const P33C_GPIO_t PIN_RB0 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 0,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 32,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 5,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB0_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB0_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB0_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB0_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB0_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB0_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB0_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB0_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB0_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB0_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB0_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB0_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB0_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB0_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB0_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB0_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB0_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB0

// Function declarations of port pin RB1
#if defined (_TRISB1)
static const P33C_GPIO_t PIN_RB1 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 1,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 33,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 6,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB1_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB1_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB1_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB1_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB1_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB1_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB1_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB1_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB1_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB1_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB1_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB1_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB1_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB1_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB1_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB1_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB1_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB1

// Function declarations of port pin RB2
#if defined (_TRISB2)
static const P33C_GPIO_t PIN_RB2 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 2,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 34,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 7,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = 3,                       ///< Index of comparator input multiplexer channel available at this pin (0=A, 1=B, 2=C, 3=D), =-1 if not available
    .Properties.DAC          = 1,                       ///< Index of DAC instance available at this device pin, =-1 if not available
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #ifdef DAC1CONL
    .Objects.DAC             = (P33C_DAC_INSTANCE_t*)&DAC1CONL, ///< Pointer to DAC/Comparator instance data object available at this device pin
    #else
    .Objects.DAC             = NULL,                    ///< (not available)
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB2_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB2_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB2_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB2_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB2_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB2_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB2_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB2_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB2_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB2_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB2_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB2_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB2_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB2_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB2_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB2_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB2_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB2

// Function declarations of port pin RB3
#if defined (_TRISB3)
static const P33C_GPIO_t PIN_RB3 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 3,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 35,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 8,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB3_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB3_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB3_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB3_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB3_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB3_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB3_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB3_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB3_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB3_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB3_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB3_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB3_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB3_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB3_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB3_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB3_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB3

// Function declarations of port pin RB4
#if defined (_TRISB4)
static const P33C_GPIO_t PIN_RB4 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 4,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 36,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB4_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB4_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB4_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB4_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB4_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB4_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB4_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB4_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB4_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB4_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB4_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB4_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB4_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB4_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB4_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB4_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB4_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB4

// Function declarations of port pin RB5
#if defined (_TRISB5)
static const P33C_GPIO_t PIN_RB5 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 5,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 37,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 2,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C2CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C2CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB5_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB5_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB5_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB5_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB5_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB5_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB5_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB5_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB5_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB5_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB5_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB5_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB5_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB5_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB5_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB5_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB5_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB5

// Function declarations of port pin RB6
#if defined (_TRISB6)
static const P33C_GPIO_t PIN_RB6 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 6,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 38,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 2,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C2CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C2CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB6_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB6_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB6_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB6_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB6_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB6_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB6_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB6_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB6_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB6_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB6_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB6_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB6_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB6_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB6_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB6_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB6_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB6

// Function declarations of port pin RB7
#if defined (_TRISB7)
static const P33C_GPIO_t PIN_RB7 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 7,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 39,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 9,                       ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB7_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB7_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB7_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB7_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB7_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB7_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB7_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB7_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB7_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB7_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB7_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB7_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB7_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB7_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB7_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB7_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB7_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB7

// Function declarations of port pin RB8
#if defined (_TRISB8)
static const P33C_GPIO_t PIN_RB8 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 8,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 40,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 10,                      ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 1,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C1CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C1CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB8_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB8_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB8_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB8_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB8_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB8_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB8_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB8_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB8_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB8_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB8_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB8_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB8_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB8_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB8_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB8_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB8_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB8

// Function declarations of port pin RB9
#if defined (_TRISB9)
static const P33C_GPIO_t PIN_RB9 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 9,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 41,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 11,                      ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 1,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C1CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C1CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB9_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB9_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB9_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB9_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB9_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB9_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB9_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB9_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB9_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB9_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB9_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB9_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB9_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB9_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB9_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB9_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB9_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB9

// Function declarations of port pin RB10
#if defined (_TRISB10)
static const P33C_GPIO_t PIN_RB10 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 10,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 42,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 3,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG3CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG3CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB10_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB10_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB10_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB10_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB10_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB10_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB10_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB10_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB10_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB10_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB10_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB10_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB10_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB10_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB10_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB10_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB10_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB10

// Function declarations of port pin RB11
#if defined (_TRISB11)
static const P33C_GPIO_t PIN_RB11 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 11,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 43,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 3,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG3CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG3CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB11_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB11_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB11_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB11_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB11_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB11_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB11_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB11_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB11_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB11_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB11_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB11_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB11_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB11_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB11_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB11_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB11_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB11

// Function declarations of port pin RB12
#if defined (_TRISB12)
static const P33C_GPIO_t PIN_RB12 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 12,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 44,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 2,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG2CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG2CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB12_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB12_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB12_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB12_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB12_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB12_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB12_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB12_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB12_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB12_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB12_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB12_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB12_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB12_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB12_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB12_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB12_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB12

// Function declarations of port pin RB13
#if defined (_TRISB13)
static const P33C_GPIO_t PIN_RB13 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 13,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 45,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 2,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG2CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG2CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB13_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB13_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB13_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB13_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB13_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB13_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB13_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB13_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB13_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB13_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB13_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB13_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB13_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB13_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB13_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB13_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB13_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB13

// Function declarations of port pin RB14
#if defined (_TRISB14)
static const P33C_GPIO_t PIN_RB14 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 14,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 46,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 1,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG1CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG1CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB14_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB14_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB14_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB14_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB14_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB14_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB14_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB14_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB14_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB14_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB14_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB14_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB14_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB14_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB14_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB14_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB14_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB14

// Function declarations of port pin RB15
#if defined (_TRISB15)
static const P33C_GPIO_t PIN_RB15 = {
    .Properties.Port         = 1,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 15,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 47,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 1,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG1CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG1CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RB15_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RB15_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RB15_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RB15_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RB15_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RB15_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RB15_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RB15_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RB15_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RB15_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RB15_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RB15_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RB15_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RB15_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RB15_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RB15_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RB15_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RB15

// Function declarations of port pin RC0
#if defined (_TRISC0)
static const P33C_GPIO_t PIN_RC0 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 0,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 48,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 12,                      ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC0_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC0_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC0_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC0_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC0_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC0_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC0_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC0_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC0_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC0_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC0_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC0_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC0_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC0_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC0_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC0_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC0_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC0

// Function declarations of port pin RC1
#if defined (_TRISC1)
static const P33C_GPIO_t PIN_RC1 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 1,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 49,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 13,                      ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC1_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC1_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC1_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC1_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC1_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC1_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC1_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC1_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC1_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC1_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC1_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC1_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC1_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC1_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC1_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC1_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC1_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC1

// Function declarations of port pin RC2
#if defined (_TRISC2)
static const P33C_GPIO_t PIN_RC2 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 2,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 50,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 14,                      ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC2_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC2_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC2_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC2_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC2_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC2_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC2_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC2_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC2_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC2_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC2_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC2_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC2_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC2_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC2_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC2_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC2_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC2

// Function declarations of port pin RC3
#if defined (_TRISC3)
static const P33C_GPIO_t PIN_RC3 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 3,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 51,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = 1,                       ///< Index of comparator input multiplexer channel available at this pin (0=A, 1=B, 2=C, 3=D), =-1 if not available
    .Properties.DAC          = 1,                       ///< Index of DAC instance available at this device pin, =-1 if not available
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #ifdef DAC1CONL
    .Objects.DAC             = (P33C_DAC_INSTANCE_t*)&DAC1CONL, ///< Pointer to DAC/Comparator instance data object available at this device pin
    #else
    .Objects.DAC             = NULL,                    ///< (not available)
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC3_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC3_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC3_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC3_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC3_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC3_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC3_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC3_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC3_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC3_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC3_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC3_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC3_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC3_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC3_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC3_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC3_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC3

// Function declarations of port pin RC4
#if defined (_TRISC4)
static const P33C_GPIO_t PIN_RC4 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 4,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 52,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC4_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC4_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC4_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC4_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC4_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC4_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC4_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC4_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC4_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC4_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC4_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC4_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC4_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC4_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC4_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC4_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC4_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC4

// Function declarations of port pin RC5
#if defined (_TRISC5)
static const P33C_GPIO_t PIN_RC5 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 5,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 53,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC5_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC5_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC5_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC5_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC5_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC5_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC5_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC5_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC5_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC5_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC5_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC5_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC5_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC5_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC5_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC5_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC5_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC5

// Function declarations of port pin RC6
#if defined (_TRISC6)
static const P33C_GPIO_t PIN_RC6 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 6,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 54,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC6_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC6_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC6_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC6_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC6_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC6_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC6_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC6_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC6_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC6_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC6_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC6_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC6_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC6_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC6_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC6_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC6_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC6

// Function declarations of port pin RC7
#if defined (_TRISC7)
static const P33C_GPIO_t PIN_RC7 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 7,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 55,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = 15,                      ///< Index of ADC input instance available at this device pin, =-1 if not available
    .Properties.ADCORE       = 7,                       ///< Index of ADC core connected to analog input of this pin, valid range: 0 to 7, =-1 if not available
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC7_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC7_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC7_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC7_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC7_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC7_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC7_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC7_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC7_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC7_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC7_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC7_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC7_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC7_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC7_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC7_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC7_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC7

// Function declarations of port pin RC8
#if defined (_TRISC8)
static const P33C_GPIO_t PIN_RC8 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 8,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 56,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 1,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = 2,                       ///< Index of SPI peripheral instance available at this device pin, =-1 if not available
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C1CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C1CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #ifdef SPI2CON1L
    .Objects.SPI             = (P33C_SPI_INSTANCE_t*)&SPI2CON1L, ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #else
    .Objects.SPI             = NULL,                    ///< (not available)
    #endif
    .Methods.Get            = &__builtin_RC8_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC8_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC8_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC8_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC8_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC8_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC8_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC8_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC8_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC8_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC8_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC8_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC8_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC8_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC8_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC8_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC8_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC8

// Function declarations of port pin RC9
#if defined (_TRISC9)
static const P33C_GPIO_t PIN_RC9 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 9,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 57,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 1,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = 2,                       ///< Index of SPI peripheral instance available at this device pin, =-1 if not available
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C1CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C1CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #ifdef SPI2CON1L
    .Objects.SPI             = (P33C_SPI_INSTANCE_t*)&SPI2CON1L, ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #else
    .Objects.SPI             = NULL,                    ///< (not available)
    #endif
    .Methods.Get            = &__builtin_RC9_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC9_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC9_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC9_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC9_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC9_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC9_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC9_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC9_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC9_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC9_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC9_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC9_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC9_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC9_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC9_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC9_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC9

// Function declarations of port pin RC10
#if defined (_TRISC10)
static const P33C_GPIO_t PIN_RC10 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 10,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 58,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC10_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC10_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC10_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC10_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC10_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC10_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC10_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC10_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC10_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC10_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC10_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC10_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC10_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC10_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC10_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC10_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC10_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC10

// Function declarations of port pin RC11
#if defined (_TRISC11)
static const P33C_GPIO_t PIN_RC11 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 11,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 59,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC11_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC11_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC11_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC11_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC11_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC11_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC11_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC11_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC11_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC11_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC11_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC11_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC11_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC11_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC11_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC11_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC11_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC11

// Function declarations of port pin RC12
#if defined (_TRISC12)
static const P33C_GPIO_t PIN_RC12 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 12,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 60,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 4,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG4CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG4CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC12_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC12_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC12_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC12_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC12_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC12_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC12_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC12_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC12_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC12_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC12_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC12_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC12_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC12_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC12_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC12_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC12_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC12

// Function declarations of port pin RC13
#if defined (_TRISC13)
static const P33C_GPIO_t PIN_RC13 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 13,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 61,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = 4,                       ///< Index of PWM Generator peripheral instance available at this device pin, =-1 if not available
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #ifdef PG4CONL
    .Objects.PG              = (P33C_PWM_INSTANCE_t*)&PG4CONL, ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #else
    .Objects.PG              = NULL,                    ///< (not available)
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC13_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC13_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC13_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC13_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC13_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC13_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC13_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC13_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC13_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC13_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC13_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC13_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC13_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC13_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC13_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC13_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC13_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC13

// Function declarations of port pin RC14
#if defined (_TRISC14)
static const P33C_GPIO_t PIN_RC14 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 14,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 62,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC14_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC14_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC14_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC14_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC14_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC14_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC14_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC14_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC14_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC14_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC14_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC14_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC14_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC14_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC14_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC14_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC14_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC14

// Function declarations of port pin RC15
#if defined (_TRISC15)
static const P33C_GPIO_t PIN_RC15 = {
    .Properties.Port         = 2,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 15,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 63,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RC15_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RC15_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RC15_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RC15_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RC15_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RC15_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RC15_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RC15_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RC15_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RC15_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RC15_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RC15_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RC15_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RC15_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RC15_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RC15_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RC15_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RC15

// Function declarations of port pin RD0
#if defined (_TRISD0)
static const P33C_GPIO_t PIN_RD0 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 0,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 64,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD0_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD0_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD0_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD0_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD0_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD0_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD0_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD0_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD0_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD0_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD0_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD0_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD0_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD0_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD0_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD0_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD0_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD0

// Function declarations of port pin RD1
#if defined (_TRISD1)
static const P33C_GPIO_t PIN_RD1 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 1,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 65,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD1_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD1_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD1_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD1_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD1_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD1_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD1_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD1_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD1_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD1_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD1_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD1_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD1_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD1_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD1_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD1_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD1_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD1

// Function declarations of port pin RD2
#if defined (_TRISD2)
static const P33C_GPIO_t PIN_RD2 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 2,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 66,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD2_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD2_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD2_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD2_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD2_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD2_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD2_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD2_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD2_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD2_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD2_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD2_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD2_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD2_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD2_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD2_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD2_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD2

// Function declarations of port pin RD3
#if defined (_TRISD3)
static const P33C_GPIO_t PIN_RD3 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 3,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 67,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD3_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD3_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD3_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD3_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD3_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD3_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD3_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD3_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD3_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD3_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD3_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD3_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD3_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD3_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD3_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD3_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD3_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD3

// Function declarations of port pin RD4
#if defined (_TRISD4)
static const P33C_GPIO_t PIN_RD4 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 4,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 68,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD4_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD4_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD4_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD4_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD4_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD4_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD4_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD4_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD4_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD4_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD4_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD4_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD4_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD4_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD4_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD4_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD4_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD4

// Function declarations of port pin RD5
#if defined (_TRISD5)
static const P33C_GPIO_t PIN_RD5 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 5,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 69,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD5_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD5_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD5_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD5_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD5_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD5_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD5_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD5_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD5_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD5_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD5_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD5_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD5_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD5_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD5_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD5_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD5_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD5

// Function declarations of port pin RD6
#if defined (_TRISD6)
static const P33C_GPIO_t PIN_RD6 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 6,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 70,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD6_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD6_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD6_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD6_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD6_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD6_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD6_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD6_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD6_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD6_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD6_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD6_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD6_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD6_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD6_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD6_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD6_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD6

// Function declarations of port pin RD7
#if defined (_TRISD7)
static const P33C_GPIO_t PIN_RD7 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 7,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = 71,                      ///< Remappable Pin ID of this device pin, =-1 if not available
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD7_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD7_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD7_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD7_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD7_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD7_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD7_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD7_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD7_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD7_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD7_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD7_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD7_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD7_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD7_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD7_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD7_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD7

// Function declarations of port pin RD8
#if defined (_TRISD8)
static const P33C_GPIO_t PIN_RD8 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 8,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = 2,                       ///< Index of SPI peripheral instance available at this device pin, =-1 if not available
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #ifdef SPI2CON1L
    .Objects.SPI             = (P33C_SPI_INSTANCE_t*)&SPI2CON1L, ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #else
    .Objects.SPI             = NULL,                    ///< (not available)
    #endif
    .Methods.Get            = &__builtin_RD8_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD8_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD8_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD8_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD8_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD8_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD8_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD8_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD8_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD8_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD8_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD8_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD8_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD8_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD8_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD8_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD8_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD8

// Function declarations of port pin RD9
#if defined (_TRISD9)
static const P33C_GPIO_t PIN_RD9 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 9,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD9_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD9_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD9_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD9_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD9_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD9_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD9_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD9_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD9_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD9_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD9_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD9_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD9_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD9_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD9_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD9_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD9_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD9

// Function declarations of port pin RD10
#if defined (_TRISD10)
static const P33C_GPIO_t PIN_RD10 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 10,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD10_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD10_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD10_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD10_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD10_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD10_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD10_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD10_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD10_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD10_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD10_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD10_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD10_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD10_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD10_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD10_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD10_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD10

// Function declarations of port pin RD11
#if defined (_TRISD11)
static const P33C_GPIO_t PIN_RD11 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 11,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD11_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD11_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD11_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD11_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD11_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD11_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD11_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD11_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD11_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD11_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD11_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD11_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD11_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD11_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD11_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD11_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD11_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD11

// Function declarations of port pin RD12
#if defined (_TRISD12)
static const P33C_GPIO_t PIN_RD12 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 12,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD12_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD12_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD12_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD12_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD12_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD12_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD12_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD12_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD12_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD12_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD12_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD12_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD12_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD12_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD12_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD12_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD12_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD12

// Function declarations of port pin RD13
#if defined (_TRISD13)
static const P33C_GPIO_t PIN_RD13 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 13,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD13_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD13_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD13_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD13_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD13_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD13_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD13_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD13_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD13_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD13_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD13_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD13_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD13_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD13_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD13_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD13_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD13_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD13

// Function declarations of port pin RD14
#if defined (_TRISD14)
static const P33C_GPIO_t PIN_RD14 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 14,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD14_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD14_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD14_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD14_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD14_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD14_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD14_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD14_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD14_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD14_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD14_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD14_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD14_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD14_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD14_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD14_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD14_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD14

// Function declarations of port pin RD15
#if defined (_TRISD15)
static const P33C_GPIO_t PIN_RD15 = {
    .Properties.Port         = 3,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 15,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RD15_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RD15_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RD15_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RD15_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RD15_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RD15_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RD15_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RD15_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RD15_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RD15_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RD15_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RD15_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RD15_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RD15_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RD15_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RD15_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RD15_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RD15

// Function declarations of port pin RE0
#if defined (_TRISE0)
static const P33C_GPIO_t PIN_RE0 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 0,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE0_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE0_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE0_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE0_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE0_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE0_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE0_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE0_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE0_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE0_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE0_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE0_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE0_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE0_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE0_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE0_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE0_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE0

// Function declarations of port pin RE1
#if defined (_TRISE1)
static const P33C_GPIO_t PIN_RE1 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 1,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE1_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE1_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE1_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE1_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE1_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE1_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE1_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE1_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE1_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE1_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE1_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE1_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE1_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE1_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE1_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE1_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE1_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE1

// Function declarations of port pin RE2
#if defined (_TRISE2)
static const P33C_GPIO_t PIN_RE2 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 2,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE2_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE2_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE2_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE2_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE2_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE2_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE2_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE2_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE2_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE2_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE2_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE2_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE2_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE2_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE2_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE2_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE2_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE2

// Function declarations of port pin RE3
#if defined (_TRISE3)
static const P33C_GPIO_t PIN_RE3 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 3,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE3_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE3_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE3_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE3_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE3_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE3_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE3_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE3_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE3_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE3_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE3_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE3_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE3_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE3_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE3_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE3_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE3_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE3

// Function declarations of port pin RE4
#if defined (_TRISE4)
static const P33C_GPIO_t PIN_RE4 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 4,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE4_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE4_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE4_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE4_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE4_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE4_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE4_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE4_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE4_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE4_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE4_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE4_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE4_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE4_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE4_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE4_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE4_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE4

// Function declarations of port pin RE5
#if defined (_TRISE5)
static const P33C_GPIO_t PIN_RE5 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 5,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE5_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE5_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE5_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE5_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE5_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE5_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE5_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE5_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE5_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE5_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE5_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE5_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE5_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE5_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE5_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE5_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE5_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE5

// Function declarations of port pin RE6
#if defined (_TRISE6)
static const P33C_GPIO_t PIN_RE6 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 6,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE6_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE6_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE6_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE6_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE6_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE6_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE6_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE6_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE6_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE6_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE6_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE6_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE6_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE6_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE6_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE6_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE6_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE6

// Function declarations of port pin RE7
#if defined (_TRISE7)
static const P33C_GPIO_t PIN_RE7 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 7,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE7_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE7_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE7_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE7_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE7_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE7_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE7_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE7_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE7_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE7_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE7_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE7_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE7_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE7_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE7_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE7_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE7_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE7

// Function declarations of port pin RE8
#if defined (_TRISE8)
static const P33C_GPIO_t PIN_RE8 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 8,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE8_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE8_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE8_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE8_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE8_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE8_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE8_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE8_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE8_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE8_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE8_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE8_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE8_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE8_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE8_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE8_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE8_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE8

// Function declarations of port pin RE9
#if defined (_TRISE9)
static const P33C_GPIO_t PIN_RE9 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 9,                       ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE9_Get,       ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE9_Set,       ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE9_Clear,     ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE9_Toggle,    ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE9_SetInput,  ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE9_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE9_SetState,  ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE9_Init,      ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE9_Dispose,   ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE9_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE9_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE9_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE9_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE9_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE9_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE9_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE9_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE9

// Function declarations of port pin RE10
#if defined (_TRISE10)
static const P33C_GPIO_t PIN_RE10 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 10,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE10_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE10_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE10_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE10_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE10_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE10_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE10_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE10_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE10_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE10_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE10_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE10_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE10_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE10_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE10_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE10_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE10_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE10

// Function declarations of port pin RE11
#if defined (_TRISE11)
static const P33C_GPIO_t PIN_RE11 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 11,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE11_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE11_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE11_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE11_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE11_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE11_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE11_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE11_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE11_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE11_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE11_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE11_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE11_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE11_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE11_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE11_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE11_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE11

// Function declarations of port pin RE12
#if defined (_TRISE12)
static const P33C_GPIO_t PIN_RE12 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 12,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 2,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C2CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C2CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE12_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE12_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE12_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE12_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE12_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE12_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE12_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE12_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE12_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE12_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE12_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE12_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE12_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE12_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE12_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE12_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE12_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE12

// Function declarations of port pin RE13
#if defined (_TRISE13)
static const P33C_GPIO_t PIN_RE13 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 13,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = 2,                       ///< Index of I2C peripheral instance available at this device pin, =-1 if not available
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #ifdef I2C2CONL
    .Objects.I2C             = (P33C_I2C_INSTANCE_t*)&I2C2CONL, ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #else
    .Objects.I2C             = NULL,                    ///< (not available)
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE13_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE13_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE13_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE13_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE13_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE13_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE13_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE13_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE13_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE13_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE13_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE13_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE13_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE13_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE13_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE13_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE13_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE13

// Function declarations of port pin RE14
#if defined (_TRISE14)
static const P33C_GPIO_t PIN_RE14 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 14,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE14_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE14_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE14_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE14_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE14_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE14_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE14_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE14_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE14_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE14_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE14_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE14_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE14_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE14_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE14_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE14_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE14_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE14

// Function declarations of port pin RE15
#if defined (_TRISE15)
static const P33C_GPIO_t PIN_RE15 = {
    .Properties.Port         = 4,                       ///< Index of device port this device pin is part of (0=A, 1=B, 2=C, 3=D, etc), =-1 if not available
    .Properties.Pin          = 15,                      ///< Index of device pin within its device port (0-15), =-1 if not available
    .Properties.RPid         = -1,                      ///< (not available)
    .Properties.ADCAN        = -1,                      ///< (not available)
    .Properties.ADCORE       = -1,                      ///< (not available)
    .Properties.CMPxIN       = -1,                      ///< (not available)
    .Properties.DAC          = -1,                      ///< (not available)
    .Properties.I2C          = -1,                      ///< (not available)
    .Properties.OPA          = -1,                      ///< (not available)
    .Properties.PGA          = -1,                      ///< (not available)
    .Properties.PG           = -1,                      ///< (not available)
    .Properties.SPI          = -1,                      ///< (not available)
    #if (P33C_DAC_COUNT > 0)
    .Objects.DAC             = NULL,                    ///< Pointer to DAC/Comparator instance data object available at this device pin
    #endif
    #if (P33C_I2C_COUNT > 0)
    .Objects.I2C             = NULL,                    ///< Pointer to I2C interface peripheral instance data object available at this device pin
    #endif
    #if (P33C_OPA_COUNT > 0)
    .Objects.OPA             = NULL,                    ///< Pointer to Op-Amp instance data object available at this device pin
    #endif
    #if (P33C_PGA_COUNT > 0)
    .Objects.PGA             = NULL,                    ///< Pointer to Programmable Gain Amplifier instance data object available at this device pin
    #endif
    #if (P33C_PG_COUNT > 0)
    .Objects.PG              = NULL,                    ///< Pointer to PWM Generator peripheral instance data object available at this device pin
    #endif
    #if (P33C_SPI_COUNT > 0)
    .Objects.SPI             = NULL,                    ///< Pointer to SPI interface peripheral instance data object available at this device pin
    #endif
    .Methods.Get            = &__builtin_RE15_Get,      ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
    .Methods.Set            = &__builtin_RE15_Set,      ///< Sets the most recent pin state to logic HIGH
    .Methods.Clear          = &__builtin_RE15_Clear,    ///< Sets the most recent pin state to logic LOW
    .Methods.Toggle         = &__builtin_RE15_Toggle,   ///< Toggles the most recent pin state
    .Methods.SetInput       = &__builtin_RE15_SetInput, ///< Sets the pin direction to high impedance input (no state change)
    .Methods.SetOutput      = &__builtin_RE15_SetOutput, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.SetState       = &__builtin_RE15_SetState, ///< Sets the pin direction to low impedance output (no state change)
    .Methods.Init           = &__builtin_RE15_Init,     ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
    .Methods.Dispose        = &__builtin_RE15_Dispose,  ///< Sets the pin to high impedance input (RESET default)
    .Methods.GetOpenDrain   = &__builtin_RE15_GetOpenDrain, ///< Gets the pin open drain mode
    .Methods.SetOpenDrain   = &__builtin_RE15_SetOpenDrain, ///< Sets the pin open drain mode
    .Methods.GetPullUp      = &__builtin_RE15_GetPullUp, ///< Gets the connection state of the pin's pull up resistor 
    .Methods.SetPullUp      = &__builtin_RE15_SetPullUp, ///< Sets the connection state of the pin's pull up resistor
    .Methods.GetPullDown    = &__builtin_RE15_GetPullDown, ///< Gets the connection state of the pin's pull down resistor
    .Methods.SetPullDown    = &__builtin_RE15_SetPullDown, ///< Sets the connection state of the pin's pull down resistor
    .Methods.SetAnalog      = &__builtin_RE15_SetAnalog, ///< Enable analog functions of this pin
    .Methods.SetDigital     = &__builtin_RE15_SetDigital ///< Disable analog functions of this pin
};
#endif // declarations of pin RE15

#endif  /* __P33SMPS_PINCOUNT__ */
#endif  /* __P33SMPS_GEMINIM__  */
#endif  /* P33C_GEMINIM_80PIN_H */

// __________________________________
// end of file

