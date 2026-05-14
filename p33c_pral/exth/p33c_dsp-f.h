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
 * @file    p33c_dsp-f.h
 * @see	    p33c_dsp.h, p33c_dsp-d.h
 * @brief   Digital Signal Processor Driver Module peripheral register flag declarations
 * @author  M91406
 * @details
 *  This additional header file contains declarations for required bit-settings 
 *  of related special function registers of a peripheral module and/or instance. 
 *  This file is an additional header file on top of the generic device header file.
 */

// This is a guard condition so that contents of this file are not included
// more than once. 
#ifndef P33C_DSP_SFR_FLAGS_H
#define P33C_DSP_SFR_FLAGS_H

enum CORCON_VAR_e {
    CORCON_VAR_VARIABLE = 0b1, // Variable exception processing is enabled
    CORCON_VAR_FIXED = 0b0 // Fixed exception processing is enabled
}; 
typedef enum CORCON_VAR_e CORCON_VAR_t; // Variable Exception Processing Latency Control bit

enum CORCON_US_e {
    CORCON_US_MIXED = 0b10, // DSP engine multiplies are mixed sign
    CORCON_US_UNSIGNED = 0b01, // DSP engine multiplies are unsigned
    CORCON_US_SIGNED = 0b00 // DSP engine multiplies are signed
}; 
typedef enum CORCON_US_e CORCON_US_t; // DSP Multiply Unsigned/Signed Control bits

enum CORCON_EDT_e {
    CORCON_EDT_TERMINATE = 0b1, // Terminates executing DO loop at the end of the current loop iteration
    CORCON_EDT_RUN = 0b0 // No effect
}; 
typedef enum CORCON_EDT_e CORCON_EDT_t; // Early DO Loop Termination Control bit

enum CORCON_DL_STAT_e {
    CORCON_DL_7 = 0b111, // Seven DO loops are active
    CORCON_DL_6 = 0b110, // Six DO loops are active
    CORCON_DL_5 = 0b101, // Five DO loops are active
    CORCON_DL_4 = 0b100, // Four DO loops are active
    CORCON_DL_3 = 0b011, // Three DO loops are active
    CORCON_DL_2 = 0b010, // Two DO loops are active
    CORCON_DL_1 = 0b001, // One DO loops are active
    CORCON_DL_0 = 0b000  // Zero DO loops are active
}; 
typedef enum CORCON_DL_STAT_e CORCON_DL_STAT_t; // DO Loop Nesting Level Status bits

enum CORCON_SATA_e {
    CORCON_SATA_ON = 0b1, // Accumulator A saturation is enabled
    CORCON_SATA_OFF = 0b0 // Accumulator A saturation is disabled
}; 
typedef enum CORCON_SATA_e CORCON_SATA_t; // ACCA Saturation Enable bit

enum CORCON_SATB_e {
    CORCON_SATB_ON = 0b1, // Accumulator B saturation is enabled
    CORCON_SATB_OFF = 0b0 // Accumulator B saturation is disabled
}; 
typedef enum CORCON_SATB_e CORCON_SATB_t; // ACCB Saturation Enable bit

enum CORCON_SATDW_e {
    CORCON_SATDW_ON = 0b1, // Data Space write saturation is enabled
    CORCON_SATDW_OFF = 0b0 // Data Space write saturation is disabled
}; 
typedef enum CORCON_SATDW_e CORCON_SATDW_t; // Data Space Write from DSP Engine Saturation Enable bit

enum CORCON_ACCSAT_e  {
    CORCON_ACCSAT_931 = 0b1, // 9.31 saturation (super saturation)
    CORCON_ACCSAT_131 = 0b0  // 1.31 saturation (normal saturation)
};
typedef enum CORCON_ACCSAT_e CORCON_ACCSAT_t; // Accumulator Saturation Mode Select bit

enum CORCON_IPL3_STAT_e {
    CORCON_IPL3_STAT_GT7 = 0b1, // CPU Interrupt Priority Level is greater than 7
    CORCON_IPL3_STAT_LT7 = 0b0  // CPU Interrupt Priority Level is 7 or less
}; 
typedef enum CORCON_IPL3_STAT_e CORCON_IPL3_STAT_t; // CPU Interrupt Priority Level Status bit 3

enum CORCON_SFA_e {
    CORCON_SFA_ACTIVE = 0b1, // Stack frame is active; W14 and W15 address 0x0000 to 0xFFFF, regardless of DSRPAG
    CORCON_SFA_INACTIVE = 0b0 // Stack frame is not active; W14 and W15 address the base Data Space
}; 
typedef enum CORCON_SFA_e CORCON_SFA_t; // Stack Frame Active Status bit

enum CORCON_RND_e {
    CORCON_RND_BIASED = 0b1, // Biased (conventional) rounding is enabled
    CORCON_RND_UNBIASED = 0b0 // Unbiased (convergent) rounding is enabled
}; 
typedef enum CORCON_RND_e CORCON_RND_t; // Rounding Mode Select bit

enum CORCON_IF_e {
    CORCON_IF_INTEGER = 0b1, // Integer mode is enabled for DSP multiply
    CORCON_IF_FRACTIONAL = 0b0 // Fractional mode is enabled for DSP multiply
}; 
typedef enum CORCON_IF_e CORCON_IF_t; // Integer or Fractional Multiplier Mode Select bit


#endif /* End of P33C_DSP_SFR_FLAGS_H */ 

// __________________________
// end of file
