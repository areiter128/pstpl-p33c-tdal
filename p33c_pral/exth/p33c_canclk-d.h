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
 * @file    p33c_canclk-d.h
 * @see     p33c_canclk.h
 * @brief   CAN Clock Configuration register abstraction data type declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_CANCLK_SFR_DECLARATIONS_H
#define	P33C_CANCLK_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file

#include "p33c_devices.h" // include dsPIC SMPS device identifier header file

#if (P33C_CANFD_COUNT > 0) // Hide file contents for devices without CAN

#ifndef P33C_OSC_MODULE_s

    /***********************************************************************************
     * @addtogroup  p33c-pral-canclk-inheritance
     * @extends     P33C_CANCLK_MODULE_s 
     * @{
     */

    /** 
     * @brief   CAN Clock Control Register inherited from device header file
     */
    union CANCLKCON_u {
        struct tagCANCLKCONBITS bits;
        uint16_t value;
    } __attribute__((packed));      ///< CANCLKCON: CAN CLOCK CONTROL REGISTER

    /** @} */ // end of inheritance declarations **************************************

    typedef union CANCLKCON_u CANCLKCON_t;  ///< CANCLKCON: CAN CLOCK CONTROL REGISTER data type
    
    /***********************************************************************************
     * @struct  P33C_CANCLK_MODULE_s
     * @ingroup p33c-pral-canclk-properties
     * @brief   Abstracted set of Special Function Registers of the CAN Clock module
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the CAN clock module. Users can use this abstracted data set of register
     *  values to capture most recent settings from or write new settings to the
     *  configuration registers of the module.
     *
     **********************************************************************************/
    struct P33C_CANCLK_MODULE_s {

        CANCLKCON_t CANCLKCON;  // CAN Clock Control Register
        
    };
    typedef struct P33C_CANCLK_MODULE_s P33C_CANCLK_MODULE_t;
    
    /*********************************************************************************
     * @ingroup p33c-pral-canclk-methods
     * @brief   Gets pointer to CAN Clock Module SFR set
     * @return  P33C_CANCLK_MODULE_t Pointer to CAN Clock module special function register set object 
     *  
     * @details
     *  This function returns the pointer to the CAN clock configuration  
     *  registers in Special Function Register memory space. This pointer can  
     *  be used to directly write to/read from the Special Function Registers
     *  of the CAN clock module configuration.
     *
     *********************************************************************************/
    #define p33c_CanClk_GetHandle() (P33C_CANCLK_MODULE_t*)&CANCLKCON

#endif // end of P33C_CANCLK_MODULE_s

#endif  /* #if (P33C_CANFD_COUNT > 0) */
#endif	/* End of P33C_CANCLK_SFR_DECLARATIONS_H */

// _____________________
// end of file
