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
 * @file    p33c_opa-d.h
 * @see     p33c_opa.h
 * @brief   Operational Amplifier Driver Module peripheral register abstraction data type declarations
 * @author  M91406
 * @details 
 *   This additional header file contains defines for all required bit-settings of 
 *   all related special function registers of a peripheral module and/or instance. 
 *   This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_OPA_SFR_DECLARATIONS_H
#define P33C_OPA_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // include dsPIC SMPS device identifier header file

#if defined (__P33SMPS_CK__) // Hide file contents for secondary core devices

// GENERIC PDM OP-AMP MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_OPA_MODULE_s

    /***********************************************************************************
     * @addtogroup  p33c-pral-opa-module-inheritance
     * @extends     P33C_OPA_MODULE_s 
     * @{
     */
    /** 
     * @brief   Operational Amplifier Control Register (Low) inherited from device header file
     */
    union AMPCON1L_u {
        volatile struct tagAMPCON1LBITS bits;   ///< Register bit-field
        volatile uint16_t value;                ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (AMPCON1L) OP-AMP CONTROL 1 REGISTER LOW

    /** 
     * @brief   Operational Amplifier Control Register (High) inherited from device header file
     */
    union AMPCON1H_u {
        volatile struct tagAMPCON1HBITS bits;   ///< Register bit-field
        volatile uint16_t value;                ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (AMPCON1H) OP-AMP CONTROL 2 REGISTER LOW

    /** @} */ // end of inheritance declarations **************************************

    typedef union AMPCON1L_u AMPCON1L_t; ///< (AMPCON1L) OP-AMP CONTROL 1 REGISTER LOW data type
    typedef union AMPCON1H_u AMPCON1H_t; ///< (AMPCON1H) OP-AMP CONTROL 2 REGISTER HIGH data type

    /***********************************************************************************
     * @struct  P33C_OPA_MODULE_s
     * @ingroup p33c-pral-opa-module-properties
     * @brief   Abstracted set of Special Function Registers of the Op-Amp module
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the op-amp module. Users can use this abstracted data set of register
     *  values to capture most recent settings from or write new settings to the
     *  configuration registers of the module.
     **********************************************************************************/
    struct P33C_OPA_MODULE_s {
        AMPCON1L_t AMPCON1L;    ///< (AMPCON1L) OP-AMP CONTROL 1 REGISTER LOW
        AMPCON1H_t AMPCON1H;    ///< (AMPCON1H) OP-AMP CONTROL 2 REGISTER HIGH
    };
	typedef struct P33C_OPA_MODULE_s P33C_OPA_MODULE_t; ///< OP-AMP MODULE REGISTER SET

    /*********************************************************************************
     * @ingroup p33c-pral-opa-module-methods
     * @brief   Gets Pointer to Operational Amplifier Module SFR set
     * @return  P33C_OPA_MODULE_t*: Pointer to op-amp module special function register set data object 
     *  
     * @details
     * This macro returns the pointer to an operational amplifier module register set
     * (start address of Special Function Register memory space). This pointer can be 
     * used to directly write to/read from the Special Function Registers of the 
     * operational amplifier peripheral module configuration.
     *********************************************************************************/
    #define p33c_OpaModule_GetHandle() (P33C_OPA_MODULE_t*)&AMPCON1L ///< Captures memory address of OPA module register set
    
    /*********************************************************************************
     * @struct  P33C_OPA_INSTANCE_s
     * @ingroup p33c-pral-opa-instance-properties
     * @brief   Virtual Operational Amplifier Instance Settings Data Object
     *  
     * @details
     * The operational amplifier module of dsPIC33C incorporates op-amp instance
     * control bits into the module base registers. This often creates conflicts 
     * with device drivers trying to interface specific op-amp instances through 
     * an abstracted interface.
     * Hence, a virtual op-amp instance has been created, which can be used to 
     * map predefined, generic settings to specific instances.
     * 
     * @note
     *  The Operational Amplifier peripheral module incorporates the individual 
     * op-amp configuration bits into its base registers. The OpeInstance-related
     * API functions provided by this interface module emulate op-amp instancing 
     * to simplify instance management in user-code. Op-amp instance configurations
     * cannot be directly written to the respective registers and must be applied
     * by using the respective Instance_GetConfig and Instance_SetConfig function
     * calls.
     *********************************************************************************/
    struct P33C_OPA_INSTANCE_s {
        uint16_t AMPEN;     ///< Op Amp Enable bit
        uint16_t NCHDIS;    ///< Op Amp N Channel Disable bit
    } __attribute__((aligned));
	typedef struct P33C_OPA_INSTANCE_s P33C_OPA_INSTANCE_t; ///< OP-AMP INSTANCE REGISTER SET
    
#endif /* End of P33C_OPA_MODULE_s */
#endif /* End of __P33SMPS_CK__ */
#endif /* End of P33C_OPA_SFR_DECLARATIONS_H */

// ______________________________
// end of file
