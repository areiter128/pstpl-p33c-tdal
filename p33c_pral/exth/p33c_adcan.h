/*
 * @file    p33c_adcan.h
 * @see     p33c_adcan-d.h, p33c_adcan-f.h
 * @brief   Analog input register access functions
 * @author  M91406
 * @date    July 24, 2023
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_ADCAN_INTERFACE_H
#define	P33C_ADCAN_INTERFACE_H

//#include "p33c_devices.h" // include dsPIC SMPS device identifier header file
#include "p33c_gpio.h"  // include dsPIC SMPS device pin object data type declaration header file
#include "p33c_adcan-d.h" // include ADC input register abstraction data type declarations header file
#include "p33c_adcan-f.h" // include ADC input register abstraction flags header file

/*********************************************************************************
 * @ingroup p33c-pral-adcan-input-properties
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
#define p33c_Gpio_GetAnalogInputGpio(adcAnIndex)     (P33C_GPIO_t*)p33c_AdcAnIo[adcAnIndex];
#define p33c_Gpio_GetAnalogInputPort(adcAnIndex)     (uint16_t)p33c_AdcAnIo[adcAnIndex]->Port;
#define p33c_Gpio_GetAnalogInputPin(adcAnIndex)      (uint16_t)p33c_AdcAnIo[adcAnIndex]->Pin;
#define p33c_Gpio_GetAnalogInputRPid(adcAnIndex)     (uint16_t)p33c_AdcAnIo[adcAnIndex]->RPid;
#define p33c_Gpio_GetAnalogInputBuffer(adcAnIndex)   (uint16_t*)p33c_AdcAnBuffer_Handles[adcAnIndex];

#define p33c_Gpio_GetAdcCoreAssignment(x)   (uint16_t)p33c_AdcAnCoreAssignment[x];

#endif /* End of P33C_ADCAN_INTERFACE_H */

// __________________________
// end of file
