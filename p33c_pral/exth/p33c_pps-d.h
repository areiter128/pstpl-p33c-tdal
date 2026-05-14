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
 * @file    p33c_pps-d.h
 * @see     p33c_pps.h
 * @author  M91406
 * @brief   Peripheral Pin Select (PPS) register abstraction data type declarations
 * @details
 *  This additional header file contains defines for all required bit-settings of all related
 *  special function registers of a peripheral module and/or instance.
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef P33C_PPS_SFR_DECLARATIONS_H
#define P33C_PPS_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file
#include "p33c_devices.h" // include dsPIC33 device identification header file

/*********************************************************************************
 * @ingroup p33c-pral-pps-constants-constants
 * @brief   Start index of RP device pins
 **********************************************************************************/
#define RP_PINNO_MIN		32U ///< Start index of remappable device pins (RPx)

/*********************************************************************************
 * @ingroup p33c-pral-pps-constants-constants
 * @brief   End index of RP device pins.
 * @note    The value of this macro may change with the selected device type and pin-count.
 **********************************************************************************/
#define RP_PINNO_MAX        71U ///< End index of remappable device pins (RPx)

#if defined (__P33SMPS_ARA__)
  #undef  RP_PINNO_MAX
  #define RP_PINNO_MAX 77U ///< End index of remappable device pins (RPx)
#elif  defined (__P33SMPS_SAGITTA__)
  #undef  RP_PINNO_MAX
  #define RP_PINNO_MAX 79U ///< End index of remappable device pins (RPx)
#elif  defined (__P33SMPS_SAGITTAP__)
  #undef  RP_PINNO_MAX
  #define RP_PINNO_MAX 79U ///< End index of remappable device pins (RPx)
#elif  defined (__P33SMPS_SAGITTAPP__)
  #undef  RP_PINNO_MAX
  #define RP_PINNO_MAX 99U ///< End index of remappable device pins (RPx)
#elif  defined (__P33SMPS_OCTANSP__)
  #undef  RP_PINNO_MAX
  #define RP_PINNO_MAX 71U ///< End index of remappable device pins (RPx)
#elif  defined (__P33SMPS_GEMINI__)
  #undef  RP_PINNO_MAX
  #define RP_PINNO_MAX 71U ///< End index of remappable device pins (RPx)
#elif  defined (__P33SMPS_SAGITTARIUS__)
  #undef  RP_PINNO_MAX
  #define RP_PINNO_MAX 71U ///< End index of remappable device pins (RPx)
#else
  #pragma message "-- error: selected device not supported by peripheral pin select register abstraction module"
#endif

/*********************************************************************************
 * @ingroup p33c-pral-pps-constants-constants
 * @brief   Start index of virtual RP device pins
 **********************************************************************************/
#define RPV_PINNO_MIN	176U ///< Start index of vitual remappable device pins (VRPx)

#define PPS_RPVxR(x)    (uint8_t*)(((uint16_t)&RPOR24)+x)
#define PPS_RPV0R       (uint8_t*)&RPOR24
#define PPS_RPV1R       (uint8_t*)&RPOR24+1
#define PPS_RPV2R       (uint8_t*)&RPOR25
#define PPS_RPV3R       (uint8_t*)&RPOR25+1
#define PPS_RPV4R       (uint8_t*)&RPOR25
#define PPS_RPV5R       (uint8_t*)&RPOR25+1

#define PPS_RPV(x)      (uint8_t)(RPV_PINNO_MIN + x)
#define PPS_RPV0        (uint8_t)176
#define PPS_RPV1        (uint8_t)177
#define PPS_RPV2        (uint8_t)178
#define PPS_RPV3        (uint8_t)179
#define PPS_RPV4        (uint8_t)180
#define PPS_RPV5        (uint8_t)181

/*********************************************************************************
 * @ingroup p33c-pral-pps-constants-constants
 * @brief   End index of virtual RP device pins
 **********************************************************************************/
#define RPV_PINNO_MAX	181U ///< End index of vitual remappable device pins (VRPx)

/*********************************************************************************
 * @addtogroup p33c-pral-pps-constants-input
 * @{
 * @details
 * Peripheral Pin Select Input Sources specify the peripheral function
 * mapped to a specific device input pin. Each available input source
 * has its own input register location to which the desired RP number
 * of the device pin must be written to. The listed macros can be used
 * to write the RP pin number to the PPS Input Source register.
 *
 * <p><b>Example</b></p>
 *  Device pin RC2 should be assigned as UART1 Receive input.
 *  The input source register location of the UART1 Receive
 *  input configuration is the low-byte of register RPINR18.
 *  The device RP number of port pin RC2 is RP50.
 *
 * <b><u>Example 1</u></b>
 *  shows the direct register access method, where the device
 *  RP pin index is directly written to the RPINRx register of
 *  the desired peripheral function:
 *
 * @code {.c}
 *
 *  *PPSI_U1RX = 50; // Assign pin RP50 to UART1 RX (Example 1)
 *
 * @endcode
 *
 * <b><u>Example 2</u></b>
 *  shows the usage of the p33c_pps API function, where the
 *  device RP pin index is written to the RPINRx register of
 *  the desired peripheral function by calling function
 *  p33c_PPS_MapInput(x, y):
 *
 * @code {.c}
 *
 *  p33c_PPS_MapInput(50, PPSI_U1RX); // Assign pin RP50 to UART1 RX (Example 2)
 *
 * @endcode
 *
 * @note
 * Not all peripheral functions are available on all devices, and the list
 * captured in this documentation may not be complete. Please review
 * the target device data sheet as well as the header file code directly
 * for more information.
 *
 * @see
 *  p33c_pps.h
 **********************************************************************************/

#define PPSI_INT1       (uint8_t*)&RPINR0+1  ///< External Interrupt 1
#define PPSI_INT2	    (uint8_t*)&RPINR1    ///< External Interrupt 2
#define PPSI_INT3	    (uint8_t*)&RPINR1+1  ///< External Interrupt 3
#define PPSI_T1CK	    (uint8_t*)&RPINR2+1  ///< Timer1 External Clock
#define PPSI_TCKI1	    (uint8_t*)&RPINR3    ///< SCCP Timer1
#define PPSI_ICM1	    (uint8_t*)&RPINR3+1  ///< SCCP Capture 1
#define PPSI_TCKI2	    (uint8_t*)&RPINR4    ///< SCCP Timer2
#define PPSI_ICM2	    (uint8_t*)&RPINR4+1  ///< SCCP Capture 2
#define PPSI_TCKI3	    (uint8_t*)&RPINR5    ///< SCCP Timer3
#define PPSI_ICM3	    (uint8_t*)&RPINR5+1  ///< SCCP Capture 3
#define PPSI_TCKI4	    (uint8_t*)&RPINR6    ///< SCCP Timer4
#define PPSI_ICM4	    (uint8_t*)&RPINR6+1  ///< SCCP Capture 4
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHM__)
// Ara, Sagitta, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSI_TCKI5	(uint8_t*)&RPINR7    ///< SCCP/MCCP Timer5
  #define PPSI_ICM5     (uint8_t*)&RPINR7+1  ///< SCCP/MCCP Capture 5

#endif
#if defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAP__) || \
    defined (__P33SMPS_SAGITTAPP__) || defined (__P33SMPS_CHM__) || \
    defined (__P33SMPS_OCTANSP__)
// Sagitta, Sagitta++, Octans+ and Gemini/Sagittarius main core devices only

  #define PPSI_TCKI6	(uint8_t*)&RPINR8    ///< SCCP Timer6
  #define PPSI_ICM6     (uint8_t*)&RPINR8+1  ///< SCCP Capture 6
  #define PPSI_TCKI7	(uint8_t*)&RPINR9    ///< SCCP Timer7
  #define PPSI_ICM7     (uint8_t*)&RPINR9+1  ///< SCCP Capture 7
  #define PPSI_TCKI8	(uint8_t*)&RPINR10   ///< SCCP Timer8
  #define PPSI_ICM8     (uint8_t*)&RPINR10+1 ///< SCCP Capture 8

#endif
// ------------------------------------------------------------------
#define PPSI_OCFA	    (uint8_t*)&RPINR11   ///< xCCP Fault A
#define PPSI_OCFB	    (uint8_t*)&RPINR11+1 ///< xCCP Fault B
#define PPSI_PCI8	    (uint8_t*)&RPINR12   ///< PWM PCI 8
#define PPSI_PCI9	    (uint8_t*)&RPINR12+1 ///< PWM PCI 9
#define PPSI_PCI10	    (uint8_t*)&RPINR13   ///< PWM PCI 10
#define PPSI_PCI11	    (uint8_t*)&RPINR13+1 ///< PWM PCI 11
#define PPSI_QEIA1	    (uint8_t*)&RPINR14   ///< QEI1 Input A
#define PPSI_QEIB1	    (uint8_t*)&RPINR14+1 ///< QEI1 Input B
#define PPSI_QEINDX1    (uint8_t*)&RPINR15   ///< QEI1 Index 1
#define PPSI_QEIHOM1    (uint8_t*)&RPINR15+1 ///< QEI1 Home	1
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__)
// Ara, Sagitta and Sagitta++ devices only

  #define PPSI_QEIA2	(uint8_t*)&RPINR16   ///< QEI2 Input A
  #define PPSI_QEIB2	(uint8_t*)&RPINR16+1 ///< QEI2 Input B
  #define PPSI_QEINDX2  (uint8_t*)&RPINR17   ///< QEI2 Index 1
  #define PPSI_QEIHOM2  (uint8_t*)&RPINR17+1 ///< QEI2 Home 1

#endif
// ------------------------------------------------------------------
#define PPSI_U1RX	    (uint8_t*)&RPINR18   ///< UART1 Receive
#define PPSI_U1DSR	    (uint8_t*)&RPINR18+1 ///< UART1 Data-Set Ready
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHM__)
// Ara, Sagitta, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSI_U2RX     (uint8_t*)&RPINR19   ///< UART2 Receive
  #define PPSI_U2DSR    (uint8_t*)&RPINR19+1 ///< UART2 Data-Set-Ready

#endif
// ------------------------------------------------------------------
#define PPSI_SDI1	    (uint8_t*)&RPINR20   ///< SPI1 Data Input
#define PPSI_SCK1IN     (uint8_t*)&RPINR20+1 ///< SPI1 Clock Input
#define PPSI_SS1        (uint8_t*)&RPINR21   ///< SPI1 Slave Select
#define PPSI_REFOI	    (uint8_t*)&RPINR21+1 ///< Reference Clock Input
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHM__)
// Ara, Sagitta, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSI_SDI2     (uint8_t*)&RPINR22   ///< SPI2 Data Input
  #define PPSI_SCK2IN   (uint8_t*)&RPINR22+1 ///< SPI2 Clock Input
  #define PPSI_SS2      (uint8_t*)&RPINR23   ///< SPI2 Slave Select

#endif
#if defined (__P33SMPS_CH__)
// Gemini/Sagittarius devices only

  #define PPSI_U1CTS   (uint8_t*)&RPINR23+1 ///< UART1 Clear To Send

#endif
#if defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_SAGITTAPP__)
// Sagitta+ and Sagitta++ devices only

  #define PPSI_QEIA3	(uint8_t*)&RPINR24   ///< QEI3 Input A
  #define PPSI_QEIB3	(uint8_t*)&RPINR24+1 ///< QEI3 Input B
  #define PPSI_QEINDX3  (uint8_t*)&RPINR25   ///< QEI3 Index 1
  #define PPSI_QEIHOM3  (uint8_t*)&RPINR25+1 ///< QEI3 Home 1

#endif
#if defined (__P33SMPS_CK5__) || defined (__P33SMPS_CK6__) || \
    defined (__P33SMPS_CK7__) || defined (__P33SMPS_CHM__)
// Sagitta, Sagitta+, Sagitta++ and Gemini/Sagittarius main core devices with CAN FD interface only

  #define PPSI_CAN1RX   (uint8_t*)&RPINR26   ///< CAN1 Input

#endif
#if defined (__P33SMPS_CK5__) || defined (__P33SMPS_CK6__) || \
    defined (__P33SMPS_CK7__) || defined (__P33SMPS_CHEM__)
// Sagitta, Sagitta+, Sagitta++ and Sagittarius main core devices with CAN FD interface only

  #define PPSI_CAN2RX   (uint8_t*)&RPINR26+1 ///< CAN2 Input

#endif
#if defined (__P33SMPS_CK__)
//Ara, Sagitta and Sagitta++ devices only

  #define PPSI_U3RX     (uint8_t*)&RPINR27   ///< UART3 Receive
  #define PPSI_U3DSR    (uint8_t*)&RPINR27+1 ///< UART3 Data-Set-Ready
  #define PPSI_SDI3     (uint8_t*)&RPINR29   ///< SPI3 Data Input
  #define PPSI_SCK3IN   (uint8_t*)&RPINR29+1 ///< SPI3 Clock Input
  #define PPSI_SS3      (uint8_t*)&RPINR30   ///< SPI3 Slave Select

#endif
#if defined (__P33SMPS_CHM__)
// Gemini and Sagittarius main core devices only

  #define PPSI_U2CTS	(uint8_t*)&RPINR30   ///< UART2 Clear-to-Send

#endif
#if defined (__P33SMPS_SAGITTAPP__)
// Sagitta++ devices only

  #define PPSI_CLCINE   (uint8_t*)&RPINR30+1 ///< CLC Input E
  #define PPSI_CLCINF   (uint8_t*)&RPINR31   ///< CLC Input F
  #define PPSI_CLCING   (uint8_t*)&RPINR31+1 ///< CLC Input G
  #define PPSI_CLCINH   (uint8_t*)&RPINR32   ///< CLC Input H

#endif
#if defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_SAGITTAPP__)
// Sagitta, Sagitta+ and Sagitta++ devices only

  #define PPSI_TCKI9    (uint8_t*)&RPINR32+1 ///< MCCP Timer9
  #define PPSI_ICM9     (uint8_t*)&RPINR33   ///< MCCP Capture 9

#endif
#if defined (__P33SMPS_CK__)
// Ara, Sagitta and Sagitta++ devices only

  #define PPSI_OCFC     (uint8_t*)&RPINR37   ///< xCCP Fault C

#endif
// ------------------------------------------------------------------
#define PPSI_PCI17      (uint8_t*)&RPINR37+1 ///< PWM Input 17
#define PPSI_PCI18      (uint8_t*)&RPINR38   ///< PWM Input 18
#define PPSI_PCI12      (uint8_t*)&RPINR42   ///< PWM Input 12
#define PPSI_PCI13      (uint8_t*)&RPINR42+1 ///< PWM Input 13
#define PPSI_PCI14      (uint8_t*)&RPINR43   ///< PWM Input 14
#define PPSI_PCI15      (uint8_t*)&RPINR43+1 ///< PWM Input 15
#define PPSI_PCI16      (uint8_t*)&RPINR44   ///< PWM Input 16
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__) || defined (__P33CSMPS_CH_MAIN__)
// Ara, Sagitta, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSI_SENT1    (uint8_t*)&RPINR44+1 ///< SENT1 Input
  #define PPSI_SENT2    (uint8_t*)&RPINR45   ///< SENT2 Input

#endif
// ------------------------------------------------------------------
#define PPSI_CLCINA     (uint8_t*)&RPINR45+1 ///< CLC Input A
#define PPSI_CLCINB     (uint8_t*)&RPINR46   ///< CLC Input B
#define PPSI_CLCINC     (uint8_t*)&RPINR46+1 ///< CLC Input C
#define PPSI_CLCIND     (uint8_t*)&RPINR47   ///< CLC Input D
#define PPSI_ADCTRG     (uint8_t*)&RPINR47+1 ///< ADC Trigger Input (ADTRIG31)
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__)
// Ara, Sagitta and Sagitta++ devices only

  #define PPSI_OCFD     (uint8_t*)&RPINR48   ///< xCCP Fault D
  #define PPSI_U1CTS    (uint8_t*)&RPINR48+1 ///< UART1 Clear-to-Send
  #define PPSI_U2CTS    (uint8_t*)&RPINR49   ///< UART2 Clear-to-Send
  #define PPSI_U3CTS    (uint8_t*)&RPINR49+1 ///< UART3 Clear-to-Send

#endif
/** @} */ // end of p33c-pral-pps-constants-inreg


/*********************************************************************************
 * @addtogroup p33c-pral-pps-constants-output
 * @{
 * @details
 * Peripheral Pin Select Output Sources specify the peripheral
 * function IDs used to map an output function to a specific
 * device RP output pin. A device-specific collection of peripheral
 * function IDs is provided by macros. These macros are also made
 * available by enumeration PPSO_FUNCTIONS_e, easing the use to the
 * API functions.
 *
 * <p><b>Example</b></p>
 *  UART1 Transmit output should be assigned as device pin RC3.
 *  The output pin configuration register location of pin RC3
 *  (RP51) is the high-byte of register RPOR9. This memory address
 *  can be accessed using the default macro _RP51R for pin RP51.
 *  The peripheral function ID of UART1 TxD is 0x01.
 *
 * <b><u>Example 1</u></b>
 *  shows the direct register access method, where the peripheral
 *  function ID is directly written to the RPORx register location
 *  of the desired the device RP pin index:
 *
 * @code {.c}
 *
 *  _RP51R = PPSO_U1TX; // Assign UART1 TX to pin RP51 (Example 1)
 *
 * @endcode
 *
 * <b><u>Example 2</u></b>
 *  shows the usage of the p33c_pps API function, where the
 *  peripheral function ID is written to the RPORx register
 *  location of the desired the device RP pin index by calling
 *  function p33c_PPS_MapOutput(x, y):
 *
 * @code {.c}
 *
 *  p33c_PPS_MapInput(51, PPSO_U1TX); // Assign UART1 TX pin RP51 to (Example 2)
 *
 * @endcode
 *
 * @note
 * Not all peripheral functions are available on all devices and the list
 * captured in this documentation may not be complete. Please review
 * the target device data sheet as well as the header file code for more
 * information.
 ********************************************************************************/

// ------------------------------------------------------------------
#define PPSO_DEFAULT    (uint8_t)0b00000000 ///< RPn tied to VSS
#define PPSO_NULL       (uint8_t)0b00000000 ///< RPn tied to VSS
#define PPSO_NONE       (uint8_t)0b00000000 ///< RPn tied to VSS
// ------------------------------------------------------------------
#define PPSO_VSS        (uint8_t)0b00000000 ///< RPn tied to VSS
#define PPSO_U1TX       (uint8_t)0b00000001 ///< RPn tied to UART1 Transmit
#define PPSO_U1RTS      (uint8_t)0b00000010 ///< RPn tied to UART1 Request-to-Send
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHM__)
// Ara, Sagitta and Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSO_U2TX     (uint8_t)0b00000011 ///< RPn tied to UART2 Transmit
  #define PPSO_U2RTS    (uint8_t)0b00000100 ///< RPn tied to UART2 Request-to-Send

#endif
// ------------------------------------------------------------------
#define PPSO_SDO1       (uint8_t)0b00000101 ///< RPn tied to SPI1 Data Output
#define PPSO_SCK1       (uint8_t)0b00000110 ///< RPn tied to SPI1 Clock Output
#define PPSO_SS1        (uint8_t)0b00000111 ///< RPn tied to SPI1 Slave Select
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHM__)

  #define PPSO_SDO2     (uint8_t)0b00001000 ///< RPn tied to SPI2 Data Output
  #define PPSO_SCK2     (uint8_t)0b00001001 ///< RPn tied to SPI2 Clock Output
  #define PPSO_SS2      (uint8_t)0b00001010 ///< RPn tied to SPI2 Slave Select

#endif
#if defined (__P33SMPS_CK__)
    // Ara, Sagitta and Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSO_SDO3     (uint8_t)0b00001011 ///< RPn tied to SPI3 Data Output
  #define PPSO_SCK3     (uint8_t)0b00001100 ///< RPn tied to SPI3 Clock Output
  #define PPSO_SS3      (uint8_t)0b00001101 ///< RPn tied to SPI3 Slave Select

#endif
// ------------------------------------------------------------------
#define PPSO_REFCLKO    (uint8_t)0b00001110 ///< RPn tied to Reference Clock Output
#define PPSO_OCM1       (uint8_t)0b00001111 ///< RPn tied to SCCP1 Output
#define PPSO_OCM2       (uint8_t)0b00010000 ///< RPn tied to SCCP2 Output
#define PPSO_OCM3       (uint8_t)0b00010001 ///< RPn tied to SCCP3 Output
#define PPSO_OCM4       (uint8_t)0b00010010 ///< RPn tied to SCCP4 Output
// ------------------------------------------------------------------
#if defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAPP__) || \
    defined (__P33SMPS_SAGITTAPP__) || defined (__P33SMPS_CHM__)
// Sagitta, Sagitta+, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSO_OCM5     (uint8_t)0b00010011 ///< RPn tied to SCCP5 Output
  #define PPSO_OCM6     (uint8_t)0b00010100 ///< RPn tied to SCCP6 Output

#endif
#if defined (__P33SMPS_CK5__) || defined (__P33SMPS_CK6__) || \
    defined (__P33SMPS_CK7__) || defined (__P33SMPS_CH5__)
// Sagitta, Sagitta+, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSO_CAN1     (uint8_t)0b00010101 ///< RPn tied to CAN1 Output

#endif
#if defined (__P33SMPS_CK5__) || defined (__P33SMPS_CK6__) || defined (__P33SMPS_CK7__) || \
    (defined (__P33SMPS_CH5__) && defined (__P33SMPS_CHE__))
// Sagitta, Sagitta+, Sagitta++ and Sagittarius main core devices only

  #define PPSO_CAN2     (uint8_t)0b00010110 ///< RPn tied to CAN2 Output

#endif
// ------------------------------------------------------------------
#define PPSO_CMP1       (uint8_t)0b00010111 ///< RPn tied to Comparator 1 Output
// ------------------------------------------------------------------
#if defined (__P33SMPS_CK__) || defined (__P33SMPS_CHS__)
// Ara, Sagitta, Sagitta+, Sagitta++ and Gemini/Sagittarius secondary core devices only

  #define PPSO_CMP2     (uint8_t)0b00011000 ///< RPn tied to Comparator 2 Output
  #define PPSO_CMP3     (uint8_t)0b00011001 ///< RPn tied to Comparator 3 Output

#endif
#if defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_SAGITTAPP__)
// Sagitta+ and Sagitta++ only
  #define PPSO_CMP4     (uint8_t)0b00011010 ///< RPn tied to Comparator 4 Output

#endif
#if defined (__P33SMPS_CK__)
// Ara, Sagitta and Sagitta++ devices only

  #define PPSO_U3TX     (uint8_t)0b00011011 ///< RPn tied to UART3 Transmit
  #define PPSO_U3RTS    (uint8_t)0b00011100 ///< RPn tied to UART3 Request-to-Send

#endif
#if defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_SAGITTAPP__)
// Sagitta+ and Sagitta++ only
  #define PPSO_PWMEE    (uint8_t)0b00011011 ///< RPn tied to UART3 Transmit
  #define PPSO_PWMEF    (uint8_t)0b00011100 ///< RPn tied to UART3 Request-to-Send
  #define PPSO_CMP5     (uint8_t)0b00100000 ///< RPn tied to Comparator 5 Output
  #define PPSO_CMP6     (uint8_t)0b00100001 ///< RPn tied to Comparator 6 Output
#endif
// ------------------------------------------------------------------
#define PPSO_PWM4H      (uint8_t)0b00100010 ///< RPn tied to PWM4H Output
#define PPSO_PWM4L      (uint8_t)0b00100011 ///< RPn tied to PWM4L Output
#define PPSO_PWMEA      (uint8_t)0b00100100 ///< RPn tied to PWM Event A Output
#define PPSO_PWMEB      (uint8_t)0b00100101 ///< RPn tied to PWM Event B Output
#define PPSO_QEICMP1    (uint8_t)0b00100110 ///< RPn tied to QEI1 Comparator Output
// ------------------------------------------------------------------
#if defined (__P33SMPS_ARA__) || defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAPP__)
// Ara, Sagitta, Sagitta+ and Sagitta++ devices only
  #define PPSO_QEICMP2  (uint8_t)0b100111  ///< RPn tied to QEI2 Comparator Output
#endif
// ------------------------------------------------------------------
#define PPSO_CLC1OUT    (uint8_t)0b00101000 ///< RPn tied to CLC1 Output
#define PPSO_CLC2OUT    (uint8_t)0b00101001 ///< RPn tied to CLC2 Output
// ------------------------------------------------------------------
#if defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAP__) || \
    defined (__P33SMPS_SAGITTAPP__) || defined (__P33SMPS_CHM__)
// Sagitta, Sagitta+, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSO_OCM7     (uint8_t)0b00101010 ///< RPn tied to SCCP7 Output
  #define PPSO_OCM8     (uint8_t)0b00101011 ///< RPn tied to SCCP8 Output

#endif
// ------------------------------------------------------------------
#define PPSO_PWMEC      (uint8_t)0b00101100 ///< RPn tied to PWM Event C Output
#define PPSO_PWMED      (uint8_t)0b00101101 ///< RPn tied to PWM Event D Output
#define PPSO_PTGTRG24   (uint8_t)0b00101110 ///< PTG Trigger Output 24
#define PPSO_PTGTRG25   (uint8_t)0b00101111 ///< PTG Trigger Output 25
// ------------------------------------------------------------------
#if defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAP__) || \
    defined (__P33SMPS_SAGITTAPP__) || defined (__P33SMPS_CHM__)
// Sagitta, Sagitta+, Sagitta++ and Gemini/Sagittarius main core devices only

  #define PPSO_SENT1OUT (uint8_t)0b00110000 ///< RPn tied to SENT1 Output
  #define PPSO_SENT2OUT (uint8_t)0b00110001 ///< RPn tied to SENT2 Output

#endif
#if defined (__P33SMPS_CK1__)
// Ara devices only

  #define PPSO_OCM5A    (uint8_t)0b00110010 ///< RPn tied to SCCP/MCCP5 Output A
  #define PPSO_OCM5B    (uint8_t)0b00110011 ///< RPn tied to SCCP/MCCP5 Output B
  #define PPSO_OCM5C    (uint8_t)0b00110100 ///< RPn tied to SCCP/MCCP5 Output C
  #define PPSO_OCM5D    (uint8_t)0b00110101 ///< RPn tied to SCCP/MCCP5 Output D
  #define PPSO_OCM5E    (uint8_t)0b00110110 ///< RPn tied to SCCP/MCCP5 Output E
  #define PPSO_OCM5F    (uint8_t)0b00110111 ///< RPn tied to SCCP/MCCP5 Output F

#elif defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAPP__)
// Sagitta and Sagitta++ devices only

  #define PPSO_OCM9A    (uint8_t)0b00110010 ///< RPn tied to SCCP/MCCP9 Output A
  #define PPSO_OCM9B    (uint8_t)0b00110011 ///< RPn tied to SCCP/MCCP9 Output B
  #define PPSO_OCM9C    (uint8_t)0b00110100 ///< RPn tied to SCCP/MCCP9 Output C
  #define PPSO_OCM9D    (uint8_t)0b00110101 ///< RPn tied to SCCP/MCCP9 Output D
  #define PPSO_OCM9E    (uint8_t)0b00110110 ///< RPn tied to SCCP/MCCP9 Output E
  #define PPSO_OCM9F    (uint8_t)0b00110111 ///< RPn tied to SCCP/MCCP9 Output F

#endif
#if defined (__P33SMPS_SAGITTAPP__)
// Sagitta++ only

  #define PPSO_APWMEE   (uint8_t)0b00111000  ///< RPn tied to APWM Event E Output
  #define PPSO_APWMEF   (uint8_t)0b00111001  ///< RPn tied to APWM Event F Output
  #define PPSO_QEICMP3  (uint8_t)0b00111010  ///< RPn tied to QEI3 Comparator Output

#endif
#if defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_CH__)
// Sagitta+ and Gemini/Sagittarius mains and secondary core devices only

  #define PPSO_CLC3OUT  (uint8_t)0b00110010 ///< RPn tied to CLC3 Output
  #if defined (__P33SMPS_SAGITTAP__) || defined (__P33SMPS_CHM__)
  #define PPSO_CLC4OUT  (uint8_t)0b00110011 ///< RPn tied to CLC4 Output
  #define PPSO_U1DTR    (uint8_t)0b00110100  ///< RPn tied to Data Terminal Ready Output 1
  #define PPSO_U2DTR    (uint8_t)0b00110101  ///< RPn tied to Data Terminal Ready Output 2
  #endif

#elif defined (__P33SMPS_ARA__) || defined (__P33SMPS_SAGITTA__) || defined (__P33SMPS_SAGITTAPP__)
// Ara, Sagitta and Sagitta++ devices only

  #define PPSO_CLC3OUT  (uint8_t)0b00111011 ///< RPn tied to CLC3 Output
  #define PPSO_CLC4OUT  (uint8_t)0b00111100 ///< RPn tied to CLC4 Output
  #define PPSO_U1DTR    (uint8_t)0b00111101 ///< RPn tied to Data Terminal Ready Output 1
  #define PPSO_U2DTR    (uint8_t)0b00111110 ///< RPn tied to Data Terminal Ready Output 2
  #define PPSO_U3DTR    (uint8_t)0b00111111 ///< RPn tied to Data Terminal Ready Output 3

#endif

#if defined (__P33SMPS_SAGITTAPP__)
// Sagitta++ devices only

  #define PPSO_APWMEA   (uint8_t)0b01000000 ///< RPn tied to APWM Event A Output
  #define PPSO_APWMEB   (uint8_t)0b01000001 ///< RPn tied to APWM Event B Output
  #define PPSO_APWMEC   (uint8_t)0b01000010 ///< RPn tied to APWM Event C Output
  #define PPSO_APWMED   (uint8_t)0b01000011 ///< RPn tied to APWM Event D Output
  #define PPSO_CLC5OUT  (uint8_t)0b01000100 ///< RPn tied to CLC5 Output
  #define PPSO_CLC6OUT  (uint8_t)0b01000101 ///< RPn tied to CLC6 Output
  #define PPSO_CLC7OUT  (uint8_t)0b01000110 ///< RPn tied to CLC7 Output
  #define PPSO_CLC8OUT  (uint8_t)0b01000111 ///< RPn tied to CLC8 Output

#endif
/** @} */ // end of p33c-pral-pps-constants-outreg

#endif // End of P33C_PPS_SFR_DECLARATIONS_H

// ___________________________
// end of file
