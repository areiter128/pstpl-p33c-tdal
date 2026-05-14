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
 * @file    p33c_dac-d.h
 * @see     p33c_dac.h
 * @brief   Digital-To-Analog Converter Driver Module peripheral register abstraction data type declarations
 * @author  M91406
 * @details
 * This additional header file contains defines for all required bit-settings of all related 
 * special function registers of a peripheral module and/or instance. 
 * This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_DAC_SFR_DECLARATIONS_H
#define	P33C_DAC_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

// Determine number of available DAC instances on the selected device
#if defined (DAC8CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[8]={ 
		&DAC1CONL, &DAC2CONL, &DAC3CONL, &DAC4CONL, 
		&DAC5CONL, &DAC6CONL, &DAC7CONL, &DAC8CONL 
	};
#elif defined (DAC7CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[7]={ 
		&DAC1CONL, &DAC2CONL, &DAC3CONL, &DAC4CONL, 
		&DAC5CONL, &DAC6CONL, &DAC7CONL 
	};
#elif defined (DAC6CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[6]={ 
		&DAC1CONL, &DAC2CONL, &DAC3CONL, &DAC4CONL, 
		&DAC5CONL, &DAC6CONL
	};
#elif defined (DAC5CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[5]={ 
		&DAC1CONL, &DAC2CONL, &DAC3CONL, &DAC4CONL, 
		&DAC5CONL
	};
#elif defined (DAC4CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[4]={ 
		&DAC1CONL, &DAC2CONL, &DAC3CONL, &DAC4CONL
	};
#elif defined (DAC3CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[3]={ 
		&DAC1CONL, &DAC2CONL, &DAC3CONL
	};
#elif defined (DAC2CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[2]={ 
		&DAC1CONL, &DAC2CONL
	};
#elif defined (DAC1CONL)
	// Array of pointers to first register of DAC instances on this device
	static volatile uint16_t* p33c_DacInstance_Handles[1]={ 
		&DAC1CONL
	};
#endif

// GENERIC PDM DAC MODULE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_DAC_MODULE_s

    /***********************************************************************************
     * @addtogroup p33c-pral-dac-module-inheritance
     * @extends P33C_DAC_MODULE_s 
     * @{
     */

    /** 
     * @brief   Digital-to-Analog Converter Module Control Register #1 (Low) inherited from device header file
     */
    union DACCTRL1L_u {
        volatile struct tagDACCTRL1LBITS bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // (DACCTRL1L) DAC CONTROL 1 REGISTER LOW

    /** 
     * @brief   Digital-to-Analog Converter Module Control Register #2 (Low) inherited from device header file
     */
    union DACCTRL2L_u {
        volatile struct tagDACCTRL2LBITS bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    } ;    // (DACCTRL2L) DAC CONTROL 2 REGISTER LOW

    /** 
     * @brief   Digital-to-Analog Converter Module Control Register #2 (High) inherited from device header file
     */
    union DACCTRL2H_u {
        volatile struct tagDACCTRL2HBITS bits; // Register bit-field
        volatile uint16_t value; // 16-bit wide register value
    } ;    // (DACCTRL2H) DAC CONTROL 2 REGISTER HIGH

    /** @} */ // end of inheritance declarations **************************************
    
    typedef union DACCTRL1L_u DACCTRL1L_t; // (DACCTRL1L) DAC CONTROL 1 REGISTER LOW data object
    typedef union DACCTRL2L_u DACCTRL2L_t; // (DACCTRL2L) DAC CONTROL 2 REGISTER LOW data object
    typedef union DACCTRL2H_u DACCTRL2H_t; // (DACCTRL2H) DAC CONTROL 2 REGISTER HIGH data object

    /***********************************************************************************
     * @ingroup p33c-pral-dac-module-properties
     * @struct  P33C_DAC_MODULE_s
     * @typedef P33C_DAC_MODULE_t
     * @brief   Abstracted set of Special Function Registers of a Digital-to-Analog Converter peripheral
     * @details
     *  This structure defines an abstracted set of Special Function Registers of 
     *  Digital-to-Analog Converter peripheral module base registers. Users can use this 
     *  abstracted set of registers to capture register settings from or write generic  
     *  register settings to these peripheral base registers.
     * 
     **********************************************************************************/

    struct P33C_DAC_MODULE_s{

        DACCTRL1L_t DACCTRL1L;  // (DACCTRL1L) DAC CONTROL 1 REGISTER LOW
        unsigned : 16;          // (reserved)
        DACCTRL2L_t DACCTRL2L;  // (DACCTRL2L) DAC CONTROL 2 REGISTER LOW
        DACCTRL2H_t DACCTRL2H;  // (DACCTRL2H) DAC CONTROL 2 REGISTER HIGH
    
    };
    typedef struct P33C_DAC_MODULE_s P33C_DAC_MODULE_t; // PDM DAC MODULE REGISTER SET
    
	/*********************************************************************************
	 * @ingroup p33c-pral-dac-module-methods
	 * @brief   Gets pointer to DAC Module SFR set
	 * @param   (none)
	 * @return  P33C_DAC_MODULE_t*: Pointer or type P33C_DAC_MODULE_t* to start address of DAC module special function register set
	 *  
	 * @details
	 *  This function returns the pointer to a DAC module register set
	 *  Special Function Register memory space. This pointer can be used to 
	 *  directly write to/read from the Special Function Registers of the 
	 *  DAC peripheral module configuration.
	 *********************************************************************************/
	#define p33c_DacModule_GetHandle() (P33C_DAC_MODULE_t*)&DACCTRL1L
	
#endif

// GENERIC PDM DAC INSTANCE SPECIAL FUNCTION REGISTER SET
#ifndef P33C_DAC_INSTANCE_s    

    /***********************************************************************************
     * @addtogroup p33c-pral-dac-instance-inheritance
     * @extends P33C_DAC_MODULE_s 
     * @{
     */

    /** 
     * @brief   Digital-to-Analog Converter Instance Control Register (Low) inherited from device header file
     */
    union DACxCONL_u {
        struct tagDAC1CONLBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // DACxCONL: DACx CONTROL LOW REGISTER

    /** 
     * @brief   Digital-to-Analog Converter Instance Control Register (High) inherited from device header file
     */
    union DACxCONH_u {
        struct tagDAC1CONHBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // DACxCONH: DACx CONTROL HIGH REGISTER

    /** 
     * @brief   Digital-to-Analog Converter Instance Reference Data Register (Low) inherited from device header file
     */
    union DACxDATL_u {
        struct tagDAC1DATLBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // DACxDATL: DACx DATA LOW REGISTER

    /** 
     * @brief   Digital-to-Analog Converter Instance Reference Data Register (High) inherited from device header file
     */
    union DACxDATH_u {
        struct tagDAC1DATHBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // DACxDATH: DACx DATA HIGH REGISTER

    /** 
     * @brief   Digital-to-Analog Converter Instance Slope Control Register (Low) inherited from device header file
     */
    union SLPxCONL_u {
        struct tagSLP1CONLBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // SLPxCONL: DACx SLOPE CONTROL LOW REGISTER

    /** 
     * @brief   Digital-to-Analog Converter Instance Slope Control Register (High) inherited from device header file
     */
    union SLPxCONH_u {
        struct tagSLP1CONHBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed)); // SLPxCONH: DACx SLOPE CONTROL HIGH REGISTER

    /** 
     * @brief   Digital-to-Analog Converter Instance Slope Data Register inherited from device header file
     */
    union SLPxDAT_u {
        struct tagSLP1DATBITS bits; // Register bit-field
        uint16_t value; // 16-bit wide register value
    } __attribute__((packed));  // SLPxDAT: DACx SLOPE DATA REGISTER

    /** @} */ // end of inheritance declarations **************************************

    typedef union DACxCONL_u DACxCONL_t; // DACxCONL: DACx CONTROL LOW REGISTER data object
    typedef union DACxCONH_u DACxCONH_t; // DACxCONL: DACx CONTROL HIGH REGISTER data object
    typedef union DACxDATL_u DACxDATL_t; // DACxDATL: DACx DATA LOW REGISTER data object
    typedef union DACxDATH_u DACxDATH_t; // DACxDATH: DACx DATA HIGH REGISTER data object
    typedef union SLPxCONL_u SLPxCONL_t; // SLPxCONL: DACx SLOPE CONTROL LOW REGISTER data object
    typedef union SLPxCONH_u SLPxCONH_t; // SLPxCONL: DACx SLOPE CONTROL HIGH REGISTER data object
    typedef union SLPxDAT_u SLPxDAT_t; // SLPxDAT: DACx SLOPE DATA REGISTER data object
    
    /***********************************************************************************
     * @ingroup p33c-pral-dac-instance-properties
     * @struct  P33C_DAC_INSTANCE_s
     * @brief   Abstracted set of Special Function Registers of a Digital-to-Analog Converter peripheral instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of
     *  Digital-to-Analog Converter peripheral instance registers. It provides an 
     *  abstracted set of registers to capture register settings from or write generic  
     *  register settings to this peripheral instance.
     * 
     **********************************************************************************/
    struct P33C_DAC_INSTANCE_s{

        DACxCONL_t DACxCONL; ///< DACxCONL: DACx CONTROL LOW REGISTER
        DACxCONH_t DACxCONH; ///< DACxCONH: DACx CONTROL HIGH REGISTER
        DACxDATL_t DACxDATL; ///< DACxDATL: DACx DATA LOW REGISTER
        DACxDATH_t DACxDATH; ///< DACxDATH: DACx DATA HIGH REGISTER
        SLPxCONL_t SLPxCONL; ///< SLPxCONL: DACx SLOPE CONTROL LOW REGISTER
        SLPxCONH_t SLPxCONH; ///< SLPxCONH: DACx SLOPE CONTROL HIGH REGISTER
        SLPxDAT_t  SLPxDAT;  ///< SLPxDAT:  DACx SLOPE DATA REGISTER

    };
    typedef struct P33C_DAC_INSTANCE_s P33C_DAC_INSTANCE_t; ///< PDM DAC INSTANCE REGISTER SET

	/*********************************************************************************
	 * @ingroup p33c-pral-dac-instance-methods
	 * @brief   Gets pointer to DAC Instance 'x' SFR set
	 * @param   pInstance: Index of the selected DAC Instance of type unsigned integer (1=DAC1, 2=DAC2, etc.)
	 * @return  P33C_DAC_INSTANCE_t*: Pointer of type P33C_DAC_INSTANCE_t to start address of the selected DAC instance 
	 *  
	 * @details
     *  This function returns the pointer to a peripheral instance register set
     *  in Special Function Register memory space. This pointer can be used to 
     *  directly write to/read from the Special Function Registers of the 
     *  peripheral instance configuration.
     * 
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     *  Please use @ref p33c_DacInstance_Exists to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_DacInstance_Exists
     * 
     *********************************************************************************/
	#define p33c_DacInstance_GetHandle(pInstance) (P33C_DAC_INSTANCE_t*)p33c_DacInstance_Handles[(pInstance-1)]

    /*********************************************************************************
     * @ingroup p33c-pral-dac-instance-methods
     * @brief   Checks if the peripheral instance specified by dmaInstance exists or not
     * @param   pInstance: Index of the peripheral instance of type unsigned integer
     * @return  true:  requested peripheral instance index does exist 
     * @return  false: requested peripheral instance index does not exist 
     *  
     * @details
     *  This function provides a guarding condition test to verify if a specific 
     *  peripheral instance exists before accessing it. 
     *********************************************************************************/
    #define p33c_DacInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_DacInstances)) ? true : false)

#endif
#endif	/* End of P33C_DAC_SFR_DECLARATIONS_H */

// ______________________________
// end of file
