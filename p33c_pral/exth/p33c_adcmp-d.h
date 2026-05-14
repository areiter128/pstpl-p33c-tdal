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
 * @file    p33c_adcmp-d.h
 * @see     p33c_adcmp.h
 * @brief   Analog-To-Digital Converter (ADC) Digital Comparator peripheral register abstraction data type declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_ADCMP_SFR_DECLARATIONS_H
#define	P33C_ADCMP_SFR_DECLARATIONS_H

#include "p33c_devices.h" // include SMPS device family abstraction declarations
#include "p33c_adcregs.h" // include SMPS Device ADC peripheral module register set declarations

/*************************************************************************************************
 * @brief   Array of start addresses of each ADC digital comparator instance register set
 */
#if defined (ADCMP7ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[8]={&ADCMP0ENL, &ADCMP1ENL, &ADCMP2ENL, &ADCMP3ENL, &ADCMP4ENL, &ADCMP5ENL, &ADCMP6ENL, &ADCMP7ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[8]={&ADCMP0LO, &ADCMP1LO, &ADCMP2LO, &ADCMP3LO, &ADCMP4LO, &ADCMP5LO, &ADCMP6LO, &ADCMP7LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[8]={&ADCMP0HI, &ADCMP1HI, &ADCMP2HI, &ADCMP3HI, &ADCMP4HI, &ADCMP5HI, &ADCMP6HI, &ADCMP7HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[8]={&ADCMP0CON, &ADCMP1CON, &ADCMP2CON, &ADCMP3CON, &ADCMP4CON, &ADCMP5CON, &ADCMP6CON, &ADCMP7CON};
#elif defined (ADCMP6ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[7]={&ADCMP0ENL, &ADCMP1ENL, &ADCMP2ENL, &ADCMP3ENL, &ADCMP4ENL, &ADCMP5ENL, &ADCMP6ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[7]={&ADCMP0LO, &ADCMP1LO, &ADCMP2LO, &ADCMP3LO, &ADCMP4LO, &ADCMP5LO, &ADCMP6LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[7]={&ADCMP0HI, &ADCMP1HI, &ADCMP2HI, &ADCMP3HI, &ADCMP4HI, &ADCMP5HI, &ADCMP6HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[7]={&ADCMP0CON, &ADCMP1CON, &ADCMP2CON, &ADCMP3CON, &ADCMP4CON, &ADCMP5CON, &ADCMP6CON};
#elif defined (ADCMP5ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[6]={&ADCMP0ENL, &ADCMP1ENL, &ADCMP2ENL, &ADCMP3ENL, &ADCMP4ENL, &ADCMP5ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[6]={&ADCMP0LO, &ADCMP1LO, &ADCMP2LO, &ADCMP3LO, &ADCMP4LO, &ADCMP5LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[6]={&ADCMP0HI, &ADCMP1HI, &ADCMP2HI, &ADCMP3HI, &ADCMP4HI, &ADCMP5HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[6]={&ADCMP0CON, &ADCMP1CON, &ADCMP2CON, &ADCMP3CON, &ADCMP4CON, &ADCMP5CON};
#elif defined (ADCMP4ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[5]={&ADCMP0ENL, &ADCMP1ENL, &ADCMP2ENL, &ADCMP3ENL, &ADCMP4ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[5]={&ADCMP0LO, &ADCMP1LO, &ADCMP2LO, &ADCMP3LO, &ADCMP4LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[5]={&ADCMP0HI, &ADCMP1HI, &ADCMP2HI, &ADCMP3HI, &ADCMP4HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[5]={&ADCMP0CON, &ADCMP1CON, &ADCMP2CON, &ADCMP3CON, &ADCMP4CON};
#elif defined (ADCMP3ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[4]={&ADCMP0ENL, &ADCMP1ENL, &ADCMP2ENL, &ADCMP3ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[4]={&ADCMP0LO, &ADCMP1LO, &ADCMP2LO, &ADCMP3LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[4]={&ADCMP0HI, &ADCMP1HI, &ADCMP2HI, &ADCMP3HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[4]={&ADCMP0CON, &ADCMP1CON, &ADCMP2CON, &ADCMP3CON};
#elif defined (ADCMP2ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[3]={&ADCMP0ENL, &ADCMP1ENL, &ADCMP2ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[3]={&ADCMP0LO, &ADCMP1LO, &ADCMP2LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[3]={&ADCMP0HI, &ADCMP1HI, &ADCMP2HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[3]={&ADCMP0CON, &ADCMP1CON, &ADCMP2CON};
#elif defined (ADCMP1ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[2]={&ADCMP0ENL, &ADCMP1ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[2]={&ADCMP0LO, &ADCMP1LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[2]={&ADCMP0HI, &ADCMP1HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[2]={&ADCMP0CON, &ADCMP1CON};
#elif defined (ADCMP0ENL)
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[1]={&ADCMP0ENL};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[1]={&ADCMP0LO};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[1]={&ADCMP0HI};
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[1]={&ADCMP0CON};
#else
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Handles[0];
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldLow[0];
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_ThldHigh[0];
static volatile __attribute__((unused)) uint16_t* p33c_AdCmpInstance_Control[0];
#pragma message "selected device has no supported ADC Digital Comparator"
#endif

#ifndef P33C_ADCMP_INSTANCE_s

    /***********************************************************************************
     * @struct  P33C_ADCMP_INSTANCE_s
     * @ingroup p33c-pral-adcmp-properties
     * @brief   Set of Special Function Registers of an ADC comparator instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of  
     *  the ADC comparator instance registers. Users can use this abstracted data set 
     *  of register values to capture most recent settings from or write new settings 
     *  to the configuration registers of the ADC comparator instance. 
     * 
     **********************************************************************************/
    struct P33C_ADCMP_INSTANCE_s {

        ADCMPxEN_t   ADCMPxENL; ///< ADC Digital Comparator x Channel Enable Register LOW
        ADCMPxEN_t   ADCMPxENH; ///< ADC Digital Comparator x Channel Enable Register HIGH
        ADCMPxTHLD_t ADCMPxLO;  ///< ADC Digital Comparator x Lower Compare Threshold Register
        ADCMPxTHLD_t ADCMPxHI;  ///< ADC Digital Comparator x Upper Compare Threshold Register
        ADCMPxCON_t  ADCMPxCON; ///< ADC Digital Comparator x Control Register
        
    };

	typedef struct P33C_ADCMP_INSTANCE_s P33C_ADCMP_INSTANCE_t; ///< ADC COMPARATOR INSTANCE REGISTER SET
    
    /*********************************************************************************
     * @ingroup p33c-pral-adcmp-instance-methods
     * @brief   Checks if the peripheral instance specified by pInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  Requested peripheral instance index does exist 
     * @return  false: Requested peripheral instance index does not exist 
     *  
     * @details
     *  This function provides a guarding condition test to verify if a specific 
     *  peripheral instance exists before accessing it. 
     * 
     *********************************************************************************/
    #define p33c_AdCmpInstance_Exists(pInstance) (bool)(((0 <=pInstance) && (pInstance < p33c_AdCmpInstances)) ? true : false)
    
    #define p33c_AdCmpInstance_GetControlHandle(pInstance) (ADCMPxCON_t*)p33c_AdCmpInstance_Control[pInstance]
    
#endif  // end of P33C_ADCMP_INSTANCE_t

/* AUXILIARY MACROS FOR EFFICIENT REGISTER ACCESS */

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Sets the lower threshold value of an ADC Digital Comparator Instance
 * @param   adcmpInstance: ADC Digital Comparator instance index of type unsigned integer (e.g. 0 for ADCMP0, 1 for ADCMP1, etc)
 * @param   thresholdLow:  Lower compare value of type unsigned integer
 *  
 * @details
 *  This macro sets the lower threshold of an ADC Digital Comparator instance 
 *  using direct, low-level register access.
 * 
 *********************************************************************************/
#define p33c_AdCmp_SetThresholdLow(adcmpInstance, thresholdLow) { *p33c_AdCmpInstance_ThldLow[adcmpInstance] = thresholdLow; }

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Sets the upper threshold value of an ADC Digital Comparator Instance
 * @param   adcmpInstance: ADC Digital Comparator instance index of type unsigned integer (e.g. 0 for ADCMP0, 1 for ADCMP1, etc)
 * @param   thresholdHigh: Upper compare value of type unsigned integer
 *  
 * @details
 *  This macro sets the upper threshold of an ADC Digital Comparator instance 
 *  using direct, low-level register access.
 * 
 *********************************************************************************/
#define p33c_AdCmp_SetThresholdHigh(adcmpInstance, thresholdHigh) { *p33c_AdCmpInstance_ThldHigh[adcmpInstance] = thresholdHigh; }

/*********************************************************************************
 * @ingroup p33c-pral-adcmp-methods
 * @brief   Gets the index of the analog input which tripped the ADC Digital Comparator Instance
 * @param   adcmpInstance: ADC Digital Comparator instance index of type unsigned integer (e.g. 0 for ADCMP0, 1 for ADCMP1, etc)
 *  
 * @details
 *  This macro gets the index of the analog input which tripped the specified
 *  ADC Digital Comparator instance using direct, low-level register access.
 * 
 *********************************************************************************/
#define p33c_AdCmp_GetAnSource(adcmpInstance) (uint16_t)((*p33c_AdCmpInstance_Control[adcmpInstance] & 0x1F00) >> 8);

#endif	/* End of P33C_ADCMP_SFR_DECLARATIONS_H */

// ______________________________
// end of file
