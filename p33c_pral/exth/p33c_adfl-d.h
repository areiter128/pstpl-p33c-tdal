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
 * @file    p33c_adfl-d.h
 * @see     p33c_adfl.h
 * @brief   Analog-To-Digital Converter (ADC) Digital Filter peripheral register abstraction data type declarations
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_ADFL_SFR_DECLARATIONS_H
#define	P33C_ADFL_SFR_DECLARATIONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file

#include "p33c_devices.h" // include SMPS device family abstraction declarations
#include "p33c_adcregs.h" // include SMPS device ADC peripheral module register set declarations

/*************************************************************************************************
 * @brief   Array of register set start addresses of ADC Digital Filter instance register sets
 */
#if defined (ADFL7DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[8]={
        &ADFL0DAT, &ADFL1DAT, &ADFL2DAT, &ADFL3DAT,
        &ADFL4DAT, &ADFL5DAT, &ADFL6DAT, &ADFL7DAT
    };
#elif defined (ADFL6DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[7]={
        &ADFL0DAT, &ADFL1DAT, &ADFL2DAT, &ADFL3DAT,
        &ADFL4DAT, &ADFL5DAT, &ADFL6DAT
    };
#elif defined (ADFL5DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[6]={
        &ADFL0DAT, &ADFL1DAT, &ADFL2DAT, &ADFL3DAT,
        &ADFL4DAT, &ADFL5DAT
    };
#elif defined (ADFL4DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[5]={
        &ADFL0DAT, &ADFL1DAT, &ADFL2DAT, &ADFL3DAT,
        &ADFL4DAT
    };
#elif defined (ADFL3DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[4]={
        &ADFL0DAT, &ADFL1DAT, &ADFL2DAT, &ADFL3DAT
    };
#elif defined (ADFL2DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[3]={
        &ADFL0DAT, &ADFL1DAT, &ADFL2DAT
    };
#elif defined (ADFL1DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[2]={
        &ADFL0DAT, &ADFL1DAT
    };
#elif defined (ADFL0DAT)
    static volatile uint16_t* p33c_AdFilterInstance_Handles[1]={
        &ADFL0DAT
    };
#else
    static volatile uint16_t* p33c_AdFilterInstance_Handles[0];
    #pragma message "selected device has no supported ADC Digital Filter"
#endif


#ifndef P33C_ADFL_INSTANCE_s

    /***********************************************************************************
     * @struct  P33C_ADFL_INSTANCE_s
     * @ingroup p33c-pral-adfl-properties
     * @brief   Set of Special Function Registers of an ADC Digital Filter instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of
     *  the ADC Digital Filter instance registers. Users can use this abstracted
     *  data set of register values to capture most recent settings from or write
     *  new settings to the configuration registers of the module.
     * 
     **********************************************************************************/
    struct P33C_ADFL_INSTANCE_s {

        ADFLxDAT_t ADFLxDAT;  ///< ADC Digital Filter x Result Register
        ADFLxCON_t ADFLxCON;  ///< ADC Digital Filter x Control Register
        
    } __attribute__((aligned));

	typedef struct P33C_ADFL_INSTANCE_s P33C_ADFL_INSTANCE_t; ///< ADC Digital Filter Instance Register Set

    /*********************************************************************************
     * @ingroup p33c-pral-adfl-methods
     * @brief   Gets Pointer to the ADC Digital Filter instance SFR set
     * @param   adflInstance: Index of the ADC Digital Filter instance of type unsigned integer (e.g. 0 for ADFL0, 1 for ADFL1, etc.)
     * @return  P33C_ADFL_INSTANCE_t: Pointer to ADC Digital Filter instance special function register set data object 
     *  
     * @details
     *  This macro returns the pointer to ADC Digital Filter instance register set 
     *  (start address of Special Function Register memory space). This pointer can 
     *  be used to directly write to/read from the Special Function Registers 
     *  of the specified ADC Digital Filter instance configuration.
     * 
     *********************************************************************************/
    #define p33c_AdFltInstance_GetHandle(adflInstance) (P33C_ADFL_INSTANCE_t*)p33c_AdFilterInstance_Handles[adflInstance] ///< Captures memory address of an ADC Digital Filter instance register set

    /*********************************************************************************
     * @ingroup p33c-pral-adfl-methods
     * @brief   Gets the most recent ADC Digital Filter instance data result
     * @param   adflInstance: Index of the ADC Digital Filter instance of type unsigned integer (e.g. 0 for ADFL0, 1 for ADFL1, etc.)
     * @return  ADC Digital Filter output result of type unsigned integer
     *  
     * @details
     *  This macro returns the most recent ADC Digital Filter output from the 
     *  instance data register, using direct, low-level register access.
     * 
     *********************************************************************************/
    #define p33c_AdFltInstance_GetResult(adflInstance) (uint16_t)*p33c_AdFilterInstance_Handles[adflInstance] ///< Returns the ADC Digital Filter output data

    /*********************************************************************************
     * @ingroup p33c-pral-adfl-instance-methods
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
    #define p33c_AdFltInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_AdFilterInstances)) ? true : false)
    
#endif  // end of P33C_ADFL_INSTANCE_s
#endif	/* End of P33C_ADFL_SFR_DECLARATIONS_H */

// ______________________________
// end of file
