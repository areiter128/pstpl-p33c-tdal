/**
 * @file    p33c_irq.h
 * @see     p33c_irq-d.h
 * @brief   Interrupt Controller SFR access interface
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_IRQ_SFR_INTERFACE_H
#define	P33C_IRQ_SFR_INTERFACE_H

// Include header files
#include "p33c_irq-d.h" // Include interrupt peripheral abstraction driver header file

/*********************************************************************************
 * @ingroup p33c-pral-isr-templates
 * @brief   ISR Register Set reset state template
 * 
 * @details
 *     This P33C_ISR_MODULE_s data object provides a template of register 
 *     configuration values for the 16-bit Timer peripheral. 
 * 
 *     Default configuration:
 *         - all options are reset to their default state
 * 
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_ISR_MODULE_t isrConfigClear = 
{ 
    .IFS.IFS0.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS1.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS2.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS3.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS4.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS5.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS6.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS7.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS8.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS9.value = 0x0000,   ///> Clear interrupt status flag bit register
    .IFS.IFS10.value = 0x0000,  ///> Clear interrupt status flag bit register
    .IFS.IFS11.value = 0x0000,  ///> Clear interrupt status flag bit register
    .IFS.IFS12.value = 0x0000,  ///> Clear interrupt status flag bit register
    .IFS.IFS13.value = 0x0000,  ///> Clear interrupt status flag bit register
    .IFS.IFS14.value = 0x0000,  ///> Clear interrupt status flag bit register
    .IFS.IFS15.value = 0x0000,  ///> Clear interrupt status flag bit register

    .IEC.IEC0.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC1.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC2.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC3.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC4.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC5.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC6.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC7.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC8.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC9.value = 0x0000,   ///> Clear interrupt enable register
    .IEC.IEC10.value = 0x0000,  ///> Clear interrupt enable register
    .IEC.IEC11.value = 0x0000,  ///> Clear interrupt enable register
    .IEC.IEC12.value = 0x0000,  ///> Clear interrupt enable register
    .IEC.IEC13.value = 0x0000,  ///> Clear interrupt enable register
    .IEC.IEC14.value = 0x0000,  ///> Clear interrupt enable register
    .IEC.IEC15.value = 0x0000,  ///> Clear interrupt enable register

    .IPC.IPC0.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC1.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC2.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC3.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC4.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC5.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC6.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC7.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC8.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC9.value  = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC10.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC11.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC12.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC13.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC14.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC15.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC16.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC17.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC18.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC19.value = 0x0000,  ///> Clear interrupt priority register

    .IPC.IPC20.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC21.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC22.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC23.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC24.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC25.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC26.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC27.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC28.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC29.value = 0x0000,  ///> Clear interrupt priority register

    .IPC.IPC30.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC31.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC32.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC33.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC34.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC35.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC36.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC37.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC38.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC39.value = 0x0000,  ///> Clear interrupt priority register
    
    .IPC.IPC40.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC41.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC42.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC43.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC44.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC45.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC46.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC47.value = 0x0000,  ///> Clear interrupt priority register
    .IPC.IPC48.value = 0x0000,  ///> Clear interrupt priority register
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-irq-methods
 * @brief   Read the current configuration from the ISR special function registers
 * @return  ISR special function register data object of type P33C_ISR_MODULE_t
 * 
 * @details
 *     This function reads all ISR registers with their current configuration 
 *     into a data structure of type P33C_ISR_MODULE_t. Users can verify or 
 *     modify the configuration of the Timer peripheral.
 * 
 *********************************************************************************/
static inline P33C_ISR_MODULE_t p33c_Isr_GetConfig(void)
{
    volatile P33C_ISR_MODULE_t* isr;
 
    // Capture Handle: set pointer to memory address of ISR module register set
    isr = p33c_IsrModule_GetHandle();

    return(*isr);
}

/********************************************************************************
 * @ingroup p33c-pral-irq-methods
 * @brief   Writes a user-defined configuration to the ISR registers
 * @param   isrConfig: ISR special function register data object of type P33C_ISR_MODULE_t
 * @return  0 = failure, writing to ISR registers was not successful
 * @return  1 = success, writing to ISR registers was successful
 * 
 * @details
 *     This function writes a user-defined ISR configuration of type 
 *     P33C_ISR_MODULE_t to the ISR registers. The individual register 
 *     configurations have to be set in user-code before calling this function. 
 *     To simplify the configuration process of standard functions, this driver 
 *     provides templates, which can be loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_Isr_SetConfig(P33C_ISR_MODULE_t isrConfig)
{
    int retval = 1;
    volatile P33C_ISR_MODULE_t* isr;    

    // Set pointer to memory address of desired Timer 
    isr = p33c_IsrModule_GetHandle();   // Capture start address of ISR module register set
    *isr = isrConfig;                   // Write user configuration to module registers
    
    return(retval);
    
}

#endif /* End of P33C_IRQ_SFR_INTERFACE_H */

// ____________________________
// end of file
