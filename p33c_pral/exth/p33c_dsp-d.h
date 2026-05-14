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
 * @file    p33c_dsp-d.h
 * @see	    p33c_dsp.h, p33c_dsp-f.h
 * @brief   Digital Signal Processor Driver Module peripheral register abstraction data type declarations
 * @author  M91406
 * @details
 * This additional header file contains defines for all required bit-settings of all related 
 * special function registers of a peripheral module and/or instance. 
 * This file is an additional header file on top of the generic device header file.
 */

#include "p33c_dsp-f.h" // include register flags header file

// This is a guard condition so that contents of this file are not included
// more than once. 
#ifndef P33C_DSP_SFR_DECLARATIONS_H
#define P33C_DSP_SFR_DECLARATIONS_H

// GENERIC DSP MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_DSP_CONFIG_s

    /***********************************************************************************
     * @addtogroup p33c-pral-dsp-inheritance
     * @extends P33C_DSP_CONFIG_s 
     * @{
     */

    /** 
     * @brief   Core Control Register inherited from device header file
     */
    union CORCON_u {
        struct tagCORCONBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // CORCON: CORE CONTROL REGISTER VALUE

    /** @} */ // end of inheritance declarations **************************************

    typedef union CORCON_u CORCON_t; // CORCON: CORE CONTROL REGISTER VALUE data type

    /*********************************************************************************
     * @ingroup p33c-pral-dsp-properties
     * @struct  P33C_DSP_CONFIG_s
     * @brief   Digital Signal Processor Configuration and Control Register Interface
     *********************************************************************************/

    struct P33C_DSP_CONFIG_s
    {
        CORCON_t CORCON; ///< CORCON: CORE CONTROL REGISTER VALUE
    }; 
    typedef struct P33C_DSP_CONFIG_s P33C_DSP_CONFIG_t; ///< CORCON: CORE CONTROL REGISTER

    /*********************************************************************************
     * @ingroup p33c-pral-dsp-methods
     * @brief   Gets pointer to DSP Module SFR set
     * @param   void
     * @return  struct P33C_DSP_CONFIG_s Pointer to DSP module special function register set object 
     *  
     * @details
     *      This function returns the pointer to the DSP configuration register 
     *    in Special Function Register memory space. This pointer can be used to 
     *    directly write to/read from the Special Function Registers of the DSP 
     *    peripheral module configuration.
     *********************************************************************************/
    #define p33c_Dsp_GetHandle() (P33C_DSP_CONFIG_t*)&CORCON
    
    /*********************************************************************************
     * @ingroup p33c-pral-dsp-methods
     * @brief   Bit mask for register compare operations, suppressing nondeterministic status bits
     * @return  Bit mask of type unsigned integer 
     *********************************************************************************/
    #define P33C_DSP_CONFIG_COMPARE 0xB0F3

#endif /* End of P33C_DSP_MODULE_s */
#endif /* End of P33C_DSP_SFR_DECLARATIONS_H */ 

// _________________________
// end of file
