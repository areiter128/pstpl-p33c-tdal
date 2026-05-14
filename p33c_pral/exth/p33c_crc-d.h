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
 * @file    p33c_crc-d.h
 * @see     p33c_crc.h
 * @brief   Generic Cyclic Redundancy Check peripheral register abstraction data type declarations
 * @author  M91406
 * @details
 *  This additional header file contains defines for all required bit-settings of all related 
 *  special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CRC_SFR_DECLARATIONS_H
#define	P33C_CRC_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h" // include dsPIC SMPS device identifier header file
#if (!defined (__P33SMPS_CHS__)) // Hide file contents for secondary core devices

// GENERIC CRC MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_CRC_MODULE_s

    /***********************************************************************************
     * @addtogroup  p33c-pral-crc-inheritance
     * @extends     P33C_CRC_MODULE_s 
     * @{
     */

    /** 
     * @brief   Cyclic Redundancy Check Control Register (Low) inherited from device header file
     */
    union CRCCONL_u {
        struct tagCRCCONLBITS bits; ///< Register bit-field
        uint16_t value; ///< 16-bit wide register value
    } __attribute__((packed));   ///< CRCCONL: CRC Control Register LOW

    /** 
     * @brief   Cyclic Redundancy Check Control Register (High) inherited from device header file
     */
    union CRCCONH_u {
        struct tagCRCCONHBITS bits; ///< Register bit-field
        uint16_t value; ///< 16-bit wide register value
    } __attribute__((packed));    ///< CRCCONH: CRC Control Register HIGH

    /** 
     * @brief   Cyclic Redundancy Check XOR Polynomial Register (Low) inherited from device header file
     */
    union CRCXORL_u {
        struct tagCRCXORLBITS bits; // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // CRCXORL: CRC XOR Low Register

    /** 
     * @brief   Cyclic Redundancy Check XOR Polynomial Register (High) inherited from device header file
     */
    union CRCXORH_u {
        struct tagCRCXORHBITS bits; // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // CRCXORH: CRC XOR High Register
    
    /** 
     * @brief   Cyclic Redundancy Check Data Register (Low) inherited from device header file
     */
    union CRCDATL_u {
        struct { uint16_t DATA : 16; } bits; // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // CRCDATL: CRC Data Low Register

    /** 
     * @brief   Cyclic Redundancy Check Data Register (High) inherited from device header file
     */
    union CRCDATH_u {
        struct { uint16_t DATA : 16; } bits; // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // CRCDATL: CRC Data High Register
    
    /** 
     * @brief   Cyclic Redundancy Check Shift Register (Low) inherited from device header file
     */
    union CRCWDATL_u {
        struct { uint16_t SDATA : 16; } bits; // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // CRCWDATL: CRC Shift Low Register

    /** 
     * @brief   Cyclic Redundancy Check Shift Register (High) inherited from device header file
     */
    union CRCWDATH_u {
        struct { uint16_t SDATA : 16; } bits; // Register bit-field
        uint16_t value;         // 16-bit wide register value
    } __attribute__((packed));  // CRCWDATL: CRC Shift High Register
    
    /** @} */ // end of inheritance declarations **************************************

    typedef union CRCCONL_u CRCCONL_t; ///< Data type declaration of @ref CRCCONL_u
    typedef union CRCCONH_u CRCCONH_t; ///< Data type declaration of @ref CRCCONH_u
    typedef union CRCXORL_u CRCXORL_t; ///< Data type declaration of @ref CRCXORL_u
    typedef union CRCXORH_u CRCXORH_t; ///< Data type declaration of @ref CRCXORH_u
    typedef union CRCDATL_u CRCDATL_t; ///< Data type declaration of @ref CRCDATL_u
    typedef union CRCDATH_u CRCDATH_t; ///< Data type declaration of @ref CRCDATH_u
    typedef union CRCWDATL_u CRCWDATL_t; ///< Data type declaration of @ref CRCWDATL_u
    typedef union CRCWDATH_u CRCWDATH_t; ///< Data type declaration of @ref CRCWDATH_u

/***********************************************************************************
 * @struct  P33C_CRC_MODULE_s
 * @ingroup p33c-pral-crc-properties
 * @brief   Abstracted set of Special Function Registers of the Cyclic Redundancy Check module 
 * @details
 *  This structure defines an abstracted set of Special Function Registers of 
 *  Cyclic Redundancy Check peripheral module base registers. Users can use this 
 *  abstracted set of registers to capture register settings from or write  
 *  generic register settings to these peripheral base registers.
 * 
 **********************************************************************************/
    struct P33C_CRC_MODULE_s {

        CRCCONL_t CRCCONL;      ///< Abstracted CRC Control Register, Low
        CRCCONH_t CRCCONH;      ///< Abstracted CRC Control Register, High
        CRCXORL_t CRCXORL;      ///< Abstracted CRC XOR Register, Low
        CRCXORH_t CRCXORH;      ///< Abstracted CRC XOR Register, High
        CRCDATL_t CRCDATL;      ///< Abstracted CRC Data Register, Low
        CRCDATH_t CRCDATH;      ///< Abstracted CRC Data Register, High
        CRCWDATL_t CRCWDATL;    ///< Abstracted CRC Shift Register, Low
        CRCWDATH_t CRCWDATH;    ///< Abstracted CRC Shift Register, High

    }; ///< CRC MODULE SPECIAL FUNCTION REGISTER SET
    typedef struct P33C_CRC_MODULE_s P33C_CRC_MODULE_t; ///< CRC MODULE SPECIAL FUNCTION REGISTER SET DATA TYPE

//#define CRC16_PVIZ_POLYNOMIAL ((uint16_t)0x8005) // Standard Polynomial
#define CRC16_PVIZ_REV_POLYNOMIAL   ((uint16_t)0xA001) // Standard Polynomial 0x8005
#define CRC16_PVIZ_SEED_VALUE       ((uint16_t)0x0000) // non-direct of 0x0000   
   
//#define CRC16_CCITT_POLYNOMIAL ((uint16_t)0x1021) // Standard Polynomial
#define CRC16_CCITT_REV_POLYNOMIAL  ((uint16_t)0x8408) // Standard Polynomial
#define CRC16_CCITT_SEED_VALUE      ((uint16_t)0x0000) // non-direct of 0x0000       

/***********************************************************************************
 * @ingroup p33c-pral-crc-constants
 * @extends P33C_CRC_MODULE_s 
 * @brief   Provides a set of 8-bit wide standard CRC8 polynomials
 ***********************************************************************************/

enum CRC8_POLYNOMIAL_e {
    
    CRC8_STANDARD_POLYNOMIAL        = 0xD5,
    CRC8_AUTOSAR_POLYNOMIAL         = 0x2F,
    CRC8_BLUETOOTH_POLYNOMIAL       = 0xA7,
    CRC8_CCITT_POLYNOMIAL           = 0x07,
    CRC8_DALLAS_POLYNOMIAL          = 0x31,
    CRC8_DARC_POLYNOMIAL            = 0x39,
    CRC8_GSMB_POLYNOMIAL            = 0x49,
    CRC8_SAEJ1850_POLYNOMIAL        = 0x1D,
    CRC8_WCDMA_POLYNOMIAL           = 0x9B
}; 

/***********************************************************************************
 * @ingroup p33c-pral-crc-constants
 * @extends P33C_CRC_MODULE_s 
 * @brief   Provides a set of 16-bit wide standard CRC16 polynomials
 ***********************************************************************************/

enum CRC16_POLYNOMIAL_e {
    
    CRC16_STANDARD_POLYNOMIAL       = 0x8005,
    CRC16_CHAKRAVARTY_POLYNOMIAL    = 0x2F15,
    CRC16_ARINC_POLYNOMIAL          = 0xA02B,
    CRC16_CCITT_POLYNOMIAL          = 0x1021,
    CRC16_CDMA_POLYNOMIAL           = 0xC867,
    CRC16_DECT_POLYNOMIAL           = 0x0589,
    CRC16_DIF_POLYNOMIAL            = 0x8BB7,
    CRC16_DNP_POLYNOMIAL            = 0x3D65,
    CRC16_IBM_POLYNOMIAL            = 0x8005,
    CRC16_OPENSAFETY_A_POLYNOMIAL   = 0x5935,
    CRC16_OPENSAFETY_B_POLYNOMIAL   = 0x755B,
    CRC16_PROFIBUS_POLYNOMIAL       = 0x1DCF
}; 

typedef enum CRC8_POLYNOMIAL_e CRC8_POLYNOMIAL_t;  
typedef enum CRC16_POLYNOMIAL_e CRC16_POLYNOMIAL_t;  

/*********************************************************************************
 * @ingroup p33c-pral-crc-methods
 * @brief   Gets pointer to CRC Module SFR set
 * @return  struct P33C_CRC_MODULE_s Pointer to CRC module special function register set object 
 *  
 * @details
 *  This function returns the pointer to a CRC module register set in
 *  Special Function Register memory space. This pointer can be used to 
 *  directly write to/read from the Special Function Registers of the 
 *  CRC peripheral module configuration.
 *
 *********************************************************************************/
#define p33c_CrcModule_GetHandle() (struct P33C_CRC_MODULE_s*)&CRCCONL
    
#endif /* end of P33C_CRC_MODULE_s */
#endif /* #if (!defined (__P33SMPS_CHS__)) */
#endif /* End of P33C_CRC_SFR_DECLARATIONS_H */

// __________________________
// end of file
