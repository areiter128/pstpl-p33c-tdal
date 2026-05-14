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
 * @file    p33c_gpio.h
 * @author  M91406
 * @brief   Device pin object class data type declarations
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_GPIO_DECLARATIONS_H
#define P33C_GPIO_DECLARATIONS_H

#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

// Peripheral register abstraction layer header files are included 
// individually to prevent circular inclusions.  
// Do not include 'xc_pral.h' here !!!

#include "p33c_adc-d.h" // include ADC register abstraction module header file
#include "p33c_dac-d.h" // include DAC register abstraction module header file
#include "p33c_i2c-d.h" // include I2C register abstraction module header file
#include "p33c_opa-d.h" // include OPA register abstraction module header file
#include "p33c_pga-d.h" // include PGA register abstraction module header file
#include "p33c_pwm-d.h" // include PWM register abstraction module header file
#include "p33c_spi-d.h" // include SPI register abstraction module header file

/***********************************************************************************
 * @ingroup p33c-pral-gpio-class-properties
 * @struct  P33C_GPIO_PROPERTIES_s
 * @extends P33C_GPIO_s
 * @brief   Common properties of the device GPIO
 * @details
 *  The Properties sub-structure provides additional information about 
 *  the GPIO features available. They can be used to verify if a certain
 *  peripheral object is available at this GPIO before trying to access it,
 *  or additional information required to connect a generic peripheral to
 *  this pin through Peripheral Pin Select (PPS).
 **********************************************************************************/
struct P33C_GPIO_PROPERTIES_s {
    int16_t ADCAN;      ///< Analog input instance index (e.g. 0=AN0, 1=AN1, 2=AN2, etc.)
    int16_t ADCORE;     ///< ADC Core instance index the analog input is connected to
    int16_t CMPxIN;     ///< Comparator input index (0=A, 1=B, 2=C, 3=D)
    int16_t DAC;        ///< Digital-to-Analog Converter instance peripheral index
    int16_t I2C;        ///< I2C communication interface instance
    int16_t OPA;        ///< Operational Amplifier instance peripheral index (single core devices only)
    int16_t PGA;        ///< Programmable Gain Amplifier instance peripheral index (dual core devices only))
    int16_t PG;         ///< PWM generator instance peripheral index
    int16_t SPI;        ///< SPI communication interface instance
    int16_t RPid;       ///< Remappable Pin ID
    int16_t Port;       ///< Index of the device port (0=A, 1=B, 2=C, 3=D, etc)
    int16_t Pin;        ///< Index of the device port pin (0 through 15)
};
typedef struct P33C_GPIO_PROPERTIES_s P33C_GPIO_PROPERTIES_t;

/***********************************************************************************
 * @ingroup p33c-pral-gpio-class-methods
 * @struct  P33C_GPIO_METHODS_s
 * @extends P33C_GPIO_s
 * @brief   List of methods performing direct interaction with/at the device GPIO
 * @details
 *  This list of methods provides direct port pin manipulation functions to
 *  get and set pin signal levels as well as change the port pin impedance 
 *  state to input or output.
 **********************************************************************************/
struct P33C_GPIO_METHODS_s {

    bool (*Get)(void);          ///< Gets the state of the pin (0=LOW, 1=HIGH)
    void (*Set)(void);          ///< Sets the state of the pin to logic HIGH
    void (*Clear)(void);        ///< Sets the state of the pin to logic LOW
    void (*Toggle)(void);       ///< Toggles the state of the pin
    void (*Init)(bool, bool);   ///< Initializes the GPIO to (0=Output, 1=Input) with Level (0=LOW, 1=HIGH)
    void (*SetInput)(void);     ///< Sets the pin as input (TRIS register = 1)
    void (*SetOutput)(void);    ///< Sets the pin as output (TRIS register = 0)
    void (*Dispose)(void);      ///< Resets the pin to its RESET default (TRIS=1, LAT=1)
    void (*SetState)(bool);     ///< Sets the pin signal level to (1 = logic HIGH, 0 = logic LOW)
    
    bool (*GetOpenDrain)(void); ///< Gets the pin open drain mode (0 = Push-Pull, 1 = Open Drain)
    void (*SetOpenDrain)(bool); ///< Sets the pin open drain mode (0 = Push-Pull, 1 = Open Drain)
    bool (*GetPullUp)(void);    ///< Gets the pin pull-up resistor (0 = Pull-Up Disconnected, 1 = Pull-Up Connected)
    void (*SetPullUp)(bool);    ///< Sets the pin pull-up resistor (0 = Pull-Up Disconnected, 1 = Pull-Up Connected)
    bool (*GetPullDown)(void);  ///< Gets the pin pull-down resistor (0 = Pull-Down Disconnected, 1 = Pull-Down Connected)
    void (*SetPullDown)(bool);  ///< Sets the pin pull-down resistor (0 = Pull-Down Disconnected, 1 = Pull-Down Connected)
    void (*SetAnalog)(void);    ///< Enable analog functions of this pin
    void (*SetDigital)(void);   ///< Disable analog functions of this pin
    
};
typedef struct P33C_GPIO_METHODS_s P33C_GPIO_METHODS_t;

/***********************************************************************************
 * @ingroup p33c-pral-gpio-class-objects
 * @struct  P33C_GPIO_OBJECTS_s
 * @extends P33C_GPIO_s
 * @brief   List of peripheral instance objects connected to the device GPIO
 * @details
 *  This list of objects provides pointers to standard peripheral instances of
 *  peripherals, which are hard-wired to this GPIO, such as PWM generators, 
 *  ADC inputs, operational amplifiers of comparators.
 *  All other peripherals must be connected to device pins through Peripheral 
 *  Pin Selection (PPS) first, before they can be used.
 **********************************************************************************/
struct P33C_GPIO_OBJECTS_s 
{
    P33C_ADCAN_INSTANCE_t* ADCAN;   ///< Pointer to ADC Input Instance
    P33C_DAC_INSTANCE_t*   DAC;     ///< Pointer to Digital-to-Analog Converter Instance
    P33C_I2C_INSTANCE_t*   I2C;     ///< Pointer to I2C Instance
    #if (P33C_OPA_COUNT > 0)        ///< If device has general purpose op-amps
    P33C_OPA_INSTANCE_t*   OPA;     ///< Pointer to Operational Amplifier Instance
    #else
    uint16_t*              OPA;     ///< Peripheral type not available
    #endif
    #if (P33C_PGA_COUNT > 0)        ///< If device has programmable gain amplifiers
    P33C_PGA_INSTANCE_t*   PGA;     ///< Pointer to Programmable Gain Amplifier Instance
    #else
    uint16_t*              PGA;     ///< Peripheral type not available
    #endif
    P33C_PWM_INSTANCE_t*   PG;      ///< Pointer to High-Speed PWM Generator Instance
    P33C_SPI_INSTANCE_t*   SPI;     ///< Pointer to SPI Instance
};
typedef struct P33C_GPIO_OBJECTS_s P33C_GPIO_OBJECTS_t;

/***********************************************************************************
 * @ingroup p33c-pral-gpio-class
 * @struct  P33C_GPIO_s
 * @brief   Parent data structure of common GPIO properties, methods and events
 * @details
 *  The GPIO_t data object represents the data object the class of a General
 *  Purpose Input/Output device pin. It groups specific properties of a GPIO
 *  helping to perform GPIO specific functions or access peripheral instances 
 *  connected to the pin.
 **********************************************************************************/
struct P33C_GPIO_s {

    P33C_GPIO_PROPERTIES_t  Properties; ///< Common properties of the device GPIO
    P33C_GPIO_METHODS_t     Methods;    ///< Common methods to be performed on/at device GPIO
    P33C_GPIO_OBJECTS_t     Objects;    ///< Pointers to device peripherals connected to the device GPIO

} ; ///< GPIO parent data structure
typedef struct P33C_GPIO_s P33C_GPIO_t; ///< GPIO parent data structure data type

/*********************************************************************************
 * @ingroup p33c-pral-gpio-class-methods
 * @brief   Tests if a user defined GPIO data object has been initialized or not
 * @param   gpio to a GPIO data object of type P33C_GPIO_t
 * @return  true = GPIO data object is initialized and point to an existing GPIO
 * @return  false = GPIO data object is empty
 **********************************************************************************/
static inline bool p33c_Gpio_IsInitialized(const P33C_GPIO_t* gpio)
{ return( (bool)(gpio->Methods.Get != NULL)); }

/*********************************************************************************
 * @ingroup p33c-pral-gpio-class-methods
 * @brief   Tests if a user defined GPIO data object is an analog input or not
 * @param   gpio to a GPIO data object of type P33C_GPIO_t
 * @return  true = GPIO data object is initialized and point to an existing GPIO
 * @return  false = GPIO data object is empty
 **********************************************************************************/
static inline bool p33c_Gpio_IsAnalog(const P33C_GPIO_t* gpio)
{ return( (bool)(gpio->Properties.ADCAN >= 0)); }

#endif	/* P33C_GPIO_DECLARATIONS_H */

// __________________________
// end of file

