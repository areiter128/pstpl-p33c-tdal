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
 * @file    p33c_osc-d.h
 * @see     p33c_osc.h
 * @brief   Oscillator register abstraction data type declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_OSCILLATOR_SFR_DECLARATIONS_H
#define P33C_OSCILLATOR_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file

#include "p33c_devices.h" // include dsPIC SMPS device identifier header file

#ifndef P33C_OSC_MODULE_s

    /***********************************************************************************
     * @addtogroup  p33c-pral-osc-inheritance
     * @extends     P33C_OSC_MODULE_s 
     * @{
     */

    /** 
     * @brief   Oscillator Module Control Register inherited from device header file
     */
    union OSCCON_u {
        struct tagOSCCONBITS bits;  ///< Register bit-field
        uint16_t value;             ///< 16-bit wide register value
    } __attribute__((packed));      ///< OSCCON: OSCILLATOR CONTROL REGISTER

    /** 
     * @brief   Oscillator Module Clock Divider Register inherited from device header file
     */
    union CLKDIV_u {
        struct tagCLKDIVBITS bits;
        uint16_t value;
    } __attribute__((packed));      ///< CLKDIV: CLOCK DIVIDER REGISTER

    /** 
     * @brief   Oscillator Module PLL Feedback Divider Register inherited from device header file
     */
    union PLLFBD_u {
        struct tagPLLFBDBITS bits;
        uint16_t value;
    } __attribute__((packed));      ///< PLLFBD: PLL FEEDBACK DIVIDER REGISTER

    /** 
     * @brief   Oscillator Module PLL Output Divider Register inherited from device header file
     */
    union PLLDIV_u {
        struct tagPLLDIVBITS bits;
        uint16_t value;
    } __attribute__((packed));      ///<  PLLDIV: PLL OUTPUT DIVIDER REGISTER

    /** 
     * @brief   FRC Oscillator Tuning Register inherited from device header file
     */
    #if (!defined (__P33SMPS_CHS__)) // Hide register contents for secondary core devices
    union OSCTUN_u {
        struct tagOSCTUNBITS bits;
        uint16_t value;
    } __attribute__((packed));      ///<  OSCTUN: FRC OSCILLATOR TUNING REGISTER
    #endif

    /** @} */ // end of inheritance declarations **************************************

    typedef union OSCCON_u OSCCON_t;        ///< OSCCON: OSCILLATOR CONTROL REGISTER data type
    typedef union CLKDIV_u CLKDIV_t;        ///< CLKDIV: CLOCK DIVIDER REGISTER data type
    typedef union PLLFBD_u PLLFBD_t;        ///< PLLFBD: PLL FEEDBACK DIVIDER REGISTER data type
    typedef union PLLDIV_u PLLDIV_t;        ///<  PLLDIV: PLL OUTPUT DIVIDER REGISTER data type
    #if (!defined (__P33SMPS_CHS__))        // Hide register contents for secondary core devices
    typedef union OSCTUN_u OSCTUN_t;        ///<  OSCTUN: FRC OSCILLATOR TUNING REGISTER data type
    #endif

    /***********************************************************************************
     * @struct  P33C_OSC_MODULE_s
     * @ingroup p33c-pral-osc-properties
     * @brief   Abstracted set of Special Function Registers of the Oscillator module
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the oscillator module. Users can use this abstracted data set of register
     *  values to capture most recent settings from or write new settings to the
     *  configuration registers of the module.
     **********************************************************************************/
    struct P33C_OSC_MODULE_s {

        OSCCON_t   OSCCON;  // Main Oscillator Control Register
        CLKDIV_t   CLKDIV;  // Main Clock Divider Register
        PLLFBD_t   PLLFBD;  // PLL Feedback Divider Register
        PLLDIV_t   PLLDIV;  // PLL Output Divider Register
        #if (!defined (__P33SMPS_CHS__)) // Hide register contents for secondary core devices
        OSCTUN_t   OSCTUN;  // FRC Oscillator Tuning Register
        #else
        uint16_t    :16;    // (not implemented)
        #endif
        
    };

    typedef struct P33C_OSC_MODULE_s P33C_OSC_MODULE_t; ///< Main Oscillator Module Register Set data type
    
    /*********************************************************************************
     * @ingroup p33c-pral-osc-methods
     * @brief   Gets pointer to Oscillator Module SFR set
     * @return  P33C_OSC_MODULE_t Pointer to Oscillator module special function register set object 
     *  
     * @details
     *  This function returns the pointer to the Oscillator configuration  
     *  registers in Special Function Register memory space. This pointer can  
     *  be used to directly write to/read from the Special Function Registers
     *  of the oscillator module configuration.
     *********************************************************************************/
    #define p33c_Osc_GetHandle() (P33C_OSC_MODULE_t*)&OSCCON

#endif /* End of P33C_OSC_MODULE_s */
#endif /* End of P33C_OSCILLATOR_SFR_DECLARATIONS_H */

// __________________________
// end of file
