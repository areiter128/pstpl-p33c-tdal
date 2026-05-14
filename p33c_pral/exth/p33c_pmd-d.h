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
 * @file    p33c_pmd-d.h
 * @see     p33c_pmd.h
 * @author  I62419
 * @brief   Peripheral Module Disable Module register abstraction data type declarations
 * @details
 *   This additional header file contains defines for all required bit-settings of all 
 *   related special function registers of a peripheral module and/or instance. 
 *   This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PMD_SFR_DECLARATIONS_H
#define	P33C_PMD_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#ifndef P33C_PMD_MODULE_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-pmd-inheritance
     * @extends     P33C_PMD_MODULE_s 
     * @{
     */

    /** 
     * @brief   Peripheral Module Disable Control Register inherited from device header file
     */
    union PMDCON_u {
        #ifdef PMDCON
        struct tagPMDCONBITS bits;  ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMDCON: PERIPHERAL MODULE DISABLE CONTROL REGISTER
    
    /** 
     * @brief   Peripheral Module Disable Control Register #1 inherited from device header file
     */
    union PMD1_u {
        #ifdef PMD1
        struct tagPMD1BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD1: PERIPHERAL MODULE DISABLE 1 CONTROL REGISTER LOW
    
    /** 
     * @brief   Peripheral Module Disable Control Register #2 inherited from device header file
     */
    union PMD2_u {
        #ifdef PMD2
        struct tagPMD2BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD2: PERIPHERAL MODULE DISABLE 2 CONTROL REGISTER LOW

    /** 
     * @brief   Peripheral Module Disable Control Register #3 inherited from device header file
     */
    union PMD3_u {
        #ifdef PMD3
        struct tagPMD3BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD3: PERIPHERAL MODULE DISABLE 3 CONTROL REGISTER LOW

    /** 
     * @brief   Peripheral Module Disable Control Register #4 inherited from device header file
     */
    union PMD4_u {
        #ifdef PMD4
        struct tagPMD4BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD4: PERIPHERAL MODULE DISABLE 4 CONTROL REGISTER LOW

    /** 
     * @brief   Peripheral Module Disable Control Register #5 inherited from device header file
     */
    union PMD5_u {
        #ifdef PMD5
        struct tagPMD5BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD5: PERIPHERAL MODULE DISABLE 5 CONTROL REGISTER LOW

    /** 
     * @brief   Peripheral Module Disable Control Register #6 inherited from device header file
     */
    union PMD6_u {
        #ifdef PMD6
        struct tagPMD6BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD6: PERIPHERAL MODULE DISABLE 6 CONTROL REGISTER LOW

    /** 
     * @brief   Peripheral Module Disable Control Register #7 inherited from device header file
     */
    union PMD7_u {
        #ifdef PMD7
        struct tagPMD7BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD7: PERIPHERAL MODULE DISABLE 7 CONTROL REGISTER LOW

    /** 
     * @brief   Peripheral Module Disable Control Register #8 inherited from device header file
     */
    union PMD8_u {
        #ifdef PMD8
        struct tagPMD8BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD8: PERIPHERAL MODULE DISABLE 8 CONTROL REGISTER LOW

    /** 
     * @brief   Peripheral Module Disable Control Register #9 inherited from device header file
     */
    union PMD9_u {
        #ifdef PMD9
        struct tagPMD9BITS bits;    ///< Register bit-field
        #else
        struct { unsigned  : 16; } bits; ///< Register bit-field placeholder 
        #endif
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< PMD9: PERIPHERAL MODULE DISABLE 9 CONTROL REGISTER LOW

    /** @} */ // end of inheritance declarations **************************************

    typedef union PMDCON_u PMDCON_t; ///< PMDCON: PERIPHERAL MODULE DISABLE CONTROL REGISTER data type
    typedef union PMD1_u PMD1_t; ///< PMD1: PERIPHERAL MODULE DISABLE 1 CONTROL REGISTER LOW data type
    typedef union PMD2_u PMD2_t; ///< PMD2: PERIPHERAL MODULE DISABLE 2 CONTROL REGISTER LOW data type
    typedef union PMD3_u PMD3_t; ///< PMD3: PERIPHERAL MODULE DISABLE 3 CONTROL REGISTER LOW data type
    typedef union PMD4_u PMD4_t; ///< PMD4: PERIPHERAL MODULE DISABLE 4 CONTROL REGISTER LOW data type
    typedef union PMD5_u PMD5_t; ///< PMD5: PERIPHERAL MODULE DISABLE 5 CONTROL REGISTER LOW data type
    typedef union PMD6_u PMD6_t; ///< PMD6: PERIPHERAL MODULE DISABLE 6 CONTROL REGISTER LOW data type
    typedef union PMD7_u PMD7_t; ///< PMD7: PERIPHERAL MODULE DISABLE 7 CONTROL REGISTER LOW data type
    typedef union PMD8_u PMD8_t; ///< PMD8: PERIPHERAL MODULE DISABLE 8 CONTROL REGISTER LOW data type
    typedef union PMD9_u PMD9_t; ///< PMD9: PERIPHERAL MODULE DISABLE 9 CONTROL REGISTER LOW data type
    
    /***********************************************************************************
     * @struct  P33C_PMD_MODULE_s
     * @ingroup p33c-pral-pmd-properties
     * @brief   Abstracted set of Peripheral Module Disable Special Function Registers 
     * @details
     *   This structure defines an abstracted set of Special Function Registers of the 
     *   Peripheral Module Disable device configuration. Users can use this abstracted 
     *   set of registers to capture register settings from or write generic register 
     *   settings to the PMD module.
     **********************************************************************************/

    struct P33C_PMD_MODULE_s {

		#ifdef PMDCON       // Address: FA0 (not present on all devices)
        PMDCON_t PMDCON;    ///< PMDCON: PERIPHERAL MODULE DISABLE CONTROL REGISTER
        #else
        unsigned  : 16;     ///< PMDCON may not implemented on every target device
		#endif
                            // Address: FA2
        unsigned  : 16;     ///< reserved/unused memory space

        // Address: FA4 (present on all devices)
        PMD1_t  PMD1;        ///< PMD1: PERIPHERAL MODULE DISABLE 1 CONTROL REGISTER LOW

        // Address: FA6 (present on all devices)
        PMD2_t PMD2;        ///< PMD2: PERIPHERAL MODULE DISABLE 2 CONTROL REGISTER LOW
        
		#ifdef PMD3         // Address: FA8 (not present on all devices)
        PMD3_t PMD3;        ///< PMD3: PERIPHERAL MODULE DISABLE 3 CONTROL REGISTER LOW
        #else
        unsigned  : 16;     ///< PMD3 may not implemented on every target device
		#endif
        
        // Address: FAA (present on all devices)
        PMD4_t PMD4;        ///< PMD4: PERIPHERAL MODULE DISABLE 4 CONTROL REGISTER LOW
        
		#ifdef PMD5         // Address: FAC (not present on all devices)
        PMD5_t PMD5;        ///< PMD5: PERIPHERAL MODULE DISABLE 5 CONTROL REGISTER LOW
        #else
        unsigned  : 16;     ///< PMD5 may not implemented on every target device
		#endif
        
        // Address: FAE (present on all devices)
        PMD6_t PMD6;        ///< PMD6: PERIPHERAL MODULE DISABLE 6 CONTROL REGISTER LOW
        // Address: FB0 (present on all devices)
        PMD7_t PMD7;        ///< PMD7: PERIPHERAL MODULE DISABLE 7 CONTROL REGISTER LOW
        // Address: FB2 (present on all devices)
        PMD8_t PMD8;        ///< PMD8: PERIPHERAL MODULE DISABLE 8 CONTROL REGISTER LOW
        
		#ifdef PMD9         // Address: FB4 (not present on all devices)
        PMD8_t PMD9;        ///< PMD9: PERIPHERAL MODULE DISABLE 9 CONTROL REGISTER LOW
        #else
        unsigned  : 16;     ///< PMD9 may not implemented on every target device
		#endif
        
    };  ///< Peripheral Module Disable module Special Function Register set
    typedef struct P33C_PMD_MODULE_s P33C_PMD_MODULE_t;  ///< Peripheral Module Disable module Special Function Register set data type


    /*********************************************************************************
     * @ingroup p33c-pral-pmd-methods
     * @brief   Gets pointer to Peripheral Module Disable SFR set
     * @return  Pointer to Peripheral Module Disable special function register data object of type P33C_PMD_INSTANCE_t
     *  
     * @details
     *      This macro returns the pointer to the Peripheral Module Disable 
     *    Special Function Register memory space. This pointer can be used to 
     *    directly write to/read from the Special Function Registers of the 
     *    Peripheral Module Disable configuration.
     * @note 
     *     Base-register may not be available and thus this macro will return the
     *     first available register of the PMD register set.
     * 
     *********************************************************************************/
    #if defined PMDCON
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)((uint16_t)&PMDCON)
    #elif defined PMD1
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD1) -  0x0004)
    #elif defined PMD2
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD2) -  0x0006)
    #elif defined PMD3
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD3) -  0x0008)
    #elif defined PMD4
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD4) -  0x000A)
    #elif defined PMD5
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD5) -  0x000C)
    #elif defined PMD6
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD6) -  0x000E)
    #elif defined PMD7
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD7) -  0x0010)
    #elif defined PMD8
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD8) -  0x0012)
    #elif defined PMD9
        #define p33c_Pmd_GetHandle() (P33C_PMD_MODULE_t*)(((uint16_t)&PMD9) -  0x0014)
    #endif
    
#endif /* P33C_PMD_MODULE_s */
#endif	/* End of P33C_PMD_SFR_DECLARATIONS_H */

// ______________________________
// end of file
