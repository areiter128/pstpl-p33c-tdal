/**
 * @file    p33c_timer.h
 * @see     p33c_timer-d.h
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_TIMER16_SFR_INTERFACE_H
#define	P33C_TIMER16_SFR_INTERFACE_H

// Include header files
#include <math.h> // include math library header file
#include "p33c_timer-d.h" // include Timer peripheral abstration header file
#include "p33c_fmgr-d.h" // Include peripheral abstraction driver header file

/*********************************************************************************
 * @ingroup p33c-pral-timer-templates
 * @brief   Timer Register Set reset state template
 * 
 * @details
 *  This P33C_TIMER_MODULE_s data object provides a template of register 
 *  configuration values for the 16-bit Timer peripheral. 
 * 
 *  Default configuration:
 *      - all options are reset to their default state
 * 
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_TIMER_MODULE_t tmrConfigClear = 
{ 
    .TxCON.value = 0x0000,  ///> Clear timer configuration register
    .TMRx.value  = 0x0000,  ///< Reset timer counter register
    .PRx.value   = 0x0000   ///< Set period register to maximum
};

/*********************************************************************************
 * @ingroup p33c-pral-timer-templates
 * @brief   Timer Register Set reset state template
 * 
 * @details
 *  This P33C_TIMER_MODULE_s data object provides a template of register 
 *  configuration values for the 16-bit Timer peripheral. 
 * 
 *  Default configuration:
 *      - all options are set to their recommended default state
 *      - timer is counting at system clock period
 * 
 *********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_TIMER_MODULE_t tmrConfigDefault = 
{ 
    .TxCON.value = 0x0102,  ///> TON=0, SIDL=0, TMWDIS=0, TMWIP=0, PRWIP=0, TECS=0b01, TGATE=0, TCKPS=0b00, TSYNC=0, TCS=0
    .TMRx.value  = 0x0000,  ///< Reset timer counter register
    .PRx.value   = 0x0000   ///< Set period register to maximum
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Enables power to Timer peripheral
 * @return  0 = failure, turning on Timer registers was not successful
 * @return  1 = success, turning on Timer registers was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the Timer peripheral.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_Timer_PowerOn(void) 
{
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    #ifdef PMD1
    PMD1bits.T1MD = 0; // Enable power to Timer1 peripheral
    #endif
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return (1-PMD1bits.T1MD);
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Disables power to Timer peripheral
 * @return  0 = failure, turning off Timer registers was not successful
 * @return  1 = success, turning off Timer registers was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  off the power supply to the Timer peripheral.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_Timer_PowerOff(void) 
{
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    #ifdef PMD1
    PMD1bits.T1MD = 1; // Disable power to Timer peripheral
    #endif
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return (PMD1bits.T1MD);
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Enables the timer peripheral
 * @return  0 = failure, enabling Timer registers was not successful
 * @return  1 = success, enabling Timer registers was successful
 * 
 * @details
 *  Clears the timer counter register and interrupt flag bit and starts the
 *  the timer counter.
 *
 **********************************************************************************/
static inline int p33c_Timer_Enable(void)
{
    int retval = 1;
    volatile  P33C_TIMER_MODULE_t* tmr;

    tmr = p33c_TimerModule_GetHandle(); // Capture memory address of Timer peripheral Special Function Register block

    _T1IF = 0;                  // Clear interrupt flag bit
    tmr->TMRx.value = 0;        // Clear timer counter register
    tmr->TxCON.bits.TON = 1;    // Timer1 On: Starts 16-bit Timer1 during configuration

    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Disables the timer peripheral
 * @return  0 = failure, disabling Timer registers was not successful
 * @return  1 = success, disabling Timer registers was successful
 * 
 * @details
 *  Stops the timer counter and clears the timer counter register and
 *  interrupt flag bit.
 *
 **********************************************************************************/
static inline int p33c_Timer_Disable(void)
{
    int retval = 1;
    volatile  P33C_TIMER_MODULE_t* tmr;

    tmr = p33c_TimerModule_GetHandle(); // Capture memory address of Timer peripheral Special Function Register block
    
    tmr->TxCON.bits.TON = 0;    // Timer1 On: Stops 16-bit Timer1 during configuration
    tmr->TMRx.value = 0;        // Clear timer counter register
    _T1IF = 0;                  // Clear interrupt flag bit

    return (retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Read the current configuration from the Timer special function registers
 * @return  Timer special function register data object of type P33C_TIMER_MODULE_t
 * 
 * @details
 *  This function reads all Timer registers with their current configuration 
 *  into a data structure of type P33C_TIMER_MODULE_t. Users can verify or 
 *  modify the configuration of the Timer peripheral.
 * 
 *********************************************************************************/
static inline P33C_TIMER_MODULE_t p33c_Timer_GetConfig(void)
{
    volatile P33C_TIMER_MODULE_t* tmr;
 
    // Capture Handle: set pointer to memory address of desired Timer instance
    tmr = p33c_TimerModule_GetHandle();

    return(*tmr);
}

/********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Writes a user-defined configuration to the Timer registers
 * @param   tmrConfig: Timer special function register data object of type P33C_TIMER_MODULE_t
 * @return  0 = failure, writing to Timer registers was not successful
 * @return  1 = success, writing to Timer registers was successful
 * 
 * @details
 *  This function writes a user-defined Timer configuration of type 
 *  P33C_TIMER_MODULE_t to the Timer registers. The individual register 
 *  configurations have to be set in user-code before calling this function. 
 *  To simplify the configuration process of standard functions, this driver 
 *  provides templates, which can be loaded and written directly.
 * 
 *********************************************************************************/
static inline int p33c_Timer_SetConfig(P33C_TIMER_MODULE_t tmrConfig)
{
    int retval = 1;
    volatile P33C_TIMER_MODULE_t* tmr;    

    // Set pointer to memory address of desired Timer 
    tmr = p33c_TimerModule_GetHandle(); // Capture start address of Timer peripheral register set
    *tmr = tmrConfig;                   // Write user configuration to peripheral registers
    
    return(retval);
    
}

/*********************************************************************/
/*********************************************************************/
/*********************************************************************/

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Helper function for simple initialization of timer with custom period
 * @param   tmrPeriod:   Period value at which the timer counter should overflow
 * @param   isrEnable:   Flag used to enable or disable the timer interrupt
 * @param   isrPriority: Sets the timer interrupt priority level (integer number between 0-6)
 * @return  0 = failure, writing to Timer registers was not successful
 * @return  1 = success, writing to Timer registers was successful
 * 
 * @details
 *  This helper function simplifies the configuration of a standard timer
 *  peripheral with basic features enabled. 
 *
 * <p><b>Example:</b></p>
 * @code{.c}
 *  p33c_Timer_DefaultInitialize(10000, false, 0); // initialize timer for 10 usec period without interrupts
 * @endcode
 *
 * @note
 *  When the timer interrupt is enabled, users must have a timer interrupt service
 * routine in their code.
 *
 **********************************************************************************/
static inline int p33c_Timer_DefaultInitialize(uint16_t tmrPeriod, bool isrEnable, uint16_t isrPriority)
{
    int retval = 1;
    volatile P33C_TIMER_MODULE_t* tmr;
    
    p33c_Timer_PowerOn();               // Make sure power to peripheral is enabled
    tmr = p33c_TimerModule_GetHandle(); // Capture memory address of Timer peripheral Special Function Register block

    // Load default configuration template
    retval &= p33c_Timer_SetConfig(tmrConfigDefault);
    
    // Example: Period = 0.0001 s; Frequency = 100000000 Hz; PR 9999; 
    tmr->PRx.value = tmrPeriod;
    
    // Reset interrupt and interrupt flag bit
    _T1IP = isrPriority;  // Set interrupt priority to DEFAULT
    _T1IF = 0;            // Reset interrupt flag bit
    _T1IE = isrEnable;    // Enable/disable Timer1 interrupt
   
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Helper function for reading the timer period
 * @return  Value of most recent timer period of Timer1 as number of type unsigned integer
 * 
 * @details
 *  This helper function returns the most recent timer period of Timer1.
 **********************************************************************************/
static inline int p33c_Timer_GetPeriod(void)
{
    // Capture memory address of Timer peripheral Special Function Register block
    volatile  P33C_TIMER_MODULE_t* tmr = p33c_TimerModule_GetHandle(); 

    // Return period value (example: Period = 0.0001 s; Frequency = 100000000 Hz; PR 9999; )
    return(tmr->PRx.value); 
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Helper function for setting the timer period 
 * @param   tmrPeriod:   Period value at which the timer counter should overflow
 * @return  0 = failure, writing to Timer registers was not successful
 * @return  1 = success, writing to Timer registers was successful
 * 
 * @details
 *  This helper function sets the timer period of Timer1. It expects an integer
 *  period register value matching the expected time period.
 **********************************************************************************/
static inline int p33c_Timer_SetPeriod(uint16_t tmrPeriod)
{
    // Capture memory address of Timer peripheral Special Function Register block
    volatile  P33C_TIMER_MODULE_t* tmr = p33c_TimerModule_GetHandle(); 

    // Write period value to timer period register
    tmr->PRx.value = tmrPeriod;
    
    // test if value has been written correctly
    int retval = ((tmr->PRx.value == tmrPeriod) ? 1 : 0);
    
    // Return test result
    return(retval); 
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Helper function converting a period in micro-seconds to an period register integer
 * @param   timeUs:   Time Period value in microseconds at which the timer counter should overflow, as 32-bit integer number
 * @return  0 = failure, writing to Timer registers was not successful
 * @return  1 = success, writing to Timer registers was successful
 * 
 * @details
 *  This helper function converts a time period in micro-seconds to an 
 *  integer number using the most recent system oscillator settings, and
 *  writes the result to the Timer1 period register.
 *  The maximum selectable time interval depends on the system clock 
 *  frequency and selected Timer1 clock source. Please refer to the 
 *  target device data sheet for more details.
 **********************************************************************************/
static inline int p33c_Timer_SetTimePeriodUs(uint32_t timeUs)
{
    int retval = 1;
    
    // Make sure system frequencies are up-to-date
    retval &= p33c_UpdateSystemFrequencies();
    
    // Capture memory address of Timer peripheral Special Function Register block
    volatile  P33C_TIMER_MODULE_t*  tmr = p33c_TimerModule_GetHandle(); 
    uint32_t sourceFrequency = 0;
    
    // Select source frequency based on source clock selection
    if (tmr->TxCON.bits.TCS)
    {
        switch (tmr->TxCON.bits.TECS)
        {
            case 0b11: sourceFrequency = p33c_SystemFrequencies.Frc; break; // FRC clock
            case 0b10: sourceFrequency = p33c_SystemFrequencies.Fosc; break; // FOSC
            case 0b01: sourceFrequency = p33c_SystemFrequencies.Fcy; break; // TCY
            case 0b00: sourceFrequency = p33c_SystemFrequencies.Ft1ck; break; // External Clock comes from the T1CK pin
            default: return(0); // return error message
        }
    }
    else{ sourceFrequency = p33c_SystemFrequencies.Fp; }
        
    // if frequency information is empty, leave with error
    if (sourceFrequency == 0) return(0);

    // Convert frequency to period in (ticks)
    float fsource = (float)sourceFrequency;
    float ftimer = (pow(10, 6) / (float)timeUs);
    uint32_t sourcePeriod = (uint32_t)(fsource / ftimer);

    
    // Scale frequency by pre-scaler
    switch (tmr->TxCON.bits.TCKPS)
    {
        case 0b11: (sourcePeriod >>= 8); break;
        case 0b10: (sourcePeriod >>= 6); break;
        case 0b01: (sourcePeriod >>= 3); break;
        case 0b00: break;
        default: return(0); // return error message
    }
    
    // if frequency information is empty, leave with error
    if (sourcePeriod == 0) return(0);
    if (sourcePeriod > UINT16_MAX) sourcePeriod = UINT16_MAX;
    sourcePeriod--; // subtract one tick from period to match time interval
    
    // Write period to period register
    tmr->PRx.value = (uint16_t)(sourcePeriod);
    
    // Check result
    retval = (tmr->PRx.value == ((uint16_t)(sourcePeriod)) ? 1 : 0);
    
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Helper function for configuring the timer interrupt 
 * @param   isrEnable:   Flag used to enable or disable the timer interrupt
 * @param   isrPriority: Sets the timer interrupt priority level (integer number between 0-6)
 * @return  0 = failure, writing to Timer registers was not successful
 * @return  1 = success, writing to Timer registers was successful
 * 
 * @details
 *  This helper function sets the timer interrupt properties of Timer1.
 **********************************************************************************/
static inline int p33c_Timer_IsrInitialize(bool isrEnable, uint16_t isrPriority)
{
    int retval = 1;
    
    // Reset interrupt and interrupt flag bit
    _T1IP = isrPriority;  // Set interrupt priority to DEFAULT
    _T1IF = 0;            // Reset interrupt flag bit
    _T1IE = isrEnable;    // Enable/disable Timer1 interrupt

    retval = (bool)(_T1IE == isrEnable);
    
    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-timer-methods
 * @brief   Polls on the interrupt flag bit being set
 * @param   timeout: maximum wait-counter value
 * @return  0: Interrupt flag bit did not get set
 * @return  n: Interrupt flag bit got set after n counter cycles
 * @return  1: Interrupt flag bit did get set immediately / has been set
 * 
 * @details
 *  Waits for the timer interrupt flag bit to be set. During the waiting 
 *  period the code stalls at the process priority of the calling function
 *  until the flag bit is set or the timeout has expired.
 * 
 * @note
 *  The timeout is mandatory and must be set by the calling function.
 *  If a value of '0' is passed in, the default timeout value of 30000
 *  counter ticks will be applied instead.
 *
 * @note
 *  If the timer interrupt is enabled, this function will be bypassed.
 **********************************************************************************/
static inline int p33c_Timer_WaitForOverrun(uint16_t timeout) 
{
    int retval = 1;  // Return value of this function
    uint16_t counter = 0; // Timeout counter auxiliary variable
    
    if (_T1IE) return(retval);
    if(timeout == 0) timeout = 30000; // ensure minimum timeout period
    while ((_T1IF == 0) && (counter++ < timeout)); // Wait for interrupt flag bit to be set
    retval = _T1IF;
    _T1IF = 0; // clear interrupt flag bit
    
    return (retval); // return result

}

#endif /* End of P33C_TIMER16_SFR_INTERFACE_H */

// _______________________
// end of file
