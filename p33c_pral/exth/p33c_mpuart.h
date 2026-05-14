/**
 * @file    p33c_mpuart.h
 * @see     p33c_mpuart-d.h
 * @author  M91406
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_UART_SFR_INTERFACE_H
#define	P33C_UART_SFR_INTERFACE_H

// Include header files
#include "p33c_mpuart-d.h" // Include UART peripheral abstraction driver header file

/**********************************************************************************************
 * UART PORT CONFIGURATION TEMPLATES
 **********************************************************************************************/

/*********************************************************************************
 * @ingroup p33c-pral-uart-templates
 * @brief   Default RESET configuration of one UART instance SFRs
 *
 * @details
 *   Default configuration of the UART port SFRs with all its registers 
 *   being reset to their default state when the device comes out of RESET.
 *   Programmers can use this template to reset (dispose) a previously used
 *   UART port when it's not used anymore or to secure a known startup
 *   condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_UART_INSTANCE_t uartConfigClear = 
{
        .UxMODE.value   = 0x0000,   // UARTEN=0, USIDL=0, WAKE=0, RXBIMD=0, BRKOVR=0, UTXBRK=0, BRGH=0, ABAUD=0, UTXEN=0, URXEN=0, MOD=0
        .UxMODEH.value  = 0x0000,   // SLPEN=0, ACTIVE=0, BCLKMOD=0, BCLKSEL=0, HALFDPLX=0, RUNOVF=0, URXINV=0, STSEL=0, C0EN=0, UTXINV=0, FLO=0
        .UxSTA.value    = 0x0000,   // TXMTIE=0, PERIE=0, ABDOVE=0, CERIE=0, FERIE=0, RXBKIE=0, OERIE=0, TXCIE=0, TRMT=0, PERR=0, ABDOVF=0, CERIF=0, FERR=0, RXBKIF=0, OERR=0, TXCIF=0
        .UxSTAH.value   = 0x0000,   // UTXISEL2=0, UTXISEL1=0, UTXISEL0=0, URXISEL2=0, URXISEL1=0, URXISEL0=0, TXWRE=0, STPMD=0, UTXBE=0, UTXBF=0, RIDLE=0, XON=0, URXBE=0, URXBF=0
        .UxBRG.value    = 0x0000,   // BRG=0
        .UxBRGH.value   = 0x0000,   // BRG[19:16]=0
        .UxRXREG.value  = 0x0000,   // RXREG[7:0]=0
        .UxTXREG.value  = 0x0000,   // TXREG[7:0]=0
        .UxP1.value     = 0x0000,   // P1[7:0]=0
        .UxP2.value     = 0x0000,   // P2[7:0]=0
        .UxP3.value     = 0x0000,   // P3[7:0]=0
        .UxP3H.value    = 0x0000,   // P3[7:0]=0
        .UxTXCHK.value  = 0x0000,   // TXCHK[7:0]=0
        .UxRXCHK.value  = 0x0000,   // RXCHK[7:0]=0
        .UxSCCON.value  = 0x0000,   // TXRPT1=0, TXRPT0=0, CONV=0, T0PD=0, PRTCL=0,
        .UxSCINT.value  = 0x0000,   // RXRPTIF=0, TXRPTIF=0, BTCIF=0, WTCIF=0, GTCIF=0, RXRPTIE=0, TXRPTIE=0, BTCIE=0, WTCIE=0, GTCIE=0,
        .UxINT.value    = 0x0000    // WUIF=0, ABDIF=0, ABDIE=0,
};

/*********************************************************************************
 * @ingroup p33c-pral-uart-templates
 * @brief   Configuration of one UART instance SFRs as default UART
 *
 * @details
 *   Default configuration of the UART port SFRs with all its registers 
 *   being set to the default state of an asynchronous 8-bit UART without 
 *   address detect, having its receive and transmit channel enabled.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_UART_INSTANCE_t uartConfigDefaultUart = 
{
        .UxMODE.value   = 0x0080,   // UARTEN=0, USIDL=0, WAKE=0, RXBIMD=0, BRKOVR=0, UTXBRK=0, BRGH=1, ABAUD=0, UTXEN=0, URXEN=0, MOD=0
        .UxMODEH.value  = 0x0800,   // SLPEN=0, ACTIVE=0, BCLKMOD=1, BCLKSEL=0, HALFDPLX=0, RUNOVF=0, URXINV=0, STSEL=0, C0EN=0, UTXINV=0, FLO=0
        .UxSTA.value    = 0x0000,   // TXMTIE=0, PERIE=0, ABDOVE=0, CERIE=0, FERIE=0, RXBKIE=0, OERIE=0, TXCIE=0, TRMT=0, PERR=0, ABDOVF=0, CERIF=0, FERR=0, RXBKIF=0, OERR=0, TXCIF=0
        .UxSTAH.value   = 0x0000,   // UTXISEL2=0, UTXISEL1=0, UTXISEL0=0, URXISEL2=0, URXISEL1=0, URXISEL0=0, TXWRE=0, STPMD=0, UTXBE=0, UTXBF=0, RIDLE=0, XON=0, URXBE=0, URXBF=0
        .UxBRG.value    = 0x0000,   // BRG=0
        .UxBRGH.value   = 0x0000,   // BRG[19:16]=0
        .UxRXREG.value  = 0x0000,   // RXREG[7:0]=0
        .UxTXREG.value  = 0x0000,   // TXREG[7:0]=0
        .UxP1.value     = 0x0000,   // P1[7:0]=0
        .UxP2.value     = 0x0000,   // P2[7:0]=0
        .UxP3.value     = 0x0000,   // P3[7:0]=0
        .UxP3H.value    = 0x0000,   // P3[7:0]=0
        .UxTXCHK.value  = 0x0000,   // TXCHK[7:0]=0
        .UxRXCHK.value  = 0x0000,   // RXCHK[7:0]=0
        .UxSCCON.value  = 0x0000,   // TXRPT1=0, TXRPT0=0, CONV=0, T0PD=0, PRTCL=0,
        .UxSCINT.value  = 0x0000,   // RXRPTIF=0, TXRPTIF=0, BTCIF=0, WTCIF=0, GTCIF=0, RXRPTIE=0, TXRPTIE=0, BTCIE=0, WTCIE=0, GTCIE=0,
        .UxINT.value    = 0x0000    // WUIF=0, ABDIF=0, ABDIE=0,
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-uart-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 **********************************************************************************/
static const uint16_t p33c_UartInstances = (sizeof(p33c_UartInstance_Handles)/sizeof(p33c_UartInstance_Handles[0]));

/*********************************************************************************
 * @ingroup p33c-pral-uart-methods
 * @brief   Enables power to a UART peripheral instance
 * @param   uartInstance Instance of the UART port (e.g. 1 = UART1, 2=UART2, etc.) of type unsigned integer
 * @return  0 = failure, writing to UART registers was not successful
 * @return  1 = success, writing to UART registers was successful
 * @details
 *  Peripheral Module Disable Module (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given UART peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_UartInstance_PowerOn(uint16_t uartInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (uartInstance)
    { 
        #ifdef _U1MD
        case 1: _U1MD = 0; retval = (1 - _U1MD); break; // Enable power to UART1 peripheral
        #endif
        #ifdef _U2MD
        case 2: _U2MD = 0; retval = (1 - _U2MD); break; // Enable power to UART2 peripheral
        #endif
        #ifdef _U3MD
        case 3: _U3MD = 0; retval = (1 - _U3MD); break; // Enable power to UART3 peripheral
        #endif
        #ifdef _U4MD
        case 4: _U4MD = 0; retval = (1 - _U4MD); break; // Enable power to UART4 peripheral
        #endif
        #ifdef _U5MD
        case 5: _U5MD = 0; retval = (1 - _U5MD); break; // Enable power to UART5 peripheral
        #endif
        #ifdef _U6MD
        case 6: _U6MD = 0; retval = (1 - _U6MD); break; // Enable power to UART6 peripheral
        #endif
        #ifdef _U7MD
        case 7: _U7MD = 0; retval = (1 - _U7MD); break; // Enable power to UART7 peripheral
        #endif
        #ifdef _U8MD
        case 8: _U8MD = 0; retval = (1 - _U8MD); break; // Enable power to UART8 peripheral
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-uart-methods
 * @brief   Disables power to a UART peripheral instance
 * @param   uartInstance Instance of the UART port (e.g. 1 = UART1, 2=UART2, etc.) of type unsigned integer
 * @return  0 = failure, writing to UART registers was not successful
 * @return  1 = success, writing to UART registers was successful
 * @details
 *  Peripheral Module Disable Module (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  the power supply to the given UART peripheral instance off.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_UartInstance_PowerOff(uint16_t uartInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (uartInstance)
    { 
        #ifdef _U1MD
        case 1: _U1MD = 1; retval = _U1MD; break; // Disable power to UART1 peripheral
        #endif
        #ifdef _U2MD
        case 2: _U2MD = 1; retval = _U2MD; break; // Disable power to UART2 peripheral
        #endif
        #ifdef _U3MD
        case 3: _U3MD = 1; retval = _U3MD; break; // Disable power to UART3 peripheral
        #endif
        #ifdef _U4MD
        case 4: _U4MD = 1; retval = _U4MD; break; // Disable power to UART4 peripheral
        #endif
        #ifdef _U5MD
        case 5: _U5MD = 1; retval = _U5MD; break; // Disable power to UART5 peripheral
        #endif
        #ifdef _U6MD
        case 6: _U6MD = 1; retval = _U6MD; break; // Disable power to UART6 peripheral
        #endif
        #ifdef _U7MD
        case 7: _U7MD = 1; retval = _U7MD; break; // Disable power to UART7 peripheral
        #endif
        #ifdef _U8MD
        case 8: _U8MD = 1; retval = _U8MD; break; // Disable power to UART8 peripheral
        #endif
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}
    
/*********************************************************************************
 * @ingroup p33c-pral-uart-methods
 * @brief   Disposes a given UART port by resetting all its registers to default
 * @param   uartInstance Instance of the UART port (e.g. 1 = UART1, 2=UART2, etc.) of type unsigned integer
 * @return  Generic UART port Special Function Register set of type struct P33C_UART_INSTANCE_t
 * 
 * @details
 *     This function copies the contents of all UART ports registers of the 
 *     specified generator instance (e.g. UART2) to a user variable of type 
 *     P33C_UART_INSTANCE_t. This 'virtual' UART configuration can then, for  
 *     example, be analyzed and/or modified in user code and applied to another 
 *     UART port using function p33c_UartPort_SetConfig(...). 
 * 
 *********************************************************************************/
static inline P33C_UART_INSTANCE_t p33c_UartInstance_GetConfig(uint16_t uartInstance)
{
    volatile P33C_UART_INSTANCE_t* _uart;    

    if (p33c_UartInstance_Exists(uartInstance))
    {
        // Set pointer to memory address of desired UART instance
        _uart = p33c_UartInstance_GetHandle(uartInstance);
        return(*_uart);
    }
    else { return(uartConfigClear); }
    
}

/*********************************************************************************
 * @ingroup p33c-pral-uart-methods
 * @brief   Disposes the specified UART port by resetting all its registers to default
 * @param   uartInstance Instance of the UART port of type unsigned integer (e.g. 1=UART1, 2=UART2, etc.)
 * @param   uartConfig   Generic UART port Special Function Register set of type P33C_UART_INSTANCE_t
 * @return  0 = failure, disposing UART port was not successful
 * @return  1 = success, disposing UART port was successful
 * 
 * @details
 *     This function writes a user-defined UART port configuration of type 
 *     P33C_UART_INSTANCE_t to the given UART port peripheral instance (e.g. UART2). 
 * 
 *********************************************************************************/
static inline int p33c_UartInstance_SetConfig(uint16_t uartInstance, P33C_UART_INSTANCE_t uartConfig)
{
    int retval = 1;
    volatile P33C_UART_INSTANCE_t* _uart;    

    if (p33c_UartInstance_Exists(uartInstance))
    {
        // Set pointer to memory address of desired UART instance
        _uart = p33c_UartInstance_GetHandle(uartInstance);
        *_uart = uartConfig;

        // Verifying configuration process
        retval &= (bool)(_uart->UxMODE.value == uartConfig.UxMODE.value);
    }
    else { retval = 0; }
    
    return(retval);
    
}

/*********************************************************************************
 * @ingroup p33c-pral-uart-methods
 * @brief   Enables the specified UART port by setting its Enable bit
 * @param   uartInstance Instance of the UART port of type unsigned integer (e.g. 1=UART1, 2=UART2, etc.)
 * @return  0 = failure, enabling UART port was not successful
 * @return  1 = success, enabling UART port was successful
 * 
 * @details
 *    This function enables the specified UART port by setting the Enable bit
 *    in the UART instance registers. 
 * 
 * @note
 *    This function only enables the UART peripheral module and does not 
 *    turn on the UART transmitter or receiver. To transmit or receive
 *    messages, register bits UTXEN and/or URXEN must be set individually
 *    as part of the peripheral configuration.
 * 
 *********************************************************************************/
static inline int p33c_UartInstance_Enable(uint16_t uartInstance)
{
    int retval = 1;
    volatile P33C_UART_INSTANCE_t* _uart;    

    if (p33c_UartInstance_Exists(uartInstance))
    {
        // Set pointer to memory address of desired UART instance
        _uart = p33c_UartInstance_GetHandle(uartInstance);

        _uart->UxSTAH.bits.UTXBE  = 1;    // Reset TX FIFO
        _uart->UxSTAH.bits.URXBE  = 1;    // Reset RX FIFO
        _uart->UxMODE.bits.UTXEN = 1;  // turn on transceiver
        _uart->UxMODE.bits.URXEN = 1;  // turn on receiver
        _uart->UxMODE.bits.UARTEN = 1; // turn on UART
        
        // Verifying configuration process
        retval &= (bool)(_uart->UxMODE.bits.UARTEN == 1);
    }
    else { retval = 0; }
    
    return(retval);
    
}

/*********************************************************************************
 * @ingroup p33c-pral-uart-methods
 * @brief   Disables the specified UART port by setting its Enable bit
 * @param   uartInstance Instance of the UART port of type unsigned integer (e.g. 1=UART1, 2=UART2, etc.)
 * @return  0 = failure, disabling UART port was not successful
 * @return  1 = success, disabling UART port was successful
 * 
 * @details
 *    This function disables the specified UART port by clearing the Enable bit
 *    in the UART instance registers. 
 * 
 * @note
 *    This function only disables the UART peripheral module and does not 
 *    turn off the UART transmitter or receiver. By calling this function
 *    the peripheral module will stop sending/receiving messages. Register 
 *    bits UTXEN and/or URXEN enabling/disabling the transmitter and/or 
 *    receiver can remain enabled.
 * 
 *********************************************************************************/
static inline int p33c_UartInstance_Disable(uint16_t uartInstance)
{
    int retval = 1;
    volatile P33C_UART_INSTANCE_t* _uart;    

    if (p33c_UartInstance_Exists(uartInstance))
    {
        // Set pointer to memory address of desired UART instance
        _uart = p33c_UartInstance_GetHandle(uartInstance);
        _uart->UxMODE.bits.UARTEN = 0;

        // Verifying configuration process
        retval &= (bool)(_uart->UxMODE.bits.UARTEN == 0);
    }
    else { retval = 0; }
    
    return(retval);
    
}

#endif /* End of P33C_UART_SFR_INTERFACE_H */

// __________________________
// end of file
