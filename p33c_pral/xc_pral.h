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
 * @file   xc_pral.h
 * @author M91406
 * @brief  Common Peripheral Register Abstraction Layer (PRAL) header file
 */

/*************************************************************************************************
 * @ingroup xc-pral
 * @{
 *************************************************************************************************
 * @file
 * @brief Includes generic peripheral special function register abstraction layer header files
 *
 * @details
 *  This additional header file contains include paths to header files containing additional 
 *  peripheral special function register abstraction declarations. These PRAL headers provide 
 *  abstracted data structures of peripheral module and instance register sets used as virtual
 *  register templates to create silicon-independent firmware modules replacing direct peripheral 
 *  register manipulation operations by abstracted versions, which are mapped to a specific 
 *  module or instance at runtime.
 * 
 ************************************************************************************************/

#ifndef P33C_SFR_ABSTRACTION_LAYER_H
#define P33C_SFR_ABSTRACTION_LAYER_H

// Device header file
#include <xc.h> // include processor files - each processor file is guarded.  
#include <extint.h> // include standard integer types header file
#include <stdbool.h> // include standard boolean types header file
#include <stddef.h> // include standard definition types header file
#include <stdlib.h> // include C standard library

#include "./exth/p33c_devices.h" // include extended device identification macros header file
#include "./exth/p33c_mcal.h"     // include device peripherals default settings  

#if defined (__P33SMPS_CK__) || defined (__P33SMPS_CH__)

    // List of helper modules
    #include "./exth/p33c_gpio.h"      /// include generic GPIO data type declaration header file
    #include "./exth/p33c_fmgr.h"      ///< include Device System Frequencies helper module header file
    #include "./exth/p33c_macros.h"    ///< include generic dsPIC33C CPU macros
    #include "./exth/p33c_pinmap.h"    ///< include common device pin-out mapping header file

    // List of peripheral abstraction modules
    #include "./exth/p33c_aclk.h"      ///< include Auxiliary Clock module SFR abstraction header file
    #include "./exth/p33c_adcregs.h"   ///< include Analog-To-Digital Converter module SFR type declaration header file
    #include "./exth/p33c_adc.h"       ///< include Analog-To-Digital Converter module SFR abstraction header file
    #include "./exth/p33c_adcan.h"     ///< include Analog-To-Digital Converter Input mappnig header file
    #include "./exth/p33c_adcmp.h"     ///< include Analog-To-Digital Converter Digital Comparator SFR abstraction header file
    #include "./exth/p33c_adfl.h"      ///< include Analog-To-Digital Converter Digital Filter SFR abstraction header file
    #include "./exth/p33c_ccp.h"       ///< include Capture/Compare instance SFR abstraction header file
    #include "./exth/p33c_clc.h"       ///< include Cofigurable Logic Cell module SFR abstraction header file
    #include "./exth/p33c_crc.h"		    ///< include Cyclic Redundancy Check peripheral SFR abstraction header file
    #include "./exth/p33c_dac.h"       ///< include Digital-to-Analog Converter module & instance SFR abstraction header file
    #include "./exth/p33c_dma.h"       ///< include Direct Memory Access module & instance SFR abstraction header file
    #include "./exth/p33c_dsp.h"       ///< include Digital Signal Processor configuration SFR abstraction header file
    #include "./exth/p33c_port.h"      ///< include Device Port instance SFR abstraction header file
    #include "./exth/p33c_i2c.h"       ///< include Inter-Integrated Circuit Bus (I2C) module SFR abstraction header file
    #include "./exth/p33c_irq.h"       ///< include interrupt SFR abstraction header file
    #include "./exth/p33c_mpuart.h"    ///< include Multi-Protocol UART SFR abstraction header file
    #include "./exth/p33c_osc.h"       ///< include Oscillator module SFR abstraction header file
    #include "./exth/p33c_pmd.h"       ///< include Peripheral Module Disable SFR abstraction header file
    #include "./exth/p33c_pps.h"       ///< include Peripheral Pin Select SFR abstraction header file
    #include "./exth/p33c_pwm.h"       ///< include high-speed PWM module & instance SFR abstraction header file
    #include "./exth/p33c_refclk.h"    ///< include reference clock module SFR abstraction header file
    #include "./exth/p33c_timer.h"     ///< include standard 16-bit timer module SFR abstraction header file

    // List of peripherals only supported by devices with CAN
    #if (P33C_CANFD_COUNT != 0) // Hide file contents for devices without CAN
      #include "./exth/p33c_canclk.h"   ///< include CAN Clock module SFR abstraction header file
    #endif

    // List of peripherals only supported by dual core devices (both, main and secondary cores)
    #if defined (__P33SMPS_CH__)
      #include "./exth/p33c_msi.h"		///< include Main-Secondary Interface SFR abstraction header file
    #endif

    // List of peripherals only supported by secondary cores of dual core devices
    #if defined (__P33SMPS_CHS__)
      #include "./exth/p33c_pga.h"		///< include Programmable Gain Amplifier SFR abstraction header file
    #endif

    // List of peripherals only supported by single core devices
    #if defined (__P33SMPS_CK__)
      #include "./exth/p33c_opa.h"      ///< include Operational Amplifier SFR abstraction header file
    #endif

    // List of peripherals only supported by devices with SENT
    #if (P33C_SENT_COUNT != 0)
      #include "./exth/p33c_sent.h"     ///< include Single Edge Nibble Transmission (SENT) module SFR abstraction header file
    #endif

    // List of peripherals only supported by devices with SPI
    #if (P33C_SPI_COUNT != 0)
      #include "./exth/p33c_spi.h"      ///< include serial protocol interface (SPI) module SFR abstraction header file
    #endif

#else
    #pragma message "warning: currently selected device is not supported by this version of the XC Peripheral Register Abstraction Layer (PRAL)"
#endif /* __P33SMPS_CK__ || __P33SMPS_CH__ */

#endif // end of P33C_SFR_ABSTRACTION_LAYER_H

/** @}*/ // end of group xc-pral
// ____________________
// end of file
