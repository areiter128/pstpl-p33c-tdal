/*
* @file    p33c_pin_intrinsics.h
* @author  M91406
* @brief   Pin properties access function intrinsics header file
* @version 1.0.7
* @date    10/27/23
*/
// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef P33C_PIN_INTRINSICS_H
#define P33C_PIN_INTRINSICS_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "../exth/p33c_devices.h" // include dsPIC33C SMPS device families identification macros header file

// Function declarations of port pin RA0
#if defined (_TRISA0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA0_Get(void)          { return((bool)_RA0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_Set(void)          { asm volatile ("bset _LATA, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_Clear(void)        { asm volatile ("bclr _LATA, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_Toggle(void)       { asm volatile ("btg _LATA, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetInput(void)     { asm volatile ("bset _TRISA, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetOutput(void)    { asm volatile ("bclr _TRISA, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetState(const bool s)   { _LATA0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_Init(const bool d, const bool s) { _LATA0 = s; _TRISA0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_Dispose(void)      { _TRISA0 = 1; _LATA0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA0_GetOpenDrain(void) { return(_ODCA0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetOpenDrain(const bool a) { _ODCA0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA0_GetPullUp(void)    { return(_CNPUA0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetPullUp(const bool a)  { _CNPUA0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA0_GetPullDown(void)  { return(_CNPUA0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetPullDown(const bool a) { _CNPUA0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetAnalog(void)    { _ANSELA0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetDigital(void)   { _ANSELA0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA0

// Function declarations of port pin RA1
#if defined (_TRISA1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA1_Get(void)          { return((bool)_RA1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_Set(void)          { asm volatile ("bset _LATA, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_Clear(void)        { asm volatile ("bclr _LATA, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_Toggle(void)       { asm volatile ("btg _LATA, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetInput(void)     { asm volatile ("bset _TRISA, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetOutput(void)    { asm volatile ("bclr _TRISA, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetState(const bool s)   { _LATA1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_Init(const bool d, const bool s) { _LATA1 = s; _TRISA1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_Dispose(void)      { _TRISA1 = 1; _LATA1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA1_GetOpenDrain(void) { return(_ODCA1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetOpenDrain(const bool a) { _ODCA1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA1_GetPullUp(void)    { return(_CNPUA1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetPullUp(const bool a)  { _CNPUA1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA1_GetPullDown(void)  { return(_CNPUA1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetPullDown(const bool a) { _CNPUA1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetAnalog(void)    { _ANSELA1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetDigital(void)   { _ANSELA1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA1

// Function declarations of port pin RA2
#if defined (_TRISA2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA2_Get(void)          { return((bool)_RA2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_Set(void)          { asm volatile ("bset _LATA, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_Clear(void)        { asm volatile ("bclr _LATA, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_Toggle(void)       { asm volatile ("btg _LATA, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetInput(void)     { asm volatile ("bset _TRISA, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetOutput(void)    { asm volatile ("bclr _TRISA, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetState(const bool s)   { _LATA2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_Init(const bool d, const bool s) { _LATA2 = s; _TRISA2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_Dispose(void)      { _TRISA2 = 1; _LATA2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA2_GetOpenDrain(void) { return(_ODCA2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetOpenDrain(const bool a) { _ODCA2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA2_GetPullUp(void)    { return(_CNPUA2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetPullUp(const bool a)  { _CNPUA2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA2_GetPullDown(void)  { return(_CNPUA2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetPullDown(const bool a) { _CNPUA2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetAnalog(void)    { _ANSELA2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetDigital(void)   { _ANSELA2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA2

// Function declarations of port pin RA3
#if defined (_TRISA3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA3_Get(void)          { return((bool)_RA3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_Set(void)          { asm volatile ("bset _LATA, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_Clear(void)        { asm volatile ("bclr _LATA, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_Toggle(void)       { asm volatile ("btg _LATA, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetInput(void)     { asm volatile ("bset _TRISA, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetOutput(void)    { asm volatile ("bclr _TRISA, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetState(const bool s)   { _LATA3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_Init(const bool d, const bool s) { _LATA3 = s; _TRISA3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_Dispose(void)      { _TRISA3 = 1; _LATA3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA3_GetOpenDrain(void) { return(_ODCA3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetOpenDrain(const bool a) { _ODCA3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA3_GetPullUp(void)    { return(_CNPUA3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetPullUp(const bool a)  { _CNPUA3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA3_GetPullDown(void)  { return(_CNPUA3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetPullDown(const bool a) { _CNPUA3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetAnalog(void)    { _ANSELA3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetDigital(void)   { _ANSELA3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA3

// Function declarations of port pin RA4
#if defined (_TRISA4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA4_Get(void)          { return((bool)_RA4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_Set(void)          { asm volatile ("bset _LATA, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_Clear(void)        { asm volatile ("bclr _LATA, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_Toggle(void)       { asm volatile ("btg _LATA, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetInput(void)     { asm volatile ("bset _TRISA, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetOutput(void)    { asm volatile ("bclr _TRISA, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetState(const bool s)   { _LATA4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_Init(const bool d, const bool s) { _LATA4 = s; _TRISA4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_Dispose(void)      { _TRISA4 = 1; _LATA4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA4_GetOpenDrain(void) { return(_ODCA4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetOpenDrain(const bool a) { _ODCA4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA4_GetPullUp(void)    { return(_CNPUA4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetPullUp(const bool a)  { _CNPUA4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA4_GetPullDown(void)  { return(_CNPUA4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetPullDown(const bool a) { _CNPUA4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetAnalog(void)    { _ANSELA4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetDigital(void)   { _ANSELA4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA4

// Function declarations of port pin RA5
#if defined (_TRISA5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA5_Get(void)          { return((bool)_RA5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_Set(void)          { asm volatile ("bset _LATA, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_Clear(void)        { asm volatile ("bclr _LATA, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_Toggle(void)       { asm volatile ("btg _LATA, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetInput(void)     { asm volatile ("bset _TRISA, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetOutput(void)    { asm volatile ("bclr _TRISA, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetState(const bool s)   { _LATA5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_Init(const bool d, const bool s) { _LATA5 = s; _TRISA5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_Dispose(void)      { _TRISA5 = 1; _LATA5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA5_GetOpenDrain(void) { return(_ODCA5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetOpenDrain(const bool a) { _ODCA5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA5_GetPullUp(void)    { return(_CNPUA5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetPullUp(const bool a)  { _CNPUA5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA5_GetPullDown(void)  { return(_CNPUA5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetPullDown(const bool a) { _CNPUA5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetAnalog(void)    { _ANSELA5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetDigital(void)   { _ANSELA5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA5

// Function declarations of port pin RA6
#if defined (_TRISA6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA6_Get(void)          { return((bool)_RA6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_Set(void)          { asm volatile ("bset _LATA, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_Clear(void)        { asm volatile ("bclr _LATA, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_Toggle(void)       { asm volatile ("btg _LATA, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetInput(void)     { asm volatile ("bset _TRISA, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetOutput(void)    { asm volatile ("bclr _TRISA, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetState(const bool s)   { _LATA6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_Init(const bool d, const bool s) { _LATA6 = s; _TRISA6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_Dispose(void)      { _TRISA6 = 1; _LATA6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA6_GetOpenDrain(void) { return(_ODCA6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetOpenDrain(const bool a) { _ODCA6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA6_GetPullUp(void)    { return(_CNPUA6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetPullUp(const bool a)  { _CNPUA6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA6_GetPullDown(void)  { return(_CNPUA6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetPullDown(const bool a) { _CNPUA6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetAnalog(void)    { _ANSELA6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetDigital(void)   { _ANSELA6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA6

// Function declarations of port pin RA7
#if defined (_TRISA7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA7_Get(void)          { return((bool)_RA7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_Set(void)          { asm volatile ("bset _LATA, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_Clear(void)        { asm volatile ("bclr _LATA, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_Toggle(void)       { asm volatile ("btg _LATA, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetInput(void)     { asm volatile ("bset _TRISA, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetOutput(void)    { asm volatile ("bclr _TRISA, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetState(const bool s)   { _LATA7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_Init(const bool d, const bool s) { _LATA7 = s; _TRISA7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_Dispose(void)      { _TRISA7 = 1; _LATA7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA7_GetOpenDrain(void) { return(_ODCA7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetOpenDrain(const bool a) { _ODCA7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA7_GetPullUp(void)    { return(_CNPUA7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetPullUp(const bool a)  { _CNPUA7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA7_GetPullDown(void)  { return(_CNPUA7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetPullDown(const bool a) { _CNPUA7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetAnalog(void)    { _ANSELA7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetDigital(void)   { _ANSELA7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA7

// Function declarations of port pin RA8
#if defined (_TRISA8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA8_Get(void)          { return((bool)_RA8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_Set(void)          { asm volatile ("bset _LATA, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_Clear(void)        { asm volatile ("bclr _LATA, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_Toggle(void)       { asm volatile ("btg _LATA, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetInput(void)     { asm volatile ("bset _TRISA, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetOutput(void)    { asm volatile ("bclr _TRISA, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetState(const bool s)   { _LATA8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_Init(const bool d, const bool s) { _LATA8 = s; _TRISA8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_Dispose(void)      { _TRISA8 = 1; _LATA8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA8_GetOpenDrain(void) { return(_ODCA8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetOpenDrain(const bool a) { _ODCA8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA8_GetPullUp(void)    { return(_CNPUA8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetPullUp(const bool a)  { _CNPUA8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA8_GetPullDown(void)  { return(_CNPUA8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetPullDown(const bool a) { _CNPUA8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetAnalog(void)    { _ANSELA8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetDigital(void)   { _ANSELA8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA8

// Function declarations of port pin RA9
#if defined (_TRISA9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA9_Get(void)          { return((bool)_RA9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_Set(void)          { asm volatile ("bset _LATA, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_Clear(void)        { asm volatile ("bclr _LATA, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_Toggle(void)       { asm volatile ("btg _LATA, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetInput(void)     { asm volatile ("bset _TRISA, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetOutput(void)    { asm volatile ("bclr _TRISA, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetState(const bool s)   { _LATA9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_Init(const bool d, const bool s) { _LATA9 = s; _TRISA9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_Dispose(void)      { _TRISA9 = 1; _LATA9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA9_GetOpenDrain(void) { return(_ODCA9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetOpenDrain(const bool a) { _ODCA9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA9_GetPullUp(void)    { return(_CNPUA9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetPullUp(const bool a)  { _CNPUA9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA9_GetPullDown(void)  { return(_CNPUA9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetPullDown(const bool a) { _CNPUA9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetAnalog(void)    { _ANSELA9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetDigital(void)   { _ANSELA9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA9

// Function declarations of port pin RA10
#if defined (_TRISA10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA10_Get(void)         { return((bool)_RA10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_Set(void)         { asm volatile ("bset _LATA, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_Clear(void)       { asm volatile ("bclr _LATA, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_Toggle(void)      { asm volatile ("btg _LATA, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetInput(void)    { asm volatile ("bset _TRISA, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetOutput(void)   { asm volatile ("bclr _TRISA, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetState(const bool s)  { _LATA10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_Init(const bool d, const bool s) { _LATA10 = s; _TRISA10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_Dispose(void)     { _TRISA10 = 1; _LATA10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA10_GetOpenDrain(void) { return(_ODCA10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetOpenDrain(const bool a) { _ODCA10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA10_GetPullUp(void)   { return(_CNPUA10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetPullUp(const bool a) { _CNPUA10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA10_GetPullDown(void) { return(_CNPUA10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetPullDown(const bool a) { _CNPUA10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetAnalog(void)   { _ANSELA10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetDigital(void)  { _ANSELA10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA10

// Function declarations of port pin RA11
#if defined (_TRISA11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA11_Get(void)         { return((bool)_RA11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_Set(void)         { asm volatile ("bset _LATA, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_Clear(void)       { asm volatile ("bclr _LATA, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_Toggle(void)      { asm volatile ("btg _LATA, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetInput(void)    { asm volatile ("bset _TRISA, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetOutput(void)   { asm volatile ("bclr _TRISA, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetState(const bool s)  { _LATA11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_Init(const bool d, const bool s) { _LATA11 = s; _TRISA11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_Dispose(void)     { _TRISA11 = 1; _LATA11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA11_GetOpenDrain(void) { return(_ODCA11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetOpenDrain(const bool a) { _ODCA11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA11_GetPullUp(void)   { return(_CNPUA11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetPullUp(const bool a) { _CNPUA11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA11_GetPullDown(void) { return(_CNPUA11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetPullDown(const bool a) { _CNPUA11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetAnalog(void)   { _ANSELA11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetDigital(void)  { _ANSELA11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA11

// Function declarations of port pin RA12
#if defined (_TRISA12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA12_Get(void)         { return((bool)_RA12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_Set(void)         { asm volatile ("bset _LATA, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_Clear(void)       { asm volatile ("bclr _LATA, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_Toggle(void)      { asm volatile ("btg _LATA, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetInput(void)    { asm volatile ("bset _TRISA, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetOutput(void)   { asm volatile ("bclr _TRISA, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetState(const bool s)  { _LATA12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_Init(const bool d, const bool s) { _LATA12 = s; _TRISA12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_Dispose(void)     { _TRISA12 = 1; _LATA12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA12_GetOpenDrain(void) { return(_ODCA12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetOpenDrain(const bool a) { _ODCA12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA12_GetPullUp(void)   { return(_CNPUA12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetPullUp(const bool a) { _CNPUA12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA12_GetPullDown(void) { return(_CNPUA12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetPullDown(const bool a) { _CNPUA12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetAnalog(void)   { _ANSELA12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetDigital(void)  { _ANSELA12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA12

// Function declarations of port pin RA13
#if defined (_TRISA13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA13_Get(void)         { return((bool)_RA13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_Set(void)         { asm volatile ("bset _LATA, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_Clear(void)       { asm volatile ("bclr _LATA, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_Toggle(void)      { asm volatile ("btg _LATA, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetInput(void)    { asm volatile ("bset _TRISA, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetOutput(void)   { asm volatile ("bclr _TRISA, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetState(const bool s)  { _LATA13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_Init(const bool d, const bool s) { _LATA13 = s; _TRISA13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_Dispose(void)     { _TRISA13 = 1; _LATA13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA13_GetOpenDrain(void) { return(_ODCA13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetOpenDrain(const bool a) { _ODCA13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA13_GetPullUp(void)   { return(_CNPUA13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetPullUp(const bool a) { _CNPUA13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA13_GetPullDown(void) { return(_CNPUA13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetPullDown(const bool a) { _CNPUA13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetAnalog(void)   { _ANSELA13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetDigital(void)  { _ANSELA13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA13

// Function declarations of port pin RA14
#if defined (_TRISA14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA14_Get(void)         { return((bool)_RA14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_Set(void)         { asm volatile ("bset _LATA, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_Clear(void)       { asm volatile ("bclr _LATA, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_Toggle(void)      { asm volatile ("btg _LATA, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetInput(void)    { asm volatile ("bset _TRISA, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetOutput(void)   { asm volatile ("bclr _TRISA, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetState(const bool s)  { _LATA14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_Init(const bool d, const bool s) { _LATA14 = s; _TRISA14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_Dispose(void)     { _TRISA14 = 1; _LATA14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA14_GetOpenDrain(void) { return(_ODCA14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetOpenDrain(const bool a) { _ODCA14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA14_GetPullUp(void)   { return(_CNPUA14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetPullUp(const bool a) { _CNPUA14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA14_GetPullDown(void) { return(_CNPUA14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetPullDown(const bool a) { _CNPUA14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetAnalog(void)   { _ANSELA14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetDigital(void)  { _ANSELA14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA14

// Function declarations of port pin RA15
#if defined (_TRISA15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA15_Get(void)         { return((bool)_RA15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_Set(void)         { asm volatile ("bset _LATA, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_Clear(void)       { asm volatile ("bclr _LATA, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_Toggle(void)      { asm volatile ("btg _LATA, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetInput(void)    { asm volatile ("bset _TRISA, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetOutput(void)   { asm volatile ("bclr _TRISA, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetState(const bool s)  { _LATA15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_Init(const bool d, const bool s) { _LATA15 = s; _TRISA15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_Dispose(void)     { _TRISA15 = 1; _LATA15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA15_GetOpenDrain(void) { return(_ODCA15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetOpenDrain(const bool a) { _ODCA15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA15_GetPullUp(void)   { return(_CNPUA15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetPullUp(const bool a) { _CNPUA15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RA15_GetPullDown(void) { return(_CNPUA15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetPullDown(const bool a) { _CNPUA15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELA15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetAnalog(void)   { _ANSELA15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELA15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetDigital(void)  { _ANSELA15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RA15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RA15

// Function declarations of port pin RB0
#if defined (_TRISB0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB0_Get(void)          { return((bool)_RB0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_Set(void)          { asm volatile ("bset _LATB, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_Clear(void)        { asm volatile ("bclr _LATB, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_Toggle(void)       { asm volatile ("btg _LATB, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetInput(void)     { asm volatile ("bset _TRISB, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetOutput(void)    { asm volatile ("bclr _TRISB, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetState(const bool s)   { _LATB0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_Init(const bool d, const bool s) { _LATB0 = s; _TRISB0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_Dispose(void)      { _TRISB0 = 1; _LATB0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB0_GetOpenDrain(void) { return(_ODCB0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetOpenDrain(const bool a) { _ODCB0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB0_GetPullUp(void)    { return(_CNPUB0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetPullUp(const bool a)  { _CNPUB0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB0_GetPullDown(void)  { return(_CNPUB0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetPullDown(const bool a) { _CNPUB0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetAnalog(void)    { _ANSELB0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetDigital(void)   { _ANSELB0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB0

// Function declarations of port pin RB1
#if defined (_TRISB1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB1_Get(void)          { return((bool)_RB1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_Set(void)          { asm volatile ("bset _LATB, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_Clear(void)        { asm volatile ("bclr _LATB, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_Toggle(void)       { asm volatile ("btg _LATB, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetInput(void)     { asm volatile ("bset _TRISB, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetOutput(void)    { asm volatile ("bclr _TRISB, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetState(const bool s)   { _LATB1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_Init(const bool d, const bool s) { _LATB1 = s; _TRISB1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_Dispose(void)      { _TRISB1 = 1; _LATB1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB1_GetOpenDrain(void) { return(_ODCB1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetOpenDrain(const bool a) { _ODCB1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB1_GetPullUp(void)    { return(_CNPUB1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetPullUp(const bool a)  { _CNPUB1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB1_GetPullDown(void)  { return(_CNPUB1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetPullDown(const bool a) { _CNPUB1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetAnalog(void)    { _ANSELB1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetDigital(void)   { _ANSELB1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB1

// Function declarations of port pin RB2
#if defined (_TRISB2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB2_Get(void)          { return((bool)_RB2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_Set(void)          { asm volatile ("bset _LATB, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_Clear(void)        { asm volatile ("bclr _LATB, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_Toggle(void)       { asm volatile ("btg _LATB, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetInput(void)     { asm volatile ("bset _TRISB, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetOutput(void)    { asm volatile ("bclr _TRISB, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetState(const bool s)   { _LATB2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_Init(const bool d, const bool s) { _LATB2 = s; _TRISB2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_Dispose(void)      { _TRISB2 = 1; _LATB2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB2_GetOpenDrain(void) { return(_ODCB2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetOpenDrain(const bool a) { _ODCB2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB2_GetPullUp(void)    { return(_CNPUB2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetPullUp(const bool a)  { _CNPUB2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB2_GetPullDown(void)  { return(_CNPUB2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetPullDown(const bool a) { _CNPUB2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetAnalog(void)    { _ANSELB2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetDigital(void)   { _ANSELB2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB2

// Function declarations of port pin RB3
#if defined (_TRISB3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB3_Get(void)          { return((bool)_RB3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_Set(void)          { asm volatile ("bset _LATB, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_Clear(void)        { asm volatile ("bclr _LATB, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_Toggle(void)       { asm volatile ("btg _LATB, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetInput(void)     { asm volatile ("bset _TRISB, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetOutput(void)    { asm volatile ("bclr _TRISB, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetState(const bool s)   { _LATB3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_Init(const bool d, const bool s) { _LATB3 = s; _TRISB3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_Dispose(void)      { _TRISB3 = 1; _LATB3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB3_GetOpenDrain(void) { return(_ODCB3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetOpenDrain(const bool a) { _ODCB3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB3_GetPullUp(void)    { return(_CNPUB3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetPullUp(const bool a)  { _CNPUB3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB3_GetPullDown(void)  { return(_CNPUB3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetPullDown(const bool a) { _CNPUB3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetAnalog(void)    { _ANSELB3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetDigital(void)   { _ANSELB3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB3

// Function declarations of port pin RB4
#if defined (_TRISB4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB4_Get(void)          { return((bool)_RB4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_Set(void)          { asm volatile ("bset _LATB, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_Clear(void)        { asm volatile ("bclr _LATB, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_Toggle(void)       { asm volatile ("btg _LATB, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetInput(void)     { asm volatile ("bset _TRISB, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetOutput(void)    { asm volatile ("bclr _TRISB, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetState(const bool s)   { _LATB4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_Init(const bool d, const bool s) { _LATB4 = s; _TRISB4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_Dispose(void)      { _TRISB4 = 1; _LATB4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB4_GetOpenDrain(void) { return(_ODCB4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetOpenDrain(const bool a) { _ODCB4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB4_GetPullUp(void)    { return(_CNPUB4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetPullUp(const bool a)  { _CNPUB4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB4_GetPullDown(void)  { return(_CNPUB4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetPullDown(const bool a) { _CNPUB4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetAnalog(void)    { _ANSELB4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetDigital(void)   { _ANSELB4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB4

// Function declarations of port pin RB5
#if defined (_TRISB5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB5_Get(void)          { return((bool)_RB5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_Set(void)          { asm volatile ("bset _LATB, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_Clear(void)        { asm volatile ("bclr _LATB, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_Toggle(void)       { asm volatile ("btg _LATB, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetInput(void)     { asm volatile ("bset _TRISB, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetOutput(void)    { asm volatile ("bclr _TRISB, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetState(const bool s)   { _LATB5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_Init(const bool d, const bool s) { _LATB5 = s; _TRISB5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_Dispose(void)      { _TRISB5 = 1; _LATB5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB5_GetOpenDrain(void) { return(_ODCB5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetOpenDrain(const bool a) { _ODCB5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB5_GetPullUp(void)    { return(_CNPUB5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetPullUp(const bool a)  { _CNPUB5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB5_GetPullDown(void)  { return(_CNPUB5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetPullDown(const bool a) { _CNPUB5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetAnalog(void)    { _ANSELB5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetDigital(void)   { _ANSELB5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB5

// Function declarations of port pin RB6
#if defined (_TRISB6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB6_Get(void)          { return((bool)_RB6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_Set(void)          { asm volatile ("bset _LATB, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_Clear(void)        { asm volatile ("bclr _LATB, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_Toggle(void)       { asm volatile ("btg _LATB, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetInput(void)     { asm volatile ("bset _TRISB, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetOutput(void)    { asm volatile ("bclr _TRISB, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetState(const bool s)   { _LATB6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_Init(const bool d, const bool s) { _LATB6 = s; _TRISB6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_Dispose(void)      { _TRISB6 = 1; _LATB6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB6_GetOpenDrain(void) { return(_ODCB6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetOpenDrain(const bool a) { _ODCB6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB6_GetPullUp(void)    { return(_CNPUB6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetPullUp(const bool a)  { _CNPUB6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB6_GetPullDown(void)  { return(_CNPUB6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetPullDown(const bool a) { _CNPUB6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetAnalog(void)    { _ANSELB6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetDigital(void)   { _ANSELB6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB6

// Function declarations of port pin RB7
#if defined (_TRISB7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB7_Get(void)          { return((bool)_RB7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_Set(void)          { asm volatile ("bset _LATB, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_Clear(void)        { asm volatile ("bclr _LATB, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_Toggle(void)       { asm volatile ("btg _LATB, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetInput(void)     { asm volatile ("bset _TRISB, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetOutput(void)    { asm volatile ("bclr _TRISB, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetState(const bool s)   { _LATB7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_Init(const bool d, const bool s) { _LATB7 = s; _TRISB7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_Dispose(void)      { _TRISB7 = 1; _LATB7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB7_GetOpenDrain(void) { return(_ODCB7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetOpenDrain(const bool a) { _ODCB7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB7_GetPullUp(void)    { return(_CNPUB7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetPullUp(const bool a)  { _CNPUB7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB7_GetPullDown(void)  { return(_CNPUB7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetPullDown(const bool a) { _CNPUB7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetAnalog(void)    { _ANSELB7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetDigital(void)   { _ANSELB7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB7

// Function declarations of port pin RB8
#if defined (_TRISB8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB8_Get(void)          { return((bool)_RB8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_Set(void)          { asm volatile ("bset _LATB, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_Clear(void)        { asm volatile ("bclr _LATB, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_Toggle(void)       { asm volatile ("btg _LATB, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetInput(void)     { asm volatile ("bset _TRISB, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetOutput(void)    { asm volatile ("bclr _TRISB, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetState(const bool s)   { _LATB8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_Init(const bool d, const bool s) { _LATB8 = s; _TRISB8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_Dispose(void)      { _TRISB8 = 1; _LATB8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB8_GetOpenDrain(void) { return(_ODCB8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetOpenDrain(const bool a) { _ODCB8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB8_GetPullUp(void)    { return(_CNPUB8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetPullUp(const bool a)  { _CNPUB8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB8_GetPullDown(void)  { return(_CNPUB8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetPullDown(const bool a) { _CNPUB8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetAnalog(void)    { _ANSELB8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetDigital(void)   { _ANSELB8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB8

// Function declarations of port pin RB9
#if defined (_TRISB9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB9_Get(void)          { return((bool)_RB9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_Set(void)          { asm volatile ("bset _LATB, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_Clear(void)        { asm volatile ("bclr _LATB, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_Toggle(void)       { asm volatile ("btg _LATB, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetInput(void)     { asm volatile ("bset _TRISB, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetOutput(void)    { asm volatile ("bclr _TRISB, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetState(const bool s)   { _LATB9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_Init(const bool d, const bool s) { _LATB9 = s; _TRISB9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_Dispose(void)      { _TRISB9 = 1; _LATB9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB9_GetOpenDrain(void) { return(_ODCB9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetOpenDrain(const bool a) { _ODCB9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB9_GetPullUp(void)    { return(_CNPUB9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetPullUp(const bool a)  { _CNPUB9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB9_GetPullDown(void)  { return(_CNPUB9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetPullDown(const bool a) { _CNPUB9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetAnalog(void)    { _ANSELB9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetDigital(void)   { _ANSELB9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB9

// Function declarations of port pin RB10
#if defined (_TRISB10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB10_Get(void)         { return((bool)_RB10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_Set(void)         { asm volatile ("bset _LATB, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_Clear(void)       { asm volatile ("bclr _LATB, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_Toggle(void)      { asm volatile ("btg _LATB, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetInput(void)    { asm volatile ("bset _TRISB, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetOutput(void)   { asm volatile ("bclr _TRISB, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetState(const bool s)  { _LATB10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_Init(const bool d, const bool s) { _LATB10 = s; _TRISB10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_Dispose(void)     { _TRISB10 = 1; _LATB10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB10_GetOpenDrain(void) { return(_ODCB10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetOpenDrain(const bool a) { _ODCB10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB10_GetPullUp(void)   { return(_CNPUB10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetPullUp(const bool a) { _CNPUB10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB10_GetPullDown(void) { return(_CNPUB10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetPullDown(const bool a) { _CNPUB10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetAnalog(void)   { _ANSELB10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetDigital(void)  { _ANSELB10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB10

// Function declarations of port pin RB11
#if defined (_TRISB11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB11_Get(void)         { return((bool)_RB11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_Set(void)         { asm volatile ("bset _LATB, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_Clear(void)       { asm volatile ("bclr _LATB, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_Toggle(void)      { asm volatile ("btg _LATB, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetInput(void)    { asm volatile ("bset _TRISB, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetOutput(void)   { asm volatile ("bclr _TRISB, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetState(const bool s)  { _LATB11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_Init(const bool d, const bool s) { _LATB11 = s; _TRISB11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_Dispose(void)     { _TRISB11 = 1; _LATB11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB11_GetOpenDrain(void) { return(_ODCB11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetOpenDrain(const bool a) { _ODCB11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB11_GetPullUp(void)   { return(_CNPUB11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetPullUp(const bool a) { _CNPUB11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB11_GetPullDown(void) { return(_CNPUB11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetPullDown(const bool a) { _CNPUB11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetAnalog(void)   { _ANSELB11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetDigital(void)  { _ANSELB11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB11

// Function declarations of port pin RB12
#if defined (_TRISB12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB12_Get(void)         { return((bool)_RB12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_Set(void)         { asm volatile ("bset _LATB, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_Clear(void)       { asm volatile ("bclr _LATB, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_Toggle(void)      { asm volatile ("btg _LATB, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetInput(void)    { asm volatile ("bset _TRISB, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetOutput(void)   { asm volatile ("bclr _TRISB, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetState(const bool s)  { _LATB12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_Init(const bool d, const bool s) { _LATB12 = s; _TRISB12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_Dispose(void)     { _TRISB12 = 1; _LATB12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB12_GetOpenDrain(void) { return(_ODCB12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetOpenDrain(const bool a) { _ODCB12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB12_GetPullUp(void)   { return(_CNPUB12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetPullUp(const bool a) { _CNPUB12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB12_GetPullDown(void) { return(_CNPUB12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetPullDown(const bool a) { _CNPUB12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetAnalog(void)   { _ANSELB12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetDigital(void)  { _ANSELB12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB12

// Function declarations of port pin RB13
#if defined (_TRISB13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB13_Get(void)         { return((bool)_RB13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_Set(void)         { asm volatile ("bset _LATB, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_Clear(void)       { asm volatile ("bclr _LATB, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_Toggle(void)      { asm volatile ("btg _LATB, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetInput(void)    { asm volatile ("bset _TRISB, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetOutput(void)   { asm volatile ("bclr _TRISB, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetState(const bool s)  { _LATB13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_Init(const bool d, const bool s) { _LATB13 = s; _TRISB13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_Dispose(void)     { _TRISB13 = 1; _LATB13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB13_GetOpenDrain(void) { return(_ODCB13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetOpenDrain(const bool a) { _ODCB13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB13_GetPullUp(void)   { return(_CNPUB13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetPullUp(const bool a) { _CNPUB13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB13_GetPullDown(void) { return(_CNPUB13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetPullDown(const bool a) { _CNPUB13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetAnalog(void)   { _ANSELB13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetDigital(void)  { _ANSELB13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB13

// Function declarations of port pin RB14
#if defined (_TRISB14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB14_Get(void)         { return((bool)_RB14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_Set(void)         { asm volatile ("bset _LATB, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_Clear(void)       { asm volatile ("bclr _LATB, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_Toggle(void)      { asm volatile ("btg _LATB, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetInput(void)    { asm volatile ("bset _TRISB, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetOutput(void)   { asm volatile ("bclr _TRISB, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetState(const bool s)  { _LATB14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_Init(const bool d, const bool s) { _LATB14 = s; _TRISB14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_Dispose(void)     { _TRISB14 = 1; _LATB14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB14_GetOpenDrain(void) { return(_ODCB14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetOpenDrain(const bool a) { _ODCB14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB14_GetPullUp(void)   { return(_CNPUB14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetPullUp(const bool a) { _CNPUB14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB14_GetPullDown(void) { return(_CNPUB14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetPullDown(const bool a) { _CNPUB14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetAnalog(void)   { _ANSELB14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetDigital(void)  { _ANSELB14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB14

// Function declarations of port pin RB15
#if defined (_TRISB15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB15_Get(void)         { return((bool)_RB15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_Set(void)         { asm volatile ("bset _LATB, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_Clear(void)       { asm volatile ("bclr _LATB, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_Toggle(void)      { asm volatile ("btg _LATB, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetInput(void)    { asm volatile ("bset _TRISB, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetOutput(void)   { asm volatile ("bclr _TRISB, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetState(const bool s)  { _LATB15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_Init(const bool d, const bool s) { _LATB15 = s; _TRISB15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_Dispose(void)     { _TRISB15 = 1; _LATB15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB15_GetOpenDrain(void) { return(_ODCB15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetOpenDrain(const bool a) { _ODCB15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB15_GetPullUp(void)   { return(_CNPUB15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetPullUp(const bool a) { _CNPUB15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RB15_GetPullDown(void) { return(_CNPUB15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetPullDown(const bool a) { _CNPUB15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELB15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetAnalog(void)   { _ANSELB15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELB15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetDigital(void)  { _ANSELB15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RB15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RB15

// Function declarations of port pin RC0
#if defined (_TRISC0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC0_Get(void)          { return((bool)_RC0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_Set(void)          { asm volatile ("bset _LATC, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_Clear(void)        { asm volatile ("bclr _LATC, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_Toggle(void)       { asm volatile ("btg _LATC, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetInput(void)     { asm volatile ("bset _TRISC, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetOutput(void)    { asm volatile ("bclr _TRISC, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetState(const bool s)   { _LATC0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_Init(const bool d, const bool s) { _LATC0 = s; _TRISC0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_Dispose(void)      { _TRISC0 = 1; _LATC0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC0_GetOpenDrain(void) { return(_ODCC0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetOpenDrain(const bool a) { _ODCC0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC0_GetPullUp(void)    { return(_CNPUC0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetPullUp(const bool a)  { _CNPUC0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC0_GetPullDown(void)  { return(_CNPUC0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetPullDown(const bool a) { _CNPUC0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetAnalog(void)    { _ANSELC0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetDigital(void)   { _ANSELC0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC0

// Function declarations of port pin RC1
#if defined (_TRISC1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC1_Get(void)          { return((bool)_RC1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_Set(void)          { asm volatile ("bset _LATC, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_Clear(void)        { asm volatile ("bclr _LATC, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_Toggle(void)       { asm volatile ("btg _LATC, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetInput(void)     { asm volatile ("bset _TRISC, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetOutput(void)    { asm volatile ("bclr _TRISC, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetState(const bool s)   { _LATC1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_Init(const bool d, const bool s) { _LATC1 = s; _TRISC1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_Dispose(void)      { _TRISC1 = 1; _LATC1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC1_GetOpenDrain(void) { return(_ODCC1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetOpenDrain(const bool a) { _ODCC1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC1_GetPullUp(void)    { return(_CNPUC1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetPullUp(const bool a)  { _CNPUC1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC1_GetPullDown(void)  { return(_CNPUC1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetPullDown(const bool a) { _CNPUC1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetAnalog(void)    { _ANSELC1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetDigital(void)   { _ANSELC1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC1

// Function declarations of port pin RC2
#if defined (_TRISC2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC2_Get(void)          { return((bool)_RC2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_Set(void)          { asm volatile ("bset _LATC, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_Clear(void)        { asm volatile ("bclr _LATC, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_Toggle(void)       { asm volatile ("btg _LATC, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetInput(void)     { asm volatile ("bset _TRISC, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetOutput(void)    { asm volatile ("bclr _TRISC, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetState(const bool s)   { _LATC2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_Init(const bool d, const bool s) { _LATC2 = s; _TRISC2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_Dispose(void)      { _TRISC2 = 1; _LATC2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC2_GetOpenDrain(void) { return(_ODCC2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetOpenDrain(const bool a) { _ODCC2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC2_GetPullUp(void)    { return(_CNPUC2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetPullUp(const bool a)  { _CNPUC2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC2_GetPullDown(void)  { return(_CNPUC2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetPullDown(const bool a) { _CNPUC2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetAnalog(void)    { _ANSELC2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetDigital(void)   { _ANSELC2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC2

// Function declarations of port pin RC3
#if defined (_TRISC3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC3_Get(void)          { return((bool)_RC3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_Set(void)          { asm volatile ("bset _LATC, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_Clear(void)        { asm volatile ("bclr _LATC, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_Toggle(void)       { asm volatile ("btg _LATC, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetInput(void)     { asm volatile ("bset _TRISC, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetOutput(void)    { asm volatile ("bclr _TRISC, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetState(const bool s)   { _LATC3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_Init(const bool d, const bool s) { _LATC3 = s; _TRISC3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_Dispose(void)      { _TRISC3 = 1; _LATC3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC3_GetOpenDrain(void) { return(_ODCC3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetOpenDrain(const bool a) { _ODCC3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC3_GetPullUp(void)    { return(_CNPUC3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetPullUp(const bool a)  { _CNPUC3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC3_GetPullDown(void)  { return(_CNPUC3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetPullDown(const bool a) { _CNPUC3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetAnalog(void)    { _ANSELC3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetDigital(void)   { _ANSELC3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC3

// Function declarations of port pin RC4
#if defined (_TRISC4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC4_Get(void)          { return((bool)_RC4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_Set(void)          { asm volatile ("bset _LATC, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_Clear(void)        { asm volatile ("bclr _LATC, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_Toggle(void)       { asm volatile ("btg _LATC, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetInput(void)     { asm volatile ("bset _TRISC, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetOutput(void)    { asm volatile ("bclr _TRISC, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetState(const bool s)   { _LATC4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_Init(const bool d, const bool s) { _LATC4 = s; _TRISC4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_Dispose(void)      { _TRISC4 = 1; _LATC4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC4_GetOpenDrain(void) { return(_ODCC4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetOpenDrain(const bool a) { _ODCC4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC4_GetPullUp(void)    { return(_CNPUC4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetPullUp(const bool a)  { _CNPUC4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC4_GetPullDown(void)  { return(_CNPUC4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetPullDown(const bool a) { _CNPUC4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetAnalog(void)    { _ANSELC4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetDigital(void)   { _ANSELC4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC4

// Function declarations of port pin RC5
#if defined (_TRISC5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC5_Get(void)          { return((bool)_RC5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_Set(void)          { asm volatile ("bset _LATC, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_Clear(void)        { asm volatile ("bclr _LATC, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_Toggle(void)       { asm volatile ("btg _LATC, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetInput(void)     { asm volatile ("bset _TRISC, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetOutput(void)    { asm volatile ("bclr _TRISC, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetState(const bool s)   { _LATC5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_Init(const bool d, const bool s) { _LATC5 = s; _TRISC5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_Dispose(void)      { _TRISC5 = 1; _LATC5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC5_GetOpenDrain(void) { return(_ODCC5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetOpenDrain(const bool a) { _ODCC5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC5_GetPullUp(void)    { return(_CNPUC5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetPullUp(const bool a)  { _CNPUC5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC5_GetPullDown(void)  { return(_CNPUC5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetPullDown(const bool a) { _CNPUC5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetAnalog(void)    { _ANSELC5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetDigital(void)   { _ANSELC5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC5

// Function declarations of port pin RC6
#if defined (_TRISC6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC6_Get(void)          { return((bool)_RC6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_Set(void)          { asm volatile ("bset _LATC, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_Clear(void)        { asm volatile ("bclr _LATC, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_Toggle(void)       { asm volatile ("btg _LATC, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetInput(void)     { asm volatile ("bset _TRISC, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetOutput(void)    { asm volatile ("bclr _TRISC, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetState(const bool s)   { _LATC6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_Init(const bool d, const bool s) { _LATC6 = s; _TRISC6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_Dispose(void)      { _TRISC6 = 1; _LATC6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC6_GetOpenDrain(void) { return(_ODCC6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetOpenDrain(const bool a) { _ODCC6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC6_GetPullUp(void)    { return(_CNPUC6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetPullUp(const bool a)  { _CNPUC6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC6_GetPullDown(void)  { return(_CNPUC6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetPullDown(const bool a) { _CNPUC6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetAnalog(void)    { _ANSELC6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetDigital(void)   { _ANSELC6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC6

// Function declarations of port pin RC7
#if defined (_TRISC7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC7_Get(void)          { return((bool)_RC7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_Set(void)          { asm volatile ("bset _LATC, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_Clear(void)        { asm volatile ("bclr _LATC, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_Toggle(void)       { asm volatile ("btg _LATC, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetInput(void)     { asm volatile ("bset _TRISC, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetOutput(void)    { asm volatile ("bclr _TRISC, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetState(const bool s)   { _LATC7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_Init(const bool d, const bool s) { _LATC7 = s; _TRISC7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_Dispose(void)      { _TRISC7 = 1; _LATC7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC7_GetOpenDrain(void) { return(_ODCC7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetOpenDrain(const bool a) { _ODCC7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC7_GetPullUp(void)    { return(_CNPUC7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetPullUp(const bool a)  { _CNPUC7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC7_GetPullDown(void)  { return(_CNPUC7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetPullDown(const bool a) { _CNPUC7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetAnalog(void)    { _ANSELC7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetDigital(void)   { _ANSELC7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC7

// Function declarations of port pin RC8
#if defined (_TRISC8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC8_Get(void)          { return((bool)_RC8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_Set(void)          { asm volatile ("bset _LATC, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_Clear(void)        { asm volatile ("bclr _LATC, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_Toggle(void)       { asm volatile ("btg _LATC, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetInput(void)     { asm volatile ("bset _TRISC, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetOutput(void)    { asm volatile ("bclr _TRISC, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetState(const bool s)   { _LATC8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_Init(const bool d, const bool s) { _LATC8 = s; _TRISC8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_Dispose(void)      { _TRISC8 = 1; _LATC8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC8_GetOpenDrain(void) { return(_ODCC8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetOpenDrain(const bool a) { _ODCC8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC8_GetPullUp(void)    { return(_CNPUC8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetPullUp(const bool a)  { _CNPUC8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC8_GetPullDown(void)  { return(_CNPUC8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetPullDown(const bool a) { _CNPUC8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetAnalog(void)    { _ANSELC8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetDigital(void)   { _ANSELC8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC8

// Function declarations of port pin RC9
#if defined (_TRISC9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC9_Get(void)          { return((bool)_RC9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_Set(void)          { asm volatile ("bset _LATC, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_Clear(void)        { asm volatile ("bclr _LATC, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_Toggle(void)       { asm volatile ("btg _LATC, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetInput(void)     { asm volatile ("bset _TRISC, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetOutput(void)    { asm volatile ("bclr _TRISC, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetState(const bool s)   { _LATC9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_Init(const bool d, const bool s) { _LATC9 = s; _TRISC9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_Dispose(void)      { _TRISC9 = 1; _LATC9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC9_GetOpenDrain(void) { return(_ODCC9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetOpenDrain(const bool a) { _ODCC9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC9_GetPullUp(void)    { return(_CNPUC9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetPullUp(const bool a)  { _CNPUC9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC9_GetPullDown(void)  { return(_CNPUC9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetPullDown(const bool a) { _CNPUC9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetAnalog(void)    { _ANSELC9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetDigital(void)   { _ANSELC9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC9

// Function declarations of port pin RC10
#if defined (_TRISC10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC10_Get(void)         { return((bool)_RC10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_Set(void)         { asm volatile ("bset _LATC, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_Clear(void)       { asm volatile ("bclr _LATC, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_Toggle(void)      { asm volatile ("btg _LATC, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetInput(void)    { asm volatile ("bset _TRISC, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetOutput(void)   { asm volatile ("bclr _TRISC, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetState(const bool s)  { _LATC10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_Init(const bool d, const bool s) { _LATC10 = s; _TRISC10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_Dispose(void)     { _TRISC10 = 1; _LATC10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC10_GetOpenDrain(void) { return(_ODCC10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetOpenDrain(const bool a) { _ODCC10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC10_GetPullUp(void)   { return(_CNPUC10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetPullUp(const bool a) { _CNPUC10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC10_GetPullDown(void) { return(_CNPUC10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetPullDown(const bool a) { _CNPUC10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetAnalog(void)   { _ANSELC10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetDigital(void)  { _ANSELC10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC10

// Function declarations of port pin RC11
#if defined (_TRISC11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC11_Get(void)         { return((bool)_RC11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_Set(void)         { asm volatile ("bset _LATC, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_Clear(void)       { asm volatile ("bclr _LATC, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_Toggle(void)      { asm volatile ("btg _LATC, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetInput(void)    { asm volatile ("bset _TRISC, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetOutput(void)   { asm volatile ("bclr _TRISC, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetState(const bool s)  { _LATC11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_Init(const bool d, const bool s) { _LATC11 = s; _TRISC11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_Dispose(void)     { _TRISC11 = 1; _LATC11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC11_GetOpenDrain(void) { return(_ODCC11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetOpenDrain(const bool a) { _ODCC11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC11_GetPullUp(void)   { return(_CNPUC11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetPullUp(const bool a) { _CNPUC11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC11_GetPullDown(void) { return(_CNPUC11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetPullDown(const bool a) { _CNPUC11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetAnalog(void)   { _ANSELC11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetDigital(void)  { _ANSELC11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC11

// Function declarations of port pin RC12
#if defined (_TRISC12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC12_Get(void)         { return((bool)_RC12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_Set(void)         { asm volatile ("bset _LATC, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_Clear(void)       { asm volatile ("bclr _LATC, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_Toggle(void)      { asm volatile ("btg _LATC, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetInput(void)    { asm volatile ("bset _TRISC, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetOutput(void)   { asm volatile ("bclr _TRISC, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetState(const bool s)  { _LATC12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_Init(const bool d, const bool s) { _LATC12 = s; _TRISC12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_Dispose(void)     { _TRISC12 = 1; _LATC12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC12_GetOpenDrain(void) { return(_ODCC12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetOpenDrain(const bool a) { _ODCC12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC12_GetPullUp(void)   { return(_CNPUC12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetPullUp(const bool a) { _CNPUC12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC12_GetPullDown(void) { return(_CNPUC12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetPullDown(const bool a) { _CNPUC12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetAnalog(void)   { _ANSELC12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetDigital(void)  { _ANSELC12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC12

// Function declarations of port pin RC13
#if defined (_TRISC13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC13_Get(void)         { return((bool)_RC13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_Set(void)         { asm volatile ("bset _LATC, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_Clear(void)       { asm volatile ("bclr _LATC, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_Toggle(void)      { asm volatile ("btg _LATC, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetInput(void)    { asm volatile ("bset _TRISC, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetOutput(void)   { asm volatile ("bclr _TRISC, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetState(const bool s)  { _LATC13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_Init(const bool d, const bool s) { _LATC13 = s; _TRISC13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_Dispose(void)     { _TRISC13 = 1; _LATC13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC13_GetOpenDrain(void) { return(_ODCC13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetOpenDrain(const bool a) { _ODCC13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC13_GetPullUp(void)   { return(_CNPUC13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetPullUp(const bool a) { _CNPUC13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC13_GetPullDown(void) { return(_CNPUC13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetPullDown(const bool a) { _CNPUC13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetAnalog(void)   { _ANSELC13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetDigital(void)  { _ANSELC13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC13

// Function declarations of port pin RC14
#if defined (_TRISC14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC14_Get(void)         { return((bool)_RC14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_Set(void)         { asm volatile ("bset _LATC, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_Clear(void)       { asm volatile ("bclr _LATC, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_Toggle(void)      { asm volatile ("btg _LATC, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetInput(void)    { asm volatile ("bset _TRISC, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetOutput(void)   { asm volatile ("bclr _TRISC, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetState(const bool s)  { _LATC14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_Init(const bool d, const bool s) { _LATC14 = s; _TRISC14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_Dispose(void)     { _TRISC14 = 1; _LATC14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC14_GetOpenDrain(void) { return(_ODCC14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetOpenDrain(const bool a) { _ODCC14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC14_GetPullUp(void)   { return(_CNPUC14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetPullUp(const bool a) { _CNPUC14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC14_GetPullDown(void) { return(_CNPUC14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetPullDown(const bool a) { _CNPUC14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetAnalog(void)   { _ANSELC14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetDigital(void)  { _ANSELC14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC14

// Function declarations of port pin RC15
#if defined (_TRISC15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC15_Get(void)         { return((bool)_RC15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_Set(void)         { asm volatile ("bset _LATC, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_Clear(void)       { asm volatile ("bclr _LATC, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_Toggle(void)      { asm volatile ("btg _LATC, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetInput(void)    { asm volatile ("bset _TRISC, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetOutput(void)   { asm volatile ("bclr _TRISC, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetState(const bool s)  { _LATC15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_Init(const bool d, const bool s) { _LATC15 = s; _TRISC15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_Dispose(void)     { _TRISC15 = 1; _LATC15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC15_GetOpenDrain(void) { return(_ODCC15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetOpenDrain(const bool a) { _ODCC15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC15_GetPullUp(void)   { return(_CNPUC15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetPullUp(const bool a) { _CNPUC15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RC15_GetPullDown(void) { return(_CNPUC15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetPullDown(const bool a) { _CNPUC15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELC15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetAnalog(void)   { _ANSELC15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELC15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetDigital(void)  { _ANSELC15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RC15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RC15

// Function declarations of port pin RD0
#if defined (_TRISD0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD0_Get(void)          { return((bool)_RD0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_Set(void)          { asm volatile ("bset _LATD, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_Clear(void)        { asm volatile ("bclr _LATD, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_Toggle(void)       { asm volatile ("btg _LATD, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetInput(void)     { asm volatile ("bset _TRISD, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetOutput(void)    { asm volatile ("bclr _TRISD, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetState(const bool s)   { _LATD0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_Init(const bool d, const bool s) { _LATD0 = s; _TRISD0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_Dispose(void)      { _TRISD0 = 1; _LATD0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD0_GetOpenDrain(void) { return(_ODCD0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetOpenDrain(const bool a) { _ODCD0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD0_GetPullUp(void)    { return(_CNPUD0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetPullUp(const bool a)  { _CNPUD0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD0_GetPullDown(void)  { return(_CNPUD0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetPullDown(const bool a) { _CNPUD0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetAnalog(void)    { _ANSELD0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetDigital(void)   { _ANSELD0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD0

// Function declarations of port pin RD1
#if defined (_TRISD1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD1_Get(void)          { return((bool)_RD1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_Set(void)          { asm volatile ("bset _LATD, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_Clear(void)        { asm volatile ("bclr _LATD, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_Toggle(void)       { asm volatile ("btg _LATD, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetInput(void)     { asm volatile ("bset _TRISD, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetOutput(void)    { asm volatile ("bclr _TRISD, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetState(const bool s)   { _LATD1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_Init(const bool d, const bool s) { _LATD1 = s; _TRISD1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_Dispose(void)      { _TRISD1 = 1; _LATD1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD1_GetOpenDrain(void) { return(_ODCD1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetOpenDrain(const bool a) { _ODCD1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD1_GetPullUp(void)    { return(_CNPUD1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetPullUp(const bool a)  { _CNPUD1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD1_GetPullDown(void)  { return(_CNPUD1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetPullDown(const bool a) { _CNPUD1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetAnalog(void)    { _ANSELD1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetDigital(void)   { _ANSELD1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD1

// Function declarations of port pin RD2
#if defined (_TRISD2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD2_Get(void)          { return((bool)_RD2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_Set(void)          { asm volatile ("bset _LATD, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_Clear(void)        { asm volatile ("bclr _LATD, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_Toggle(void)       { asm volatile ("btg _LATD, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetInput(void)     { asm volatile ("bset _TRISD, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetOutput(void)    { asm volatile ("bclr _TRISD, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetState(const bool s)   { _LATD2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_Init(const bool d, const bool s) { _LATD2 = s; _TRISD2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_Dispose(void)      { _TRISD2 = 1; _LATD2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD2_GetOpenDrain(void) { return(_ODCD2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetOpenDrain(const bool a) { _ODCD2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD2_GetPullUp(void)    { return(_CNPUD2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetPullUp(const bool a)  { _CNPUD2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD2_GetPullDown(void)  { return(_CNPUD2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetPullDown(const bool a) { _CNPUD2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetAnalog(void)    { _ANSELD2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetDigital(void)   { _ANSELD2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD2

// Function declarations of port pin RD3
#if defined (_TRISD3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD3_Get(void)          { return((bool)_RD3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_Set(void)          { asm volatile ("bset _LATD, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_Clear(void)        { asm volatile ("bclr _LATD, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_Toggle(void)       { asm volatile ("btg _LATD, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetInput(void)     { asm volatile ("bset _TRISD, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetOutput(void)    { asm volatile ("bclr _TRISD, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetState(const bool s)   { _LATD3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_Init(const bool d, const bool s) { _LATD3 = s; _TRISD3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_Dispose(void)      { _TRISD3 = 1; _LATD3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD3_GetOpenDrain(void) { return(_ODCD3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetOpenDrain(const bool a) { _ODCD3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD3_GetPullUp(void)    { return(_CNPUD3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetPullUp(const bool a)  { _CNPUD3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD3_GetPullDown(void)  { return(_CNPUD3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetPullDown(const bool a) { _CNPUD3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetAnalog(void)    { _ANSELD3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetDigital(void)   { _ANSELD3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD3

// Function declarations of port pin RD4
#if defined (_TRISD4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD4_Get(void)          { return((bool)_RD4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_Set(void)          { asm volatile ("bset _LATD, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_Clear(void)        { asm volatile ("bclr _LATD, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_Toggle(void)       { asm volatile ("btg _LATD, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetInput(void)     { asm volatile ("bset _TRISD, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetOutput(void)    { asm volatile ("bclr _TRISD, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetState(const bool s)   { _LATD4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_Init(const bool d, const bool s) { _LATD4 = s; _TRISD4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_Dispose(void)      { _TRISD4 = 1; _LATD4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD4_GetOpenDrain(void) { return(_ODCD4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetOpenDrain(const bool a) { _ODCD4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD4_GetPullUp(void)    { return(_CNPUD4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetPullUp(const bool a)  { _CNPUD4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD4_GetPullDown(void)  { return(_CNPUD4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetPullDown(const bool a) { _CNPUD4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetAnalog(void)    { _ANSELD4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetDigital(void)   { _ANSELD4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD4

// Function declarations of port pin RD5
#if defined (_TRISD5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD5_Get(void)          { return((bool)_RD5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_Set(void)          { asm volatile ("bset _LATD, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_Clear(void)        { asm volatile ("bclr _LATD, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_Toggle(void)       { asm volatile ("btg _LATD, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetInput(void)     { asm volatile ("bset _TRISD, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetOutput(void)    { asm volatile ("bclr _TRISD, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetState(const bool s)   { _LATD5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_Init(const bool d, const bool s) { _LATD5 = s; _TRISD5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_Dispose(void)      { _TRISD5 = 1; _LATD5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD5_GetOpenDrain(void) { return(_ODCD5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetOpenDrain(const bool a) { _ODCD5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD5_GetPullUp(void)    { return(_CNPUD5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetPullUp(const bool a)  { _CNPUD5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD5_GetPullDown(void)  { return(_CNPUD5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetPullDown(const bool a) { _CNPUD5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetAnalog(void)    { _ANSELD5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetDigital(void)   { _ANSELD5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD5

// Function declarations of port pin RD6
#if defined (_TRISD6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD6_Get(void)          { return((bool)_RD6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_Set(void)          { asm volatile ("bset _LATD, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_Clear(void)        { asm volatile ("bclr _LATD, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_Toggle(void)       { asm volatile ("btg _LATD, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetInput(void)     { asm volatile ("bset _TRISD, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetOutput(void)    { asm volatile ("bclr _TRISD, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetState(const bool s)   { _LATD6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_Init(const bool d, const bool s) { _LATD6 = s; _TRISD6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_Dispose(void)      { _TRISD6 = 1; _LATD6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD6_GetOpenDrain(void) { return(_ODCD6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetOpenDrain(const bool a) { _ODCD6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD6_GetPullUp(void)    { return(_CNPUD6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetPullUp(const bool a)  { _CNPUD6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD6_GetPullDown(void)  { return(_CNPUD6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetPullDown(const bool a) { _CNPUD6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetAnalog(void)    { _ANSELD6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetDigital(void)   { _ANSELD6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD6

// Function declarations of port pin RD7
#if defined (_TRISD7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD7_Get(void)          { return((bool)_RD7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_Set(void)          { asm volatile ("bset _LATD, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_Clear(void)        { asm volatile ("bclr _LATD, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_Toggle(void)       { asm volatile ("btg _LATD, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetInput(void)     { asm volatile ("bset _TRISD, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetOutput(void)    { asm volatile ("bclr _TRISD, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetState(const bool s)   { _LATD7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_Init(const bool d, const bool s) { _LATD7 = s; _TRISD7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_Dispose(void)      { _TRISD7 = 1; _LATD7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD7_GetOpenDrain(void) { return(_ODCD7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetOpenDrain(const bool a) { _ODCD7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD7_GetPullUp(void)    { return(_CNPUD7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetPullUp(const bool a)  { _CNPUD7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD7_GetPullDown(void)  { return(_CNPUD7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetPullDown(const bool a) { _CNPUD7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetAnalog(void)    { _ANSELD7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetDigital(void)   { _ANSELD7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD7

// Function declarations of port pin RD8
#if defined (_TRISD8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD8_Get(void)          { return((bool)_RD8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_Set(void)          { asm volatile ("bset _LATD, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_Clear(void)        { asm volatile ("bclr _LATD, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_Toggle(void)       { asm volatile ("btg _LATD, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetInput(void)     { asm volatile ("bset _TRISD, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetOutput(void)    { asm volatile ("bclr _TRISD, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetState(const bool s)   { _LATD8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_Init(const bool d, const bool s) { _LATD8 = s; _TRISD8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_Dispose(void)      { _TRISD8 = 1; _LATD8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD8_GetOpenDrain(void) { return(_ODCD8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetOpenDrain(const bool a) { _ODCD8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD8_GetPullUp(void)    { return(_CNPUD8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetPullUp(const bool a)  { _CNPUD8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD8_GetPullDown(void)  { return(_CNPUD8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetPullDown(const bool a) { _CNPUD8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetAnalog(void)    { _ANSELD8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetDigital(void)   { _ANSELD8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD8

// Function declarations of port pin RD9
#if defined (_TRISD9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD9_Get(void)          { return((bool)_RD9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_Set(void)          { asm volatile ("bset _LATD, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_Clear(void)        { asm volatile ("bclr _LATD, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_Toggle(void)       { asm volatile ("btg _LATD, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetInput(void)     { asm volatile ("bset _TRISD, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetOutput(void)    { asm volatile ("bclr _TRISD, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetState(const bool s)   { _LATD9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_Init(const bool d, const bool s) { _LATD9 = s; _TRISD9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_Dispose(void)      { _TRISD9 = 1; _LATD9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD9_GetOpenDrain(void) { return(_ODCD9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetOpenDrain(const bool a) { _ODCD9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD9_GetPullUp(void)    { return(_CNPUD9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetPullUp(const bool a)  { _CNPUD9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD9_GetPullDown(void)  { return(_CNPUD9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetPullDown(const bool a) { _CNPUD9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetAnalog(void)    { _ANSELD9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetDigital(void)   { _ANSELD9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD9

// Function declarations of port pin RD10
#if defined (_TRISD10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD10_Get(void)         { return((bool)_RD10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_Set(void)         { asm volatile ("bset _LATD, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_Clear(void)       { asm volatile ("bclr _LATD, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_Toggle(void)      { asm volatile ("btg _LATD, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetInput(void)    { asm volatile ("bset _TRISD, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetOutput(void)   { asm volatile ("bclr _TRISD, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetState(const bool s)  { _LATD10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_Init(const bool d, const bool s) { _LATD10 = s; _TRISD10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_Dispose(void)     { _TRISD10 = 1; _LATD10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD10_GetOpenDrain(void) { return(_ODCD10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetOpenDrain(const bool a) { _ODCD10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD10_GetPullUp(void)   { return(_CNPUD10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetPullUp(const bool a) { _CNPUD10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD10_GetPullDown(void) { return(_CNPUD10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetPullDown(const bool a) { _CNPUD10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetAnalog(void)   { _ANSELD10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetDigital(void)  { _ANSELD10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD10

// Function declarations of port pin RD11
#if defined (_TRISD11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD11_Get(void)         { return((bool)_RD11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_Set(void)         { asm volatile ("bset _LATD, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_Clear(void)       { asm volatile ("bclr _LATD, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_Toggle(void)      { asm volatile ("btg _LATD, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetInput(void)    { asm volatile ("bset _TRISD, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetOutput(void)   { asm volatile ("bclr _TRISD, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetState(const bool s)  { _LATD11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_Init(const bool d, const bool s) { _LATD11 = s; _TRISD11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_Dispose(void)     { _TRISD11 = 1; _LATD11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD11_GetOpenDrain(void) { return(_ODCD11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetOpenDrain(const bool a) { _ODCD11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD11_GetPullUp(void)   { return(_CNPUD11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetPullUp(const bool a) { _CNPUD11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD11_GetPullDown(void) { return(_CNPUD11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetPullDown(const bool a) { _CNPUD11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetAnalog(void)   { _ANSELD11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetDigital(void)  { _ANSELD11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD11

// Function declarations of port pin RD12
#if defined (_TRISD12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD12_Get(void)         { return((bool)_RD12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_Set(void)         { asm volatile ("bset _LATD, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_Clear(void)       { asm volatile ("bclr _LATD, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_Toggle(void)      { asm volatile ("btg _LATD, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetInput(void)    { asm volatile ("bset _TRISD, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetOutput(void)   { asm volatile ("bclr _TRISD, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetState(const bool s)  { _LATD12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_Init(const bool d, const bool s) { _LATD12 = s; _TRISD12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_Dispose(void)     { _TRISD12 = 1; _LATD12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD12_GetOpenDrain(void) { return(_ODCD12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetOpenDrain(const bool a) { _ODCD12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD12_GetPullUp(void)   { return(_CNPUD12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetPullUp(const bool a) { _CNPUD12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD12_GetPullDown(void) { return(_CNPUD12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetPullDown(const bool a) { _CNPUD12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetAnalog(void)   { _ANSELD12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetDigital(void)  { _ANSELD12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD12

// Function declarations of port pin RD13
#if defined (_TRISD13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD13_Get(void)         { return((bool)_RD13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_Set(void)         { asm volatile ("bset _LATD, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_Clear(void)       { asm volatile ("bclr _LATD, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_Toggle(void)      { asm volatile ("btg _LATD, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetInput(void)    { asm volatile ("bset _TRISD, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetOutput(void)   { asm volatile ("bclr _TRISD, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetState(const bool s)  { _LATD13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_Init(const bool d, const bool s) { _LATD13 = s; _TRISD13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_Dispose(void)     { _TRISD13 = 1; _LATD13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD13_GetOpenDrain(void) { return(_ODCD13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetOpenDrain(const bool a) { _ODCD13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD13_GetPullUp(void)   { return(_CNPUD13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetPullUp(const bool a) { _CNPUD13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD13_GetPullDown(void) { return(_CNPUD13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetPullDown(const bool a) { _CNPUD13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetAnalog(void)   { _ANSELD13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetDigital(void)  { _ANSELD13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD13

// Function declarations of port pin RD14
#if defined (_TRISD14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD14_Get(void)         { return((bool)_RD14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_Set(void)         { asm volatile ("bset _LATD, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_Clear(void)       { asm volatile ("bclr _LATD, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_Toggle(void)      { asm volatile ("btg _LATD, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetInput(void)    { asm volatile ("bset _TRISD, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetOutput(void)   { asm volatile ("bclr _TRISD, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetState(const bool s)  { _LATD14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_Init(const bool d, const bool s) { _LATD14 = s; _TRISD14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_Dispose(void)     { _TRISD14 = 1; _LATD14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD14_GetOpenDrain(void) { return(_ODCD14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetOpenDrain(const bool a) { _ODCD14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD14_GetPullUp(void)   { return(_CNPUD14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetPullUp(const bool a) { _CNPUD14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD14_GetPullDown(void) { return(_CNPUD14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetPullDown(const bool a) { _CNPUD14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetAnalog(void)   { _ANSELD14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetDigital(void)  { _ANSELD14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD14

// Function declarations of port pin RD15
#if defined (_TRISD15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD15_Get(void)         { return((bool)_RD15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_Set(void)         { asm volatile ("bset _LATD, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_Clear(void)       { asm volatile ("bclr _LATD, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_Toggle(void)      { asm volatile ("btg _LATD, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetInput(void)    { asm volatile ("bset _TRISD, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetOutput(void)   { asm volatile ("bclr _TRISD, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetState(const bool s)  { _LATD15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_Init(const bool d, const bool s) { _LATD15 = s; _TRISD15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_Dispose(void)     { _TRISD15 = 1; _LATD15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD15_GetOpenDrain(void) { return(_ODCD15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetOpenDrain(const bool a) { _ODCD15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD15_GetPullUp(void)   { return(_CNPUD15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetPullUp(const bool a) { _CNPUD15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RD15_GetPullDown(void) { return(_CNPUD15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetPullDown(const bool a) { _CNPUD15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELD15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetAnalog(void)   { _ANSELD15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELD15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetDigital(void)  { _ANSELD15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RD15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RD15

// Function declarations of port pin RE0
#if defined (_TRISE0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE0_Get(void)          { return((bool)_RE0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_Set(void)          { asm volatile ("bset _LATE, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_Clear(void)        { asm volatile ("bclr _LATE, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_Toggle(void)       { asm volatile ("btg _LATE, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetInput(void)     { asm volatile ("bset _TRISE, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetOutput(void)    { asm volatile ("bclr _TRISE, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetState(const bool s)   { _LATE0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_Init(const bool d, const bool s) { _LATE0 = s; _TRISE0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_Dispose(void)      { _TRISE0 = 1; _LATE0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE0_GetOpenDrain(void) { return(_ODCE0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetOpenDrain(const bool a) { _ODCE0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE0_GetPullUp(void)    { return(_CNPUE0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetPullUp(const bool a)  { _CNPUE0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE0_GetPullDown(void)  { return(_CNPUE0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetPullDown(const bool a) { _CNPUE0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetAnalog(void)    { _ANSELE0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetDigital(void)   { _ANSELE0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE0

// Function declarations of port pin RE1
#if defined (_TRISE1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE1_Get(void)          { return((bool)_RE1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_Set(void)          { asm volatile ("bset _LATE, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_Clear(void)        { asm volatile ("bclr _LATE, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_Toggle(void)       { asm volatile ("btg _LATE, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetInput(void)     { asm volatile ("bset _TRISE, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetOutput(void)    { asm volatile ("bclr _TRISE, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetState(const bool s)   { _LATE1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_Init(const bool d, const bool s) { _LATE1 = s; _TRISE1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_Dispose(void)      { _TRISE1 = 1; _LATE1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE1_GetOpenDrain(void) { return(_ODCE1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetOpenDrain(const bool a) { _ODCE1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE1_GetPullUp(void)    { return(_CNPUE1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetPullUp(const bool a)  { _CNPUE1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE1_GetPullDown(void)  { return(_CNPUE1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetPullDown(const bool a) { _CNPUE1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetAnalog(void)    { _ANSELE1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetDigital(void)   { _ANSELE1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE1

// Function declarations of port pin RE2
#if defined (_TRISE2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE2_Get(void)          { return((bool)_RE2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_Set(void)          { asm volatile ("bset _LATE, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_Clear(void)        { asm volatile ("bclr _LATE, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_Toggle(void)       { asm volatile ("btg _LATE, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetInput(void)     { asm volatile ("bset _TRISE, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetOutput(void)    { asm volatile ("bclr _TRISE, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetState(const bool s)   { _LATE2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_Init(const bool d, const bool s) { _LATE2 = s; _TRISE2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_Dispose(void)      { _TRISE2 = 1; _LATE2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE2_GetOpenDrain(void) { return(_ODCE2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetOpenDrain(const bool a) { _ODCE2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE2_GetPullUp(void)    { return(_CNPUE2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetPullUp(const bool a)  { _CNPUE2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE2_GetPullDown(void)  { return(_CNPUE2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetPullDown(const bool a) { _CNPUE2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetAnalog(void)    { _ANSELE2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetDigital(void)   { _ANSELE2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE2

// Function declarations of port pin RE3
#if defined (_TRISE3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE3_Get(void)          { return((bool)_RE3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_Set(void)          { asm volatile ("bset _LATE, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_Clear(void)        { asm volatile ("bclr _LATE, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_Toggle(void)       { asm volatile ("btg _LATE, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetInput(void)     { asm volatile ("bset _TRISE, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetOutput(void)    { asm volatile ("bclr _TRISE, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetState(const bool s)   { _LATE3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_Init(const bool d, const bool s) { _LATE3 = s; _TRISE3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_Dispose(void)      { _TRISE3 = 1; _LATE3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE3_GetOpenDrain(void) { return(_ODCE3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetOpenDrain(const bool a) { _ODCE3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE3_GetPullUp(void)    { return(_CNPUE3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetPullUp(const bool a)  { _CNPUE3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE3_GetPullDown(void)  { return(_CNPUE3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetPullDown(const bool a) { _CNPUE3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetAnalog(void)    { _ANSELE3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetDigital(void)   { _ANSELE3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE3

// Function declarations of port pin RE4
#if defined (_TRISE4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE4_Get(void)          { return((bool)_RE4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_Set(void)          { asm volatile ("bset _LATE, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_Clear(void)        { asm volatile ("bclr _LATE, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_Toggle(void)       { asm volatile ("btg _LATE, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetInput(void)     { asm volatile ("bset _TRISE, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetOutput(void)    { asm volatile ("bclr _TRISE, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetState(const bool s)   { _LATE4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_Init(const bool d, const bool s) { _LATE4 = s; _TRISE4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_Dispose(void)      { _TRISE4 = 1; _LATE4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE4_GetOpenDrain(void) { return(_ODCE4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetOpenDrain(const bool a) { _ODCE4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE4_GetPullUp(void)    { return(_CNPUE4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetPullUp(const bool a)  { _CNPUE4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE4_GetPullDown(void)  { return(_CNPUE4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetPullDown(const bool a) { _CNPUE4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetAnalog(void)    { _ANSELE4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetDigital(void)   { _ANSELE4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE4

// Function declarations of port pin RE5
#if defined (_TRISE5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE5_Get(void)          { return((bool)_RE5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_Set(void)          { asm volatile ("bset _LATE, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_Clear(void)        { asm volatile ("bclr _LATE, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_Toggle(void)       { asm volatile ("btg _LATE, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetInput(void)     { asm volatile ("bset _TRISE, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetOutput(void)    { asm volatile ("bclr _TRISE, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetState(const bool s)   { _LATE5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_Init(const bool d, const bool s) { _LATE5 = s; _TRISE5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_Dispose(void)      { _TRISE5 = 1; _LATE5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE5_GetOpenDrain(void) { return(_ODCE5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetOpenDrain(const bool a) { _ODCE5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE5_GetPullUp(void)    { return(_CNPUE5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetPullUp(const bool a)  { _CNPUE5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE5_GetPullDown(void)  { return(_CNPUE5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetPullDown(const bool a) { _CNPUE5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetAnalog(void)    { _ANSELE5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetDigital(void)   { _ANSELE5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE5

// Function declarations of port pin RE6
#if defined (_TRISE6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE6_Get(void)          { return((bool)_RE6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_Set(void)          { asm volatile ("bset _LATE, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_Clear(void)        { asm volatile ("bclr _LATE, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_Toggle(void)       { asm volatile ("btg _LATE, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetInput(void)     { asm volatile ("bset _TRISE, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetOutput(void)    { asm volatile ("bclr _TRISE, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetState(const bool s)   { _LATE6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_Init(const bool d, const bool s) { _LATE6 = s; _TRISE6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_Dispose(void)      { _TRISE6 = 1; _LATE6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE6_GetOpenDrain(void) { return(_ODCE6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetOpenDrain(const bool a) { _ODCE6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE6_GetPullUp(void)    { return(_CNPUE6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetPullUp(const bool a)  { _CNPUE6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE6_GetPullDown(void)  { return(_CNPUE6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetPullDown(const bool a) { _CNPUE6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetAnalog(void)    { _ANSELE6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetDigital(void)   { _ANSELE6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE6

// Function declarations of port pin RE7
#if defined (_TRISE7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE7_Get(void)          { return((bool)_RE7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_Set(void)          { asm volatile ("bset _LATE, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_Clear(void)        { asm volatile ("bclr _LATE, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_Toggle(void)       { asm volatile ("btg _LATE, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetInput(void)     { asm volatile ("bset _TRISE, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetOutput(void)    { asm volatile ("bclr _TRISE, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetState(const bool s)   { _LATE7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_Init(const bool d, const bool s) { _LATE7 = s; _TRISE7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_Dispose(void)      { _TRISE7 = 1; _LATE7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE7_GetOpenDrain(void) { return(_ODCE7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetOpenDrain(const bool a) { _ODCE7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE7_GetPullUp(void)    { return(_CNPUE7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetPullUp(const bool a)  { _CNPUE7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE7_GetPullDown(void)  { return(_CNPUE7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetPullDown(const bool a) { _CNPUE7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetAnalog(void)    { _ANSELE7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetDigital(void)   { _ANSELE7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE7

// Function declarations of port pin RE8
#if defined (_TRISE8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE8_Get(void)          { return((bool)_RE8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_Set(void)          { asm volatile ("bset _LATE, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_Clear(void)        { asm volatile ("bclr _LATE, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_Toggle(void)       { asm volatile ("btg _LATE, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetInput(void)     { asm volatile ("bset _TRISE, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetOutput(void)    { asm volatile ("bclr _TRISE, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetState(const bool s)   { _LATE8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_Init(const bool d, const bool s) { _LATE8 = s; _TRISE8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_Dispose(void)      { _TRISE8 = 1; _LATE8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE8_GetOpenDrain(void) { return(_ODCE8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetOpenDrain(const bool a) { _ODCE8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE8_GetPullUp(void)    { return(_CNPUE8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetPullUp(const bool a)  { _CNPUE8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE8_GetPullDown(void)  { return(_CNPUE8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetPullDown(const bool a) { _CNPUE8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetAnalog(void)    { _ANSELE8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetDigital(void)   { _ANSELE8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE8

// Function declarations of port pin RE9
#if defined (_TRISE9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE9_Get(void)          { return((bool)_RE9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_Set(void)          { asm volatile ("bset _LATE, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_Clear(void)        { asm volatile ("bclr _LATE, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_Toggle(void)       { asm volatile ("btg _LATE, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetInput(void)     { asm volatile ("bset _TRISE, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetOutput(void)    { asm volatile ("bclr _TRISE, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetState(const bool s)   { _LATE9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_Init(const bool d, const bool s) { _LATE9 = s; _TRISE9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_Dispose(void)      { _TRISE9 = 1; _LATE9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE9_GetOpenDrain(void) { return(_ODCE9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetOpenDrain(const bool a) { _ODCE9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE9_GetPullUp(void)    { return(_CNPUE9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetPullUp(const bool a)  { _CNPUE9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE9_GetPullDown(void)  { return(_CNPUE9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetPullDown(const bool a) { _CNPUE9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetAnalog(void)    { _ANSELE9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetDigital(void)   { _ANSELE9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE9

// Function declarations of port pin RE10
#if defined (_TRISE10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE10_Get(void)         { return((bool)_RE10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_Set(void)         { asm volatile ("bset _LATE, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_Clear(void)       { asm volatile ("bclr _LATE, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_Toggle(void)      { asm volatile ("btg _LATE, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetInput(void)    { asm volatile ("bset _TRISE, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetOutput(void)   { asm volatile ("bclr _TRISE, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetState(const bool s)  { _LATE10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_Init(const bool d, const bool s) { _LATE10 = s; _TRISE10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_Dispose(void)     { _TRISE10 = 1; _LATE10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE10_GetOpenDrain(void) { return(_ODCE10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetOpenDrain(const bool a) { _ODCE10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE10_GetPullUp(void)   { return(_CNPUE10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetPullUp(const bool a) { _CNPUE10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE10_GetPullDown(void) { return(_CNPUE10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetPullDown(const bool a) { _CNPUE10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetAnalog(void)   { _ANSELE10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetDigital(void)  { _ANSELE10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE10

// Function declarations of port pin RE11
#if defined (_TRISE11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE11_Get(void)         { return((bool)_RE11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_Set(void)         { asm volatile ("bset _LATE, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_Clear(void)       { asm volatile ("bclr _LATE, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_Toggle(void)      { asm volatile ("btg _LATE, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetInput(void)    { asm volatile ("bset _TRISE, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetOutput(void)   { asm volatile ("bclr _TRISE, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetState(const bool s)  { _LATE11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_Init(const bool d, const bool s) { _LATE11 = s; _TRISE11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_Dispose(void)     { _TRISE11 = 1; _LATE11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE11_GetOpenDrain(void) { return(_ODCE11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetOpenDrain(const bool a) { _ODCE11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE11_GetPullUp(void)   { return(_CNPUE11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetPullUp(const bool a) { _CNPUE11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE11_GetPullDown(void) { return(_CNPUE11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetPullDown(const bool a) { _CNPUE11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetAnalog(void)   { _ANSELE11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetDigital(void)  { _ANSELE11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE11

// Function declarations of port pin RE12
#if defined (_TRISE12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE12_Get(void)         { return((bool)_RE12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_Set(void)         { asm volatile ("bset _LATE, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_Clear(void)       { asm volatile ("bclr _LATE, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_Toggle(void)      { asm volatile ("btg _LATE, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetInput(void)    { asm volatile ("bset _TRISE, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetOutput(void)   { asm volatile ("bclr _TRISE, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetState(const bool s)  { _LATE12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_Init(const bool d, const bool s) { _LATE12 = s; _TRISE12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_Dispose(void)     { _TRISE12 = 1; _LATE12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE12_GetOpenDrain(void) { return(_ODCE12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetOpenDrain(const bool a) { _ODCE12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE12_GetPullUp(void)   { return(_CNPUE12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetPullUp(const bool a) { _CNPUE12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE12_GetPullDown(void) { return(_CNPUE12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetPullDown(const bool a) { _CNPUE12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetAnalog(void)   { _ANSELE12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetDigital(void)  { _ANSELE12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE12

// Function declarations of port pin RE13
#if defined (_TRISE13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE13_Get(void)         { return((bool)_RE13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_Set(void)         { asm volatile ("bset _LATE, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_Clear(void)       { asm volatile ("bclr _LATE, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_Toggle(void)      { asm volatile ("btg _LATE, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetInput(void)    { asm volatile ("bset _TRISE, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetOutput(void)   { asm volatile ("bclr _TRISE, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetState(const bool s)  { _LATE13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_Init(const bool d, const bool s) { _LATE13 = s; _TRISE13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_Dispose(void)     { _TRISE13 = 1; _LATE13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE13_GetOpenDrain(void) { return(_ODCE13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetOpenDrain(const bool a) { _ODCE13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE13_GetPullUp(void)   { return(_CNPUE13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetPullUp(const bool a) { _CNPUE13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE13_GetPullDown(void) { return(_CNPUE13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetPullDown(const bool a) { _CNPUE13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetAnalog(void)   { _ANSELE13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetDigital(void)  { _ANSELE13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE13

// Function declarations of port pin RE14
#if defined (_TRISE14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE14_Get(void)         { return((bool)_RE14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_Set(void)         { asm volatile ("bset _LATE, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_Clear(void)       { asm volatile ("bclr _LATE, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_Toggle(void)      { asm volatile ("btg _LATE, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetInput(void)    { asm volatile ("bset _TRISE, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetOutput(void)   { asm volatile ("bclr _TRISE, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetState(const bool s)  { _LATE14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_Init(const bool d, const bool s) { _LATE14 = s; _TRISE14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_Dispose(void)     { _TRISE14 = 1; _LATE14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE14_GetOpenDrain(void) { return(_ODCE14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetOpenDrain(const bool a) { _ODCE14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE14_GetPullUp(void)   { return(_CNPUE14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetPullUp(const bool a) { _CNPUE14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE14_GetPullDown(void) { return(_CNPUE14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetPullDown(const bool a) { _CNPUE14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetAnalog(void)   { _ANSELE14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetDigital(void)  { _ANSELE14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE14

// Function declarations of port pin RE15
#if defined (_TRISE15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE15_Get(void)         { return((bool)_RE15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_Set(void)         { asm volatile ("bset _LATE, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_Clear(void)       { asm volatile ("bclr _LATE, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_Toggle(void)      { asm volatile ("btg _LATE, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetInput(void)    { asm volatile ("bset _TRISE, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetOutput(void)   { asm volatile ("bclr _TRISE, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetState(const bool s)  { _LATE15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_Init(const bool d, const bool s) { _LATE15 = s; _TRISE15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_Dispose(void)     { _TRISE15 = 1; _LATE15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE15_GetOpenDrain(void) { return(_ODCE15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetOpenDrain(const bool a) { _ODCE15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE15_GetPullUp(void)   { return(_CNPUE15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetPullUp(const bool a) { _CNPUE15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RE15_GetPullDown(void) { return(_CNPUE15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetPullDown(const bool a) { _CNPUE15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELE15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetAnalog(void)   { _ANSELE15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELE15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetDigital(void)  { _ANSELE15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RE15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RE15

// Function declarations of port pin RF0
#if defined (_TRISF0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF0_Get(void)          { return((bool)_RF0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_Set(void)          { asm volatile ("bset _LATF, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_Clear(void)        { asm volatile ("bclr _LATF, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_Toggle(void)       { asm volatile ("btg _LATF, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetInput(void)     { asm volatile ("bset _TRISF, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetOutput(void)    { asm volatile ("bclr _TRISF, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetState(const bool s)   { _LATF0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_Init(const bool d, const bool s) { _LATF0 = s; _TRISF0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_Dispose(void)      { _TRISF0 = 1; _LATF0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF0_GetOpenDrain(void) { return(_ODCF0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetOpenDrain(const bool a) { _ODCF0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF0_GetPullUp(void)    { return(_CNPUF0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetPullUp(const bool a)  { _CNPUF0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF0_GetPullDown(void)  { return(_CNPUF0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetPullDown(const bool a) { _CNPUF0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetAnalog(void)    { _ANSELF0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetDigital(void)   { _ANSELF0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF0

// Function declarations of port pin RF1
#if defined (_TRISF1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF1_Get(void)          { return((bool)_RF1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_Set(void)          { asm volatile ("bset _LATF, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_Clear(void)        { asm volatile ("bclr _LATF, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_Toggle(void)       { asm volatile ("btg _LATF, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetInput(void)     { asm volatile ("bset _TRISF, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetOutput(void)    { asm volatile ("bclr _TRISF, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetState(const bool s)   { _LATF1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_Init(const bool d, const bool s) { _LATF1 = s; _TRISF1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_Dispose(void)      { _TRISF1 = 1; _LATF1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF1_GetOpenDrain(void) { return(_ODCF1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetOpenDrain(const bool a) { _ODCF1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF1_GetPullUp(void)    { return(_CNPUF1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetPullUp(const bool a)  { _CNPUF1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF1_GetPullDown(void)  { return(_CNPUF1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetPullDown(const bool a) { _CNPUF1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetAnalog(void)    { _ANSELF1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetDigital(void)   { _ANSELF1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF1

// Function declarations of port pin RF2
#if defined (_TRISF2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF2_Get(void)          { return((bool)_RF2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_Set(void)          { asm volatile ("bset _LATF, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_Clear(void)        { asm volatile ("bclr _LATF, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_Toggle(void)       { asm volatile ("btg _LATF, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetInput(void)     { asm volatile ("bset _TRISF, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetOutput(void)    { asm volatile ("bclr _TRISF, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetState(const bool s)   { _LATF2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_Init(const bool d, const bool s) { _LATF2 = s; _TRISF2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_Dispose(void)      { _TRISF2 = 1; _LATF2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF2_GetOpenDrain(void) { return(_ODCF2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetOpenDrain(const bool a) { _ODCF2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF2_GetPullUp(void)    { return(_CNPUF2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetPullUp(const bool a)  { _CNPUF2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF2_GetPullDown(void)  { return(_CNPUF2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetPullDown(const bool a) { _CNPUF2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetAnalog(void)    { _ANSELF2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetDigital(void)   { _ANSELF2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF2

// Function declarations of port pin RF3
#if defined (_TRISF3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF3_Get(void)          { return((bool)_RF3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_Set(void)          { asm volatile ("bset _LATF, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_Clear(void)        { asm volatile ("bclr _LATF, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_Toggle(void)       { asm volatile ("btg _LATF, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetInput(void)     { asm volatile ("bset _TRISF, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetOutput(void)    { asm volatile ("bclr _TRISF, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetState(const bool s)   { _LATF3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_Init(const bool d, const bool s) { _LATF3 = s; _TRISF3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_Dispose(void)      { _TRISF3 = 1; _LATF3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF3_GetOpenDrain(void) { return(_ODCF3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetOpenDrain(const bool a) { _ODCF3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF3_GetPullUp(void)    { return(_CNPUF3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetPullUp(const bool a)  { _CNPUF3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF3_GetPullDown(void)  { return(_CNPUF3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetPullDown(const bool a) { _CNPUF3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetAnalog(void)    { _ANSELF3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetDigital(void)   { _ANSELF3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF3

// Function declarations of port pin RF4
#if defined (_TRISF4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF4_Get(void)          { return((bool)_RF4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_Set(void)          { asm volatile ("bset _LATF, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_Clear(void)        { asm volatile ("bclr _LATF, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_Toggle(void)       { asm volatile ("btg _LATF, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetInput(void)     { asm volatile ("bset _TRISF, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetOutput(void)    { asm volatile ("bclr _TRISF, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetState(const bool s)   { _LATF4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_Init(const bool d, const bool s) { _LATF4 = s; _TRISF4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_Dispose(void)      { _TRISF4 = 1; _LATF4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF4_GetOpenDrain(void) { return(_ODCF4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetOpenDrain(const bool a) { _ODCF4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF4_GetPullUp(void)    { return(_CNPUF4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetPullUp(const bool a)  { _CNPUF4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF4_GetPullDown(void)  { return(_CNPUF4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetPullDown(const bool a) { _CNPUF4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetAnalog(void)    { _ANSELF4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetDigital(void)   { _ANSELF4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF4

// Function declarations of port pin RF5
#if defined (_TRISF5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF5_Get(void)          { return((bool)_RF5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_Set(void)          { asm volatile ("bset _LATF, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_Clear(void)        { asm volatile ("bclr _LATF, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_Toggle(void)       { asm volatile ("btg _LATF, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetInput(void)     { asm volatile ("bset _TRISF, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetOutput(void)    { asm volatile ("bclr _TRISF, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetState(const bool s)   { _LATF5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_Init(const bool d, const bool s) { _LATF5 = s; _TRISF5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_Dispose(void)      { _TRISF5 = 1; _LATF5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF5_GetOpenDrain(void) { return(_ODCF5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetOpenDrain(const bool a) { _ODCF5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF5_GetPullUp(void)    { return(_CNPUF5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetPullUp(const bool a)  { _CNPUF5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF5_GetPullDown(void)  { return(_CNPUF5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetPullDown(const bool a) { _CNPUF5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetAnalog(void)    { _ANSELF5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetDigital(void)   { _ANSELF5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF5

// Function declarations of port pin RF6
#if defined (_TRISF6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF6_Get(void)          { return((bool)_RF6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_Set(void)          { asm volatile ("bset _LATF, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_Clear(void)        { asm volatile ("bclr _LATF, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_Toggle(void)       { asm volatile ("btg _LATF, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetInput(void)     { asm volatile ("bset _TRISF, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetOutput(void)    { asm volatile ("bclr _TRISF, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetState(const bool s)   { _LATF6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_Init(const bool d, const bool s) { _LATF6 = s; _TRISF6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_Dispose(void)      { _TRISF6 = 1; _LATF6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF6_GetOpenDrain(void) { return(_ODCF6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetOpenDrain(const bool a) { _ODCF6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF6_GetPullUp(void)    { return(_CNPUF6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetPullUp(const bool a)  { _CNPUF6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF6_GetPullDown(void)  { return(_CNPUF6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetPullDown(const bool a) { _CNPUF6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetAnalog(void)    { _ANSELF6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetDigital(void)   { _ANSELF6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF6

// Function declarations of port pin RF7
#if defined (_TRISF7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF7_Get(void)          { return((bool)_RF7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_Set(void)          { asm volatile ("bset _LATF, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_Clear(void)        { asm volatile ("bclr _LATF, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_Toggle(void)       { asm volatile ("btg _LATF, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetInput(void)     { asm volatile ("bset _TRISF, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetOutput(void)    { asm volatile ("bclr _TRISF, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetState(const bool s)   { _LATF7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_Init(const bool d, const bool s) { _LATF7 = s; _TRISF7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_Dispose(void)      { _TRISF7 = 1; _LATF7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF7_GetOpenDrain(void) { return(_ODCF7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetOpenDrain(const bool a) { _ODCF7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF7_GetPullUp(void)    { return(_CNPUF7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetPullUp(const bool a)  { _CNPUF7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF7_GetPullDown(void)  { return(_CNPUF7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetPullDown(const bool a) { _CNPUF7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetAnalog(void)    { _ANSELF7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetDigital(void)   { _ANSELF7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF7

// Function declarations of port pin RF8
#if defined (_TRISF8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF8_Get(void)          { return((bool)_RF8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_Set(void)          { asm volatile ("bset _LATF, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_Clear(void)        { asm volatile ("bclr _LATF, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_Toggle(void)       { asm volatile ("btg _LATF, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetInput(void)     { asm volatile ("bset _TRISF, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetOutput(void)    { asm volatile ("bclr _TRISF, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetState(const bool s)   { _LATF8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_Init(const bool d, const bool s) { _LATF8 = s; _TRISF8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_Dispose(void)      { _TRISF8 = 1; _LATF8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF8_GetOpenDrain(void) { return(_ODCF8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetOpenDrain(const bool a) { _ODCF8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF8_GetPullUp(void)    { return(_CNPUF8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetPullUp(const bool a)  { _CNPUF8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF8_GetPullDown(void)  { return(_CNPUF8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetPullDown(const bool a) { _CNPUF8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetAnalog(void)    { _ANSELF8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetDigital(void)   { _ANSELF8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF8

// Function declarations of port pin RF9
#if defined (_TRISF9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF9_Get(void)          { return((bool)_RF9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_Set(void)          { asm volatile ("bset _LATF, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_Clear(void)        { asm volatile ("bclr _LATF, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_Toggle(void)       { asm volatile ("btg _LATF, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetInput(void)     { asm volatile ("bset _TRISF, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetOutput(void)    { asm volatile ("bclr _TRISF, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetState(const bool s)   { _LATF9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_Init(const bool d, const bool s) { _LATF9 = s; _TRISF9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_Dispose(void)      { _TRISF9 = 1; _LATF9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF9_GetOpenDrain(void) { return(_ODCF9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetOpenDrain(const bool a) { _ODCF9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF9_GetPullUp(void)    { return(_CNPUF9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetPullUp(const bool a)  { _CNPUF9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF9_GetPullDown(void)  { return(_CNPUF9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetPullDown(const bool a) { _CNPUF9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetAnalog(void)    { _ANSELF9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetDigital(void)   { _ANSELF9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF9

// Function declarations of port pin RF10
#if defined (_TRISF10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF10_Get(void)         { return((bool)_RF10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_Set(void)         { asm volatile ("bset _LATF, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_Clear(void)       { asm volatile ("bclr _LATF, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_Toggle(void)      { asm volatile ("btg _LATF, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetInput(void)    { asm volatile ("bset _TRISF, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetOutput(void)   { asm volatile ("bclr _TRISF, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetState(const bool s)  { _LATF10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_Init(const bool d, const bool s) { _LATF10 = s; _TRISF10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_Dispose(void)     { _TRISF10 = 1; _LATF10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF10_GetOpenDrain(void) { return(_ODCF10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetOpenDrain(const bool a) { _ODCF10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF10_GetPullUp(void)   { return(_CNPUF10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetPullUp(const bool a) { _CNPUF10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF10_GetPullDown(void) { return(_CNPUF10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetPullDown(const bool a) { _CNPUF10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetAnalog(void)   { _ANSELF10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetDigital(void)  { _ANSELF10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF10

// Function declarations of port pin RF11
#if defined (_TRISF11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF11_Get(void)         { return((bool)_RF11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_Set(void)         { asm volatile ("bset _LATF, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_Clear(void)       { asm volatile ("bclr _LATF, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_Toggle(void)      { asm volatile ("btg _LATF, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetInput(void)    { asm volatile ("bset _TRISF, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetOutput(void)   { asm volatile ("bclr _TRISF, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetState(const bool s)  { _LATF11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_Init(const bool d, const bool s) { _LATF11 = s; _TRISF11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_Dispose(void)     { _TRISF11 = 1; _LATF11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF11_GetOpenDrain(void) { return(_ODCF11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetOpenDrain(const bool a) { _ODCF11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF11_GetPullUp(void)   { return(_CNPUF11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetPullUp(const bool a) { _CNPUF11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF11_GetPullDown(void) { return(_CNPUF11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetPullDown(const bool a) { _CNPUF11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetAnalog(void)   { _ANSELF11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetDigital(void)  { _ANSELF11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF11

// Function declarations of port pin RF12
#if defined (_TRISF12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF12_Get(void)         { return((bool)_RF12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_Set(void)         { asm volatile ("bset _LATF, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_Clear(void)       { asm volatile ("bclr _LATF, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_Toggle(void)      { asm volatile ("btg _LATF, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetInput(void)    { asm volatile ("bset _TRISF, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetOutput(void)   { asm volatile ("bclr _TRISF, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetState(const bool s)  { _LATF12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_Init(const bool d, const bool s) { _LATF12 = s; _TRISF12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_Dispose(void)     { _TRISF12 = 1; _LATF12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF12_GetOpenDrain(void) { return(_ODCF12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetOpenDrain(const bool a) { _ODCF12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF12_GetPullUp(void)   { return(_CNPUF12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetPullUp(const bool a) { _CNPUF12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF12_GetPullDown(void) { return(_CNPUF12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetPullDown(const bool a) { _CNPUF12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetAnalog(void)   { _ANSELF12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetDigital(void)  { _ANSELF12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF12

// Function declarations of port pin RF13
#if defined (_TRISF13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF13_Get(void)         { return((bool)_RF13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_Set(void)         { asm volatile ("bset _LATF, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_Clear(void)       { asm volatile ("bclr _LATF, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_Toggle(void)      { asm volatile ("btg _LATF, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetInput(void)    { asm volatile ("bset _TRISF, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetOutput(void)   { asm volatile ("bclr _TRISF, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetState(const bool s)  { _LATF13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_Init(const bool d, const bool s) { _LATF13 = s; _TRISF13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_Dispose(void)     { _TRISF13 = 1; _LATF13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF13_GetOpenDrain(void) { return(_ODCF13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetOpenDrain(const bool a) { _ODCF13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF13_GetPullUp(void)   { return(_CNPUF13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetPullUp(const bool a) { _CNPUF13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF13_GetPullDown(void) { return(_CNPUF13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetPullDown(const bool a) { _CNPUF13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetAnalog(void)   { _ANSELF13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetDigital(void)  { _ANSELF13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF13

// Function declarations of port pin RF14
#if defined (_TRISF14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF14_Get(void)         { return((bool)_RF14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_Set(void)         { asm volatile ("bset _LATF, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_Clear(void)       { asm volatile ("bclr _LATF, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_Toggle(void)      { asm volatile ("btg _LATF, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetInput(void)    { asm volatile ("bset _TRISF, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetOutput(void)   { asm volatile ("bclr _TRISF, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetState(const bool s)  { _LATF14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_Init(const bool d, const bool s) { _LATF14 = s; _TRISF14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_Dispose(void)     { _TRISF14 = 1; _LATF14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF14_GetOpenDrain(void) { return(_ODCF14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetOpenDrain(const bool a) { _ODCF14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF14_GetPullUp(void)   { return(_CNPUF14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetPullUp(const bool a) { _CNPUF14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF14_GetPullDown(void) { return(_CNPUF14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetPullDown(const bool a) { _CNPUF14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetAnalog(void)   { _ANSELF14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetDigital(void)  { _ANSELF14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF14

// Function declarations of port pin RF15
#if defined (_TRISF15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF15_Get(void)         { return((bool)_RF15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_Set(void)         { asm volatile ("bset _LATF, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_Clear(void)       { asm volatile ("bclr _LATF, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_Toggle(void)      { asm volatile ("btg _LATF, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetInput(void)    { asm volatile ("bset _TRISF, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetOutput(void)   { asm volatile ("bclr _TRISF, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetState(const bool s)  { _LATF15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_Init(const bool d, const bool s) { _LATF15 = s; _TRISF15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_Dispose(void)     { _TRISF15 = 1; _LATF15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF15_GetOpenDrain(void) { return(_ODCF15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetOpenDrain(const bool a) { _ODCF15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF15_GetPullUp(void)   { return(_CNPUF15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetPullUp(const bool a) { _CNPUF15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RF15_GetPullDown(void) { return(_CNPUF15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetPullDown(const bool a) { _CNPUF15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELF15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetAnalog(void)   { _ANSELF15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELF15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetDigital(void)  { _ANSELF15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RF15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RF15

// Function declarations of port pin RG0
#if defined (_TRISG0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG0_Get(void)          { return((bool)_RG0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_Set(void)          { asm volatile ("bset _LATG, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_Clear(void)        { asm volatile ("bclr _LATG, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_Toggle(void)       { asm volatile ("btg _LATG, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetInput(void)     { asm volatile ("bset _TRISG, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetOutput(void)    { asm volatile ("bclr _TRISG, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetState(const bool s)   { _LATG0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_Init(const bool d, const bool s) { _LATG0 = s; _TRISG0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_Dispose(void)      { _TRISG0 = 1; _LATG0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG0_GetOpenDrain(void) { return(_ODCG0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetOpenDrain(const bool a) { _ODCG0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG0_GetPullUp(void)    { return(_CNPUG0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetPullUp(const bool a)  { _CNPUG0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG0_GetPullDown(void)  { return(_CNPUG0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetPullDown(const bool a) { _CNPUG0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetAnalog(void)    { _ANSELG0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetDigital(void)   { _ANSELG0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG0

// Function declarations of port pin RG1
#if defined (_TRISG1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG1_Get(void)          { return((bool)_RG1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_Set(void)          { asm volatile ("bset _LATG, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_Clear(void)        { asm volatile ("bclr _LATG, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_Toggle(void)       { asm volatile ("btg _LATG, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetInput(void)     { asm volatile ("bset _TRISG, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetOutput(void)    { asm volatile ("bclr _TRISG, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetState(const bool s)   { _LATG1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_Init(const bool d, const bool s) { _LATG1 = s; _TRISG1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_Dispose(void)      { _TRISG1 = 1; _LATG1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG1_GetOpenDrain(void) { return(_ODCG1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetOpenDrain(const bool a) { _ODCG1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG1_GetPullUp(void)    { return(_CNPUG1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetPullUp(const bool a)  { _CNPUG1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG1_GetPullDown(void)  { return(_CNPUG1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetPullDown(const bool a) { _CNPUG1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetAnalog(void)    { _ANSELG1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetDigital(void)   { _ANSELG1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG1

// Function declarations of port pin RG2
#if defined (_TRISG2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG2_Get(void)          { return((bool)_RG2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_Set(void)          { asm volatile ("bset _LATG, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_Clear(void)        { asm volatile ("bclr _LATG, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_Toggle(void)       { asm volatile ("btg _LATG, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetInput(void)     { asm volatile ("bset _TRISG, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetOutput(void)    { asm volatile ("bclr _TRISG, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetState(const bool s)   { _LATG2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_Init(const bool d, const bool s) { _LATG2 = s; _TRISG2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_Dispose(void)      { _TRISG2 = 1; _LATG2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG2_GetOpenDrain(void) { return(_ODCG2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetOpenDrain(const bool a) { _ODCG2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG2_GetPullUp(void)    { return(_CNPUG2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetPullUp(const bool a)  { _CNPUG2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG2_GetPullDown(void)  { return(_CNPUG2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetPullDown(const bool a) { _CNPUG2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetAnalog(void)    { _ANSELG2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetDigital(void)   { _ANSELG2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG2

// Function declarations of port pin RG3
#if defined (_TRISG3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG3_Get(void)          { return((bool)_RG3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_Set(void)          { asm volatile ("bset _LATG, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_Clear(void)        { asm volatile ("bclr _LATG, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_Toggle(void)       { asm volatile ("btg _LATG, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetInput(void)     { asm volatile ("bset _TRISG, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetOutput(void)    { asm volatile ("bclr _TRISG, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetState(const bool s)   { _LATG3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_Init(const bool d, const bool s) { _LATG3 = s; _TRISG3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_Dispose(void)      { _TRISG3 = 1; _LATG3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG3_GetOpenDrain(void) { return(_ODCG3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetOpenDrain(const bool a) { _ODCG3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG3_GetPullUp(void)    { return(_CNPUG3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetPullUp(const bool a)  { _CNPUG3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG3_GetPullDown(void)  { return(_CNPUG3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetPullDown(const bool a) { _CNPUG3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetAnalog(void)    { _ANSELG3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetDigital(void)   { _ANSELG3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG3

// Function declarations of port pin RG4
#if defined (_TRISG4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG4_Get(void)          { return((bool)_RG4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_Set(void)          { asm volatile ("bset _LATG, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_Clear(void)        { asm volatile ("bclr _LATG, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_Toggle(void)       { asm volatile ("btg _LATG, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetInput(void)     { asm volatile ("bset _TRISG, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetOutput(void)    { asm volatile ("bclr _TRISG, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetState(const bool s)   { _LATG4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_Init(const bool d, const bool s) { _LATG4 = s; _TRISG4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_Dispose(void)      { _TRISG4 = 1; _LATG4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG4_GetOpenDrain(void) { return(_ODCG4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetOpenDrain(const bool a) { _ODCG4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG4_GetPullUp(void)    { return(_CNPUG4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetPullUp(const bool a)  { _CNPUG4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG4_GetPullDown(void)  { return(_CNPUG4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetPullDown(const bool a) { _CNPUG4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetAnalog(void)    { _ANSELG4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetDigital(void)   { _ANSELG4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG4

// Function declarations of port pin RG5
#if defined (_TRISG5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG5_Get(void)          { return((bool)_RG5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_Set(void)          { asm volatile ("bset _LATG, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_Clear(void)        { asm volatile ("bclr _LATG, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_Toggle(void)       { asm volatile ("btg _LATG, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetInput(void)     { asm volatile ("bset _TRISG, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetOutput(void)    { asm volatile ("bclr _TRISG, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetState(const bool s)   { _LATG5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_Init(const bool d, const bool s) { _LATG5 = s; _TRISG5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_Dispose(void)      { _TRISG5 = 1; _LATG5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG5_GetOpenDrain(void) { return(_ODCG5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetOpenDrain(const bool a) { _ODCG5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG5_GetPullUp(void)    { return(_CNPUG5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetPullUp(const bool a)  { _CNPUG5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG5_GetPullDown(void)  { return(_CNPUG5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetPullDown(const bool a) { _CNPUG5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetAnalog(void)    { _ANSELG5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetDigital(void)   { _ANSELG5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG5

// Function declarations of port pin RG6
#if defined (_TRISG6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG6_Get(void)          { return((bool)_RG6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_Set(void)          { asm volatile ("bset _LATG, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_Clear(void)        { asm volatile ("bclr _LATG, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_Toggle(void)       { asm volatile ("btg _LATG, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetInput(void)     { asm volatile ("bset _TRISG, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetOutput(void)    { asm volatile ("bclr _TRISG, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetState(const bool s)   { _LATG6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_Init(const bool d, const bool s) { _LATG6 = s; _TRISG6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_Dispose(void)      { _TRISG6 = 1; _LATG6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG6_GetOpenDrain(void) { return(_ODCG6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetOpenDrain(const bool a) { _ODCG6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG6_GetPullUp(void)    { return(_CNPUG6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetPullUp(const bool a)  { _CNPUG6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG6_GetPullDown(void)  { return(_CNPUG6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetPullDown(const bool a) { _CNPUG6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetAnalog(void)    { _ANSELG6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetDigital(void)   { _ANSELG6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG6

// Function declarations of port pin RG7
#if defined (_TRISG7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG7_Get(void)          { return((bool)_RG7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_Set(void)          { asm volatile ("bset _LATG, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_Clear(void)        { asm volatile ("bclr _LATG, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_Toggle(void)       { asm volatile ("btg _LATG, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetInput(void)     { asm volatile ("bset _TRISG, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetOutput(void)    { asm volatile ("bclr _TRISG, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetState(const bool s)   { _LATG7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_Init(const bool d, const bool s) { _LATG7 = s; _TRISG7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_Dispose(void)      { _TRISG7 = 1; _LATG7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG7_GetOpenDrain(void) { return(_ODCG7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetOpenDrain(const bool a) { _ODCG7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG7_GetPullUp(void)    { return(_CNPUG7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetPullUp(const bool a)  { _CNPUG7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG7_GetPullDown(void)  { return(_CNPUG7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetPullDown(const bool a) { _CNPUG7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetAnalog(void)    { _ANSELG7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetDigital(void)   { _ANSELG7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG7

// Function declarations of port pin RG8
#if defined (_TRISG8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG8_Get(void)          { return((bool)_RG8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_Set(void)          { asm volatile ("bset _LATG, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_Clear(void)        { asm volatile ("bclr _LATG, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_Toggle(void)       { asm volatile ("btg _LATG, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetInput(void)     { asm volatile ("bset _TRISG, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetOutput(void)    { asm volatile ("bclr _TRISG, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetState(const bool s)   { _LATG8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_Init(const bool d, const bool s) { _LATG8 = s; _TRISG8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_Dispose(void)      { _TRISG8 = 1; _LATG8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG8_GetOpenDrain(void) { return(_ODCG8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetOpenDrain(const bool a) { _ODCG8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG8_GetPullUp(void)    { return(_CNPUG8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetPullUp(const bool a)  { _CNPUG8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG8_GetPullDown(void)  { return(_CNPUG8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetPullDown(const bool a) { _CNPUG8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetAnalog(void)    { _ANSELG8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetDigital(void)   { _ANSELG8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG8

// Function declarations of port pin RG9
#if defined (_TRISG9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG9_Get(void)          { return((bool)_RG9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_Set(void)          { asm volatile ("bset _LATG, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_Clear(void)        { asm volatile ("bclr _LATG, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_Toggle(void)       { asm volatile ("btg _LATG, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetInput(void)     { asm volatile ("bset _TRISG, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetOutput(void)    { asm volatile ("bclr _TRISG, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetState(const bool s)   { _LATG9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_Init(const bool d, const bool s) { _LATG9 = s; _TRISG9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_Dispose(void)      { _TRISG9 = 1; _LATG9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG9_GetOpenDrain(void) { return(_ODCG9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetOpenDrain(const bool a) { _ODCG9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG9_GetPullUp(void)    { return(_CNPUG9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetPullUp(const bool a)  { _CNPUG9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG9_GetPullDown(void)  { return(_CNPUG9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetPullDown(const bool a) { _CNPUG9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetAnalog(void)    { _ANSELG9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetDigital(void)   { _ANSELG9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG9

// Function declarations of port pin RG10
#if defined (_TRISG10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG10_Get(void)         { return((bool)_RG10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_Set(void)         { asm volatile ("bset _LATG, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_Clear(void)       { asm volatile ("bclr _LATG, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_Toggle(void)      { asm volatile ("btg _LATG, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetInput(void)    { asm volatile ("bset _TRISG, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetOutput(void)   { asm volatile ("bclr _TRISG, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetState(const bool s)  { _LATG10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_Init(const bool d, const bool s) { _LATG10 = s; _TRISG10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_Dispose(void)     { _TRISG10 = 1; _LATG10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG10_GetOpenDrain(void) { return(_ODCG10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetOpenDrain(const bool a) { _ODCG10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG10_GetPullUp(void)   { return(_CNPUG10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetPullUp(const bool a) { _CNPUG10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG10_GetPullDown(void) { return(_CNPUG10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetPullDown(const bool a) { _CNPUG10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetAnalog(void)   { _ANSELG10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetDigital(void)  { _ANSELG10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG10

// Function declarations of port pin RG11
#if defined (_TRISG11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG11_Get(void)         { return((bool)_RG11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_Set(void)         { asm volatile ("bset _LATG, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_Clear(void)       { asm volatile ("bclr _LATG, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_Toggle(void)      { asm volatile ("btg _LATG, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetInput(void)    { asm volatile ("bset _TRISG, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetOutput(void)   { asm volatile ("bclr _TRISG, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetState(const bool s)  { _LATG11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_Init(const bool d, const bool s) { _LATG11 = s; _TRISG11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_Dispose(void)     { _TRISG11 = 1; _LATG11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG11_GetOpenDrain(void) { return(_ODCG11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetOpenDrain(const bool a) { _ODCG11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG11_GetPullUp(void)   { return(_CNPUG11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetPullUp(const bool a) { _CNPUG11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG11_GetPullDown(void) { return(_CNPUG11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetPullDown(const bool a) { _CNPUG11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetAnalog(void)   { _ANSELG11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetDigital(void)  { _ANSELG11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG11

// Function declarations of port pin RG12
#if defined (_TRISG12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG12_Get(void)         { return((bool)_RG12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_Set(void)         { asm volatile ("bset _LATG, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_Clear(void)       { asm volatile ("bclr _LATG, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_Toggle(void)      { asm volatile ("btg _LATG, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetInput(void)    { asm volatile ("bset _TRISG, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetOutput(void)   { asm volatile ("bclr _TRISG, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetState(const bool s)  { _LATG12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_Init(const bool d, const bool s) { _LATG12 = s; _TRISG12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_Dispose(void)     { _TRISG12 = 1; _LATG12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG12_GetOpenDrain(void) { return(_ODCG12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetOpenDrain(const bool a) { _ODCG12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG12_GetPullUp(void)   { return(_CNPUG12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetPullUp(const bool a) { _CNPUG12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG12_GetPullDown(void) { return(_CNPUG12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetPullDown(const bool a) { _CNPUG12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetAnalog(void)   { _ANSELG12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetDigital(void)  { _ANSELG12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG12

// Function declarations of port pin RG13
#if defined (_TRISG13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG13_Get(void)         { return((bool)_RG13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_Set(void)         { asm volatile ("bset _LATG, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_Clear(void)       { asm volatile ("bclr _LATG, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_Toggle(void)      { asm volatile ("btg _LATG, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetInput(void)    { asm volatile ("bset _TRISG, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetOutput(void)   { asm volatile ("bclr _TRISG, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetState(const bool s)  { _LATG13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_Init(const bool d, const bool s) { _LATG13 = s; _TRISG13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_Dispose(void)     { _TRISG13 = 1; _LATG13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG13_GetOpenDrain(void) { return(_ODCG13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetOpenDrain(const bool a) { _ODCG13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG13_GetPullUp(void)   { return(_CNPUG13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetPullUp(const bool a) { _CNPUG13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG13_GetPullDown(void) { return(_CNPUG13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetPullDown(const bool a) { _CNPUG13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetAnalog(void)   { _ANSELG13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetDigital(void)  { _ANSELG13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG13

// Function declarations of port pin RG14
#if defined (_TRISG14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG14_Get(void)         { return((bool)_RG14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_Set(void)         { asm volatile ("bset _LATG, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_Clear(void)       { asm volatile ("bclr _LATG, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_Toggle(void)      { asm volatile ("btg _LATG, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetInput(void)    { asm volatile ("bset _TRISG, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetOutput(void)   { asm volatile ("bclr _TRISG, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetState(const bool s)  { _LATG14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_Init(const bool d, const bool s) { _LATG14 = s; _TRISG14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_Dispose(void)     { _TRISG14 = 1; _LATG14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG14_GetOpenDrain(void) { return(_ODCG14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetOpenDrain(const bool a) { _ODCG14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG14_GetPullUp(void)   { return(_CNPUG14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetPullUp(const bool a) { _CNPUG14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG14_GetPullDown(void) { return(_CNPUG14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetPullDown(const bool a) { _CNPUG14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetAnalog(void)   { _ANSELG14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetDigital(void)  { _ANSELG14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG14

// Function declarations of port pin RG15
#if defined (_TRISG15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG15_Get(void)         { return((bool)_RG15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_Set(void)         { asm volatile ("bset _LATG, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_Clear(void)       { asm volatile ("bclr _LATG, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_Toggle(void)      { asm volatile ("btg _LATG, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetInput(void)    { asm volatile ("bset _TRISG, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetOutput(void)   { asm volatile ("bclr _TRISG, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetState(const bool s)  { _LATG15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_Init(const bool d, const bool s) { _LATG15 = s; _TRISG15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_Dispose(void)     { _TRISG15 = 1; _LATG15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG15_GetOpenDrain(void) { return(_ODCG15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetOpenDrain(const bool a) { _ODCG15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG15_GetPullUp(void)   { return(_CNPUG15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetPullUp(const bool a) { _CNPUG15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RG15_GetPullDown(void) { return(_CNPUG15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetPullDown(const bool a) { _CNPUG15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELG15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetAnalog(void)   { _ANSELG15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELG15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetDigital(void)  { _ANSELG15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RG15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RG15

// Function declarations of port pin RH0
#if defined (_TRISH0)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH0_Get(void)          { return((bool)_RH0); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_Set(void)          { asm volatile ("bset _LATH, #0 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_Clear(void)        { asm volatile ("bclr _LATH, #0 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_Toggle(void)       { asm volatile ("btg _LATH, #0 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetInput(void)     { asm volatile ("bset _TRISH, #0 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetOutput(void)    { asm volatile ("bclr _TRISH, #0 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetState(const bool s)   { _LATH0 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_Init(const bool d, const bool s) { _LATH0 = s; _TRISH0 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_Dispose(void)      { _TRISH0 = 1; _LATH0 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH0_GetOpenDrain(void) { return(_ODCH0); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetOpenDrain(const bool a) { _ODCH0 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH0_GetPullUp(void)    { return(_CNPUH0); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetPullUp(const bool a)  { _CNPUH0 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH0_GetPullDown(void)  { return(_CNPUH0); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetPullDown(const bool a) { _CNPUH0 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetAnalog(void)    { _ANSELH0 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetDigital(void)   { _ANSELH0 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH0_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH0

// Function declarations of port pin RH1
#if defined (_TRISH1)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH1_Get(void)          { return((bool)_RH1); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_Set(void)          { asm volatile ("bset _LATH, #1 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_Clear(void)        { asm volatile ("bclr _LATH, #1 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_Toggle(void)       { asm volatile ("btg _LATH, #1 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetInput(void)     { asm volatile ("bset _TRISH, #1 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetOutput(void)    { asm volatile ("bclr _TRISH, #1 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetState(const bool s)   { _LATH1 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_Init(const bool d, const bool s) { _LATH1 = s; _TRISH1 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_Dispose(void)      { _TRISH1 = 1; _LATH1 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH1_GetOpenDrain(void) { return(_ODCH1); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetOpenDrain(const bool a) { _ODCH1 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH1_GetPullUp(void)    { return(_CNPUH1); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetPullUp(const bool a)  { _CNPUH1 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH1_GetPullDown(void)  { return(_CNPUH1); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetPullDown(const bool a) { _CNPUH1 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetAnalog(void)    { _ANSELH1 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH1)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetDigital(void)   { _ANSELH1 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH1_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH1

// Function declarations of port pin RH2
#if defined (_TRISH2)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH2_Get(void)          { return((bool)_RH2); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_Set(void)          { asm volatile ("bset _LATH, #2 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_Clear(void)        { asm volatile ("bclr _LATH, #2 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_Toggle(void)       { asm volatile ("btg _LATH, #2 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetInput(void)     { asm volatile ("bset _TRISH, #2 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetOutput(void)    { asm volatile ("bclr _TRISH, #2 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetState(const bool s)   { _LATH2 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_Init(const bool d, const bool s) { _LATH2 = s; _TRISH2 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_Dispose(void)      { _TRISH2 = 1; _LATH2 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH2_GetOpenDrain(void) { return(_ODCH2); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetOpenDrain(const bool a) { _ODCH2 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH2_GetPullUp(void)    { return(_CNPUH2); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetPullUp(const bool a)  { _CNPUH2 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH2_GetPullDown(void)  { return(_CNPUH2); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetPullDown(const bool a) { _CNPUH2 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetAnalog(void)    { _ANSELH2 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH2)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetDigital(void)   { _ANSELH2 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH2_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH2

// Function declarations of port pin RH3
#if defined (_TRISH3)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH3_Get(void)          { return((bool)_RH3); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_Set(void)          { asm volatile ("bset _LATH, #3 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_Clear(void)        { asm volatile ("bclr _LATH, #3 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_Toggle(void)       { asm volatile ("btg _LATH, #3 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetInput(void)     { asm volatile ("bset _TRISH, #3 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetOutput(void)    { asm volatile ("bclr _TRISH, #3 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetState(const bool s)   { _LATH3 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_Init(const bool d, const bool s) { _LATH3 = s; _TRISH3 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_Dispose(void)      { _TRISH3 = 1; _LATH3 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH3_GetOpenDrain(void) { return(_ODCH3); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetOpenDrain(const bool a) { _ODCH3 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH3_GetPullUp(void)    { return(_CNPUH3); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetPullUp(const bool a)  { _CNPUH3 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH3_GetPullDown(void)  { return(_CNPUH3); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetPullDown(const bool a) { _CNPUH3 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetAnalog(void)    { _ANSELH3 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH3)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetDigital(void)   { _ANSELH3 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH3_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH3

// Function declarations of port pin RH4
#if defined (_TRISH4)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH4_Get(void)          { return((bool)_RH4); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_Set(void)          { asm volatile ("bset _LATH, #4 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_Clear(void)        { asm volatile ("bclr _LATH, #4 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_Toggle(void)       { asm volatile ("btg _LATH, #4 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetInput(void)     { asm volatile ("bset _TRISH, #4 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetOutput(void)    { asm volatile ("bclr _TRISH, #4 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetState(const bool s)   { _LATH4 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_Init(const bool d, const bool s) { _LATH4 = s; _TRISH4 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_Dispose(void)      { _TRISH4 = 1; _LATH4 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH4_GetOpenDrain(void) { return(_ODCH4); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetOpenDrain(const bool a) { _ODCH4 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH4_GetPullUp(void)    { return(_CNPUH4); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetPullUp(const bool a)  { _CNPUH4 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH4_GetPullDown(void)  { return(_CNPUH4); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetPullDown(const bool a) { _CNPUH4 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetAnalog(void)    { _ANSELH4 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH4)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetDigital(void)   { _ANSELH4 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH4_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH4

// Function declarations of port pin RH5
#if defined (_TRISH5)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH5_Get(void)          { return((bool)_RH5); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_Set(void)          { asm volatile ("bset _LATH, #5 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_Clear(void)        { asm volatile ("bclr _LATH, #5 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_Toggle(void)       { asm volatile ("btg _LATH, #5 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetInput(void)     { asm volatile ("bset _TRISH, #5 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetOutput(void)    { asm volatile ("bclr _TRISH, #5 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetState(const bool s)   { _LATH5 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_Init(const bool d, const bool s) { _LATH5 = s; _TRISH5 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_Dispose(void)      { _TRISH5 = 1; _LATH5 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH5_GetOpenDrain(void) { return(_ODCH5); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetOpenDrain(const bool a) { _ODCH5 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH5_GetPullUp(void)    { return(_CNPUH5); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetPullUp(const bool a)  { _CNPUH5 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH5_GetPullDown(void)  { return(_CNPUH5); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetPullDown(const bool a) { _CNPUH5 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetAnalog(void)    { _ANSELH5 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH5)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetDigital(void)   { _ANSELH5 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH5_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH5

// Function declarations of port pin RH6
#if defined (_TRISH6)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH6_Get(void)          { return((bool)_RH6); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_Set(void)          { asm volatile ("bset _LATH, #6 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_Clear(void)        { asm volatile ("bclr _LATH, #6 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_Toggle(void)       { asm volatile ("btg _LATH, #6 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetInput(void)     { asm volatile ("bset _TRISH, #6 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetOutput(void)    { asm volatile ("bclr _TRISH, #6 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetState(const bool s)   { _LATH6 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_Init(const bool d, const bool s) { _LATH6 = s; _TRISH6 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_Dispose(void)      { _TRISH6 = 1; _LATH6 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH6_GetOpenDrain(void) { return(_ODCH6); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetOpenDrain(const bool a) { _ODCH6 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH6_GetPullUp(void)    { return(_CNPUH6); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetPullUp(const bool a)  { _CNPUH6 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH6_GetPullDown(void)  { return(_CNPUH6); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetPullDown(const bool a) { _CNPUH6 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetAnalog(void)    { _ANSELH6 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH6)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetDigital(void)   { _ANSELH6 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH6_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH6

// Function declarations of port pin RH7
#if defined (_TRISH7)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH7_Get(void)          { return((bool)_RH7); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_Set(void)          { asm volatile ("bset _LATH, #7 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_Clear(void)        { asm volatile ("bclr _LATH, #7 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_Toggle(void)       { asm volatile ("btg _LATH, #7 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetInput(void)     { asm volatile ("bset _TRISH, #7 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetOutput(void)    { asm volatile ("bclr _TRISH, #7 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetState(const bool s)   { _LATH7 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_Init(const bool d, const bool s) { _LATH7 = s; _TRISH7 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_Dispose(void)      { _TRISH7 = 1; _LATH7 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH7_GetOpenDrain(void) { return(_ODCH7); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetOpenDrain(const bool a) { _ODCH7 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH7_GetPullUp(void)    { return(_CNPUH7); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetPullUp(const bool a)  { _CNPUH7 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH7_GetPullDown(void)  { return(_CNPUH7); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetPullDown(const bool a) { _CNPUH7 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetAnalog(void)    { _ANSELH7 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH7)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetDigital(void)   { _ANSELH7 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH7_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH7

// Function declarations of port pin RH8
#if defined (_TRISH8)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH8_Get(void)          { return((bool)_RH8); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_Set(void)          { asm volatile ("bset _LATH, #8 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_Clear(void)        { asm volatile ("bclr _LATH, #8 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_Toggle(void)       { asm volatile ("btg _LATH, #8 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetInput(void)     { asm volatile ("bset _TRISH, #8 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetOutput(void)    { asm volatile ("bclr _TRISH, #8 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetState(const bool s)   { _LATH8 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_Init(const bool d, const bool s) { _LATH8 = s; _TRISH8 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_Dispose(void)      { _TRISH8 = 1; _LATH8 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH8_GetOpenDrain(void) { return(_ODCH8); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetOpenDrain(const bool a) { _ODCH8 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH8_GetPullUp(void)    { return(_CNPUH8); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetPullUp(const bool a)  { _CNPUH8 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH8_GetPullDown(void)  { return(_CNPUH8); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetPullDown(const bool a) { _CNPUH8 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetAnalog(void)    { _ANSELH8 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH8)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetDigital(void)   { _ANSELH8 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH8_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH8

// Function declarations of port pin RH9
#if defined (_TRISH9)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH9_Get(void)          { return((bool)_RH9); }     ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_Set(void)          { asm volatile ("bset _LATH, #9 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_Clear(void)        { asm volatile ("bclr _LATH, #9 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_Toggle(void)       { asm volatile ("btg _LATH, #9 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetInput(void)     { asm volatile ("bset _TRISH, #9 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetOutput(void)    { asm volatile ("bclr _TRISH, #9 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetState(const bool s)   { _LATH9 = s; }             ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_Init(const bool d, const bool s) { _LATH9 = s; _TRISH9 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_Dispose(void)      { _TRISH9 = 1; _LATH9 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH9_GetOpenDrain(void) { return(_ODCH9); }         ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetOpenDrain(const bool a) { _ODCH9 = a; }           ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH9_GetPullUp(void)    { return(_CNPUH9); }        ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetPullUp(const bool a)  { _CNPUH9 = a; }            ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH9_GetPullDown(void)  { return(_CNPUH9); }        ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetPullDown(const bool a) { _CNPUH9 = a; }           ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetAnalog(void)    { _ANSELH9 = 1; }           ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH9)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetDigital(void)   { _ANSELH9 = 0; }           ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH9_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH9

// Function declarations of port pin RH10
#if defined (_TRISH10)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH10_Get(void)         { return((bool)_RH10); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_Set(void)         { asm volatile ("bset _LATH, #10 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_Clear(void)       { asm volatile ("bclr _LATH, #10 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_Toggle(void)      { asm volatile ("btg _LATH, #10 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetInput(void)    { asm volatile ("bset _TRISH, #10 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetOutput(void)   { asm volatile ("bclr _TRISH, #10 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetState(const bool s)  { _LATH10 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_Init(const bool d, const bool s) { _LATH10 = s; _TRISH10 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_Dispose(void)     { _TRISH10 = 1; _LATH10 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH10_GetOpenDrain(void) { return(_ODCH10); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetOpenDrain(const bool a) { _ODCH10 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH10_GetPullUp(void)   { return(_CNPUH10); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetPullUp(const bool a) { _CNPUH10 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH10_GetPullDown(void) { return(_CNPUH10); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetPullDown(const bool a) { _CNPUH10 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetAnalog(void)   { _ANSELH10 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH10)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetDigital(void)  { _ANSELH10 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH10_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH10

// Function declarations of port pin RH11
#if defined (_TRISH11)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH11_Get(void)         { return((bool)_RH11); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_Set(void)         { asm volatile ("bset _LATH, #11 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_Clear(void)       { asm volatile ("bclr _LATH, #11 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_Toggle(void)      { asm volatile ("btg _LATH, #11 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetInput(void)    { asm volatile ("bset _TRISH, #11 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetOutput(void)   { asm volatile ("bclr _TRISH, #11 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetState(const bool s)  { _LATH11 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_Init(const bool d, const bool s) { _LATH11 = s; _TRISH11 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_Dispose(void)     { _TRISH11 = 1; _LATH11 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH11_GetOpenDrain(void) { return(_ODCH11); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetOpenDrain(const bool a) { _ODCH11 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH11_GetPullUp(void)   { return(_CNPUH11); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetPullUp(const bool a) { _CNPUH11 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH11_GetPullDown(void) { return(_CNPUH11); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetPullDown(const bool a) { _CNPUH11 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetAnalog(void)   { _ANSELH11 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH11)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetDigital(void)  { _ANSELH11 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH11_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH11

// Function declarations of port pin RH12
#if defined (_TRISH12)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH12_Get(void)         { return((bool)_RH12); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_Set(void)         { asm volatile ("bset _LATH, #12 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_Clear(void)       { asm volatile ("bclr _LATH, #12 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_Toggle(void)      { asm volatile ("btg _LATH, #12 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetInput(void)    { asm volatile ("bset _TRISH, #12 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetOutput(void)   { asm volatile ("bclr _TRISH, #12 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetState(const bool s)  { _LATH12 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_Init(const bool d, const bool s) { _LATH12 = s; _TRISH12 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_Dispose(void)     { _TRISH12 = 1; _LATH12 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH12_GetOpenDrain(void) { return(_ODCH12); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetOpenDrain(const bool a) { _ODCH12 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH12_GetPullUp(void)   { return(_CNPUH12); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetPullUp(const bool a) { _CNPUH12 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH12_GetPullDown(void) { return(_CNPUH12); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetPullDown(const bool a) { _CNPUH12 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetAnalog(void)   { _ANSELH12 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH12)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetDigital(void)  { _ANSELH12 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH12_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH12

// Function declarations of port pin RH13
#if defined (_TRISH13)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH13_Get(void)         { return((bool)_RH13); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_Set(void)         { asm volatile ("bset _LATH, #13 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_Clear(void)       { asm volatile ("bclr _LATH, #13 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_Toggle(void)      { asm volatile ("btg _LATH, #13 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetInput(void)    { asm volatile ("bset _TRISH, #13 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetOutput(void)   { asm volatile ("bclr _TRISH, #13 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetState(const bool s)  { _LATH13 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_Init(const bool d, const bool s) { _LATH13 = s; _TRISH13 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_Dispose(void)     { _TRISH13 = 1; _LATH13 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH13_GetOpenDrain(void) { return(_ODCH13); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetOpenDrain(const bool a) { _ODCH13 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH13_GetPullUp(void)   { return(_CNPUH13); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetPullUp(const bool a) { _CNPUH13 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH13_GetPullDown(void) { return(_CNPUH13); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetPullDown(const bool a) { _CNPUH13 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetAnalog(void)   { _ANSELH13 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH13)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetDigital(void)  { _ANSELH13 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH13_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH13

// Function declarations of port pin RH14
#if defined (_TRISH14)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH14_Get(void)         { return((bool)_RH14); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_Set(void)         { asm volatile ("bset _LATH, #14 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_Clear(void)       { asm volatile ("bclr _LATH, #14 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_Toggle(void)      { asm volatile ("btg _LATH, #14 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetInput(void)    { asm volatile ("bset _TRISH, #14 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetOutput(void)   { asm volatile ("bclr _TRISH, #14 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetState(const bool s)  { _LATH14 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_Init(const bool d, const bool s) { _LATH14 = s; _TRISH14 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_Dispose(void)     { _TRISH14 = 1; _LATH14 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH14_GetOpenDrain(void) { return(_ODCH14); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetOpenDrain(const bool a) { _ODCH14 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH14_GetPullUp(void)   { return(_CNPUH14); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetPullUp(const bool a) { _CNPUH14 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH14_GetPullDown(void) { return(_CNPUH14); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetPullDown(const bool a) { _CNPUH14 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetAnalog(void)   { _ANSELH14 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH14)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetDigital(void)  { _ANSELH14 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH14_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH14

// Function declarations of port pin RH15
#if defined (_TRISH15)

static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH15_Get(void)         { return((bool)_RH15); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_Set(void)         { asm volatile ("bset _LATH, #15 \n"); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_Clear(void)       { asm volatile ("bclr _LATH, #15 \n"); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_Toggle(void)      { asm volatile ("btg _LATH, #15 \n"); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetInput(void)    { asm volatile ("bset _TRISH, #15 \n"); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetOutput(void)   { asm volatile ("bclr _TRISH, #15 \n"); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetState(const bool s)  { _LATH15 = s; }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_Init(const bool d, const bool s) { _LATH15 = s; _TRISH15 = d; } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_Dispose(void)     { _TRISH15 = 1; _LATH15 = 1; } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH15_GetOpenDrain(void) { return(_ODCH15); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetOpenDrain(const bool a) { _ODCH15 = a; }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH15_GetPullUp(void)   { return(_CNPUH15); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetPullUp(const bool a) { _CNPUH15 = a; }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RH15_GetPullDown(void) { return(_CNPUH15); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetPullDown(const bool a) { _CNPUH15 = a; }         ///< Sets the connection state of the pin's pull down resistor
#if defined (_ANSELH15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetAnalog(void)   { _ANSELH15 = 1; }          ///< Enable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetAnalog(void)   { Nop(); }                  ///< Function not available at this pin
#endif
#if defined (_ANSELH15)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetDigital(void)  { _ANSELH15 = 0; }          ///< Disable analog functions of this pin
#else
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RH15_SetDigital(void)  { Nop(); }                  ///< Function not available at this pin
#endif

#endif // declarations of pin RH15

// Virtual device pin functions of pins, which have not been routed to package pins
#if defined (P33C_VP_COUNT)

// Declaration of an internal (virtual) pin, which is not available as common device pin
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RVX_Get(void)          { return(0); }    ///< Gets the most recent pin state (either logic HIGH = 1 or LOW = 0)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_Set(void)          { Nop(); } ///< Sets the most recent pin state to logic HIGH
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_Clear(void)        { Nop(); } ///< Sets the most recent pin state to logic LOW
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_Toggle(void)       { Nop(); } ///< Toggles the most recent pin state
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetInput(void)     { Nop(); } ///< Sets the pin direction to high impedance input (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetOutput(void)    { Nop(); } ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetState(const bool s)  { Nop(); }            ///< Sets the pin direction to low impedance output (no state change)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_Init(const bool d, const bool s) { Nop(); } ///< Initializes the pin setting direction (TRIS = d) and initial state (LAT = s)
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_Dispose(void)      { Nop(); } ///< Sets the pin to high impedance input (RESET default)
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RVX_GetOpenDrain(void) { return(0); }       ///< Gets the pin open drain mode
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetOpenDrain(const bool a) { Nop(); }         ///< Sets the pin open drain mode
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RVX_GetPullUp(void)    { return(0); }       ///< Gets the connection state of the pin's pull up resistor 
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetPullUp(const bool a) { Nop(); }           ///< Sets the connection state of the pin's pull up resistor
static inline bool __attribute__ ((section (".intrinsics"))) __builtin_RVX_GetPullDown(void)  { return(0); }       ///< Gets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetPullDown(const bool a) { Nop(); }         ///< Sets the connection state of the pin's pull down resistor
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetAnalog(void)    { Nop(); }                  ///< Function not available at this pin
static inline void __attribute__ ((section (".intrinsics"))) __builtin_RVX_SetDigital(void)   { Nop(); }                  ///< Function not available at this pin

#endif // end of P33C_VP_COUNT

#endif  /* P33C_PIN_INTRINSICS_H */

// __________________________________
// end of file

