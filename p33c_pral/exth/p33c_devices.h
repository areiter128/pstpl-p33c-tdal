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
 * @file   p33c_devices.h
 * @author M91406
 * @brief  List of additional, generalized device identifier filter macros
 * @details
 *  Additional abstraction macros for more flexible device selections 
 *  of device families and derivatives
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_DEVICE_IDENTIFIER_MACROS_H
#define	P33C_DEVICE_IDENTIFIER_MACROS_H

/**
 * @def     __P33C__
 * @ingroup p33c-pral-did
 * @brief   Digital Power Supply Digital Signal Controller Device Identification Macros
 * @details
 *  Some peripheral features must be tailored to the specific target 
 *  device selected at design time. 
 * 
 *  The device identification macros provided by this additional header 
 *  file allows detailed filtering:
 *
 *  - identification/ignoring of device family
 *  - identification/ignoring of device pin count
 *  - identification/ignoring of memory size
 * 
 * <b><u>Example</u></b><br>
 *  MPLAB X allows to identify selected target devices by using macros
 *  incorporating the part number of the device selected. The following
 *  example identifies dsPIC33CK32MP105 has been selected. This header
 *  file decodes the part number providing the following, additional
 *  device identification macros:
 * 
 *  - MPLAB X default macro: __dsPIC33CK32MP105__
 *  - XC16-PRAL Device IDs:  
 *     - __P33SMPS__
 *     - __P33SMPS_CK__
 *     - __P33SMPS_CK1__
 *     - __P33SMPS_CK105__
 *     - __P33SMPS_ARA__
 * 
 *  The following statement may be used to filter features tailoring
 *  code sections to the target device in question. Here, a user code
 *  section is tailored for devices of devices families Ara (dsPIC33CKxxMP10x)
 *  and Sagitta without CAN module (dsPIC33CKxxMP20x):
 * 
 *  @code{.c}
 *    #if defined (__P33SMPS_CK1__) || defined (__P33SMPS_CK2__)
 * 
 *      // [ some user code ]
 * 
 *    #endif
 *  @endcode
 * 
 */
#define __P33C__
#define __P33C_MP__

// ----------------------------------------------
// Gemini family of devices without CAN FD
#if defined (__dsPIC33CH64MP202__) || defined (__dsPIC33CH128MP202__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH202__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        28U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores available
    #define P33C_ADCAN_COUNT            12U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0000111111111111      // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000      // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP202S1__) || defined (__dsPIC33CH128MP202S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH202__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        28U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            11U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0000011111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP203__) || defined (__dsPIC33CH128MP203__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH203__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        36U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            15U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP203S1__) || defined (__dsPIC33CH128MP203S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH203__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        36U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            15U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP205__) || defined (__dsPIC33CH128MP205__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH205__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP205S1__) || defined (__dsPIC33CH128MP205S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH205__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK   0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK   0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP206__) || defined (__dsPIC33CH128MP206__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH206__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP206S1__) || defined (__dsPIC33CH128MP206S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH206__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP208__) || defined (__dsPIC33CH128MP208__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH208__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP208S1__) || defined (__dsPIC33CH128MP208S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH208__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#endif

// ----------------------------------------------
// Gemini family of devices with CAN FD
#if defined (__dsPIC33CH64MP502__) || defined (__dsPIC33CH128MP502__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH502__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        28U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores 
    #define P33C_ADCAN_COUNT            12U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0000111111111111      // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000      // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP502S1__) || defined (__dsPIC33CH128MP502S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH502__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        28U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            11U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0000011111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP503__) || defined (__dsPIC33CH128MP503__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH503__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        36U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            15U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP503S1__) || defined (__dsPIC33CH128MP503S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH503__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        36U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            15U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP505__) || defined (__dsPIC33CH128MP505__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH505__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP505S1__) || defined (__dsPIC33CH128MP505S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH505__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK   0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK   0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP506__) || defined (__dsPIC33CH128MP506__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH506__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP506S1__) || defined (__dsPIC33CH128MP506S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH506__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP508__) || defined (__dsPIC33CH128MP508__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH508__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIM__         // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH64MP508S1__) || defined (__dsPIC33CH128MP508S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH508__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_GEMINI__          // Device family name
    #define __P33SMPS_GEMINIS__         // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#endif

// ----------------------------------------------
// Sagittarius family of devices without CAN FD
#if defined (__dsPIC33CH256MP205__) || defined (__dsPIC33CH512MP205__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH205__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHEM__            // Device family ID main core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSM__    // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP205S1__) || defined (__dsPIC33CH512MP205S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH205__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHES__            // Device family ID secondary core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSS__    // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            15U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP206__) || defined (__dsPIC33CH512MP206__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH206__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHEM__            // Device family ID main core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSM__    // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP206S1__) || defined (__dsPIC33CH512MP206S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH206__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHES__            // Device family ID secondary core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSS__    // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP208__) || defined (__dsPIC33CH512MP208__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH208__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHEM__            // Device family ID main core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSM__    // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP208S1__) || defined (__dsPIC33CH512MP208S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH2__             // Device family ID with peripheral set code
    #define __P33SMPS_CH208__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHES__            // Device family ID secondary core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSS__    // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#endif

// ----------------------------------------------
// Sagittarius family of devices with CAN FD
#if defined (__dsPIC33CH256MP505__) || defined (__dsPIC33CH512MP505__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH505__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHEM__            // Device family ID main core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSM__    // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP505S1__) || defined (__dsPIC33CH512MP505S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH505__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHES__            // Device family ID secondary core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSS__    // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            15U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP506__) || defined (__dsPIC33CH512MP506__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH506__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHEM__            // Device family ID main core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSM__    // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP506S1__) || defined (__dsPIC33CH512MP506S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH506__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHES__            // Device family ID secondary core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSS__    // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP508__) || defined (__dsPIC33CH512MP508__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHM__             // Device family ID main core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH508__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHEM__            // Device family ID main core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSM__    // Device family name with MAIN core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             2U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              1U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              2U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              6U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         1U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CH256MP508S1__) || defined (__dsPIC33CH512MP508S1__)

    #define __P33SMPS_CH__              // Device family ID
    #define __P33SMPS_CHS__             // Device family ID secondary core
    #define __P33SMPS_CH5__             // Device family ID with peripheral set code
    #define __P33SMPS_CH508__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_CHE__             // Device family ID with "Extended" flag
    #define __P33SMPS_CHES__            // Device family ID secondary core with "Extended" flag
    #define __P33SMPS_SAGITTARIUS__     // Device family name
    #define __P33SMPS_SAGITTARIUSS__    // Device family name with SECONDARY core extension 
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             1U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             0U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              3U  // Number of PGAs
    #define P33C_OPA_COUNT              0U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              1U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              1U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              0U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              0U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              1U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              2U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             0U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Ara family of devices
#if defined (__dsPIC33CK32MP102__) || defined (__dsPIC33CK64MP102__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK1__             // Device family ID with peripheral set code
    #define __P33SMPS_CK102__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_ARA__             // Device family name
    #define __P33SMPS_PINCOUNT__        28U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              2U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            12U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0000111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP103__) || defined (__dsPIC33CK64MP103__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK1__             // Device family ID with peripheral set code
    #define __P33SMPS_CK103__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_ARA__             // Device family name
    #define __P33SMPS_PINCOUNT__        36U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP105__) || defined (__dsPIC33CK64MP105__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK1__             // Device family ID with peripheral set code
    #define __P33SMPS_CK105__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_ARA__             // Device family name
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               4U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              2U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             4U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            18U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000011  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Sagitta family of devices without CAN FD
#if defined (__dsPIC33CK32MP202__) || defined (__dsPIC33CK64MP202__) || defined (__dsPIC33CK128MP202__) || defined (__dsPIC33CK256MP202__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK2__             // Device family ID with peripheral set code
    #define __P33SMPS_CK202__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        28U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              2U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            12U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0000111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP203__) || defined (__dsPIC33CK64MP203__) || defined (__dsPIC33CK128MP203__) || defined (__dsPIC33CK256MP203__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK2__             // Device family ID with peripheral set code
    #define __P33SMPS_CK203__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        36U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP205__) || defined (__dsPIC33CK64MP205__) || defined (__dsPIC33CK128MP205__) || defined (__dsPIC33CK256MP205__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK2__             // Device family ID with peripheral set code
    #define __P33SMPS_CK205__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            19U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP206__) || defined (__dsPIC33CK64MP206__) || defined (__dsPIC33CK128MP206__) || defined (__dsPIC33CK256MP206__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK2__             // Device family ID with peripheral set code
    #define __P33SMPS_CK206__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            20U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000001111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK64MP208__) || defined (__dsPIC33CK128MP208__) || defined (__dsPIC33CK256MP208__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK2__             // Device family ID with peripheral set code
    #define __P33SMPS_CK208__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            24U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000011111111  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Sagitta family of devices with CAN FD
#if defined (__dsPIC33CK32MP502__) || defined (__dsPIC33CK64MP502__) || defined (__dsPIC33CK128MP502__) || defined (__dsPIC33CK256MP502__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK5__             // Device family ID with peripheral set code
    #define __P33SMPS_CK502__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        28U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              2U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            12U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b0000111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP503__) || defined (__dsPIC33CK64MP503__) || defined (__dsPIC33CK128MP503__) || defined (__dsPIC33CK256MP503__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK5__             // Device family ID with peripheral set code
    #define __P33SMPS_CK503__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        36U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            16U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000000  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP505__) || defined (__dsPIC33CK64MP505__) || defined (__dsPIC33CK128MP505__) || defined (__dsPIC33CK256MP505__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK5__             // Device family ID with peripheral set code
    #define __P33SMPS_CK505__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            19U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK32MP506__) || defined (__dsPIC33CK64MP506__) || defined (__dsPIC33CK128MP506__) || defined (__dsPIC33CK256MP506__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK5__             // Device family ID with peripheral set code
    #define __P33SMPS_CK506__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            20U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000001111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK64MP508__) || defined (__dsPIC33CK128MP508__) || defined (__dsPIC33CK256MP508__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK5__             // Device family ID with peripheral set code
    #define __P33SMPS_CK508__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTA__         // Device family name
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            1U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              3U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              2U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              4U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         3U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            24U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000011111111  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Sagitta+ family of devices without CAN FD
#if defined (__dsPIC33CK256MP305__) || defined (__dsPIC33CK512MP305__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK3__             // Device family ID with peripheral set code
    #define __P33SMPS_CH305__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAP__        // Device family name
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            19U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP306__) || defined (__dsPIC33CK512MP306__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK3__             // Device family ID with peripheral set code
    #define __P33SMPS_CH306__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAP__        // Device family name
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            20U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000001111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP308__) || defined (__dsPIC33CK512MP308__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK3__             // Device family ID with peripheral set code
    #define __P33SMPS_CK308__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAP__        // Device family name
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            24U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000011111111  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Sagitta+ family of devices with CAN FD
#if defined (__dsPIC33CK256MP605__) || defined (__dsPIC33CK512MP605__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK6__             // Device family ID with peripheral set code
    #define __P33SMPS_CK605__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAP__        // Device family name
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            19U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP606__) || defined (__dsPIC33CK512MP606__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK6__             // Device family ID with peripheral set code
    #define __P33SMPS_CK606__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAP__        // Device family name
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            20U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000001111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP608__) || defined (__dsPIC33CK512MP608__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK6__             // Device family ID with peripheral set code
    #define __P33SMPS_CK608__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAP__        // Device family name
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            24U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000011111111  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Octans+ family of devices with CAN FD
#if defined (__dsPIC33CK256MPT608__) || defined (__dsPIC33CK512MPT608__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK6__             // Device family ID with peripheral set code
    #define __P33SMPS_CK608__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_OCTANSP__         // Device family name
    #define __P33SMPS_PINCOUNT__      100U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               6U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              4U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances
    #define P33C_VP_COUNT               4U  // Number of virtual pins, not routed to package pins

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            24U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000011111111  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Sagitta++ family of devices without CAN FD
#if defined (__dsPIC33CK256MP405__) || defined (__dsPIC33CK512MP405__) || defined (__dsPIC33CK1024MP405__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK4__             // Device family ID with peripheral set code
    #define __P33SMPS_CK405__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            19U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP406__) || defined (__dsPIC33CK512MP406__) || defined (__dsPIC33CK1024MP406__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK4__             // Device family ID with peripheral set code
    #define __P33SMPS_CK406__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            20U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000001111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP408__) || defined (__dsPIC33CK512MP408__) || defined (__dsPIC33CK1024MP408__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK4__             // Device family ID with peripheral set code
    #define __P33SMPS_CK408__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            24U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000011111111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP410__) || defined (__dsPIC33CK512MP410__) || defined (__dsPIC33CK1024MP410__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK4__             // Device family ID with peripheral set code
    #define __P33SMPS_CK410__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        100U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            0U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            28U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000111111111111  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Sagitta++ family of devices with CAN FD
#if defined (__dsPIC33CK256MP705__) || defined (__dsPIC33CK512MP705__) || defined (__dsPIC33CK1024MP705__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK7__             // Device family ID with peripheral set code
    #define __P33SMPS_CK705__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        48U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            19U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000000111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP706__) || defined (__dsPIC33CK512MP706__) || defined (__dsPIC33CK1024MP706__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK7__             // Device family ID with peripheral set code
    #define __P33SMPS_CK706__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        64U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            20U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000000001111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP708__) || defined (__dsPIC33CK512MP708__) || defined (__dsPIC33CK1024MP708__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK7__             // Device family ID with peripheral set code
    #define __P33SMPS_CK708__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        80U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            24U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000000011111111  // Mask of available ADC inputs 16-n

#elif defined (__dsPIC33CK256MP710__) || defined (__dsPIC33CK512MP710__) || defined (__dsPIC33CK1024MP710__)

    #define __P33SMPS_CK__              // Device family ID
    #define __P33SMPS_CK7__             // Device family ID with peripheral set code
    #define __P33SMPS_CK710__           // Device family ID with peripheral set and pin-count code
    #define __P33SMPS_SAGITTAPP__       // Device family name
    #define __P33SMPS_PINCOUNT__        100U // Number of device pins

    #define P33C_UART_COUNT             3U  // Number of UART modules
    #define P33C_CANFD_COUNT            2U  // Number of CAN FD modules
    #define P33C_SENT_COUNT             2U  // Number of SENT modules
    #define P33C_PG_COUNT               8U  // Number of PWM generators
    #define P33C_PGA_COUNT              0U  // Number of PGAs
    #define P33C_OPA_COUNT              3U  // Number of Operational Amplifiers
    #define P33C_DAC_COUNT              6U  // Number of DACs/Comparators
    #define P33C_I2C_COUNT              3U  // Number of I2C interfaces
    #define P33C_SPI_COUNT              3U  // Number of SPI interfaces
    #define P33C_PTG_COUNT              1U  // Number of Peripheral Trigger Generator instances
    #define P33C_CRC_COUNT              1U  // Number of Cyclic Redundancy Check instances
    #define P33C_CLC_COUNT              8U  // Number of Configurable Logic Cell instances
    #define P33C_QEI_COUNT              3U  // Number of Quadrature Encoder Interfaces
    #define P33C_DMA_COUNT              8U  // Number of Direct Memory Access channels
    #define P33C_SCCP_COUNT             8U  // Number of Capture/Compare/Timer instances
    #define P33C_MCCP_COUNT             1U  // Number of Multiple Capture/Compare/PWM instances

    #define P33C_ADC_ADCMP_COUNT        4U  // Number of ADC Digital Comparators
    #define P33C_ADC_ADFL_COUNT         4U  // Number of ADC Digital Filters
    #define P33C_ADC_CORE_COUNT         5U  // Number of ADC Cores
    #define P33C_ADCAN_COUNT            28U // Number of analog inputs
    #define P33C_ADC_SHARED_CORE_INDEX  7U  // Artificially assigned index for shared ADC core

    #define REG_ADC_CHANNEL_L_MSK       0b1111111111111111  // Mask of available ADC inputs 0-15
    #define REG_ADC_CHANNEL_H_MSK       0b0000111111111111  // Mask of available ADC inputs 16-n

#endif

// ----------------------------
// Device Family-Specific Feature Flags
#if defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_SAGITTAPP__)

    #ifndef P33C_EDS           // Guard macro declaration as this macro may also be defined elsewhere
      #define P33C_EDS         // Define flag that this device supports extended data space (EDS) addressing
    #endif

#endif

// ----------------------------
// Trigger for UNSUPPORTED DEVICE compiler message
#if defined (__P33SMPS_ARA__) || defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAP__) || \
    defined (__P33SMPS_OCTANSP__) || defined (__P33SMPS_SAGITTAPP__) || \
    defined (__P33SMPS_GEMINI__) || defined (__P33SMPS_SAGITTARIUS__)

#else
    #pragma message "selected device not supported by this version of the peripheral register abstraction layer libraries"
#endif

#endif	/* P33C_DEVICE_IDENTIFIER_MACROS_H */

// __________________________
// end of file
