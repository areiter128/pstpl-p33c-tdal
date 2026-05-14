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
 * @file    p33c_adcregs.h
 * @see     p33c_adc.h, p33c_adc-d.h
 * @brief   Analog-To-Digital Converter (ADC) peripheral module register inheritance declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_HSADC_SFR_INHERITANCE_H
#define P33C_HSADC_SFR_INHERITANCE_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file

#include "p33c_devices.h" // include SMPS device family abstraction declarations

// GENERIC ADC PERIPHERAL MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_ADC_s

    /***********************************************************************************
     * @addtogroup  p33c-pral-adc-module-inheritance
     * @extends     P33C_ADC_MODULE_s 
     * @{
     */
    /** 
     * @brief   ADC Module Control Register 1 (Low) inherited from device header file
     */
    union ADCON1L_u {
        struct tagADCON1LBITS bits;             ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON1L) ADC CONTROL 1 REGISTER LOW
    
    /** 
     * @brief   ADC Module Control Register 1 (High) inherited from device header file
     */
    union ADCON1H_u {
        struct tagADCON1HBITS bits;             ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON1H) ADC CONTROL 1 REGISTER HIGH

     /** 
     * @brief   ADC Module Control Register 2 (Low) inherited from device header file
     */
    union ADCON2L_u {
        struct tagADCON2LBITS bits;             ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON2L) ADC CONTROL 2 REGISTER LOW
    
    /** 
     * @brief   ADC Module Control Register 2 (High) inherited from device header file
     */
    union ADCON2H_u {
        struct tagADCON2HBITS bits;             ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON2H) ADC CONTROL 2 REGISTER HIGH

     /** 
     * @brief   ADC Module Control Register 3 (Low) inherited from device header file
     */
    union ADCON3L_u {
        struct tagADCON3LBITS bits;             ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON3L) ADC CONTROL 3 REGISTER LOW
    
    /** 
     * @brief   ADC Module Control Register 3 (High) inherited from device header file
     */
    union ADCON3H_u {
        struct tagADCON3HBITS bits;             ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON3H) ADC CONTROL 3 REGISTER HIGH

     /** 
     * @brief   ADC Module Control Register 4 (Low) inherited from device header file
     */
    union ADCON4L_u {
        #ifdef tagADCON4LBITS
        struct tagADCON4LBITS bits;             ///< Register bit-field
        #else
        uint16_t : 16;                          ///< (unimplemented)
        #endif
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON4L) ADC CONTROL 4 REGISTER LOW
    
    /** 
     * @brief   ADC Module Control Register 4 (High) inherited from device header file
     */
    union ADCON4H_u {
        #ifdef tagADCON4HBITS
        struct tagADCON4HBITS bits;             ///< Register bit-field
        #else
        uint16_t : 16;                          ///< (unimplemented)
        #endif
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON4H) ADC CONTROL 4 REGISTER HIGH

     /** 
     * @brief   ADC Module Control Register 5 (Low) inherited from device header file
     */
    union ADCON5L_u {
        struct tagADCON5LBITS bits;             ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON5L) ADC CONTROL 5 REGISTER LOW
    
    /** 
     * @brief   ADC Module Control Register 5 (High) inherited from device header file
     */
    union ADCON5H_u {
        #ifdef tagADCON5HBITS
        struct tagADCON5HBITS bits;             ///< Register bit-field
        #else
        uint16_t : 16;                          ///< (unimplemented)
        #endif
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCON5H) ADC CONTROL 5 REGISTER HIGH

    /** 
     * @brief   ADC Input Mode Control Register (Low/High) inherited from device header file
     */
    union ADMOD_u {
        struct {
            uint16_t ADMOD : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADMODxL/H) ADC INPUT MODE CONTROL REGISTER LOW/HIGH

    /** 
     * @brief   ADC Input Level Sensitive Trigger Control Register (Low/High) inherited from device header file
     */
    union ADLVLTRG_u {
        struct { 
            uint16_t ADLVLTRG : 16; 
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADLVLTRGL/H) ADC LEVEL-SENSITIVE TRIGGER CONTROL REGISTER LOW/HIGH

    /** 
     * @brief   ADC Input Interrupt Enable Register (Low/High) inherited from device header file
     */
    union ADIE_u {
        struct {
            uint16_t ADIE : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADIEL/H) ADC INTERRUPT ENABLE REGISTER LOW/HIGH

    /** 
     * @brief   ADC Input Data Ready Status Register (Low/High) inherited from device header file
     */
    union ADSTAT_u {
        struct {
            uint16_t ADSTAT : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADSTATL/H) ADC DATA READY STATUS REGISTER LOW/HIGH

    /** 
     * @brief   ADC Input Early Interrupt Enable Register (Low/High) inherited from device header file
     */
    union ADEIE_u {
        struct {
            uint16_t ADEIE : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADEIEL/H) ADC EARLY INTERRUPT ENABLE REGISTER LOW/HIGH

    /** 
     * @brief   ADC Input Early Interrupt Status Register (Low/High) inherited from device header file
     */
    union ADEISTAT_u {
        struct {
            uint16_t ADEISTAT : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADEISTATL/H) ADC EARLY INTERRUPT STATUS REGISTER LOW/HIGH

    /** 
     * @brief   ADC Input Trigger Selection Register (Low/High) inherited from device header file
     */
    union ADTRIG_u {
        struct { 
            uint8_t ADTRIGxEVEN;                ///< ADC Input Trigger of even ADC input index of this register group
            uint8_t ADTRIGxODD;                 ///< ADC Input Trigger of odd ADC input number of this register group
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADTRIGxL/H) ADC EVEN/ODD CHANNEL TRIGGER SELECTION REGISTER LOW/HIGH

    /** 
     * @brief   ADC Input Conversion Result Buffer Register (Low/High) inherited from device header file
     */
    union ADCBUF_u {
        struct {
            uint16_t ADCBUF : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCBUFx) ADC CHANNEL CONVERSION RESULT BUFFER REGISTER

    
    /*********************************************************************************/
    /*********************************************************************************/

    /** 
     * @brief   Dedicated ADC Core x Control Register LOW
     */
    union ADCORExL_u {
        #ifdef ADCORE0L
        struct tagADCORE0LBITS bits;            ///< Register bit-field
        #else
        uint16_t : 16;                          ///< (unimplemented)
        #endif
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCORExL) DEDICATED ADC CORE x CONTROL REGISTER LOW
    
    /** 
     * @brief   Dedicated ADC Core x Control Register HIGH
     */
    union ADCORExH_u {
        #ifdef ADCORE0H
        struct tagADCORE0HBITS bits;            ///< Register bit-field
        #else
        uint16_t : 16;                          ///< (unimplemented)
        #endif
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCORExH) DEDICATED ADC CORE x CONTROL REGISTER HIGH
    
    /*********************************************************************************/
    /*********************************************************************************/

    /** 
     * @brief   ADC Digital Comparator x Channel Enable Register
     */
    union ADCMPxEN_u {
        struct {
            uint16_t ADCMPxEN : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCMPxENL/H) ADC DIGITAL COMPARATOR x CHANNEL ENABLE REGISTER LOW/HIGH

    /** 
     * @brief   ADC Digital Comparator x Threshold Register
     */
    union ADCMPxTHLD_u {
        struct {
            uint16_t ADCMPxTHLD : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCMPxTHLD) ADC DIGITAL COMPARATOR x THRESHOLD REGISTER

    /** 
     * @brief   ADC Digital Comparator x Control Register
     */
    union ADCMPxCON_u {
        struct tagADCMP0CONBITS bits;           ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADCMPxCON) ADC DIGITAL COMPARATOR x CONTROL REGISTER

    /*********************************************************************************/
    /*********************************************************************************/

    /** 
     * @brief   ADC Digital Filter x Result Register
     */
    union ADFLxDAT_u {
        struct {
            uint16_t DATA : 16;
        } bits;                                 ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADFLxDAT) ADC DIGITAL FILTER x RESULT REGISTER
    
    /** 
     * @brief   ADC Digital Filter x Control Register
     */
    union ADFLxCON_u {
        struct tagADFL0CONBITS bits;            ///< Register bit-field
        uint16_t value;                         ///< 16-bit wide register value
    } __attribute__((packed));                  ///< (ADFLxCON) ADC DIGITAL FILTER x CONTROL REGISTER
    
    /*********************************************************************************/
    /*********************************************************************************/

    /** @} */ // end of inheritance declarations **************************************

    typedef union ADCON1L_u ADCON1L_t;  ///< (ADCON1L) ADC CONTROL 1 REGISTER LOW data type
    typedef union ADCON1H_u ADCON1H_t;  ///< (ADCON1H) ADC CONTROL 1 REGISTER HIGH data type
    typedef union ADCON2L_u ADCON2L_t;  ///< (ADCON2L) ADC CONTROL 2 REGISTER LOW data type
    typedef union ADCON2H_u ADCON2H_t;  ///< (ADCON2H) ADC CONTROL 2 REGISTER HIGH data type
    typedef union ADCON3L_u ADCON3L_t;  ///< (ADCON3L) ADC CONTROL 3 REGISTER LOW data type
    typedef union ADCON3H_u ADCON3H_t;  ///< (ADCON3H) ADC CONTROL 3 REGISTER HIGH data type
    typedef union ADCON4L_u ADCON4L_t;  ///< (ADCON4L) ADC CONTROL 4 REGISTER LOW data type
    typedef union ADCON4H_u ADCON4H_t;  ///< (ADCON4H) ADC CONTROL 4 REGISTER HIGH data type
    typedef union ADCON5L_u ADCON5L_t;  ///< (ADCON5L) ADC CONTROL 5 REGISTER LOW data type
    typedef union ADCON5H_u ADCON5H_t;  ///< (ADCON5H) ADC CONTROL 5 REGISTER HIGH data type
    
    typedef union ADMOD_u   ADMOD_t;    ///< (ADMOD) ADC INPUT MODE CONTROL REGISTER data type
    typedef union ADIE_u    ADIE_t;     ///< (ADIE)  ADC INPUT INTERRUPT ENABLE REGISTER data type
    typedef union ADSTAT_u  ADSTAT_t;   ///< (ADSTAT) ADC DATA READY STATUS REGISTER  data type
    typedef union ADEIE_u   ADEIE_t;    ///< (ADEIE) ADC INPUT EARLY INTERRUPT ENABLE REGISTER data type
    typedef union ADEISTAT_u ADEISTAT_t; ///< (ADEISTAT) ADC EARLY INTERRUPT STATUS REGISTER data type
    typedef union ADTRIG_u  ADTRIG_t;   ///< (ADTRIG)  ADC EVEN/ODD CHANNEL TRIGGER SELECTION REGISTER data type
    typedef union ADCBUF_u  ADCBUF_t;   ///< (ADCBUF)  ADC CHANNEL CONVERSION RESULT BUFFER REGISTER data type
    typedef union ADLVLTRG_u ADLVLTRG_t; ///< (ADLVLTRG) ADC LEVEL-SENSITIVE TRIGGER CONTROL REGISTER data type
    
    typedef union ADCMPxEN_u ADCMPxEN_t;  ///< (ADCMPxEN) ADC DIGITAL COMPARATOR x CHANNEL ENABLE REGISTER data type
    typedef union ADCMPxTHLD_u ADCMPxTHLD_t;  ///< (ADCMPxTHLD) ADC DIGITAL COMPARATOR x COMPAPRE THRESHOLD REGISTER data type
    typedef union ADCMPxTHLD_u ADCMPxLO_t;  ///< (ADCMPxLO) ADC DIGITAL COMPARATOR x COMPAPRE LOW THRESHOLD REGISTER data type
    typedef union ADCMPxTHLD_u ADCMPxHI_t;  ///< (ADCMPxHI) ADC DIGITAL COMPARATOR x COMPAPRE HIGH THRESHOLD REGISTER data type
    typedef union ADCMPxCON_u  ADCMPxCON_t; ///< (ADCMPxCON) ADC DIGITAL COMPARATOR x CONTROL REGISTER data type

    typedef union ADFLxDAT_u ADFLxDAT_t;  ///< ADC DIGITAL FILTER x DATA REGISTER data type
    typedef union ADFLxCON_u ADFLxCON_t;  ///< ADC DIGITAL FILTER x CONTROL REGISTER data type

    typedef union ADCORExL_u ADCORExL_t;  ///< (ADCORExL) DEDICATED ADC CORE x CONTROL REGISTER LOW data type
    typedef union ADCORExH_u ADCORExH_t;  ///< (ADCORExH) DEDICATED ADC CORE x CONTROL REGISTER HIGH data type

    /***********************************************************************************
     * @struct  P33C_ADC_s
     * @ingroup p33c-pral-adc-properties
     * @brief   Set of Special Function Registers of the entire ADC peripheral
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the ADC peripheral registers. Users can use this abstracted data set of 
     *  register values to capture most recent settings from or write new settings 
     *  to the configuration registers of the ADC peripheral. 
     * 
     **********************************************************************************/
    struct P33C_ADC_s {
        
        ADCON1L_t ADCON1L;      ///< (ADCON1L) ADC CONTROL 1 REGISTER LOW data type
        ADCON1H_t ADCON1H;      ///< (ADCON1H) ADC CONTROL 1 REGISTER HIGH data type
        ADCON2L_t ADCON2L;      ///< (ADCON2L) ADC CONTROL 2 REGISTER LOW data type
        ADCON2H_t ADCON2H;      ///< (ADCON2H) ADC CONTROL 2 REGISTER HIGH data type
        ADCON3L_t ADCON3L;      ///< (ADCON3L) ADC CONTROL 3 REGISTER LOW data type
        ADCON3H_t ADCON3H;      ///< (ADCON3H) ADC CONTROL 3 REGISTER HIGH data type
        ADCON4L_t ADCON4L;      ///< (ADCON4L) ADC CONTROL 4 REGISTER LOW data type
        ADCON4H_t ADCON4H;      ///< (ADCON4H) ADC CONTROL 4 REGISTER HIGH data type
        ADMOD_t   ADMOD0L;      ///< (ADMOD0L) ADC INPUT MODE CONTROL REGISTER 0 LOW data type
        ADMOD_t   ADMOD0H;      ///< (ADMOD0H) ADC INPUT MODE CONTROL REGISTER 0 HIGH data type
        ADMOD_t   ADMOD1L;      ///< (ADMOD1L) ADC INPUT MODE CONTROL REGISTER 1 LOW data type
        ADMOD_t   ADMOD1H;      ///< (ADMOD1H) ADC INPUT MODE CONTROL REGISTER 1 HIGH data type
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADIE_t    ADIEL;        ///< (ADIEL) ADC INPUT INTERRUPT ENABLE REGISTER LOW data type
        ADIE_t    ADIEH;        ///< (ADIEH) ADC INPUT INTERRUPT ENABLE REGISTER HIGH data type
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADSTAT_t  ADSTATL;      ///< (ADSTATL) ADC DATA READY STATUS REGISTER LOW data type
        ADSTAT_t  ADSTATH;      ///< (ADSTATH) ADC DATA READY STATUS REGISTER HIGH data type
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADCMPxEN_t ADCMP0ENL;   ///< (ADCMP0ENL) ADC DIGITAL COMPARATOR 0 CHANNEL ENABLE REGISTER LOW data type
        ADCMPxEN_t ADCMP0ENH;   ///< (ADCMP0ENH) ADC DIGITAL COMPARATOR 0 CHANNEL ENABLE REGISTER HIGH data type
        ADCMPxLO_t ADCMP0LO;    ///< (ADCMP0LO) ADC DIGITAL COMPARATOR 0 COMPARE LOWER THRESHOLD REGISTER data type
        ADCMPxHI_t ADCMP0HI;    ///< (ADCMP0HI) ADC DIGITAL COMPARATOR 0 COMPARE UPPER THRESHOLD REGISTER data type
        ADCMPxEN_t ADCMP1ENL;   ///< (ADCMP1ENL) ADC DIGITAL COMPARATOR 1 CHANNEL ENABLE REGISTER LOW data type
        ADCMPxEN_t ADCMP1ENH;   ///< (ADCMP1ENH) ADC DIGITAL COMPARATOR 1 CHANNEL ENABLE REGISTER HIGH data type
        ADCMPxLO_t ADCMP1LO;    ///< (ADCMP1LO) ADC DIGITAL COMPARATOR 1 COMPARE LOWER THRESHOLD REGISTER data type
        ADCMPxHI_t ADCMP1HI;    ///< (ADCMP1HI) ADC DIGITAL COMPARATOR 1 COMPARE UPPER THRESHOLD REGISTER data type
        ADCMPxEN_t ADCMP2ENL;   ///< (ADCMP2ENL) ADC DIGITAL COMPARATOR 2 CHANNEL ENABLE REGISTER LOW data type
        ADCMPxEN_t ADCMP2ENH;   ///< (ADCMP2ENH) ADC DIGITAL COMPARATOR 2 CHANNEL ENABLE REGISTER HIGH data type
        ADCMPxLO_t ADCMP2LO;    ///< (ADCMP2LO) ADC DIGITAL COMPARATOR 2 COMPARE LOWER THRESHOLD REGISTER data type
        ADCMPxHI_t ADCMP2HI;    ///< (ADCMP2HI) ADC DIGITAL COMPARATOR 2 COMPARE UPPER THRESHOLD REGISTER data type
        ADCMPxEN_t ADCMP3ENL;   ///< (ADCMP3ENL) ADC DIGITAL COMPARATOR 3 CHANNEL ENABLE REGISTER LOW data type
        ADCMPxEN_t ADCMP3ENH;   ///< (ADCMP3ENH) ADC DIGITAL COMPARATOR 3 CHANNEL ENABLE REGISTER HIGH data type
        ADCMPxLO_t ADCMP3LO;    ///< (ADCMP3LO) ADC DIGITAL COMPARATOR 3 COMPARE LOWER THRESHOLD REGISTER data type
        ADCMPxHI_t ADCMP3HI;    ///< (ADCMP3HI) ADC DIGITAL COMPARATOR 3 COMPARE UPPER THRESHOLD REGISTER data type
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADFLxDAT_t ADFL0DAT;    ///< (ADFL0DAT) ADC DIGITAL FILTER 0 DATA REGISTER 
        ADFLxCON_t ADFL0CON;    ///< (ADFL0CON) ADC DIGITAL FILTER 0 CONTROL REGISTER 
        ADFLxDAT_t ADFL1DAT;    ///< (ADFL1DAT) ADC DIGITAL FILTER 1 DATA REGISTER 
        ADFLxCON_t ADFL1CON;    ///< (ADFL1CON) ADC DIGITAL FILTER 1 CONTROL REGISTER 
        ADFLxDAT_t ADFL2DAT;    ///< (ADFL2DAT) ADC DIGITAL FILTER 2 DATA REGISTER 
        ADFLxCON_t ADFL2CON;    ///< (ADFL2CON) ADC DIGITAL FILTER 2 CONTROL REGISTER 
        ADFLxDAT_t ADFL3DAT;    ///< (ADFL3DAT) ADC DIGITAL FILTER 3 DATA REGISTER 
        ADFLxCON_t ADFL3CON;    ///< (ADFL3CON) ADC DIGITAL FILTER 3 CONTROL REGISTER 
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADTRIG_t   ADTRIG0L;    ///< (ADTRIG0L) ADC EVEN/ODD CHANNEL TRIGGER 0 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG0H;    ///< (ADTRIG0H) ADC EVEN/ODD CHANNEL TRIGGER 0 SELECTION REGISTER HIGH
        ADTRIG_t   ADTRIG1L;    ///< (ADTRIG1L) ADC EVEN/ODD CHANNEL TRIGGER 1 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG1H;    ///< (ADTRIG1H) ADC EVEN/ODD CHANNEL TRIGGER 1 SELECTION REGISTER HIGH
        ADTRIG_t   ADTRIG2L;    ///< (ADTRIG2L) ADC EVEN/ODD CHANNEL TRIGGER 2 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG2H;    ///< (ADTRIG2H) ADC EVEN/ODD CHANNEL TRIGGER 2 SELECTION REGISTER HIGH
        ADTRIG_t   ADTRIG3L;    ///< (ADTRIG3L) ADC EVEN/ODD CHANNEL TRIGGER 3 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG3H;    ///< (ADTRIG3H) ADC EVEN/ODD CHANNEL TRIGGER 3 SELECTION REGISTER HIGH
        ADTRIG_t   ADTRIG4L;    ///< (ADTRIG4L) ADC EVEN/ODD CHANNEL TRIGGER 4 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG4H;    ///< (ADTRIG4H) ADC EVEN/ODD CHANNEL TRIGGER 4 SELECTION REGISTER HIGH
        ADTRIG_t   ADTRIG5L;    ///< (ADTRIG5L) ADC EVEN/ODD CHANNEL TRIGGER 5 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG5H;    ///< (ADTRIG5H) ADC EVEN/ODD CHANNEL TRIGGER 5 SELECTION REGISTER HIGH
        ADTRIG_t   ADTRIG6L;    ///< (ADTRIG6L) ADC EVEN/ODD CHANNEL TRIGGER 6 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG6H;    ///< (ADTRIG6H) ADC EVEN/ODD CHANNEL TRIGGER 6 SELECTION REGISTER HIGH
        ADTRIG_t   ADTRIG7L;    ///< (ADTRIG7L) ADC EVEN/ODD CHANNEL TRIGGER 7 SELECTION REGISTER LOW
        ADTRIG_t   ADTRIG7H;    ///< (ADTRIG7H) ADC EVEN/ODD CHANNEL TRIGGER 7 SELECTION REGISTER HIGH
        ADCMPxCON_t ADCMP0CON;  ///< (ADCMP0CON) ADC DIGITAL COMPARATOR 0 CONTROL REGISTER
        unsigned : 16;          ///< (unimplemented)
        ADCMPxCON_t ADCMP1CON;  ///< (ADCMP1CON) ADC DIGITAL COMPARATOR 1 CONTROL REGISTER
        unsigned : 16;          ///< (unimplemented)
        ADCMPxCON_t ADCMP2CON;  ///< (ADCMP2CON) ADC DIGITAL COMPARATOR 2 CONTROL REGISTER
        unsigned : 16;          ///< (unimplemented)
        ADCMPxCON_t ADCMP3CON;  ///< (ADCMP3CON) ADC DIGITAL COMPARATOR 3 CONTROL REGISTER
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADLVLTRG_t ADLVLTRGL;   ///< (ADLVLTRG) ADC LEVEL-SENSITIVE TRIGGER CONTROL REGISTER LOW
        ADLVLTRG_t ADLVLTRGH;   ///< (ADLVLTRG) ADC LEVEL-SENSITIVE TRIGGER CONTROL REGISTER HIGH
        ADCORExL_t ADCORE0L;    ///< (ADCORE0L) DEDICATED ADC CORE 0 CONTROL REGISTER LOW
        ADCORExH_t ADCORE0H;    ///< (ADCORE0H) DEDICATED ADC CORE 0 CONTROL REGISTER HIGH
        ADCORExL_t ADCORE1L;    ///< (ADCORE1L) DEDICATED ADC CORE 1 CONTROL REGISTER LOW
        ADCORExH_t ADCORE1H;    ///< (ADCORE1H) DEDICATED ADC CORE 1 CONTROL REGISTER HIGH
        ADCORExL_t ADCORE2L;    ///< (ADCORE2L) DEDICATED ADC CORE 2 CONTROL REGISTER LOW
        ADCORExH_t ADCORE2H;    ///< (ADCORE2H) DEDICATED ADC CORE 2 CONTROL REGISTER HIGH
        ADCORExL_t ADCORE3L;    ///< (ADCORE3L) DEDICATED ADC CORE 3 CONTROL REGISTER LOW
        ADCORExH_t ADCORE3H;    ///< (ADCORE3H) DEDICATED ADC CORE 3 CONTROL REGISTER HIGH
        ADCORExL_t ADCORE4L;    ///< (ADCORE4L) DEDICATED ADC CORE 4 CONTROL REGISTER LOW
        ADCORExH_t ADCORE4H;    ///< (ADCORE4H) DEDICATED ADC CORE 4 CONTROL REGISTER HIGH
        ADCORExL_t ADCORE5L;    ///< (ADCORE5L) DEDICATED ADC CORE 5 CONTROL REGISTER LOW
        ADCORExH_t ADCORE5H;    ///< (ADCORE5H) DEDICATED ADC CORE 5 CONTROL REGISTER HIGH
        ADCORExL_t ADCORE6L;    ///< (ADCORE6L) DEDICATED ADC CORE 6 CONTROL REGISTER LOW
        ADCORExH_t ADCORE6H;    ///< (ADCORE6H) DEDICATED ADC CORE 6 CONTROL REGISTER HIGH
        ADEIE_t ADEIEL;         ///< (ADEIEL) ADC INPUT EARLY INTERRUPT ENABLE REGISTER LOW
        ADEIE_t ADEIEH;         ///< (ADEIEH) ADC INPUT EARLY INTERRUPT ENABLE REGISTER HIGH
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADEISTAT_t ADEISTATL;   ///< (ADEISTATL) ADC EARLY INTERRUPT STATUS REGISTER LOW
        ADEISTAT_t ADEISTATH;   ///< (ADEISTATH) ADC EARLY INTERRUPT STATUS REGISTER HIGH
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADCON5L_t ADCON5L;      ///< (ADCON5L) ADC CONTROL 5 REGISTER LOW 
        ADCON5H_t ADCON5H;      ///< (ADCON5H) ADC CONTROL 5 REGISTER HIGH 
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        unsigned : 16;          ///< (unimplemented)
        ADCBUF_t ADCBUF0;       ///< (ADCBUF0) ADC CHANNEL CONVERSION RESULT BUFFER 0 REGISTER
        ADCBUF_t ADCBUF1;       ///< (ADCBUF1) ADC CHANNEL CONVERSION RESULT BUFFER 1 REGISTER
        ADCBUF_t ADCBUF2;       ///< (ADCBUF2) ADC CHANNEL CONVERSION RESULT BUFFER 2 REGISTER
        ADCBUF_t ADCBUF3;       ///< (ADCBUF3) ADC CHANNEL CONVERSION RESULT BUFFER 3 REGISTER
        ADCBUF_t ADCBUF4;       ///< (ADCBUF4) ADC CHANNEL CONVERSION RESULT BUFFER 4 REGISTER
        ADCBUF_t ADCBUF5;       ///< (ADCBUF5) ADC CHANNEL CONVERSION RESULT BUFFER 5 REGISTER
        ADCBUF_t ADCBUF6;       ///< (ADCBUF6) ADC CHANNEL CONVERSION RESULT BUFFER 6 REGISTER
        ADCBUF_t ADCBUF7;       ///< (ADCBUF7) ADC CHANNEL CONVERSION RESULT BUFFER 7 REGISTER
        ADCBUF_t ADCBUF8;       ///< (ADCBUF8) ADC CHANNEL CONVERSION RESULT BUFFER 8 REGISTER
        ADCBUF_t ADCBUF9;       ///< (ADCBUF9) ADC CHANNEL CONVERSION RESULT BUFFER 9 REGISTER
        ADCBUF_t ADCBUF10;      ///< (ADCBUF10) ADC CHANNEL CONVERSION RESULT BUFFER 10 REGISTER
        ADCBUF_t ADCBUF11;      ///< (ADCBUF11) ADC CHANNEL CONVERSION RESULT BUFFER 11 REGISTER
        ADCBUF_t ADCBUF12;      ///< (ADCBUF12) ADC CHANNEL CONVERSION RESULT BUFFER 12 REGISTER
        ADCBUF_t ADCBUF13;      ///< (ADCBUF13) ADC CHANNEL CONVERSION RESULT BUFFER 13 REGISTER
        ADCBUF_t ADCBUF14;      ///< (ADCBUF14) ADC CHANNEL CONVERSION RESULT BUFFER 14 REGISTER
        ADCBUF_t ADCBUF15;      ///< (ADCBUF15) ADC CHANNEL CONVERSION RESULT BUFFER 15 REGISTER
        ADCBUF_t ADCBUF16;      ///< (ADCBUF16) ADC CHANNEL CONVERSION RESULT BUFFER 16 REGISTER
        ADCBUF_t ADCBUF17;      ///< (ADCBUF17) ADC CHANNEL CONVERSION RESULT BUFFER 17 REGISTER
        ADCBUF_t ADCBUF18;      ///< (ADCBUF18) ADC CHANNEL CONVERSION RESULT BUFFER 18 REGISTER
        ADCBUF_t ADCBUF19;      ///< (ADCBUF19) ADC CHANNEL CONVERSION RESULT BUFFER 19 REGISTER
        ADCBUF_t ADCBUF20;      ///< (ADCBUF20) ADC CHANNEL CONVERSION RESULT BUFFER 20 REGISTER
        ADCBUF_t ADCBUF21;      ///< (ADCBUF21) ADC CHANNEL CONVERSION RESULT BUFFER 21 REGISTER
        ADCBUF_t ADCBUF22;      ///< (ADCBUF22) ADC CHANNEL CONVERSION RESULT BUFFER 22 REGISTER
        ADCBUF_t ADCBUF23;      ///< (ADCBUF23) ADC CHANNEL CONVERSION RESULT BUFFER 23 REGISTER
        ADCBUF_t ADCBUF24;      ///< (ADCBUF24) ADC CHANNEL CONVERSION RESULT BUFFER 24 REGISTER
        ADCBUF_t ADCBUF25;      ///< (ADCBUF25) ADC CHANNEL CONVERSION RESULT BUFFER 25 REGISTER
        ADCBUF_t ADCBUF26;      ///< (ADCBUF26) ADC CHANNEL CONVERSION RESULT BUFFER 26 REGISTER
        ADCBUF_t ADCBUF27;      ///< (ADCBUF27) ADC CHANNEL CONVERSION RESULT BUFFER 27 REGISTER
        ADCBUF_t ADCBUF28;      ///< (ADCBUF28) ADC CHANNEL CONVERSION RESULT BUFFER 28 REGISTER
        ADCBUF_t ADCBUF29;      ///< (ADCBUF29) ADC CHANNEL CONVERSION RESULT BUFFER 29 REGISTER
        ADCBUF_t ADCBUF30;      ///< (ADCBUF30) ADC CHANNEL CONVERSION RESULT BUFFER 30 REGISTER
        ADCBUF_t ADCBUF31;      ///< (ADCBUF31) ADC CHANNEL CONVERSION RESULT BUFFER 31 REGISTER

    }__attribute__((aligned));

	typedef struct P33C_ADC_s P33C_ADC_t; ///< ADC PERIPHERAL REGISTER SET

    /*********************************************************************************
     * @ingroup p33c-pral-adc-methods
     * @brief   Gets pointer to start address of Analog-to-Digital Converter Peripheral SFR set
     * @return  Pointer address to ADC peripheral of type P33C_ADC_t
     * 
     * @details
     *  This macro returns the pointer to analog-to-digital converter instance register set
     *  (start address of Special Function Register memory space). This pointer can be 
     *  used to directly write to/read from the Special Function Registers of the 
     *  analog-to-digital peripheral instance configuration.
     * 
     *********************************************************************************/
    #define p33c_Adc_GetHandle() (P33C_ADC_t*)&ADCON1L ///< Captures memory address of the ADC peripheral register set
    
#endif // end of P33C_ADC_s
    
#endif /* End of P33C_HSADC_SFR_INHERITANCE_H */

// ___________________
// end of files
