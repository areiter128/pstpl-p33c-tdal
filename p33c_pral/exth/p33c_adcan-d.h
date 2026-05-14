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

/*
 * @file    p33c_adcan-d.h
 * @see     p33c_adcan.h, p33c_adcan-f.h
 * @author  M91406
 * @brief   Analog input declaration data type declarations
 * @date    July 24, 2023
 */

// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef P33C_ADCAN_SFR_DECLARATIONS_H
#define	P33C_ADCAN_SFR_DECLARATIONS_H

#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "p33c_devices.h"
#include "p33c_pinmap.h" // include generic GPIO data type declaration header file

/*********************************************************************************
 * @brief   ADC input pin identifier providing port, pin and remappable pin IDs
 * @details
 *  The General Purpose Input/Output abstraction module provides additional
 *  helper data objects for dynamic routing of signals to/from target device
 *  inputs and outputs.
 *
 *  Data object acAnIo is an array of data objects of type GPIO_PORT_PIN_t,
 *  listing all GPIO information of all available analog inputs in order of
 *  their respective analog input pin index
 *
 *  <b> Example: </b>
 *
 *  AN3 is located at target device input pin RB7. Hence, the data object
 *  stored in array adcAnIo[3] is the port-pin data object of port pin RB7
 *  with the port index = 1, pin index = 7 and RP-ID of the remappable pin
 *  function = 72.
 **********************************************************************************/
#if defined (__P33SMPS_ARA__) || defined (__P33SMPS_SAGITTA__)

  #if  (__P33SMPS_PINCOUNT__ == 28U)
    static const P33C_GPIO_t* p33c_AdcAnIo[12] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9
    };
    static const int16_t p33c_AdcAnCoreAssignment[12] = {0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 36U)
    static const P33C_GPIO_t* p33c_AdcAnIo[16] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3
    };
    static const int16_t p33c_AdcAnCoreAssignment[16] = {0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 48U)
    static const P33C_GPIO_t* p33c_AdcAnIo[19] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10
    };
    static const int16_t p33c_AdcAnCoreAssignment[19] = {0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 64U)
    static const P33C_GPIO_t* p33c_AdcAnIo[20] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10, &PIN_RD11
    };
    static const int16_t p33c_AdcAnCoreAssignment[20] = {0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 80U)
    static const P33C_GPIO_t* p33c_AdcAnIo[24] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10, &PIN_RD11, &PIN_RE0, &PIN_RE1, &PIN_RE2, &PIN_RE3
    };
    static const int16_t p33c_AdcAnCoreAssignment[24] = {0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 100U)
    static const P33C_GPIO_t* p33c_AdcAnIo[27] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10, &PIN_RD11, &PIN_RE0, &PIN_RE1, &PIN_RE2, &PIN_RE3,
        &PIN_RF6, &PIN_RF7, &PIN_RF8
    };
    static const int16_t p33c_AdcAnCoreAssignment[27] = {0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #endif

#elif defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_SAGITTAPP__)

  #if  (__P33SMPS_PINCOUNT__ == 48U)
    static const P33C_GPIO_t* p33c_AdcAnIo[19] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10
    };
    static const int16_t p33c_AdcAnCoreAssignment[19] = {0, 1, 2, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 64U)
    static const P33C_GPIO_t* p33c_AdcAnIo[20] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10, &PIN_RD11
    };
    static const int16_t p33c_AdcAnCoreAssignment[20] = {0, 1, 2, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 80U)
    static const P33C_GPIO_t* p33c_AdcAnIo[24] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10, &PIN_RD11, &PIN_RE0, &PIN_RE1, &PIN_RE2, &PIN_RE3
    };
    static const int16_t p33c_AdcAnCoreAssignment[24] = {0, 1, 2, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #elif  (__P33SMPS_PINCOUNT__ == 100U)
    static const P33C_GPIO_t* p33c_AdcAnIo[27] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10, &PIN_RD11, &PIN_RE0, &PIN_RE1, &PIN_RE2, &PIN_RE3,
        &PIN_RF6, &PIN_RF7, &PIN_RF8
    };
    static const int16_t p33c_AdcAnCoreAssignment[27] = {0, 1, 2, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

  #endif

#elif (defined (__P33SMPS_OCTANSP__))

  #if  (__P33SMPS_PINCOUNT__ == 100U)
    static const P33C_GPIO_t* p33c_AdcAnIo[24] = {
        &PIN_RA0, &PIN_RB2, &PIN_RB7, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RA2, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC3,
        &PIN_RC7, &PIN_RC6, &PIN_RD10, &PIN_RD11, &PIN_RE0, &PIN_RE1, &PIN_RE2, &PIN_RE3
    };
    static const int16_t p33c_AdcAnCoreAssignment[24] = {0, 1, 2, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
  #endif

#elif (defined (__P33SMPS_GEMINI__) || defined (__P33SMPS_SAGITTARIUS__)) && defined (__P33SMPS_CHM__)

  #if  (__P33SMPS_PINCOUNT__ == 28U)
    static const P33C_GPIO_t* p33c_AdcAnIo[12] = {
        &PIN_RA0, &PIN_RA1, &PIN_RA2, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RB7, &PIN_RB8, &PIN_RB9
    };
    static const int16_t p33c_AdcAnCoreAssignment[12] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

  #elif  (__P33SMPS_PINCOUNT__ == 36U)
    static const P33C_GPIO_t* p33c_AdcAnIo[15] = {
        &PIN_RA0, &PIN_RA1, &PIN_RA2, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RB7, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2
    };
    static const int16_t p33c_AdcAnCoreAssignment[15] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

  #elif  (__P33SMPS_PINCOUNT__ == 48U)
    static const P33C_GPIO_t* p33c_AdcAnIo[16] = {
        &PIN_RA0, &PIN_RA1, &PIN_RA2, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RB7, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC7
    };
    static const int16_t p33c_AdcAnCoreAssignment[16] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

  #elif  (__P33SMPS_PINCOUNT__ == 64U)
    static const P33C_GPIO_t* p33c_AdcAnIo[16] = {
        &PIN_RA0, &PIN_RA1, &PIN_RA2, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RB7, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC7
    };
    static const int16_t p33c_AdcAnCoreAssignment[16] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

  #elif  (__P33SMPS_PINCOUNT__ == 80U)
    static const P33C_GPIO_t* p33c_AdcAnIo[16] = {
        &PIN_RA0, &PIN_RA1, &PIN_RA2, &PIN_RA3, &PIN_RA4, &PIN_RB0, &PIN_RB1, &PIN_RB2,
        &PIN_RB3, &PIN_RB7, &PIN_RB8, &PIN_RB9, &PIN_RC0, &PIN_RC1, &PIN_RC2, &PIN_RC7
    };
    static const int16_t p33c_AdcAnCoreAssignment[16] = { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

  #endif

#elif (defined (__P33SMPS_GEMINI__) || defined (__P33SMPS_SAGITTARIUS__)) && defined (__P33SMPS_CHS__)

  #if  (__P33SMPS_PINCOUNT__ == 28U)
    static const P33C_GPIO_t* p33c_AdcAnIo[19] = {
        &PIN_RA3, &PIN_RA4, &PIN_NONE, &PIN_RB2, &PIN_RB1, &PIN_RB0, &PIN_RB7, &PIN_RB8,
        &PIN_NONE, &PIN_RB4, &PIN_NONE, &PIN_NONE, &PIN_NONE, &PIN_NONE, &PIN_NONE, &PIN_RA1,
        &PIN_RA2, &PIN_NONE, &PIN_RB3
    };
    static const int16_t p33c_AdcAnCoreAssignment[19] = { 0, 1, 7, 7, 7, 7, 7, 7, -1, 7, -1, -1, -1, -1, -1, 7, 7, -1, 7 };

#elif  (__P33SMPS_PINCOUNT__ == 36U)
    static const P33C_GPIO_t* p33c_AdcAnIo[19] = {
        &PIN_RA3, &PIN_RA4, &PIN_NONE, &PIN_RB2, &PIN_RB1, &PIN_RB0, &PIN_RB7, &PIN_RB8,
        &PIN_RC3, &PIN_RB4, &PIN_RC0, &PIN_NONE, &PIN_NONE, &PIN_NONE, &PIN_NONE, &PIN_RA1,
        &PIN_RA2, &PIN_NONE, &PIN_RB3
    };
    static const int16_t p33c_AdcAnCoreAssignment[19] = { 0, 1, 7, 7, 7, 7, 7, 7,  7, 7,  7, -1, -1, -1, -1, 7, 7, -1, 7 };

  #elif  (__P33SMPS_PINCOUNT__ == 48U)
    static const P33C_GPIO_t* p33c_AdcAnIo[19] = {
        &PIN_RA3, &PIN_RA4, &PIN_NONE, &PIN_RB2, &PIN_RB1, &PIN_RB0, &PIN_RB7, &PIN_RB8,
        &PIN_RC3, &PIN_RB4, &PIN_RC0, &PIN_RC6, &PIN_RC7, &PIN_RD10, &PIN_NONE, &PIN_RA1,
        &PIN_RA2, &PIN_NONE, &PIN_RB3
    };
    static const int16_t p33c_AdcAnCoreAssignment[19] = { 0, 1, 7, 7, 7, 7, 7, 7,  7, 7,  7,  7,  7,  7, -1, 7, 7, -1, 7 };

  #elif  (__P33SMPS_PINCOUNT__ == 64U)
    static const P33C_GPIO_t* p33c_AdcAnIo[19] = {
        &PIN_RA3, &PIN_RA4, &PIN_NONE, &PIN_RB2, &PIN_RB1, &PIN_RB0, &PIN_RB7, &PIN_RB8,
        &PIN_RC3, &PIN_RB4, &PIN_RC0, &PIN_RC6, &PIN_RC7, &PIN_RD10, &PIN_RD12, &PIN_RA1,
        &PIN_RA2, &PIN_RD11, &PIN_RB3
    };
    static const int16_t p33c_AdcAnCoreAssignment[19] = { 0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

  #elif  (__P33SMPS_PINCOUNT__ == 80U)
    static const P33C_GPIO_t* p33c_AdcAnIo[19] = {
        &PIN_RA3, &PIN_RA4, &PIN_NONE, &PIN_RB2, &PIN_RB1, &PIN_RB0, &PIN_RB7, &PIN_RB8,
        &PIN_RC3, &PIN_RB4, &PIN_RC0, &PIN_RC6, &PIN_RC7, &PIN_RD10, &PIN_RD12, &PIN_RA1,
        &PIN_RA2, &PIN_RD11, &PIN_RB3
    };
    static const int16_t p33c_AdcAnCoreAssignment[19] = { 0, 1, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 };

  #endif

#endif /* End of device selection */

    /***********************************************************************************
 * @ingroup p33c-pral-adcan-constants
 * @brief   ADC input trigger sources
 ***********************************************************************************/
enum P33C_ADCAN_TRGSRC_e {

    ADCAN_TRGSRC_ADTRG31    = 0b11111,  ///< External ADC trigger 31 (PPS Input)
    #if defined (CLC2CONL)
    ADCAN_TRGSRC_PTG        = 0b11110,  ///< Programmable Trigger Generator
    #endif
    #if defined (CLC2CONL)
    ADCAN_TRGSRC_CLC2       = 0b11101,  ///< Configurable Logic Cell #2
    #endif
    #if defined (CLC1CONL)
    ADCAN_TRGSRC_CLC1       = 0b11100,  ///< Configurable Logic Cell #1
    #endif
    #if defined (APCLKCON)
        #if defined(APG4CONL)
        ADCAN_TRGSRC_APWM4_TRG2  = 0b11011,  ///< APWM4 Trigger 2
        ADCAN_TRGSRC_APWM4_TRG1  = 0b11010,  ///< APWM4 Trigger 1
        #endif
        #if defined(APG3CONL)
        ADCAN_TRGSRC_APWM3_TRG2  = 0b11001,  ///< APWM3  Trigger 2
        ADCAN_TRGSRC_APWM3_TRG1  = 0b11000,  ///< APWM3  Trigger 1
        #endif
        #if defined(APG2CONL)
        ADCAN_TRGSRC_APWM2_TRG2  = 0b10111,  ///< APWM2 Trigger 2
        ADCAN_TRGSRC_APWM2_TRG1  = 0b10110,  ///< APWM2 Trigger 1
        #endif
        #if defined(APG1CONL)
        ADCAN_TRGSRC_APWM1_TRG2  = 0b10101,  ///< APWM1 Trigger 2
        ADCAN_TRGSRC_APWM1_TRG1  = 0b10100,  ///< APWM1 Trigger 2
        #endif
    #else
        #if defined (CCP9CON1L)
        ADCAN_TRGSRC_CCP9       = 0b11011,  ///< Input Capture/Output Compare #9
        #endif
        #if defined (CCP7CON1L)
        ADCAN_TRGSRC_CCP7       = 0b11010,  ///< Input Capture/Output Compare #7
        #endif
        #if defined (CCP6CON1L)
        ADCAN_TRGSRC_CCP6       = 0b11001,  ///< Input Capture/Output Compare #6
        #endif
        #if defined (CCP5CON1L)
        ADCAN_TRGSRC_CCP5       = 0b11000,  ///< Input Capture/Output Compare #5
        #endif
        #if defined (CCP4CON1L)
        ADCAN_TRGSRC_CCP4       = 0b10111,  ///< Input Capture/Output Compare #4
        #endif
        #if defined (CCP3CON1L)
        ADCAN_TRGSRC_CCP3       = 0b10110,  ///< Input Capture/Output Compare #3
        #endif
        #if defined (CCP2CON1L)
        ADCAN_TRGSRC_CCP2       = 0b10101,  ///< Input Capture/Output Compare #2
        #endif
        #if defined (CCP1CON1L)
        ADCAN_TRGSRC_CCP1       = 0b10100,  ///< Input Capture/Output Compare #1
        #endif
    #endif
    #if defined (PG8CONL)
    ADCAN_TRGSRC_PWM8_TRG2  = 0b10011,  ///< PWM8 Trigger 2
    ADCAN_TRGSRC_PWM8_TRG1  = 0b10010,  ///< PWM8 Trigger 1
    #endif
    #if defined (PG7CONL)
    ADCAN_TRGSRC_PWM7_TRG2  = 0b10001,  ///< PWM7 Trigger 2
    ADCAN_TRGSRC_PWM7_TRG1  = 0b10000,  ///< PWM7 Trigger 1
    #endif
    #if defined (PG6CONL)
    ADCAN_TRGSRC_PWM6_TRG2  = 0b01111,  ///< PWM6 Trigger 2
    ADCAN_TRGSRC_PWM6_TRG1  = 0b01110,  ///< PWM6 Trigger 1
    #endif
    #if defined (PG5CONL)
    ADCAN_TRGSRC_PWM5_TRG2  = 0b01101,  ///< PWM5 Trigger 2
    ADCAN_TRGSRC_PWM5_TRG1  = 0b01100,  ///< PWM5 Trigger 1
    #endif
    #if defined (PG4CONL)
    ADCAN_TRGSRC_PWM4_TRG2  = 0b01011,  ///< PWM4 Trigger 2
    ADCAN_TRGSRC_PWM4_TRG1  = 0b01010,  ///< PWM4 Trigger 1
    #endif
    #if defined (PG3CONL)
    ADCAN_TRGSRC_PWM3_TRG2  = 0b01001,  ///< PWM3 Trigger 2
    ADCAN_TRGSRC_PWM3_TRG1  = 0b01000,  ///< PWM3 Trigger 1
    #endif
    #if defined (PG2CONL)
    ADCAN_TRGSRC_PWM2_TRG2  = 0b00111,  ///< PWM2 Trigger 2
    ADCAN_TRGSRC_PWM2_TRG1  = 0b00110,  ///< PWM2 Trigger 1
    #endif
    #if defined (PG1CONL)
    ADCAN_TRGSRC_PWM1_TRG2  = 0b00101,  ///< PWM1 Trigger 2
    ADCAN_TRGSRC_PWM1_TRG1  = 0b00100,  ///< PWM1 Trigger 1
    #endif
    ADCAN_TRGSRC_LVLSW_TRG  = 0b00010,  ///< Level Software Trigger
    ADCAN_TRGSRC_COMSW_TRG  = 0b00001,  ///< Common Software Trigger
    ADCAN_TRGSRC_NO_TRIGGER = 0b00000   ///< No trigger is enabled

};
typedef enum P33C_ADCAN_TRGSRC_e P33C_ADCAN_TRGSRC_t;

#endif	/* End of P33C_ADCAN_SFR_DECLARATIONS_H */

// _______________________
// end of file
