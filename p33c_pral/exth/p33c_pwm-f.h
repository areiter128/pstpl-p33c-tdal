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
 * @file    p33c_pwm-f.h
 * @see	    p33c_pwm.h, p33c_pwm-d.h
 * @brief   High-Speed PWM Peripheral Module register flag declarations
 * @author  M91406
 * @details
 *  This additional header file contains declarations for required bit-settings 
 *  of related special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_PWM_SFR_FLAGS_H
#define	P33C_PWM_SFR_FLAGS_H

/***********************************************************************************
 * @ingroup p33c-pral-pwm-instance-constants
 * @brief   Enumeration of PWM Generator Programmable Control Input Sources (PGxyPCIL.PSS)
 ***********************************************************************************/

enum P33C_PGxPCI_SOURCES_e {
    
    PGxPCI_PSS_CLC1    = 0b11111, ///< CLC1 
    // PGxPCI_PSS_RESERVED4 = 0b11110, ///< Reserved
    PGxPCI_PSS_CMP3    = 0b11101, ///< Comparator 3 output
    PGxPCI_PSS_CMP2    = 0b11100, ///< Comparator 2 output
    PGxPCI_PSS_CMP1    = 0b11011, ///< Comparator 1 output
    PGxPCI_PSS_PWMEVD  = 0b11010, ///< PWM Event D
    PGxPCI_PSS_PWMEVC  = 0b11001, ///< PWM Event C
    PGxPCI_PSS_PWMEVB  = 0b11000, ///< PWM Event B
    PGxPCI_PSS_PWMEVA  = 0b10111, ///< PWM Event A
    PGxPCI_PSS_PCI22   = 0b10110, ///< Device pin, PCI[22]
    PGxPCI_PSS_PCI21   = 0b10101, ///< Device pin, PCI[21]
    PGxPCI_PSS_PCI20   = 0b10100, ///< Device pin, PCI[20]
    PGxPCI_PSS_PCI19   = 0b10011, ///< Device pin, PCI[19]
    PGxPCI_PSS_PCI18R  = 0b10010, ///< RPn input, PCI18R
    PGxPCI_PSS_PCI17R  = 0b10001, ///< RPn input, PCI17R
    PGxPCI_PSS_PCI16R  = 0b10000, ///< RPn input, PCI16R
    PGxPCI_PSS_PCI15R  = 0b01111, ///< RPn input, PCI15R 
    PGxPCI_PSS_PCI14R  = 0b01110, ///< RPn input, PCI14R 
    PGxPCI_PSS_PCI13R  = 0b01101, ///< RPn input, PCI13R 
    PGxPCI_PSS_PCI12R  = 0b01100, ///< RPn input, PCI12R 
    PGxPCI_PSS_PCI11R  = 0b01011, ///< RPn input, PCI11R 
    PGxPCI_PSS_PCI10R  = 0b01010, ///< RPn input, PCI10R
    PGxPCI_PSS_PCI9R   = 0b01001, ///< RPn input, PCI9R 
    PGxPCI_PSS_PCI8R   = 0b01000, ///< RPn input, PCI8R 
    // PGxPCI_PSS_RESERVED3 = 0b00111, ///< Reserved
    // PGxPCI_PSS_RESERVED2 = 0b00110, ///< Reserved
    // PGxPCI_PSS_RESERVED1 = 0b00101, ///< Reserved
    // PGxPCI_PSS_RESERVED0 = 0b00100, ///< Reserved
    PGxPCI_PSS_CTRGB       = 0b00011, ///< Internally connected to Combo Trigger B
    PGxPCI_PSS_CTRGA       = 0b00010, ///< Internally connected to Combo Trigger A
    PGxPCI_PSS_PWMPCIMUX   = 0b00001, ///< Internally connected to the output of PWMPCI[2:0] MUX
    PGxPCI_PSS_NONE        = 0b00000  ///< Tied to ?0?
};
typedef enum P33C_PGxPCI_SOURCES_e P33C_PGxPCI_SOURCES_t;

/***********************************************************************************
 * @ingroup p33c-pral-pwm-instance-constants
 * @brief   Enumeration of PWM Generator Programmable Control Input Sources (PGxyPCIL.PSS)
 ***********************************************************************************/
enum P33C_PWMPCIMUX_SELECT_e {
    
    PWMPCI_PG8 = 0b111, ///< PWM Generator #8 output is made available to PCI logic
    PWMPCI_PG7 = 0b110, ///< PWM Generator #7 output is made available to PCI logic
    PWMPCI_PG6 = 0b101, ///< PWM Generator #6 output is made available to PCI logic
    PWMPCI_PG5 = 0b100, ///< PWM Generator #5 output is made available to PCI logic
    PWMPCI_PG4 = 0b011, ///< PWM Generator #4 output is made available to PCI logic
    PWMPCI_PG3 = 0b010, ///< PWM Generator #3 output is made available to PCI logic
    PWMPCI_PG2 = 0b001, ///< PWM Generator #2 output is made available to PCI logic
    PWMPCI_PG1 = 0b000  ///< PWM Generator #1 output is made available to PCI logic
};
typedef enum P33C_PWMPCIMUX_SELECT_e P33C_PWMPCIMUX_SELECT_t;

#endif	/* P33C_PWM_SFR_FLAGS_H */

// ______________________
// end of file

