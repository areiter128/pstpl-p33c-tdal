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
 * @file    p33c_spi.h
 * @see     p33c_spi.c
 * @brief   Serial Peripheral Interface (SPI) Driver Module peripheral register abstraction data type declarations
 * @author  A71596
 * @details
 *  This additional header file contains defines for all required bit-settings of all related 
 *  special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
*/

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_SPI_SFR_DECLARATIONS_H
#define	P33C_SPI_SFR_DECLARATIONS_H

// Include standard header files
#include <xc.h>         // include processor files - each processor file is guarded
#include <stdint.h>     // include standard integer data types
#include <stdbool.h>    // include standard boolean data types
#include <stddef.h>     // include standard definition data types

/* GENERIC SPECIAL FUNCTION REGISTER (SFR) SETS
 * ============================================
 * 
 * Direct addressing of Special Function Registers (SFR) in user code is good 
 * enough for a specific application but makes it harder to maintain the code 
 * or migrate the code across devices and applications. 
 * 
 * Especially with complex configurations with multiple dependencies across various 
 * peripherals, migrating configurations can become very challenging to review, 
 * debug and migrate. 
 * 
 * Therefore this SPI configuration example uses a 'virtual SPI module' to set up 
 * the required SPI configuration but provides a function allowing users to write this 
 * configuration to any SPI port of choice. Hence, pre-defined configurations 
 * can be mapped on specific peripheral instance by using their index defined by the 
 * data sheet (e.g. spiInstance = 1 maps pre-defined configuration to SPI1)
 * 
 * The data types used for each SFR in the P33C_SPI_INSTANCE_t data structure below,
 * are data types declared in the common C-header file of the device (e.g. <d33CK256MP506.h>). 
 * These header files are provided with the XC16 C-Compiler installation and don't have to be
 * written nor changed manually. 
 * 
 */

// Determine the number of available SPI instances on the selected device
#if defined (SPI8CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[8]={
        &SPI1CON1L, &SPI2CON1L, &SPI3CON1L, &SPI4CON1L, 
        &SPI5CON1L, &SPI6CON1L, &SPI7CON1L, &SPI8CON1L
    };
#elif defined (SPI7CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[7]={
        &SPI1CON1L, &SPI2CON1L, &SPI3CON1L, &SPI4CON1L, 
        &SPI5CON1L, &SPI6CON1L, &SPI7CON1L
    };
#elif defined (SPI6CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[6]={
        &SPI1CON1L, &SPI2CON1L, &SPI3CON1L, &SPI4CON1L, 
        &SPI5CON1L, &SPI6CON1L
    };
#elif defined (SPI5CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[5]={
        &SPI1CON1L, &SPI2CON1L, &SPI3CON1L, &SPI4CON1L, 
        &SPI5CON1L
    };
#elif defined (SPI4CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[4]={
        &SPI1CON1L, &SPI2CON1L, &SPI3CON1L, &SPI4CON1L
    };
#elif defined (SPI3CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[3]={
        &SPI1CON1L, &SPI2CON1L, &SPI3CON1L
    };
#elif defined (SPI2CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[2]={
        &SPI1CON1L, &SPI2CON1L
    };
#elif defined (SPI1CON1L)
    static volatile uint16_t* p33c_SpiInstance_Handles[1]={
        &SPI1CON1L
    };
#else
    static volatile uint16_t* p33c_SpiInstance_Handles[0];
    #pragma message "selected device has no supported SPI ports"
#endif

// GENERIC MULTI-PROCESS SPI INSTANCE SPECIAL FUNCTION REGISTER SET
    
#ifndef P33C_SPI_INSTANCE_s     

    /***********************************************************************************
     * @addtogroup  p33c-pral-spi-inheritance
     * @extends     P33C_SPI_INSTANCE_s 
     * @{
     */

    /** 
     * @brief   SPI Control Register 1 (Low) inherited from device data sheet
     */
    union SPIxCON1L_u {
        struct tagSPI1CON1LBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxCON1L: SPIx CONTROL REGISTER 1 LOW
    
    /** 
     * @brief   SPI Control Register 1 (High) inherited from device data sheet
     */
    union SPIxCON1H_u {
        struct tagSPI1CON1HBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxCON1H: SPIx CONTROL REGISTER 1 HIGH
    
    /** 
     * @brief   SPI Control Register 2 (Low) inherited from device data sheet
     */
    union SPIxCON2L_u {
        struct tagSPI1CON2LBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxCON2L: SPIx CONTROL REGISTER 2 LOW
    
    /** 
     * @brief   SPI Status Register (Low) inherited from device data sheet
     */
    union SPIxSTATL_u {
        struct tagSPI1STATLBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxSTATL: SPIx STATUS REGISTER LOW
    
    /** 
     * @brief   SPI Status Register (High) inherited from device data sheet
     */
    union SPIxSTATH_u {
        struct tagSPI1STATHBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxSTATH: SPIx STATUS REGISTER HIGH
    
    /** 
     * @brief   SPI Buffer Register (Low) inherited from device data sheet
     */
    union SPIxBUFL_u {
        struct tagSPI1BUFLBITS bits;    // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxBUFL: SPIx BUFFER REGISTER LOW
    
    /** 
     * @brief   SPI Buffer Register (High) inherited from device data sheet
     */
    union SPIxBUFH_u {
        struct tagSPI1BUFHBITS bits;    // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxBUFH: SPIx BUFFER REGISTER HIGH
    
    /** 
     * @brief   SPI Baud Rate Register (Low) inherited from device data sheet
     */
    union SPIxBRGL_u {
        struct tagSPI1BRGLBITS bits;    // Register bit-field 
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxBRGL: SPIx BAUD RATE REGISTER LOW
    
    /** 
     * @brief   SPI Interrupt Mask Register (Low) inherited from device data sheet
     */
    union SPIxIMSKL_u {
        struct tagSPI1IMSKLBITS bits;   // Register bit-field 
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxIMSKL: SPIx INTERRUPT MASK REGISTER LOW
    
    /** 
     * @brief   SPI Interrupt Mask Register (High) inherited from device data sheet
     */
    union SPIxIMSKH_u {
        struct tagSPI1IMSKHBITS bits;   // Register bit-field
        uint16_t value;             // 16-bit wide register value
    } __attribute__((packed));          // SPIxIMSKH: SPIx INTERRUPT MASK REGISTER HIGH
    
    /** 
     * @brief   SPI Transmit Underrun Data Register (Low) inherited from device data sheet
     */
    union SPIxURDTL_u {
        struct tagSPI1URDTLBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxURDTL: SPIx TRANSMIT UNDERRUN DATA REGISTER LOW
    
    /** 
     * @brief   SPI Transmit Underrun Data Register (High) inherited from device data sheet
     */
    union SPIxURDTH_u {
        struct tagSPI1URDTHBITS bits;   // Register bit-field
        uint16_t value;                 // 16-bit wide register value
    } __attribute__((packed));          // SPIxURDTH: SPIx TRANSMIT UNDERRUN DATA REGISTER HIGH
    
    /** @} */ // end of inheritance declarations **************************************
    
    typedef union SPIxCON1L_u SPIxCON1L_t;    // SPIxCON1L: SPIx CONTROL REGISTER 1 LOW data type
    typedef union SPIxCON1H_u SPIxCON1H_t;    // SPIxCON1H: SPIx CONTROL REGISTER 1 HIGH data type
    typedef union SPIxCON2L_u SPIxCON2L_t;    // SPIxCON2L: SPIx CONTROL REGISTER 2 LOW data type
    typedef union SPIxSTATL_u SPIxSTATL_t;    // SPIxSTATL: SPIx STATUS REGISTER LOW data type
    typedef union SPIxSTATH_u SPIxSTATH_t;    // SPIxSTATH: SPIx STATUS REGISTER HIGH data type
    typedef union SPIxBUFL_u  SPIxBUFL_t;     // SPIxBUFL: SPIx BUFFER REGISTER LOW data type
    typedef union SPIxBUFH_u  SPIxBUFH_t;     // SPIxBUFH: SPIx BUFFER REGISTER HIGH data type
    typedef union SPIxBRGL_u  SPIxBRGL_t;     // SPIxBRGL: SPIx BAUD RATE REGISTER LOW data type
    typedef union SPIxIMSKL_u SPIxIMSKL_t;    // SPIxIMSKL: SPIx INTERRUPT MASK REGISTER LOW data type
    typedef union SPIxIMSKH_u SPIxIMSKH_t;    // SPIxIMSKH: SPIx INTERRUPT MASK REGISTER HIGH data type
    typedef union SPIxURDTL_u SPIxURDTL_t;    // SPIxURDTL: SPIx TRANSMIT UNDERRUN DATA REGISTER LOW data type
    typedef union SPIxURDTH_u SPIxURDTH_t;    // SPIxURDTH: SPIx TRANSMIT UNDERRUN DATA REGISTER HIGH data type

     /***********************************************************************************
     * @struct  P33C_SPI_INSTANCE_s
     * @ingroup p33c-pral-spi-properties
     * @brief   Abstracted set of Special Function Registers of a Serial Peripheral Interface (SPI) instance
     * @details
     *  This structure defines an abstracted set of Special Function Registers of a 
     *  Serial Peripheral Interface instance. Users can use this abstracted set of 
     *  registers to capture register settings from or write generic register settings 
     *  to a specific instance of this peripheral instance.
     * 
     **********************************************************************************/
    struct P33C_SPI_INSTANCE_s {
        
        SPIxCON1L_t  SPIxCON1L;   ///< SPIxCON1L: SPIx CONTROL REGISTER 1 LOW
        SPIxCON1H_t  SPIxCON1H;   ///< SPIxCON1H: SPIx CONTROL REGISTER 1 HIGH
        SPIxCON2L_t  SPIxCON2L;   ///< SPIxCON2L: SPIx CONTROL REGISTER 2 LOW
        uint16_t     :16;         ///< (reserved)
        SPIxSTATL_t  SPIxSTATL;   ///< SPIxSTATL: SPIx STATUS REGISTER LOW
        SPIxSTATH_t  SPIxSTATH;   ///< SPIxSTATH: SPIx STATUS REGISTER HIGH
        SPIxBUFL_t   SPIxBUFL;    ///< SPIxBUFL: SPIx BUFFER REGISTER LOW
        SPIxBUFH_t   SPIxBUFH;    ///< SPIxBUFH: SPIx BUFFER REGISTER HIGH
        SPIxBRGL_t   SPIxBRGL;    ///< SPIxBRGL: SPIx BAUD RATE REGISTER LOW
        uint16_t     :16;         ///< (reserved)
        SPIxIMSKL_t  SPIxIMSKL;   ///< SPIxIMSKL: SPIx INTERRUPT MASK REGISTER LOW
        SPIxIMSKH_t  SPIxIMSKH;   ///< SPIxIMSKH: SPIx INTERRUPT MASK REGISTER HIGH
        SPIxURDTL_t  SPIxURDTL;   ///< SPIxURDTL: SPIx TRANSMIT UNDERRUN DATA REGISTER LOW
        SPIxURDTH_t  SPIxURDTH;   ///< SPIxURDTH: SPIx TRANSMIT UNDERRUN DATA REGISTER HIGH

    } __attribute__((aligned)); ///< MULTI-PROCESS SPI INSTANCE SPECIAL FUNCTION REGISTER SET
    typedef struct P33C_SPI_INSTANCE_s P33C_SPI_INSTANCE_t; ///< MULTI-PROCESS SPI INSTANCE SPECIAL FUNCTION REGISTER SET DATA TYPE

    /*********************************************************************************
     * @ingroup p33c-pral-spi-properties
     * @brief   Gets the number of available peripheral instances
     * @details
     *  This variable is used to determine the number of available instances of the 
     *  peripheral by returning the number of array elements of the instance handle
     *  list.
     * 
     *********************************************************************************/
    static const uint16_t p33c_SpiInstances = (sizeof(p33c_SpiInstance_Handles)/sizeof(p33c_SpiInstance_Handles[0]));    

    /*********************************************************************************
     * @ingroup p33c-pral-spi-methods
     * @brief   Gets pointer to start address of SPI instance SFR set
     * @param   pInstance - Peripheral instance index of type unsigned integer
     * @return  Pointer address to SPI instance of type P33C_SPI_INSTANCE_t specified by parameter pInstance
     * @details
     *  This function returns the pointer to an SPI instance register set in the
     *  Special Function Register memory space. This pointer can be used to 
     *  directly write to/read from the Special Function Registers of the 
     *  SPI peripheral instance configuration.
     *
     * @note
     *  To maximize code execution performance, the declared peripheral instance 
     *  index parameter is not validated. Hence, GetHandle could potentially return
     *  an invalid memory address with unclear consequences for the user firmware.
     *  Please use @ref p33c_SpiInstance_Exists() to validate the given peripheral 
     *  instance parameter before using the the returned memory address.
     * 
     * @see
     *  p33c_SpiInstance_Exists()
     * 
     **********************************************************************************/
	#define p33c_SpiInstance_GetHandle(pInstance) (P33C_SPI_INSTANCE_t*)p33c_SpiInstance_Handles[(pInstance-1)]
    
    /*********************************************************************************
     * @ingroup p33c-pral-spi-methods
     * @brief   Checks if the peripheral instance specified by pInstance exists or not
     * @param   pInstance - Peripheral instance index of type unsigned integer
     * @return  false: requested peripheral instance index does not exist
     * @return  true: requested peripheral instance index does exist
     * 
     * @details
     *  This function provides a guarding condition test to verify if a specific 
     *  peripheral instance exists before accessing it. 
     *
     *********************************************************************************/
    #define p33c_SpiInstance_Exists(pInstance) (bool)(((0 < pInstance) && (pInstance <= p33c_SpiInstances)) ? true : false)

#endif /* End of P33C_SPI_INSTANCE_s */
#endif /* End of P33C_SPI_SFR_DECLARATIONS_H */

// __________________________
// end of file
