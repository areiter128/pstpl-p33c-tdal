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
 * @file    p33c_pga-d.h
 * @see     p33c_pga.h
 * @brief   Programmable Gain Amplifier Driver Instance peripheral register abstraction data type declarations
 * @author  M91406
 * @details 
 *   This additional header file contains defines for all required bit-settings of 
 *   all related special function registers of a peripheral instance and/or instance. 
 *   This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PGA_SFR_DECLARATIONS_H
#define P33C_PGA_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // include dsPIC SMPS device identifier header file

#if defined (__P33SMPS_CHS__) // Hide file contents for single core and dual core main core devices

// GENERIC PROGRAMABLE GAIN AMP MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_PGA_INSTANCE_s

    /***********************************************************************************
     * @addtogroup  p33c-pral-pga-inheritance
     * @extends     P33C_PGA_INSTANCE_s 
     * @{
     */
    /** 
     * @brief   Programmable Gain Amplifier Control Register inherited from device header file
     */
    union PGAxCON_u {
        volatile struct tagPGA1CONBITS bits;    ///< Register bit-field
        volatile uint16_t value;                ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (PGAxCON) PGA CONTROL REGISTER

    /** 
     * @brief   Programmable Gain Amplifier Calibration Register inherited from device header file
     */
    union PGAxCAL_u {
        volatile struct tagPGA1CALBITS bits;    ///< Register bit-field
        volatile uint16_t value;                ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (PGAxCAL) PGA CALIBRATION REGISTER

    /** @} */ // end of inheritance declarations **************************************

    typedef union PGAxCON_u PGAxCON_t; ///< (PGAxCON) PGA CONTROL REGISTER data type
    typedef union PGAxCAL_u PGAxCAL_t; ///< (PGAxCAL) PGA CALIBRATION REGISTER data type

    /***********************************************************************************
     * @struct  P33C_PGA_INSTANCE_s
     * @ingroup p33c-pral-pga-properties
     * @brief   Abstracted set of Special Function Registers of the Programmable Gain Amplifier instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the PGA instance. Users can use this abstracted data set of register
     *  values to capture most recent settings from or write new settings to the
     *  configuration registers of the instance.
     **********************************************************************************/
    struct P33C_PGA_INSTANCE_s {
        PGAxCON_t PGAxCON;    ///< (PGAxCON) PGA CONTROL REGISTER
        PGAxCAL_t PGAxCAL;    ///< (PGAxCAL) PGA CALIBRATION REGISTER
    };
	typedef struct P33C_PGA_INSTANCE_s P33C_PGA_INSTANCE_t; ///< PROGRAMMABLE GAIN AMPLIFIER MODULE REGISTER SET

    /*********************************************************************************
     * @ingroup p33c-pral-pga-methods
     * @brief   Gets Pointer to Programmable Gain Amplifier Instance SFR set
     * @param   pgaInstance  Programmable Gain Amplifier Instance Index of type unsigned integer
     * @return  P33C_PGA_INSTANCE_t*: Pointer to a PGA instance special function register set data object 
     *  
     * @details
     * This macro returns the pointer to an programmable gain amplifier instance register set
     * (start address of Special Function Register memory space). This pointer can be 
     * used to directly write to/read from the Special Function Registers of the 
     * programmable gain amplifier peripheral instance configuration.
     *********************************************************************************/
    #define p33c_PgaInstance_GetHandle(pgaInstance) (P33C_PGA_INSTANCE_t*)&PGA1CON ///< Captures memory address of PGA instance register set
    

#endif /* end of P33C_PGA_INSTANCE_s */
#endif /* end of #if defined (__P33SMPS_CHS__) */
#endif /* End of P33C_PGA_SFR_DECLARATIONS_H */

// ______________________________
// end of file
