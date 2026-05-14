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
 * @file    p33c_i2c-d.h
 * @see     p33c_i2c.h
 * @brief   Inter-Integrated Circuit (I2C) Driver Module peripheral register abstraction data type declarations
 * @author  A14426
 * @details
 * This additional header file contains defines for all required bit-settings of all related 
 * special function registers of a peripheral module and/or instance. 
 * This file is an additional header file on top of the generic device header file.
*/

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_I2C_SFR_DECLARATIONS_H
#define	P33C_I2C_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#if defined (I2C3CONL)
    static volatile uint16_t* p33c_i2cInstance_Handles[3]={
        &I2C1CONL, &I2C2CONL, &I2C3CONL 
    };
#elif defined (I2C2CONL)
    static volatile uint16_t* p33c_i2cInstance_Handles[2]={
         &I2C1CONL, &I2C2CONL
    };    
#elif defined (I2C1CONL)
    static volatile uint16_t* p33c_i2cInstance_Handles[1]={
        &I2C1CONL
    };
#else
    static volatile uint16_t* p33c_i2cInstance_Handles[0];
    #pragma message "selected device has no supported I2C ports"
#endif

// GENERIC MULTI-PROCESS I2C INSTANCE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_I2C_INSTANCE_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-i2c-inheritance
     * @extends     P33C_I2C_INSTANCE_s 
     * @{
     */

    /** 
     * @brief   I2C CONTROL REGISTER (Low) inherited from device data sheet
     */
    union I2CxCONL_u {
        struct tagI2C1CONLBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxCONL: I2Cx CONTROL REGISTER LOW 
    
     /** 
     * @brief   I2C CONTROL REGISTER HIGH inherited from device data sheet
     */
    
    union I2CxCONH_u {
        
        struct {
        uint16_t DHEN:1;
        uint16_t AHEN:1;
        uint16_t SBCDE:1;
        uint16_t SDAHT:1;
        uint16_t BOEN:1;
        uint16_t SCIE:1;
        uint16_t PCIE:1;
        uint16_t :9;
        } bits;
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxCONH: I2Cx CONTROL REGISTER HIGH
    
     /** 
     * @brief   I2C STATUS REGISTER) inherited from device data sheet
     */
    
    union I2CxSTAT_u {
        struct tagI2C1STATBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxSTAT: I2Cx STATUS REGISTER
    
     /** 
     * @brief   I2C Address Register inherited from device data sheet
     */
    
    union I2CxADD_u {
        struct tagI2C1ADDBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxADD: I2Cx Address Register
    
     /** 
     * @brief   I2C Slave Mode Address Mask Register inherited from device data sheet
     */
    
    union I2CxMSK_u {
        struct tagI2C1MSKBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxMSK: I2Cx Slave Mode Address Mask Register
    
     /** 
     * @brief   I2C Baud Rate Generator Reload Register inherited from device data sheet
     */
    
    union I2CxBRG_u {
        struct {
             uint16_t BRG : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxBRG: I2Cx Baud Rate Generator Reload Register 
    
     /** 
     * @brief   I2C Transmit Register inherited from device data sheet
     */
    
    union I2CxTRN_u {
        struct tagI2C1TRNBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxTRN: I2Cx Transmit Register 
    
     /** 
     * @brief   I2C Receive Buffer Register inherited from device data sheet
     */
    
    union I2CxRCV_u {
        struct tagI2C1RCVBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // I2CxRCV: I2Cx Receive Buffer Register
    
    /** @} */ // end of inheritance declarations **************************************

    typedef union I2CxCONL_u I2CxCONL_t; // I2CxCONL: I2Cx CONTROL REGISTER LOW data type
    typedef union I2CxCONH_u I2CxCONH_t; // I2CxCONH: I2Cx CONTROL REGISTER HIGH data type
    typedef union I2CxSTAT_u I2CxSTAT_t; // I2CxSTAT: I2Cx STATUS REGISTER data type
    typedef union I2CxADD_u  I2CxADD_t;  // I2CxADD:  I2Cx Address Register data type
    typedef union I2CxMSK_u  I2CxMSK_t;  // I2CxMSK:  I2Cx Slave Mode Address Mask Register data type
    typedef union I2CxBRG_u  I2CxBRG_t;  // I2CxBRG:  I2Cx Baud Rate Generator Reload Register data type
    typedef union I2CxTRN_u  I2CxTRN_t;  // I2CxTRN:  I2Cx Transmit Register data type
    typedef union I2CxRCV_u  I2CxRCV_t;  // I2CxRCV:  I2Cx Receive Buffer Register data type
    
    /***********************************************************************************
     * @struct  P33C_I2C_INSTANCE_s
     * @ingroup p33c-pral-i2c-properties
     * @brief   Abstracted set of Special Function Registers of an Inter-Integrated Circuit (I2C) instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of a 
     *  Inter-Integrated Circuit (I2C) peripheral instance. Users can use this 
     *  abstracted set of registers to capture register settings from or write
     *  generic register settings to a specific instance of this peripheral instance.
     **********************************************************************************/
    struct P33C_I2C_INSTANCE_s {
        
        I2CxCONL_t  I2CxCONL;   //I2CxCONL: I2Cx CONTROL REGISTER LOW
        I2CxCONH_t  I2CxCONH;   //I2CxCONH: I2Cx CONTROL REGISTER HIGH
        I2CxSTAT_t  I2CxSTAT;   //I2CxSTAT: I2Cx STATUS REGISTER
        unsigned    :16;
        I2CxADD_t   I2CxADD;    //I2CxADD: I2Cx Address Register
        unsigned    :16;
        I2CxMSK_t   I2CxMSK;    //I2CxMSK: I2Cx Slave Mode Address Mask Register
        unsigned    :16;
        I2CxBRG_t   I2CxBRG;    //I2CxBRG: I2Cx Baud Rate Generator Reload Register
        unsigned    :16;
        I2CxTRN_t   I2CxTRN;    //I2CxTRN: I2Cx Transmit Register
        unsigned    :16;
        I2CxRCV_t   I2CxRCV;    //I2CxRCV: I2Cx Receive Buffer Register
    }; ///< MULTI-PROCESS I2C INSTANCE SPECIAL FUNCTION REGISTER SET
    typedef struct P33C_I2C_INSTANCE_s P33C_I2C_INSTANCE_t; ///< MULTI-PROCESS I2C INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE

    /*********************************************************************************
     * @ingroup p33c-pral-i2c-methods
     * @param   pInstance: Peripheral instance index of type unsigned integer
     * @return  Pointer to start address if I2C instance special function register set of type P33C_I2C_INSTANCE_t 
     * @brief   Gets pointer to start address of I2C instance SFR set
     * 
     * @details
     *  This macro returns the pointer to an I2C instance register set in the
     *  Special Function Register memory space. This pointer can be used to 
     *  directly write to/read from the Special Function Registers of the 
     *  I2C peripheral instance configuration.
     * 
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     *  Please use @ref p33c_i2cInstance_Exists() to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_i2cInstance_Exists()
     * 
     **********************************************************************************/
	#define p33c_i2cInstance_GetHandle(pInstance) (P33C_I2C_INSTANCE_t*)p33c_i2cInstance_Handles[(pInstance-1)]

    /*********************************************************************************
     * @ingroup p33c-pral-i2c-methods
     * @param   pInstance: Peripheral instance index of type unsigned integer
     * @return  Result of I2C peripheral instance if valid or not
     * @brief   Gets the validity of the I2C peripheral instance
     * 
     * @details
     *  This macro returns the validity of the I2C peripheral instance.
     **********************************************************************************/
    #define p33c_i2cInstance_Exists(pInstance)  (bool)(((0 < pInstance) && (pInstance <= p33c_i2cInstances)) ? true : false)
    
#endif /* end of P33C_I2C_INSTANCE_s */
#endif /* End of P33C_I2C_SFR_DECLARATIONS_H */

// __________________________
// end of file
