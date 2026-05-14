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
 * @file    p33c_clc.h
 * @see     p33c_clc.c
 * @brief   Configurable Logic Cell (CLC) Driver Module & Generator Instances peripheral register abstraction data type declarations
 * @author  A72333
 * @date    December 14, 2022
 * @details
 *  This additional header file contains defines for all required bit-settings of all related 
 *  special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
*/    
    
// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CLC_SFR_DECLARATIONS_H
#define	P33C_CLC_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h>         // include processor files - each processor file is guarded.  
#include <stdint.h>     // include standard integer data types
#include <stdbool.h>    // include standard boolean data types
#include <stddef.h>     // include standard definition data types    
    
/* ============================================
 * GENERIC SPECIAL FUNCTION REGISTER (SFR) SETS
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
 * Therefore this CLC configuration example uses a 'virtual CLC port' to set up 
 * the required CLC configuration but provides a function allowing users to write this 
 * configuration to any CLC port of choice. Hence, pre-defined configurations 
 * can be mapped on specific peripheral instance by using their index defined by the 
 * data sheet (e.g. clcInstance = 1 maps pre-defined configuration to CLC1)
 * 
 * The data types used for each SFR in the P33C_CLC_INSTANCE_t data structure below,
 * are data types declared in the common C-header file of the device (e.g. <d33CK256MP506.h>). 
 * These header files are provided with the XC16 C-Compiler installation and don't have to be 
 * written nor changed manually. 
 * 
 */

// Determine number of available CLC instances on the selected device
#if defined (CLC8CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[8]={
        &CLC1CONL, &CLC2CONL, &CLC3CONL, &CLC4CONL, &CLC5CONL, &CLC6CONL, &CLC7CONL, &CLC8CONL
    };
#elif defined (CLC7CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[7]={
        &CLC1CONL, &CLC2CONL, &CLC3CONL, &CLC4CONL, &CLC5CONL, &CLC6CONL, &CLC7CONL
    };
#elif defined (CLC6CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[6]={
        &CLC1CONL, &CLC2CONL, &CLC3CONL, &CLC4CONL, &CLC5CONL, &CLC6CONL
    };
#elif defined (CLC5CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[5]={
        &CLC1CONL, &CLC2CONL, &CLC3CONL, &CLC4CONL, &CLC5CONL
#elif defined (CLC4CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[4]={
        &CLC1CONL, &CLC2CONL, &CLC3CONL, &CLC4CONL
    };
#elif defined (CLC3CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[3]={
        &CLC1CONL, &CLC2CONL, &CLC3CONL
    };
#elif defined (CLC2CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[2]={
        &CLC1CONL, &CLC2CONL
    };
#elif defined (CLC1CONL)
    static volatile uint16_t* p33c_ClcInstance_Handles[1]={
        &CLC1CONL
    };
#else
   static volatile uint16_t* p33c_ClcInstance_Handles[0];
    #pragma message "selected device has no supported CLC ports"
#endif

// GENERIC MULTI-PROCESS CLC INSTANCE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_CLC_INSTANCE_s 

    /***********************************************************************************
     * @addtogroup  p33c-pral-clc-instance-inheritance
     * @extends     P33C_CLC_INSTANCE_s 
     * @{
     */
    
    /** 
     * @brief   CLCxCONL: CLCx CONTROL REGISTER (LOW) inherited from device data sheet
     */
    union CLCxCONL_u {
        struct tagCLC1CONLBITS bits;    // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // CLCxCONL: CLCx CONTROL REGISTER (LOW)
    
    /** 
     * @brief   CLCxCONH: CLCx CONTROL REGISTER (HIGH) inherited from device data sheet
     */
    union CLCxCONH_u {
        struct tagCLC1CONHBITS bits;     // Register bit-field 
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // CLCxCONH: CLCx CONTROL REGISTER (HIGH)

    /** 
     * @brief   CLCxSEL: CLCx INPUT MUX SELECT REGISTER inherited from device data sheet
     */
    union CLCxSEL_u {
        struct tagCLC1SELBITS bits;       // Register bit-field 
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // CLCxSEL: CLCx INPUT MUX SELECT REGISTER
    
    /** 
     * @brief   CLCxGLSL: CLCx GATE LOGIC INPUT SELECT LOW REGISTER inherited from device data sheet
     */
    union CLCxGLSL_u {
        struct tagCLC1GLSLBITS bits;    // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // CLCxGLSL: CLCx GATE LOGIC INPUT SELECT LOW REGISTER
    
     /** 
     * @brief   CLCxGLSH: CLCx GATE LOGIC INPUT SELECT HIGH REGISTER inherited from device data sheet
     */
    union CLCxGLSH_u {
        struct tagCLC1GLSHBITS bits;    // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // CLCxGLSH: CLCx GATE LOGIC INPUT SELECT HIGH REGISTER

    /** @} */ // end of inheritance declarations **************************************
    
    typedef union CLCxCONL_u CLCxCONL_t;    // CLCxCONL: CLCx CONTROL REGISTER (LOW) data type
    typedef union CLCxCONH_u CLCxCONH_t;    // CLCxCONH: CLCx CONTROL REGISTER (HIGH) data type
    typedef union CLCxSEL_u CLCxSEL_t;      // CLCxSEL: CLCx INPUT MUX SELECT REGISTER data type
    typedef union CLCxGLSL_u CLCxGLSL_t;    // CLCxGLSL: CLCx GATE LOGIC INPUT SELECT LOW REGISTER data type
    typedef union CLCxGLSH_u CLCxGLSH_t;    // CLCxGLSH: CLCx GATE LOGIC INPUT SELECT HIGH REGISTER data type
    
     /***********************************************************************************
     * @struct  P33C_CLC_INSTANCE_s
     * @ingroup p33c-pral-clc-instance-properties
     * @brief   Abstracted set of Special Function Registers of a Configurable Logic Cell (CLC) instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of a 
     *  Configurable Logic Cell (CLC) peripheral instance. 
     *  Users can use this abstracted set of registers to capture register settings 
     *  from or write generic register settings to a specific instance of this 
     *  peripheral instance.
     **********************************************************************************/
    struct P33C_CLC_INSTANCE_s {
        
        CLCxCONL_t CLCxCONL;   ///< CLCxCONL: CLCx CONTROL REGISTER (LOW)
        CLCxCONH_t CLCxCONH;   ///< CLCxCONH: CLCx CONTROL REGISTER (HIGH)
        CLCxSEL_t  CLCxSEL;    ///< CLCxSEL: CLCx INPUT MUX SELECT REGISTER
        unsigned   : 16;       ///< (reserved/unused memory section)
        CLCxGLSL_t CLCxGLSL;   ///< CLCxGLSL: CLCx GATE LOGIC INPUT SELECT LOW REGISTER
        CLCxGLSH_t CLCxGLSH;   ///< CLCxGLSH: CLCx GATE LOGIC INPUT SELECT HIGH REGISTER
    
    }; ///< MULTI-PROCESS CLC INSTANCE SPECIAL FUNCTION REGISTER SET
    typedef struct P33C_CLC_INSTANCE_s P33C_CLC_INSTANCE_t; ///< MULTI-PROCESS CLC INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE
   
    /*********************************************************************************
     * @ingroup p33c-pral-clc-instance-methods
     * @param   pInstance: Peripheral instance index of type unsigned integer
     * @return  Pointer to start address if CLC instance special function register set of type P33C_CLC_INSTANCE_t 
     * @brief   Gets pointer to start address of CLC instance SFR set
     * 
     * @details
     *  This function returns the pointer to a CLC instance register set in the
     *  Special Function Register memory space. This pointer can be used to 
     *  directly write to/read from the Special Function Registers of the 
     *  CLC peripheral instance configuration.
     *
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     *  Please use @ref p33c_ClcInstance_Exists() to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     *
     * @see
     *  p33c_ClcInstance_Exists()
     *
     **********************************************************************************/
	#define p33c_ClcInstance_GetHandle(pInstance) (P33C_CLC_INSTANCE_t*)p33c_ClcInstance_Handles[(pInstance-1)]
    
      /*********************************************************************************
     * @ingroup p33c-pral-clc-instance-methods
     * @brief   Gets the validity of the CLC peripheral instance
     * @param   pInstance: Peripheral instance index of type unsigned integer
     * @return  true:  requested peripheral instance index does exist 
     * @return  false: requested peripheral instance index does not exist 
     * 
     * @details
     *  This function provides a guarding condition test to verify if a specific
     *  peripheral instance exists before accessing it.
     *
     **********************************************************************************/
    #define p33c_ClcInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_ClcInstances)) ? true : false)
    
#endif  /* End of P33C_CLC_INSTANCE_s */
#endif	/* End of P33C_CLC_SFR_DECLARATIONS_H */

// __________________________
// end of file
