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
 * @file    p33c_refclk-d.h
 * @see     p33c_refclk.h
 * @brief   Reference Oscillator Register Abstraction Data Type Declarations
 * @author  M91406
 * @date    October 20, 2022
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_REFCLOCK_SFR_DECLARATIONS_H
#define P33C_REFCLOCK_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file

// Guard declarations
#ifndef P33C_REFOCLK_CONFIG_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-refclk-inheritance
     * @extends     P33C_REFOCLK_CONFIG_s 
     * @{
     */

    /** 
     * @brief   Reference Clock Control Low register inherited from device header file
     */
    union REFOCONL_u {                   
        struct tagREFOCONLBITS bits;    ///< Data object Inherited from device data sheet
        uint16_t value;                 ///< 16-bit direct register value read/write access
    } __attribute__((packed));          ///< REFOCONL: REFERENCE CLOCK CONTROL REGISTER LOW

    /** 
     * @brief   Reference Clock Control High register inherited from device header file
     */
    union REFOCONH_u {                  
        struct tagREFOCONHBITS bits;    ///< Data object Inherited from device data sheet
        uint16_t value;                 ///< 16-bit direct register value read/write access              
    } __attribute__((packed));          ///< REFOCONL: REFERENCE CLOCK CONTROL REGISTER HIGH

    /** 
     * @brief Reference Oscillator Trim register inherited from device header file
     */
    union REFOTRIMH_u {                
        struct tagREFOTRIMHBITS bits;   ///< Data object Inherited from device data sheet
        uint16_t value;                 ///< 16-bit direct register value read/write access
    } __attribute__((packed));          ///< REFOCONL: REFERENCE OSCILLATOR TRIM REGISTER

    /** @} */ // end of inheritance declarations **************************************
    
    typedef union REFOCONL_u REFOCONL_t;   ///< Data type declaration of @ref REFOCONL_u
    typedef union REFOCONH_u REFOCONH_t;   ///< Data type declaration of @ref REFOCONH_u
    typedef union REFOTRIMH_u REFOTRIMH_t; ///< Data type declaration of @ref REFOTRIMH_u
    
    /***********************************************************************************
     * @ingroup p33c-pral-refclk-properties
     * @struct  P33C_REFOCLK_CONFIG_s
     * @brief   Reference Clock Special Function Register Abstraction Data Set
     **********************************************************************************/
    struct P33C_REFOCLK_CONFIG_s {        
        REFOCONL_t  REFOCONL;   ///< Abstracted Reference Clock Control Register, Low
        REFOCONH_t  REFOCONH;   ///< Abstracted Reference Clock Control Register, High
        REFOTRIMH_t REFOTRIMH;  ///< Abstracted Reference Clock Trim Register
    } __attribute__((aligned));
    typedef struct P33C_REFOCLK_CONFIG_s P33C_REFOCLK_CONFIG_t; ///< Reference Clock Configuration Data Object

    /*********************************************************************************
     * @ingroup p33c-pral-refclk-methods
     * @brief   Gets pointer to Reference Clock Module SFR set
     * @return  P33C_REFOCLK_CONFIG_t: Pointer to Reference Clock module special 
     *                                 function register data set object 
     *  
     * @details
     *  This function returns the pointer to the Reference Clock configuration 
     *  register in Special Function Register memory space. This pointer can 
     *  be used to directly write to/read from the Special Function Registers
     *  of the Reference Clock module configuration.
     *********************************************************************************/
    #define p33c_RefClk_GetHandle() (P33C_REFOCLK_CONFIG_t*)&REFOCONL

#endif /* End of #ifndef P33C_REFOCLK_CONFIG_s */
#endif /* End of P33C_REFCLOCK_SFR_DECLARATIONS_H */

// __________________
// end of file
