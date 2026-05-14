/**
 * @file    p33c_pps.h
 * @see     p33c_pps-d.h
 * @author  M91406
 * @date    July 7, 2016
 * @brief   Generic Peripheral Pin Select (PPS) Driver Module
 * @details
 *  Some low-pin count devices have the capability to assign digital functions to a range of
 *  free configurable pins (RPx). This driver module offers functions to read from and write to
 *  the configuration registers, which will connect a digital peripheral bock with a selected
 *  pin.
 */

// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef P33C_PPS_SFR_INTERFACE_H
#define P33C_PPS_SFR_INTERFACE_H

// Include Header Files
#include "p33c_pps-d.h" // Include peripheral pin select PRAl driver header file

/**************************************************************************************************
 * History:
 *	11/04/2008	First Release
 *  08/25/2009	Added definitions for new peripherals
 *  02/05/2012	Format transfer
 *  04/11/2016	Added definitions and compile switches for dsPIC33EP GS
 *  05/29/2019  Added RPx pin configuration lock/unlock sequence for dsPIC33C
 *  10/14/2020  Removed support for dsPIC33F and dsPIC33E
 *  06/17/2021  Synchronized all function names across PRAL drivers
 *  10/18/2022  Removed driver-like functions synchronizing register abstraction methods across
 *              PRAL drivers
 *************************************************************************************************/

/*************************************************************************************************
 * @ingroup p33c-pral-pps-methods
 * @brief   Locks the Peripheral Pin Select Configuration registers against accidental changes
 * @return  0 = failure, locking PPS registers was not successful
 * @return  1 = success, locking PPS registers was successful
 *
 * @details
 *  This inline-assembly routine locks the Port Multiplexing Configuration
 *  registers by keeping the required number of cycles during the Lock process.
 *  This function has to be called once before digital functions are mapped
 *  to a specific pin. Once called, a series of assignments can be executed.
 *
 * @see p33c_pps.h
 *
 ************************************************************************************************/
static inline int p33c_Pps_LockIO(void)
{
    // Interrupts must be disabled around this call as it requires NVMKEY to be unlocked.
    // While normally this is not required due to when the call is made, if done while
    // interrupts are enabled it may cause intermittent failures.
    __builtin_disable_interrupts();
    __builtin_write_RPCON(RPCON | 0x0800);  // Lock PPS registers _RPCON
    __builtin_enable_interrupts();

    return(RPCONbits.IOLOCK);       // Return Lock status bit result
}

/*************************************************************************************************
 * @ingroup p33c-pral-pps-methods
 * @brief   Unlocks the Peripheral Pin Select Configuration registers to enable changes
 * @return  0 = failure, unlocking PPS registers was not successful
 * @return  1 = success, unlocking PPS registers was successful
 *
 * @details
 *  This inline-assembly routine unlocks the Port Multiplexing Configuration
 *  registers by keeping the required number of cycles during the unlock process.
 *  This function has to be called once after digital functions have been mapped
 *  to a specific pin, to prevent accidental changes.
 *
 * @see p33c_pps.h
 *
 ************************************************************************************************/
static inline int p33c_Pps_UnlockIO(void)
{
    // Interrupts must be disabled around this call as it requires NVMKEY to be unlocked.
    // While normally this is not required due to when the call is made, if done while
    // interrupts are enabled it may cause intermittent failures.
    __builtin_disable_interrupts();
    __builtin_write_RPCON(RPCON & 0xF7FF);  // Unlock PPS registers
    __builtin_enable_interrupts();

    return(1 - RPCONbits.IOLOCK);   // Return Lock status bit result
}

/*************************************************************************************************
 * @ingroup p33c-pral-pps-methods
 * @brief   Assigns a digital function output to a selected, mappable device pin
 * @param   pinno: Index of the RP device pin of type uint8_t (e.g. 42 for RP42)
 * @param   peripheral: Peripheral/Function ID of type uint8_t (e.g. _U1TXR for UART1 TxD)
 * @return  0 = failure, writing to PPS register was not successful
 * @return  1 = success, writing to PPS register was successful
 *
 * @details
 *  Any supported digital function output (e.g. UART TxD) can be assigned to one of
 *  the RPx pins of the MCU/DSC.
 *
 * <b>Example</b><br>
 *
 *	The following code example assigns UART1 RxD and TxD lines to
 *  device pins RB2 and RB3
 *
 * @code{.c}
 *
 *  retval  = p33c_Pps_UnlockIO();
 *	retval |= p33c_Pps_MapInput (34, PPSI_U1RX); // Assign RP34 to UART1 RxD input
 *	retval |= p33c_Pps_MapOutput(36, PPSO_U1TX); // Assign RP36 to UART1 TxD input
 *  retval |= p33c_Pps_LockIO();
 *
 * @endcode
 *
 * @see
 *  p33SMPS_pps.h, p33c_Pps_LockIO, p33c_Pps_UnlockIO, p33c_Pps_MapOutput
 *
 *************************************************************************************************/
static inline int p33c_Pps_MapOutput(uint8_t pinno, uint8_t peripheral)
{
    int retval=0;
    volatile uint8_t *regptr;
    uint8_t pin_offset=0;

    if (pinno <= RP_PINNO_MAX)
    { 
        pin_offset = (pinno - RP_PINNO_MIN);    // determine pin-offset
        regptr = (volatile uint8_t *)&RPOR0;    // get register block base address
    }    
    else if (pinno >= RPV_PINNO_MIN)
    { 
        pin_offset = (pinno - RPV_PINNO_MIN);   // determine pin-offset
        regptr = (volatile uint8_t *)&RPOR24;   // get register block base address
    } 
    else { return(retval); }                    // pin number not supported
    
    // Write value to register
    regptr += (volatile uint8_t)pin_offset;     // add offset
    *regptr = (volatile uint8_t)peripheral;     // copy configuration into register location

    // Check if contents have been written correctly
    retval = (bool)(*regptr == (uint8_t)peripheral);

	return (retval);
}

/*************************************************************************************************
 * @ingroup p33c-pral-pps-methods
 * @brief   Assigns a selected, mappable device pin to a digital function input
 * @param   pinno: Index of the RP device pin of type uint8_t (e.g. 42 for RP42)
 * @param   peripheral: Pointer to peripheral input function register of type uint8_t*
 *                      (e.g. _U1RXR for UART1 RxD)
 * @return  0 = failure, writing to PPS register was not successful
 * @return  1 = success, writing to PPS register was successful
 *
 * @details
 *  Any RPx pin can be assigned to a supported digital function input (e.g. UART RxD).
 *  To assign a pin to a function input, call
 *
 * @example
 *  The following code example assigns UART1 RxD and TxD lines to
 *  device pins RB2 and RB3
 *
 * @code{.c}
 *
 *  retval  = p33c_Pps_UnlockIO();
 *	retval |= p33c_Pps_MapInput(34, PPSI_U1RX);  // Assign RP34 to UART1 RxD input
 *	retval |= p33c_Pps_MapOutput(36, PPSO_U1TX); // Assign RP36 to UART1 TxD input
 *  retval |= p33c_Pps_LockIO();
 *
 * @endcode
 *
 * @see
 *  p33SMPS_pps.h, p33c_Pps_LockIO, p33c_Pps_UnlockIO, p33c_Pps_MapOutput
 *
 * ***********************************************************************************************/
static inline int p33c_Pps_MapInput(uint8_t pinno, volatile uint8_t* peripheral)
{
    *peripheral = pinno; // Map selected pin function
	return(1);
}

#endif /* End of P33C_PPS_SFR_INTERFACE_H */

// ________________________
// end of file
