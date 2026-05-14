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
 * @file    p33c_ccp-d.h
 * @see     p33c_ccp.h
 * @brief   Capture Compare (CCP) peripheral register abstraction data type declarations
 * @author  I62419
 * @details
 *  This additional header file contains defines for all required bit-settings of all related 
 *  special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CCP_SFR_DECLARATIONS_H
#define	P33C_CCP_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

// Private arrays of register set start addresses
#if defined (CCP9CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[9]={
    &CCP1CON1L, &CCP2CON1L, &CCP3CON1L, &CCP4CON1L, 
    &CCP5CON1L, &CCP6CON1L, &CCP7CON1L, &CCP8CON1L, 
    &CCP9CON1L
};
#elif defined (CCP8CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[8]={
    &CCP1CON1L, &CCP2CON1L, &CCP3CON1L, &CCP4CON1L, 
    &CCP5CON1L, &CCP6CON1L, &CCP7CON1L, &CCP8CON1L 
};
#elif defined (CCP7CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[7]={
    &CCP1CON1L, &CCP2CON1L, &CCP3CON1L, &CCP4CON1L, 
    &CCP5CON1L, &CCP6CON1L, &CCP7CON1L
};
#elif defined (CCP6CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[6]={
    &CCP1CON1L, &CCP2CON1L, &CCP3CON1L, &CCP4CON1L, 
    &CCP5CON1L, &CCP6CON1L
};
#elif defined (CCP5CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[5]={
    &CCP1CON1L, &CCP2CON1L, &CCP3CON1L, &CCP4CON1L, 
    &CCP5CON1L
};
#elif defined (CCP4CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[4]={
    &CCP1CON1L, &CCP2CON1L, &CCP3CON1L, &CCP4CON1L
};
#elif defined (CCP3CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[3]={
    &CCP1CON1L, &CCP2CON1L, &CCP3CON1L
};
#elif defined (CCP2CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[2]={
    &CCP1CON1L, &CCP2CON1L
};
#elif defined (CCP1CON1L)
static volatile uint16_t* p33c_CcpInstance_Handles[1]={
    &CCP1CON1L
};
#else 
static volatile uint16_t* p33c_CcpInstance_Handles[0];
#pragma message "selected device has no supported Capture/Compare instance"
#endif

// GENERIC SCCP/MCCP MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_CCP_INSTANCE_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-ccp-inheritance
     * @extends     P33C_CCP_INSTANCE_s 
     * @{
     */

    /** 
     * @brief Capture Compare Control Register #1 (Low) inherited from device header file
     */
    union CCPxCON1L_u {
        struct tagCCP1CON1LBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxCON1L: CCPx CONTROL 1 LOW REGISTERS

    /** 
     * @brief Capture Compare Control Register #1 (High) inherited from device header file
     */
    union CCPxCON1H_u {
        struct tagCCP1CON1HBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxCON1H: CCPx CONTROL 1 HIGH REGISTERS

    /** 
     * @brief Capture Compare Control Register #2 (Low) inherited from device header file
     */
    union CCPxCON2L_u {
        struct tagCCP1CON2LBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxCON2L: CCPx CONTROL 2 LOW REGISTERS

    /** 
     * @brief Capture Compare Control Register #2 (High) inherited from device header file
     */
    union CCPxCON2H_u {
        struct tagCCP1CON2HBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxCON2H: CCPx CONTROL 2 HIGH REGISTERS

    #if defined (CCP9CON3L)
    /** 
     * @brief Capture Compare Control Register #3 (Low) inherited from device header file
     */
    union CCPxCON3L_u {
        struct tagCCP9CON3LBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxCON3L: CCPx CONTROL 3 LOW REGISTERS (implemented in MCCP9 module only)
    #endif

    /** 
     * @brief Capture Compare Control Register #3 (High) inherited from device header file
     */
    union CCPxCON3H_u {
        struct tagCCP1CON3HBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxCON3H: CCPx CONTROL 3 HIGH REGISTERS

    /** 
     * @brief Capture Compare Status (Low) inherited from device header file
     */
    union CCPxSTATL_u {
        struct tagCCP1STATLBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxSTATL: CCPx STATUS REGISTER

    /** 
     * @brief Capture Compare Timer (Low) inherited from device header file
     */
    union CCPxTMRL_u {
        struct {
            uint16_t TMRL : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxTMRL: CCPx TIMER COUNTER REGISTER LOW 

    /** 
     * @brief Capture Compare Timer (High) inherited from device header file
     */
    union CCPxTMRH_u {
        struct {
            uint16_t TMRH : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxTMRH: CCPx TIMER COUNTER REGISTER HIGH

    /** 
     * @brief Capture Compare Period (Low) inherited from device header file
     */
    union CCPxPRL_u {
        struct {
            uint16_t PRL : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPx TIMER PERIOD REGISTER LOW

    /** 
     * @brief Capture Compare Period (High) inherited from device header file
     */
    union CCPxPRH_u {
        struct {
            uint16_t PRH : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPx TIMER PERIOD REGISTER HIGH

    /** 
     * @brief Capture Compare Output Compare Data Buffer A (Low) inherited from device header file
     */
    union CCPxRAL_u {
        struct {
            uint16_t RAL : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxRAL: CCPx PRIMARY OUTPUT COMPARE DATA BUFFER LOW

    /** 
     * @brief Capture Compare Output Compare Data Buffer B (Low) inherited from device header file
     */
    union CCPxRBL_u {
        struct {
            uint16_t RBL : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxRBL: CCPx SECONDARY OUTPUT COMPARE DATA BUFFER LOW

    /** 
     * @brief Capture Compare Input Compare Data Buffer (Low) inherited from device header file
     */
    union CCPxBUFL_u {
        struct {
            uint16_t BUFL : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxBUFL: CCPx INPUT CAPTURE BUFFER LOW

    /** 
     * @brief Capture Compare Input Compare Data Buffer (High) inherited from device header file
     */
    union CCPxBUFH_u {
        struct {
            uint16_t BUFH : 16; // Register bit-field
        } bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CCPxBUFH: CCPx INPUT CAPTURE BUFFER HIGH

    /** @} */ // end of inheritance declarations **************************************

    typedef union CCPxCON1L_u CCPxCON1L_t; // CCPxCON1L: CCPx CONTROL 1 LOW REGISTERS data type
    typedef union CCPxCON1H_u CCPxCON1H_t; // CCPxCON1H: CCPx CONTROL 1 HIGH REGISTERS data type
    typedef union CCPxCON2L_u CCPxCON2L_t; // CCPxCON2L: CCPx CONTROL 2 LOW REGISTERS data type
    typedef union CCPxCON2H_u CCPxCON2H_t; // CCPxCON2L: CCPx CONTROL 2 HIGH REGISTERS data type
    #if defined (CCP9CON3L)
    typedef union CCPxCON3L_u CCPxCON3L_t; // CCPxCON3L: CCPx CONTROL 3 LOW REGISTERS data type
    #endif
    typedef union CCPxCON3H_u CCPxCON3H_t; // CCPxCON3H: CCPx CONTROL 3 HIGH REGISTERS data type
    typedef union CCPxSTATL_u CCPxSTATL_t; // CCPxSTATL: CCPx STATUS REGISTER data type
    typedef union CCPxTMRL_u CCPxTMRL_t; // CCPxTMRL: CCPx TIMER COUNTER REGISTER LOW data type
    typedef union CCPxTMRH_u CCPxTMRH_t; // CCPxTMRH: CCPx TIMER COUNTER REGISTER HIGH data type
    typedef union CCPxPRL_u CCPxPRL_t; // CCPx TIMER PERIOD REGISTER LOW data type
    typedef union CCPxPRH_u CCPxPRH_t; // CCPx TIMER PERIOD REGISTER HIGH data type
    typedef union CCPxRAL_u CCPxRAL_t; // CCPxRAL: CCPx PRIMARY OUTPUT COMPARE DATA BUFFER LOW data type
    typedef union CCPxRBL_u CCPxRBL_t; // CCPxRBL: CCPx SECONDARY OUTPUT COMPARE DATA BUFFER LOW data type
    typedef union CCPxBUFL_u CCPxBUFL_t; // CCPxBUFL: CCPx INPUT CAPTURE BUFFER LOW data type
    typedef union CCPxBUFH_u CCPxBUFH_t; // CCPxBUFH: CCPx INPUT CAPTURE BUFFER HIGH data type
    
    /***********************************************************************************
     * @struct  P33C_CCP_INSTANCE_s
     * @ingroup p33c-pral-ccp-properties
     * @brief   Abstracted set of Special Function Registers of a Capture Compare peripheral instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of an 
     *  Input Capture/Output Compare peripheral instance. Users can use this abstracted
     *  set of registers to capture register settings from or write generic register 
     *  settings to a specific instance of this peripheral.
     * 
     **********************************************************************************/

    struct P33C_CCP_INSTANCE_s {

        CCPxCON1L_t CCPxCON1L;  ///< CCPxCON1L: CCPx CONTROL 1 LOW REGISTERS
        CCPxCON1H_t CCPxCON1H;  ///< CCPxCON1H: CCPx CONTROL 1 HIGH REGISTERS

        CCPxCON2L_t CCPxCON2L;  ///< CCPxCON2L: CCPx CONTROL 2 LOW REGISTERS
        CCPxCON2H_t CCPxCON2H;  ///< CCPxCON2H: CCPx CONTROL 2 HIGH REGISTERS

        #if defined (CCP9CON3L)
        CCPxCON3L_t CCPxCON3L;  ///< CCPxCON3L: CCPx CONTROL 3 LOW REGISTERS (implemented in MCCP9 module only)
        #else
        unsigned  : 16;         // (reserved) Memory gap between CCPxCON2H and CCPxCON3H
        #endif
        
        CCPxCON3H_t CCPxCON3H;  ///< CCPxCON3H: CCPx CONTROL 3 HIGH REGISTERS
        CCPxSTATL_t CCPxSTATL;  ///< CCPxSTATL: CCPx STATUS REGISTER
        unsigned  : 16;         ///< (reserved)
        CCPxTMRL_t  CCPxTMRL;   ///< CCPxTMRL: CCPx TIMER COUNTER REGISTER LOW 
        CCPxTMRH_t  CCPxTMRH;   ///< CCPxTMRH: CCPx TIMER COUNTER REGISTER HIGH
        CCPxPRL_t   CCPxPRL;    ///< CCPx TIMER PERIOD REGISTER LOW
        CCPxPRH_t   CCPxPRH;    ///< CCPx TIMER PERIOD REGISTER HIGH
        CCPxRAL_t   CCPxRAL;    ///< CCPxRAL: CCPx PRIMARY OUTPUT COMPARE DATA BUFFER LOW
        unsigned  : 16;         ///< (reserved)
        CCPxRBL_t   CCPxRBL;    ///< CCPxRBL: CCPx SECONDARY OUTPUT COMPARE DATA BUFFER LOW
        unsigned  : 16;         ///< (reserved)
        CCPxBUFL_t  CCPxBUFL;   ///< CCPxBUFL: CCPx INPUT CAPTURE BUFFER LOW
        CCPxBUFH_t  CCPxBUFH;   ///< CCPxBUFH: CCPx INPUT CAPTURE BUFFER HIGH
        
    }; ///< CCP INSTANCE SPECIAL FUNCTION REGISTER SET
    typedef struct P33C_CCP_INSTANCE_s P33C_CCP_INSTANCE_t; ///< CCP INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE
    

    /*********************************************************************************
     * @ingroup p33c-pral-ccp-instance-methods
     * @brief   Gets pointer to CCP instance SFR set
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  Pointer to SCCP/MCCP instance special function register data object of type P33C_CCP_INSTANCE_t
     *  
     * @details
     *  This function returns the pointer to a CCP peripheral instance register 
     *  set in Special Function Register memory space. This pointer can be used 
     *  to directly write to/read from the Special Function Registers of the 
     *  CCP peripheral instance configuration.
     * 
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     *  Please use @ref p33c_CcpInstance_Exists() to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_CcpInstance_Exists()
     * 
     *********************************************************************************/
    #define p33c_CcpInstance_GetHandle(pInstance) (P33C_CCP_INSTANCE_t*)p33c_CcpInstance_Handles[(pInstance-1)]
    
    /*********************************************************************************
     * @ingroup p33c-pral-ccp-instance-methods
     * @brief   Checks if the peripheral instance specified by pInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  Requested peripheral instance index does exist 
     * @return  false: Requested peripheral instance index does not exist 
     *  
     * @details
     *  This function provides a guarding condition test to verify if a specific 
     *  peripheral instance exists before accessing it. 
     * 
     *********************************************************************************/
    #define p33c_CcpInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_CcpInstances)) ? true : false)
    
#endif // end of P33C_CCP_INSTANCE_s  
#endif	/* End of P33C_CCP_SFR_DECLARATIONS_H */

// ______________________________
// end of file
