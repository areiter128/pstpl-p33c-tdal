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
 * @file    p33c_pwm-d.h
 * @see     p33c_pwm.h, p33c_pwm-f.h
 * @author  M91406
 * @brief   High-Resolution SMPS PWM Module & Generator Instances register abstraction data type declarations
 * @details
 *  This additional header file contains defines for all required bit-settings of all
 *  related special function registers of a peripheral module and/or instance.
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef P33C_PWM_SFR_DECLARATIONS_H
#define	P33C_PWM_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // include extended device identifier macro header file
#include "p33c_pwm-f.h"   // include additional register flag header file

#ifndef __dsPIC33C__
   #error "peripheral driver p33c_pwm.h does not support the selected device"
#endif

// Private arrays of register set start addresses
#if defined (__P33SMPS_OCTANSP__)
static volatile uint16_t* p33c_PwmInstance_Handles[8] = {
    &PG1CONL, &PG2CONL, &PG3CONL, &PG4CONL,
    NULL, &PG6CONL, NULL, &PG8CONL
};
#elif defined (APG4CONL)
static volatile uint16_t* p33c_PwmInstance_Handles[12] = {
    &PG1CONL, &PG2CONL, &PG3CONL, &PG4CONL,
    &PG5CONL, &PG6CONL, &PG7CONL, &PG8CONL,
    &APG1CONL, &APG2CONL, &APG3CONL, &APG4CONL
};
#elif defined (PG8CONL)
static volatile uint16_t* p33c_PwmInstance_Handles[8] = {
    &PG1CONL, &PG2CONL, &PG3CONL, &PG4CONL,
    &PG5CONL, &PG6CONL, &PG7CONL, &PG8CONL
};
#elif defined (PG4CONL)
static volatile uint16_t* p33c_PwmInstance_Handles[4]={
    &PG1CONL, &PG2CONL, &PG3CONL, &PG4CONL
};
#else
#pragma message "selected device has no supported PWM generators"
#endif

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
 * Therefore this PWM configuration example uses a 'virtual PWM generator' to set up
 * the required PWM configuration but provides a function allowing users to write this
 * configuration to any PWM generator of choice. Hence, pre-defined configurations
 * can be mapped on specific peripheral instance by using their index defined by the
 * data sheet (e.g. pgInstance = 1 maps pre-defined configuration to PG1)
 *
 * The data types used for each SFR in the P33C_PWM_GENERATOR_t data structure below,
 * are data types declared in the common C-header file of the device (e.g. <d33CK256MP506.h>).
 * These header files are provided with the XC16 C-Compiler installation and don't have to be
 * written nor changed manually.
 *
 */

// ==========================================================
// GENERIC PWM MODULE SPECIAL FUNCTION REGISTER SET
// ==========================================================

#ifndef P33C_PWM_MODULE_s

    /***********************************************************************************
     * @addtogroup p33c-pral-pwm-module-inheritance
     * @extends P33C_PWM_MODULE_s
     * @{
     */

    /**
     * @brief   PWM Clock Control Register inherited from device header file
     */
    union PCLKCON_u {
        struct tagPCLKCONBITS bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< PCLKCON: PWM CLOCK CONTROL REGISTER

    /**
     * @brief   PWM Frequency Scaling Register inherited from device header file
     */
    union FSCL_u {
        struct { uint16_t FSCL : 16; } bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< FSCL: FREQUENCY SCALE REGISTER

    /**
     * @brief   PWM Frequency Scaling Minimum Period Register inherited from device header file
     */
    union FSMINPER_u {
        struct { uint16_t FSMINPER : 16; } bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< FSMINPER: FREQUENCY SCALING MINIMUM PERIOD REGISTER

    /**
     * @brief   PWM Master Phase Register inherited from device header file
     */
    union MPHASE_u {
        struct { uint16_t MPHASE : 16; } bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< MPHASE: MASTER PHASE REGISTER

    /**
     * @brief   PWM Master Duty Cycle Register inherited from device header file
     */
    union MDC_u {
        struct { uint16_t MDC : 16; } bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< MDC: MASTER DUTY CYCLE REGISTER

    /**
     * @brief   PWM Master Period Register inherited from device header file
     */
    union MPER_u {
        struct { uint16_t MPER : 16; } bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< MPER: MASTER PERIOD REGISTER

    /**
     * @brief   PWM Linear Feedback Shift Register inherited from device header file
     */
    union LFSR_u {
        struct tagLFSRBITS bits; ///< Register bit-field
        uint16_t value;          ///< 16-bit wide register value
    } __attribute__((packed));   ///< LFSR: LINEAR FEEDBACK SHIFT REGISTER

    /**
     * @brief   PWM Combinatorial Trigger Register (Low) inherited from device header file
     */
    union CMBTRIGL_u {
        struct tagCMBTRIGLBITS bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< CMBTRIGL: COMBINATIONAL TRIGGER REGISTER LOW

    /**
     * @brief   PWM Combinatorial Trigger Register (High) inherited from device header file
     */
    union CMBTRIGH_u {
        struct tagCMBTRIGHBITS bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< CMBTRIGH: COMBINATIONAL TRIGGER REGISTER HIGH

    /**
     * @brief   PWM Combinatorial Logic Control Register inherited from device header file
     */
    union LOGCONy_u {
        struct tagLOGCONABITS bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y

    /**
     * @brief   PWM Event Output Control Register inherited from device header file
     */
    union PWMEVTy_u {
        struct tagPWMEVTABITS bits; ///< Register bit-field
        uint16_t value;         ///< 16-bit wide register value
    } __attribute__((packed));  ///< PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y

    /** @} */ // end of inheritance declarations **************************************

    typedef union PCLKCON_u PCLKCON_t;      ///< PCLKCON: PWM CLOCK CONTROL REGISTER data type
    typedef union FSCL_u FSCL_t;            ///< FSCL: FREQUENCY SCALE REGISTER data type
    typedef union FSMINPER_u FSMINPER_t;    ///< FSMINPER: FREQUENCY SCALING MINIMUM PERIOD REGISTER data type
    typedef union MPHASE_u MPHASE_t;        ///< MPHASE: MASTER PHASE REGISTER data type
    typedef union MDC_u MDC_t;              ///< MDC: MASTER DUTY CYCLE REGISTER data type
    typedef union MPER_u MPER_t;            ///< MPER: MASTER PERIOD REGISTER data type
    typedef union LFSR_u LFSR_t;            ///< LFSR: LINEAR FEEDBACK SHIFT REGISTER data type
    typedef union CMBTRIGL_u CMBTRIGL_t;    ///< CMBTRIGL: COMBINATIONAL TRIGGER REGISTER LOW data type
    typedef union CMBTRIGH_u CMBTRIGH_t;    ///< CMBTRIGH: COMBINATIONAL TRIGGER REGISTER HIGH data type
    typedef union LOGCONy_u LOGCONy_t;      ///< LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y data type
    typedef union PWMEVTy_u PWMEVTy_t;      ///< PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y

    /***********************************************************************************
     * @ingroup p33c-pral-pwm-module-properties
     * @struct  P33C_PWM_MODULE_s
     * @typedef P33C_PWM_MODULE_t
     * @brief   Abstracted set of Special Function Registers of the PWM peripheral module base registers
     * @details
     *  This structure defines an abstracted set of Special Function Registers of
     *  PWM peripheral module base registers. Users can use this abstracted set of
     *  registers to capture register settings from or write generic register
     *  settings to these peripheral base registers.
     *
     **********************************************************************************/

    struct P33C_PWM_MODULE_s {

        PCLKCON_t   PCLKCON;    ///< PCLKCON:     PWM CLOCK CONTROL REGISTER
        FSCL_t      FSCL;       ///< FSCL:        FREQUENCY SCALE REGISTER
        FSMINPER_t  FSMINPER;   ///< FSMINPER:    FREQUENCY SCALING MINIMUM PERIOD REGISTER
        MPHASE_t    MPHASE;     ///< MPHASE:      MASTER PHASE REGISTER
        MDC_t       MDC;        ///< MDC:         MASTER DUTY CYCLE REGISTER
        MPER_t      MPER;       ///< MPER:        MASTER PERIOD REGISTER
        LFSR_t      LFSR;       ///< LFSR:        LINEAR FEEDBACK SHIFT REGISTER
        CMBTRIGL_t  CMBTRIGL;   ///< CMBTRIGL:    COMBINATIONAL TRIGGER REGISTER LOW
        CMBTRIGH_t  CMBTRIGH;   ///< CMBTRIGL:    COMBINATIONAL TRIGGER REGISTER HIGH
        LOGCONy_t   LOGCON_A;   ///< LOGCONA:     COMBINATORIAL PWM LOGIC CONTROL REGISTER A
        LOGCONy_t   LOGCON_B;   ///< LOGCONB:     COMBINATORIAL PWM LOGIC CONTROL REGISTER B
        LOGCONy_t   LOGCON_C;   ///< LOGCONC:     COMBINATORIAL PWM LOGIC CONTROL REGISTER C
        LOGCONy_t   LOGCON_D;   ///< LOGCOND:     COMBINATORIAL PWM LOGIC CONTROL REGISTER D
        LOGCONy_t   LOGCON_E;   ///< LOGCONE:     COMBINATORIAL PWM LOGIC CONTROL REGISTER E
        LOGCONy_t   LOGCON_F;   ///< LOGCONF:     COMBINATORIAL PWM LOGIC CONTROL REGISTER F
        PWMEVTy_t   PWMEVT_A;   ///< PWMEVTA:     PWM EVENT OUTPUT CONTROL REGISTER A
        PWMEVTy_t   PWMEVT_B;   ///< PWMEVTB:     PWM EVENT OUTPUT CONTROL REGISTER B
        PWMEVTy_t   PWMEVT_C;   ///< PWMEVTC:     PWM EVENT OUTPUT CONTROL REGISTER C
        PWMEVTy_t   PWMEVT_D;   ///< PWMEVTD:     PWM EVENT OUTPUT CONTROL REGISTER D
        PWMEVTy_t   PWMEVT_E;   ///< PWMEVTE:     PWM EVENT OUTPUT CONTROL REGISTER E
        PWMEVTy_t   PWMEVT_F;   ///< PWMEVTF:     PWM EVENT OUTPUT CONTROL REGISTER F

    } __attribute__((aligned)); ///< PWM MODULE SPECIAL FUNCTION REGISTER SET

    typedef struct P33C_PWM_MODULE_s P33C_PWM_MODULE_t; ///< PWM MODULE SPECIAL FUNCTION REGISTER SET DATA TYPE

    /*********************************************************************************
     * @ingroup p33c-pral-pwm-module-methods
     * @brief   Gets pointer to PWM module SFR set
     * @return  P33C_PWM_MODULE_t*: Pointer to PWM module base register data object
     *
     * @details
     *  This macro returns a pointer to the PWM module base register set.
     *  This pointer can be used to directly read from/write to the PWM
     *  Module base registers.
     *
     *********************************************************************************/
    #define p33c_PwmModule_GetHandle() (P33C_PWM_MODULE_t*)&PCLKCON ///< Captures memory address of first PWM module register

    /*********************************************************************************
     * @ingroup p33c-pral-pwm-module-methods
     * @brief   Gets pointer to APWM module SFR set
     * @return  P33C_PWM_MODULE_t*: Pointer to PWM module base register data object
     *
     * @details
     *  This macro returns a pointer to the APWM module base register set.
     *  This pointer can be used to directly read from/write to the APWM
     *  Module base registers.
     *
     *********************************************************************************/
    #ifdef APCLKCON
    #define p33c_ApwmModule_GetHandle() (P33C_PWM_MODULE_t*)&APCLKCON ///< Captures memory address of first APWM module register
    #endif

#endif

// ==========================================================
// GENERIC PWM GENERATOR SPECIAL FUNCTION REGISTERS
// ==========================================================

#ifndef P33C_PWM_INSTANCE_s

    /***********************************************************************************
     * @addtogroup p33c-pral-pwm-instance-inheritance
     * @extends P33C_PWM_MODULE_s
     * @{
     */

    /**
     * @brief   PWM Generator x Control Register (Low) inherited from device header file
     */
    union PGxCONL_u {
        struct tagPG1CONLBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxCONH: PWM GENERATOR x CONTROL REGISTER LOW

    /**
     * @brief   PWM Generator x Control Register (High) inherited from device header file
     */
    union PGxCONH_u {
        struct tagPG1CONHBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxCONH: PWM GENERATOR x CONTROL REGISTER HIGH

    /**
     * @brief   PWM Generator x Status Register inherited from device header file
     */
    union PGxSTAT_u {
        struct tagPG1STATBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxSTAT: PWM GENERATOR x STATUS REGISTER

    /**
     * @brief   PWM Generator x Input/Output Control Register (Low) inherited from device header file
     */
    union PGxIOCONL_u {
        struct tagPG1IOCONLBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxIOCONL: PWM GENERATOR x I/O CONTROL REGISTER LOW

    /**
     * @brief   PWM Generator x Input/Output Control Register (High) inherited from device header file
     */
    union PGxIOCONH_u {
        struct tagPG1IOCONHBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxIOCONH: PWM GENERATOR x I/O CONTROL REGISTER HIGH

    /**
     * @brief   PWM Generator x Event Register (Low) inherited from device header file
     */
    union PGxEVTL_u {
        struct tagPG1EVTLBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxEVTL: PWM GENERATOR x EVENT REGISTER LOW

    /**
     * @brief   PWM Generator x Event Register (High) inherited from device header file
     */
    union PGxEVTH_u {
        struct tagPG1EVTHBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxEVTH: PWM GENERATOR x EVENT REGISTER HIGH

    /**
     * @brief   PWM Generator x PWM Control Input Register (Low) inherited from device header file
     */
    union PGxyPCIL_u {
        struct tagPG1FPCILBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxFPCIL: PWM GENERATOR x PCI REGISTER LOW

    /**
     * @brief   PWM Generator x PWM Control Input Register (High) inherited from device header file
     */
    union PGxyPCIH_u {
        struct tagPG1FPCIHBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxFPCIH: PWM GENERATOR x PCI REGISTER HIGH

    /**
     * @brief   PWM Generator x Leading Edge Blanking Register (Low) inherited from device header file
     */
    union PGxLEBL_u {
        struct {uint16_t LEBL : 16; } bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxLEBL: PWM GENERATOR x LEADING-EDGE BLANKING REGISTER LOW

    /**
     * @brief   PWM Generator x Leading Edge Blanking Register (High) inherited from device header file
     */
    union PGxLEBH_u {
        struct tagPG1LEBHBITS bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxLEBH: PWM GENERATOR x LEADING-EDGE BLANKING REGISTER HIGH

    /**
     * @brief   PWM Generator x Phase Register inherited from device header file
     */
    union PGxPHASE_u {
        struct { uint16_t PHASE : 16; } bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxPHASE: PWM GENERATOR x PHASE REGISTER

    /**
     * @brief   PWM Generator x Duty Cycle Register inherited from device header file
     */
    union PGxDC_u {
        struct { uint16_t DC : 16; } bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxDC: PWM GENERATOR x DUTY CYCLE REGISTER

    /**
     * @brief   PWM Generator x Duty Cycle Adjustment Register inherited from device header file
     */
    union PGxDCA_u {
        struct tagPG1DCABITS bits;  ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxDCA: PWM GENERATOR x DUTY CYCLE ADJUSTMENT REGISTER

    /**
     * @brief   PWM Generator x Period Register inherited from device header file
     */
    union PGxPER_u {
        struct { uint16_t PER : 16; } bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxPER: PWM GENERATOR x PERIOD REGISTER

    /**
     * @brief   PWM Generator x Trigger Register inherited from device header file
     */
    union PGxTRIGy_u {
        struct { uint16_t TRIG : 16; } bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxTRIGy: PWM GENERATOR x TRIGGER y REGISTER

    /**
     * @brief   PWM Generator x Dead Time Register (Low) inherited from device header file
     */
    union PGxDTL_u {
        struct tagPG1DTLBITS bits;  ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxDTL: PWM GENERATOR x DEAD-TIME REGISTER LOW

    /**
     * @brief   PWM Generator x Dead Time Register (High) inherited from device header file
     */
    union PGxDTH_u {
        struct tagPG1DTLBITS bits;  ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxDTL: PWM GENERATOR x DEAD-TIME REGISTER HIGH

    /**
     * @brief   PWM Generator x Capture Register inherited from device header file
     */
    union PGxCAP_u {
        struct { uint16_t CAP : 16; } bits; ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PGxCAP: PWM GENERATOR x CAPTURE REGISTER

    /** @} */ // end of inheritance declarations **************************************

    typedef union PGxCONL_u PGxCONL_t;      ///< PGxCONH: PWM GENERATOR x CONTROL REGISTER LOW data type
    typedef union PGxCONH_u PGxCONH_t;      ///< PGxCONH: PWM GENERATOR x CONTROL REGISTER HIGH data type
    typedef union PGxSTAT_u PGxSTAT_t;      ///< PGxSTAT: PWM GENERATOR x STATUS REGISTER data type
    typedef union PGxIOCONL_u PGxIOCONL_t;  ///< PGxIOCONL: PWM GENERATOR x I/O CONTROL REGISTER LOW data type
    typedef union PGxIOCONH_u PGxIOCONH_t;  ///< PGxIOCONH: PWM GENERATOR x I/O CONTROL REGISTER HIGH data type
    typedef union PGxEVTL_u PGxEVTL_t;      ///< PGxEVTL: PWM GENERATOR x EVENT REGISTER LOW data type
    typedef union PGxEVTH_u PGxEVTH_t;      ///< PGxEVTH: PWM GENERATOR x EVENT REGISTER HIGH data type
    typedef union PGxyPCIL_u PGxyPCIL_t;    ///< PGxFPCIL: PWM GENERATOR x PCI REGISTER LOW data type
    typedef union PGxyPCIH_u PGxyPCIH_t;    ///< PGxFPCIH: PWM GENERATOR x PCI REGISTER HIGH data type
    typedef union PGxLEBL_u PGxLEBL_t;      ///< PGxLEBL: PWM GENERATOR x LEADING-EDGE BLANKING REGISTER LOW data type
    typedef union PGxLEBH_u PGxLEBH_t;      ///< PGxLEBH: PWM GENERATOR x LEADING-EDGE BLANKING REGISTER HIGH data type
    typedef union PGxPHASE_u PGxPHASE_t;    ///< PGxPHASE: PWM GENERATOR x PHASE REGISTER data type
    typedef union PGxDC_u PGxDC_t;          ///< PGxDC: PWM GENERATOR x DUTY CYCLE REGISTER data type
    typedef union PGxDCA_u PGxDCA_t;        ///< PGxDCA: PWM GENERATOR x DUTY CYCLE ADJUSTMENT REGISTER data type
    typedef union PGxPER_u PGxPER_t;        ///< PGxPER: PWM GENERATOR x PERIOD REGISTER data type
    typedef union PGxTRIGy_u PGxTRIGy_t;    ///< PGxTRIGy: PWM GENERATOR x TRIGGER y REGISTER data type
    typedef union PGxDTL_u PGxDTL_t;        ///< PGxDTL: PWM GENERATOR x DEAD-TIME REGISTER LOW data type
    typedef union PGxDTH_u PGxDTH_t;        ///< PGxDTL: PWM GENERATOR x DEAD-TIME REGISTER HIGH data type
    typedef union PGxCAP_u PGxCAP_t;        ///< PGxCAP: PWM GENERATOR x CAPTURE REGISTER data type

    /***********************************************************************************
     * @ingroup p33c-pral-pwm-instance-properties
     * @struct  P33C_PWM_INSTANCE_s
     * @brief   Abstracted set of Special Function Registers of the PWM peripheral module base registers
     * @details
     *  This structure defines an abstracted set of Special Function Registers of
     *  PWM generator configuration and control registers. Users can use this
     *  abstracted set of registers to capture register settings from or write
     *  generic register settings to these peripheral base registers.
     *
     **********************************************************************************/

    struct P33C_PWM_INSTANCE_s {

        PGxCONL_t   PGxCONL;    ///< PGxCONL:   PWM GENERATOR x CONTROL REGISTER HIGH
        PGxCONH_t   PGxCONH;    ///< PGxCONH:   PWM GENERATOR x CONTROL REGISTER HIGH
        PGxSTAT_t   PGxSTAT;    ///< PGxSTAT:   PWM GENERATOR x STATUS REGISTER
        PGxIOCONL_t PGxIOCONL;  ///< PGxIOCONL: PWM GENERATOR x I/O CONTROL REGISTER LOW
        PGxIOCONH_t PGxIOCONH;  ///< PGxIOCONH: PWM GENERATOR x I/O CONTROL REGISTER HIGH
        PGxEVTL_t   PGxEVTL;    ///< PGxEVTL:   PWM GENERATOR x EVENT REGISTER LOW
        PGxEVTH_t   PGxEVTH;    ///< PGxEVTH:   PWM GENERATOR x EVENT REGISTER HIGH
        PGxyPCIL_t  PGxFPCIL;   ///< PGxFPCIL:  PWM GENERATOR x FAULT PCI REGISTER LOW
        PGxyPCIH_t  PGxFPCIH;   ///< PGxFPCIH:  PWM GENERATOR x FAULT PCI REGISTER HIGH
        PGxyPCIL_t  PGxCLPCIL;  ///< PGxCLPCIL: PWM GENERATOR x CURRENT LIMIT PCI REGISTER LOW
        PGxyPCIH_t  PGxCLPCIH;  ///< PGxCLPCIH: PWM GENERATOR x CURRENT LIMIT PCI REGISTER HIGH
        PGxyPCIL_t  PGxFFPCIL;  ///< PGxFFPCIL: PWM GENERATOR x FEED FORWARD PCI REGISTER LOW
        PGxyPCIH_t  PGxFFPCIH;  ///< PGxFFPCIH: PWM GENERATOR x FEED FORWARD PCI REGISTER HIGH
        PGxyPCIL_t  PGxSPCIL;   ///< PGxSPCIL:  PWM GENERATOR x SOFTWARE PCI REGISTER LOW
        PGxyPCIH_t  PGxSPCIH;   ///< PGxSPCIH:  PWM GENERATOR x SOFTWARE PCI REGISTER HIGH
        PGxLEBL_t   PGxLEBL;    ///< PGxLEBL:   PWM GENERATOR x LEADING-EDGE BLANKING REGISTER LOW
        PGxLEBH_t   PGxLEBH;    ///< PGxLEBH:   PWM GENERATOR x LEADING-EDGE BLANKING REGISTER HIGH
        PGxPHASE_t  PGxPHASE;   ///< PGxPHASE:  PWM GENERATOR x PHASE REGISTER
        PGxDC_t     PGxDC;      ///< PGxDC:     PWM GENERATOR x DUTY CYCLE REGISTER
        PGxDCA_t    PGxDCA;     ///< PGxDCA:    PWM GENERATOR x DUTY CYCLE ADJUSTMENT REGISTER
        PGxPER_t    PGxPER;     ///< PGxPER:    PWM GENERATOR x PERIOD REGISTER
        PGxTRIGy_t  PGxTRIGA;   ///< PGxTRIGA:  PWM GENERATOR x TRIGGER A REGISTER
        PGxTRIGy_t  PGxTRIGB;   ///< PGxTRIGB:  PWM GENERATOR x TRIGGER B REGISTER
        PGxTRIGy_t  PGxTRIGC;   ///< PGxTRIGC:  PWM GENERATOR x TRIGGER C REGISTER
        PGxDTL_t    PGxDTL;     ///< PGxDTL:    PWM GENERATOR x DEAD-TIME REGISTER LOW
        PGxDTH_t    PGxDTH;     ///< PGxDTH:    PWM GENERATOR x DEAD-TIME REGISTER HIGH
        PGxCAP_t    PGxCAP;     ///< PGxCAP:    PWM GENERATOR x CAPTURE REGISTER

    } __attribute__((aligned)); ///< PWM GENERATOR INSTANCE SPECIAL FUNCTION REGISTER SET

    typedef struct P33C_PWM_INSTANCE_s P33C_PWM_INSTANCE_t; ///< PWM GENERATOR INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE

    /*********************************************************************************
     * @ingroup p33c-pral-pwm-instance-constants
     * @brief   Gets PWM generator instance Special Function Register set address offset
     * @return  Memory address offset between PWM generator instances in number of bytes
     *
     * @details
     *  This macro returns the address offset between PWM generator instances Special
     *  Function Register (SFR) sets allowing to calculate the relative distance between
     *  SFR addresses of two different PWM generators.
     *
     *********************************************************************************/
    #define P33C_PWMGEN_SFR_OFFSET  ((uint16_t)&PG2CONL - (uint16_t)&PG1CONL)

    /*********************************************************************************
    * @ingroup p33c-pral-pwm-instance-properties
    * @brief   Gets the number of available peripheral instances
    * @details
    *  This variable is used to determine the number of available instances of the
    *  peripheral by returning the number of array elements of the instance handle
    *  list.
    **********************************************************************************/
    static const uint16_t p33c_PwmInstances = (sizeof(p33c_PwmInstance_Handles)/sizeof(p33c_PwmInstance_Handles[0]));

    /*********************************************************************************
     * @ingroup p33c-pral-pwm-instance-methods
     * @brief   Gets a pointer to the start address of a PWM generator SFR block
     * @param   pInstance: Instance of the PWM generator of type unsigned integer (e.g. 1=PG1, 2=PG2, etc.)
     * @return  Pointer address to PWM generator instance of type P33C_PWM_GENERATOR_t specified by parameter pgInstance
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
     *  Please use @ref p33c_PwmInstance_Exists() to validate the given peripheral
     *  instance parameter before using the the returned memory address.
     *
     * @see
     *  p33c_PwmInstance_Exists()
     *
     *********************************************************************************/
    #define p33c_PwmInstance_GetHandle(pInstance) (P33C_PWM_INSTANCE_t*)p33c_PwmInstance_Handles[(pInstance-1)]

    /*********************************************************************************
     * @ingroup p33c-pral-pwm-instance-methods
     * @brief   Checks if the peripheral instance specified by pInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  requested peripheral instance index does exist
     * @return  false: requested peripheral instance index does not exist
     *
     * @details
     *  This function provides a guarding condition test to verify if a specific
     *  peripheral instance exists before accessing it.
     *********************************************************************************/
    #define p33c_PwmInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_PwmInstances)) ? true : false)

#endif /* End of P33C_PWM_INSTANCE_s */
#endif /* End of P33C_PWM_SFR_DECLARATIONS_H */

// ______________________
// end of file
