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
 * @file    p33c_adc-d.h
 * @see     p33c_adc.h
 * @brief   Analog-To-Digital Converter (ADC) peripheral register abstraction data type declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_ADC_SFR_DECLARATIONS_H
#define P33C_ADC_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file

#include "p33c_adcregs.h" // include ADC peripheral module register set inheritance header file

/*************************************************************************************************
 * @brief   Array of pointers to ADC input result buffer registers
 */
static volatile const __attribute__((unused)) uint16_t* p33c_AdcAnBuffer_Handles[] = 
{
    &ADCBUF0, &ADCBUF1, &ADCBUF2,  &ADCBUF3,  &ADCBUF4,  &ADCBUF5,  &ADCBUF6,  &ADCBUF7, 
    &ADCBUF8, &ADCBUF9, &ADCBUF10, &ADCBUF11, &ADCBUF12, &ADCBUF13, &ADCBUF14, &ADCBUF15,
    #ifdef ADCBUF16
    &ADCBUF16, 
    #else
    NULL,
    #endif
    #ifdef ADCBUF17
    &ADCBUF17, 
    #else
    NULL,
    #endif
    #ifdef ADCBUF18
    &ADCBUF18, 
    #else
    NULL,
    #endif
    #ifdef ADCBUF19
    &ADCBUF19, 
    #else
    NULL,
    #endif
    #ifdef ADCBUF20
    &ADCBUF20, 
    #else
    NULL,
    #endif
    #ifdef ADCBUF21
    &ADCBUF21, 
    #else
    NULL,
    #endif
    #ifdef ADCBUF22
    &ADCBUF22,
    #else
    NULL,
    #endif
    #ifdef ADCBUF23
    &ADCBUF23,
    #else
    NULL,
    #endif
    #ifdef ADCBUF24
    &ADCBUF24,
    #else
    NULL,
    #endif
    #ifdef ADCBUF25
    &ADCBUF25,
    #else
    NULL,
    #endif
    #ifdef ADCBUF26
    &ADCBUF26,
    #else
    NULL,
    #endif
};

/*************************************************************************************************
 * @brief   Array of pointers to register set start addresses of dedicated ADC core configuration 
 *          registers
 */
#if defined (ADCORE6L)
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[7]={
        &ADCORE0L, &ADCORE1L, &ADCORE2L, &ADCORE3L, 
        &ADCORE4L, &ADCORE5L, &ADCORE6L
    };
#elif defined (ADCORE5L)
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[6]={
        &ADCORE0L, &ADCORE1L, &ADCORE2L, &ADCORE3L, 
        &ADCORE4L, &ADCORE5L
    };
#elif defined (ADCORE4L)
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[5]={
        &ADCORE0L, &ADCORE1L, &ADCORE2L, &ADCORE3L, 
        &ADCORE4L
    };
#elif defined (ADCORE3L)
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[4]={
        &ADCORE0L, &ADCORE1L, &ADCORE2L, &ADCORE3L
    };
#elif defined (ADCORE2L)
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[3]={
        &ADCORE0L, &ADCORE1L, &ADCORE2L
    };
#elif defined (ADCORE1L)
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[2]={
        &ADCORE0L, &ADCORE1L
    };
#elif defined (ADCORE0L)
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[1]={
        &ADCORE0L
    };
#else
    static volatile __attribute__((unused)) uint16_t* p33c_AdcCoreInstance_Handles[0];
    #pragma message "Info: selected device has no additional dedicated Analog-to-Digital converters"
#endif

// GENERIC ADC MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_ADC_MODULE_s
    
    /***********************************************************************************
     * @struct  P33C_ADC_TRGCON_s
     * @ingroup p33c-pral-adc-module-properties
     * @extends P33C_ADC_MODULE_s
     * @brief   Abstracted set of Special Function Register Bits of the ADC Module Trigger Control settings
     * @details
     *  This data structure provides an abstracted set of Special Function Register Bits 
     *  of the ADC module trigger control settings. The ADC module supports software 
     *  triggers, which are manually operated by instructions in user code, as well
     *  as an ADC trigger extension interface, allowing the ADC to be triggered by 
     *  the Programmable Trigger Generator (PTG) peripheral module.
     * 
     * @note
     *  The settings covered by this data structure are abstracted from multiple
     *  Special Function Registers (SFR). Settings in this data structure cannot 
     *  be written/read to/from registers directly. Read/Write operations must use
     *  the respective GetConfig() and SetConfig() methods.
     * 
     **********************************************************************************/
    struct P33C_ADC_TRGCON_s {

        bool PTGEN;                 ///< External PTG Conversion Request Interface bit
        bool SUSPEND;               ///< All ADC Core Triggers Disable bit
        bool SUSPCIE;               ///< Suspend All ADC Cores Common Interrupt Enable bit
        bool SUSPRDY;               ///< All ADC Cores Suspended Flag bit
        bool SHRSAMP;               ///< Shared ADC Core Sampling Direct Control bit
        bool CNVRTCH;               ///< Software Individual Channel Conversion Trigger bit
        bool SWLCTRG;               ///< Software Level-Sensitive Common Trigger bit
        bool SWCTRG;                ///< Software Common Trigger bit
        uint16_t CNVCHSEL : 6;      ///< Channel Number Selection for Software Individual Channel Conversion Trigger bits

    };
    typedef struct P33C_ADC_TRGCON_s P33C_ADC_TRGCON_t; ///< ADC Module Trigger Control

    /***********************************************************************************
     * @struct  P33C_ADC_REFCON_s
     * @ingroup p33c-pral-adc-module-properties
     * @extends P33C_ADC_MODULE_s
     * @brief   Abstracted set of Special Function Registers of the ADC module Bandgap Reference
     * @details
     *  This data structure provides an abstracted set of Special Function Register  
     *  bits of the ADC module reference control settings. The internal bandgap 
     *  reference supports interrupts and status bit for state monitoring, which 
     *  can be configured by these settings.
     * 
     * @note
     *  The settings covered by this data structure are abstracted from multiple
     *  Special Function Registers (SFR). Settings in this data structure cannot
     *  be written/read to/from registers directly. Read/Write operations must 
     *  use the respective GetConfig() and SetConfig() methods.
     * 
     **********************************************************************************/
    struct P33C_ADC_REFCON_s {

        uint16_t REFSEL : 3;        ///< ADC Reference Voltage Selection bits: 0 = AVDD-AVSS (only option)
        bool REFRDY;                ///< Band Gap and Reference Voltage Ready Flag bit: 1 = ready, 0 = not ready
        bool REFERR;                ///< Band Gap or Reference Voltage Error Flag bit: 1 = error, 0 = no error
        bool REFCIE;                ///< Band Gap and Reference Voltage Ready Common Interrupt Enable bit (true/false)
        bool REFERCIE;              ///< Band Gap or Reference Voltage Error Common Interrupt Enable bit (true/false)

    };
    typedef struct P33C_ADC_REFCON_s P33C_ADC_REFCON_t; ///< ADC Module Reference Control
    
    /***********************************************************************************
     * @struct  P33C_ADC_MODCON_s
     * @ingroup p33c-pral-adc-module-properties
     * @extends P33C_ADC_MODULE_s
     * @brief   Abstracted set of Special Function Register Bits of the ADC module base configuration
     * @details
     *  This data structure provides an abstracted set of Special Function Register  
     *  Bits of the basic ADC module control settings, such as Enable state, output 
     *  number format or input clock settings.
     * 
     * @note
     *  The settings covered by this data structure are abstracted from multiple
     *  Special Function Registers (SFR). Settings in this data structure cannot
     *  be written/read to/from registers directly. Read/Write operations must
     *  use the respective GetConfig() and SetConfig() methods.
     * 
     **********************************************************************************/
    struct P33C_ADC_MODCON_s {

        bool ADON;                  ///< ADC Enable bit (true/false)
        bool ADSIDL;                ///< ADC Stop in Idle Mode bit: 0 = Continues, 1 = Discontinues module operation in Idle mode
        uint16_t CLKSEL : 2;        ///< ADC Module Clock Source Selection bits: 0b11 = FVCO/4, 0b10 = AFVCODIV, 0b01 = FOSC, 0b00 = FP (Peripheral Clock)
        uint16_t CLKDIV : 6;        ///< ADC Module Clock Source Divider bits: 0 = 1 Source Clock Period, 1 = 2 Source Clock Periods, ..., 63 = 64 Source Clock Periods
        bool FORM;                  ///< Fractional Data Output Format bit: 0 = Integer, 1 = Fractional 
        bool EIEN;                  ///< Early Interrupts Enable bit (true/false)
        uint16_t WARMTIME : 4;      ///< ADC Core x Power-up Delay: 0-4 = 16 Source Clock Periods, 5 = 32 Source Clock Periods, 6 = 64 Source Clock Periods, ..., 15 = 32768 Source Clock Periods
    
    };
	typedef struct P33C_ADC_MODCON_s P33C_ADC_MODCON_t; ///< ADC Module Base Configuration Settings
    
    /***********************************************************************************
     * @struct  P33C_ADC_MODULE_s
     * @ingroup p33c-pral-adc-module-properties
     * @brief   Abstracted set of Special Function Register Bits of the ADC module configuration
     * @details
     *  This data structure combines the abstracted configuration settings of
     *  the module base registers, bandgap reference configuration and module
     *  trigger configuration in one ADC module data object.
     * 
     * @note
     *  The settings covered by this data structure are abstracted from multiple
     *  Special Function Registers (SFR). Settings in this data structure cannot
     *  be written/read to/from registers directly. Read/Write operations must
     *  use the respective GetConfig() and SetConfig() methods.
     * 
     **********************************************************************************/
    struct P33C_ADC_MODULE_s {

        P33C_ADC_MODCON_t ADCON;    ///< ADC Module Base Configuration Settings
        P33C_ADC_REFCON_t REFCON;   ///< ADC Module Reference Control Settings
        P33C_ADC_TRGCON_t TRGCON;   ///< ADC Module Trigger Control Settings
        
    };
	typedef struct P33C_ADC_MODULE_s P33C_ADC_MODULE_t; ///< ADC Module Settings

    /*********************************************************************************
     * @ingroup p33c-pral-adc-module-methods
     * @brief   Gets pointer to start address of Analog-to-Digital Converter Module SFR set
     * @return  Pointer address to ADC module of type P33C_ADC_MODULE_t
     *  
     * @details
     *  This macro returns the pointer to analog-to-digital converter module register set
     *  (start address of Special Function Register memory space). This pointer can be 
     *  used to directly write to/read from the Special Function Registers of the 
     *  analog-to-digital peripheral module configuration.
     * 
     *********************************************************************************/
    #define p33c_AdcModule_GetHandle() (P33C_ADC_MODULE_t*)&ADCON1L ///< Captures memory address of ADC module register set
    
#endif // end of P33C_ADC_MODULE_s

#ifndef P33C_ADCORE_INSTANCE_s
    
    /***********************************************************************************
     * @struct  P33C_ADCORE_INSTANCE_s
     * @ingroup p33c-pral-adcore-properties
     * @brief   Set of Special Function Registers of an ADC core instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the ADC core instance registers. Users can use this abstracted data set of register
     *  values to capture most recent settings from or write new settings to the
     *  configuration registers of the ADC core instance. 
     * 
     * @note
     *  The settings covered by this data structure are abstracted from multiple
     *  Special Function Registers (SFR). Settings in this data structure cannot
     *  be written/read to/from registers directly. Read/Write operations must
     *  use the respective GetConfig() and SetConfig() methods.
     * 
     **********************************************************************************/
    struct P33C_ADCORE_INSTANCE_s {

        uint16_t ADCS : 7;          ///< ADC Core Input Clock Divider bits: 0 = 2 Source Clock Periods, 1 = 2 Source Clock Periods, 2 = 4 Source Clock Periods, 3 = 6 Source Clock Periods, ..., 127 = 254 Source Clock Periods
        uint16_t CHS : 2;           ///< ADC Core x Input Channel Selection bits: 0b00 = Default ANs, 0b01 = Alternate ANx (see device data sheet for options)
        uint16_t EISEL : 3;         ///< ADC Core Early Interrupt Time Selection bits: 0 = 1 TADCORE clock, 1 = 2 TADCORE clocks, ..., 7 = 8 TADCORE clocks
        uint16_t RES : 2;           ///< ADC Core Resolution Selection bits: 0b00 = 6-bit, 0b01 = 8-bit, 0b10 = 10-bit, 0b11 = 12-bit
        uint16_t SAMC : 10;         ///< ADC Core Sample Time Selection bits: 0 = 2 TADCORE clocks, 1 = 3 TADCORE clocks, 2 = 4 TADCORE clocks, up to 1023 = 1025 TADCORE clocks
        bool SAMCxEN;               ///< ADC Core x Conversion Delay Enable bit (true/false)
        bool RDY;                   ///< READ ONLY: ADC Core Ready Flag bit (true/false) 
        bool CxPWR;                 ///< ADC Core x Power Enable bit (true/false)
        bool CIE;                   ///< ADC Core x Ready Common Interrupt Enable bit (true/false)
        bool CxEN;                  ///< ADC Core x Enable bit (true/false)
        
    };
	typedef struct P33C_ADCORE_INSTANCE_s P33C_ADCORE_INSTANCE_t; ///< ADC CORE INSTANCE REGISTER SET

    /*********************************************************************************
     * @ingroup p33c-pral-adcore-properties
     * @brief   Gets the number of available peripheral instances
     * @details
     *  This variable is used to determine the number of available instances of the
     *  peripheral by returning the number of array elements of the instance handle
     *  list.
     **********************************************************************************/
    static const uint16_t p33c_AdcCoreInstances = (volatile uint16_t)(sizeof(p33c_AdcCoreInstance_Handles)/sizeof(p33c_AdcCoreInstance_Handles[0]));
    static const uint16_t p33c_AdcCoreSharedCoreInstance = (volatile uint16_t)P33C_ADC_SHARED_CORE_INDEX;

#endif  // and of P33C_ADCORE_INSTANCE_s

#ifndef P33C_ADCAN_INSTANCE_s

    /***********************************************************************************
     * @struct  P33C_ADCAN_INSTANCE_s
     * @ingroup p33c-pral-adcan-properties
     * @brief   Abstracted set of Special Function Registers of an ADC input instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the ADC instance registers. Users can use this abstracted data set of register
     *  values to capture most recent settings from or write new settings to the
     *  configuration registers of the module. However, as this data set is an abstracted 
     *  version, direct read/write operations on registers is not supported. Please
     *  use the related p33c_AdcAnInstance_GetConfig() and p33c_AdcAnInstance_SetConfig()
     *  functions to set/get ADC input configurations.
     * 
     **********************************************************************************/
    struct P33C_ADCAN_INSTANCE_s {
        
        bool Enable;            ///< ADC Input Enable bit
        bool ANxRDY;            ///< READ ONLY: ADC Ready Status bit
        bool EISTAT;            ///< READ ONLY: ADC Early Interrupt Status bit
        bool LVLEN;             ///< ADC Level Trigger Enable bit
        bool IE;                ///< ADC Interrupt Enable bit
        bool EIE;               ///< ADC Early Interrupt Enable bit
        bool SIGN;              ///< ADC Signed Output Enable bit
        bool DIFF;              ///< ADC Pseudo-Differential Input Enable bit
        uint8_t TRGSRC : 5;     ///< ADC Trigger Source Selection bits: 0: No trigger is enabled, 1: Common software trigger, ..., read device data sheet for options, 31: ADTRG31 (PPS input)
        volatile uint16_t* ADCBUF; ///< Pointer to ADC result buffer of this channel
    };

	typedef struct P33C_ADCAN_INSTANCE_s P33C_ADCAN_INSTANCE_t; ///< ADC INPUT INSTANCE REGISTER SET

    /*********************************************************************************
     * @ingroup p33c-pral-adcan-properties
     * @brief   Gets the number of available analog input instances
     * @details
     *  This variable is used to determine the number of available analog input 
     *  instances of the peripheral by returning the number of array elements of
     *  the instance handle list.
     **********************************************************************************/
    static const uint16_t p33c_AdcAnInstances = P33C_ADCAN_COUNT;
    static __attribute__((unused)) P33C_ADCAN_INSTANCE_t p33c_AdcAnInstance[P33C_ADCAN_COUNT];

#endif // end of P33C_ADCAN_INSTANCE_s
    
#ifndef P33C_ADCAN_BUFFER_INSTANCE_s
    
    /***********************************************************************************
     * @struct  P33C_ADCAN_BUFFER_INSTANCE_s
     * @ingroup p33c-pral-adcan-properties
     * @brief   Abstracted set of Special Function Register of an ADC input instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of 
     *  ADC generator configuration and control registers. Users can use this 
     *  abstracted set of registers to capture register settings from or write 
     *  generic register settings to these peripheral base registers. 
     * 
     **********************************************************************************/
    
    struct P33C_ADCAN_BUFFER_INSTANCE_s {
        ADCBUF_t ADCBUFx;  
    };
	typedef struct P33C_ADCAN_BUFFER_INSTANCE_s P33C_ADCAN_BUFFER_INSTANCE_t; ///< ADC INPUT INSTANCE REGISTER SET
    
    #define p33c_AdcAnBuffer_GetHandle(adcAnInstance)   (P33C_ADCAN_BUFFER_INSTANCE_t*)p33c_AdcAnBuffer_Handles[adcAnInstance];
 
#endif // end of P33C_ADCAN_BUFFER_INSTANCE_s
#endif /* End of P33C_ADC_SFR_DECLARATIONS_H */

// ___________________
// end of files
