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
 * @file    p33c_fmgr-d.h
 * @see     p33c_fmgr.h
 * @brief   System Frequency Manager data type declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once. 
#ifndef P33C_SYSTEM_FREQUENCIES_DECLARATIONS_H
#define P33C_SYSTEM_FREQUENCIES_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file

#include "p33c_devices.h" // include dsPIC SMPS device identifier header file

// Enumeration of oscillator property value
enum OSCCON_xOSC_TYPE_e {
    OSCCON_xOSC_FRC = 0b000, // Fast RC Oscillator, no PLL 
    OSCCON_xOSC_FRCPLL = 0b001, // Fast RC Oscillator with PLL
    OSCCON_xOSC_PRI = 0b010, // Primary Oscillator (EC, XT, HS), no PLL
    OSCCON_xOSC_PRIPLL = 0b011, // Primary Oscillator (EC, XT, HS) with PLL
    OSCCON_xOSC_LPRC = 0b101, // Low Power Oscillator for Idle/Sleep Mode
    OSCCON_xOSC_BFRC = 0b110, // Backup Fast RC Oscillator
    OSCCON_xOSC_FRCDIVN = 0b111 // Fast RC Oscillator with variable Divider
}; // Oscillator Type Selection bits
typedef enum OSCCON_xOSC_TYPE_e OSCCON_xOSC_TYPE_t; // Oscillator Type Selection bits data type

/***********************************************************************************
 * @ingroup p33c-pral-fmgr-properties
 * @struct  P33C_SYSTEM_FREQUENCIES_s
 * @brief   Data structure providing target device clock domain frequencies
 * @details
 *  
 **********************************************************************************/

struct P33C_SYSTEM_FREQUENCIES_s {

    volatile uint32_t AFpllo;   ///< APLL output frequency
    volatile uint32_t AFvco;    ///< APLL VCO frequency output incl. AVCO divider
    volatile uint32_t Frc;      ///< Internal fast RC oscillator frequency incl. tuning
    volatile uint32_t Fpri;     ///< External primary oscillator frequency 
    volatile uint32_t Fclk;     ///< Clock frequency (currently active external or internal oscillator block input frequency)
    volatile uint32_t Fosc;     ///< CPU Oscillator frequency (e.g. 200 MHz at 100 MIPS)
    volatile uint32_t Fcy;      ///< CPU tick frequency (instruction cycle frequency = MIPS incl. DOZE divider)
    volatile uint32_t Fp;       ///< Peripheral bus clock frequency
    volatile uint32_t Fpllo;    ///< PLL output frequency
    volatile uint32_t Fvco;     ///< PLL VCO frequency output incl. VCO divider
    volatile float Tp;          ///< Peripheral bus clock period 
    volatile float Tcy;         ///< CPU instruction clock period 
    volatile uint32_t Ft1ck;    ///< Timer1 external clock frequency

}; ///< Data set of global system clock domain frequencies and periods

typedef struct P33C_SYSTEM_FREQUENCIES_s P33C_SYSTEM_FREQUENCIES_t; ///< Data set of global system clock domain frequencies and periods data type

#endif  /* End of P33C_SYSTEM_FREQUENCIES_DECLARATIONS_H */

// __________________________
// end of file
