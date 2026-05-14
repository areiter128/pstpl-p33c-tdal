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
 * @file    p33c_aclk-d.h
 * @see     p33c_aclk.h
 * @brief   Auxiliary Clock register abstraction data type declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_AUXCLOCK_SFR_DECLARATIONS_H
#define	P33C_AUXCLOCK_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  

#ifndef P33C_ACLK_CONFIG_s

    /***********************************************************************************
     * @addtogroup  p33c-pral-aclk-inheritance
     * @extends     P33C_ACLK_CONFIG_s 
     * @{
     */

    /** 
     * @brief   Auxiliary Clock Control Register inherited from device data sheet
     */
    union ACLKCON1_u {
        struct tagACLKCON1BITS bits; // Register bit-field
        uint16_t value;              // 16-bit wide register value
    } __attribute__((packed));       // ACLKCON1: AUXILIARY CLOCK CONTROL REGISTER

    /** 
     * @brief   Auxiliary PLL Feedback Divider Register inherited from device data sheet
     */
    union APLLFBD1_u {
        struct tagAPLLFBD1BITS bits; // Register bit-field
        uint16_t value;              // 16-bit wide register value
    } __attribute__((packed));       //  APLLFBD1: APLL FEEDBACK DIVIDER REGISTER

    /** 
     * @brief   Auxiliary PLL Output Divider Register inherited from device data sheet
     */
    union APLLDIV1_u {
        struct tagAPLLDIV1BITS bits; // Register bit-field
        uint16_t value;              // 16-bit wide register value
    } __attribute__((packed));       // APLLDIV1: APLL OUTPUT DIVIDER REGISTER

    /** @} */ // end of inheritance declarations **************************************

    typedef union ACLKCON1_u ACLKCON1_t;
    typedef union APLLFBD1_u APLLFBD1_t;
    typedef union APLLDIV1_u APLLDIV1_t;

    /***********************************************************************************
     * @struct  P33C_ACLK_CONFIG_s
     * @ingroup p33c-pral-aclk-properties
     * @brief   Abstracted set of Special Function Registers of the Auxiliary Clock Module
     * @details
     *  This structure defines an abstracted set of Special Function Registers of the 
     *  Auxiliary Clock (ACLK) module. Users can use this abstracted data set of register
     *  values to capture most recent settings from or write new settings to the
     *  configuration registers of the module.
     * 
     **********************************************************************************/
    
    struct P33C_ACLK_CONFIG_s {
        
        ACLKCON1_t ACLKCON1;  // Auxiliary Oscillator Control Register
        APLLFBD1_t APLLFBD1;  // Auxiliary PLL Feedback Divider Register
        APLLDIV1_t APLLDIV1;  // Auxiliary PLL Output Divider Register
        
    };
    typedef struct P33C_ACLK_CONFIG_s P33C_ACLK_CONFIG_t;

    /*********************************************************************************
     * @ingroup p33c-pral-aclk-methods
     * @brief   Gets pointer to Auxiliary Clock Module SFR set
     * @return  P33C_ACLK_CONFIG_t: Pointer to Auxiliary Clock module special function register set object 
     *  
     * @details
     *  This function returns the pointer to the Auxiliary Clock configuration  
     *  register in Special Function Register memory space. This pointer can  
     *  be used to directly write to/read from the Special Function Registers
     *  of the auxiliary clock module configuration.
     * 
     *********************************************************************************/
    #define p33c_Aclk_GetHandle() (P33C_ACLK_CONFIG_t*)&ACLKCON1

#endif // and of P33C_ACLK_CONFIG_s
#endif	/* End of P33C_AUXCLOCK_SFR_DECLARATIONS_H */

// ______________________________
// end of file
