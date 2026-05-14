/**
 * @file    p33c_i2c.h
 * @see     p33c_i2c-d.h
 * @author  A14426
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef P33C_I2C_SFR_INTERFACE_H
#define	P33C_I2C_SFR_INTERFACE_H

// Include header files
#include "p33c_i2c-d.h" // Include I2C peripheral abstraction driver header file

/********************************************************************************************** * 
 * I2C PORT CONFIGURATION TEMPLATES
 ********************************************************************************************** */

/*********************************************************************************
 * @ingroup p33c-pral-i2c-templates
 * @brief   Default RESET configuration of one I2C instance SFRs
 *
 * @details
 *  Default configuration of the I2C port SFRs with all its registers 
 *  being reset to their default state when the device comes out of RESET.
 *  Programmers can use this template to reset (dispose) a previously used
 *  I2C port when it's not used anymore or to secure a known startup
 *  condition before writing individual configurations to its SFRs.
 * 
 ********************************************************************************/
static const __attribute__((space(auto_psv))) P33C_I2C_INSTANCE_t i2cConfigClear = 
{
    .I2CxCONL.value  = 0x0000,   // I2CEN=0,[15]=UI,I2CSIDL=0, SCLREL=0, STRICT=0, A10M=0, DISSLW=0, SMEN=0, GCEN=0, STREN=0, ACKDT=0, ACKEN=0,RCEN=0,PEN= 0; RSEN=0,SEN=0
    .I2CxCONH.value  = 0x0000,   // [15:7]=UI , PCIE=0, SCIE=0, SDAHT=0, SBCDE=0, AHEN=0, DHEN=0
    .I2CxSTAT.value  = 0x0000,   // ACKSTAT=0, TRSTAT=0, ACKTIM=0, [12:11]=UI, BCL=0, GCSTAT=0, ADD10=0, IWCOL=0, I2COV=0, D/A=0, P=0, S=0, R/W=0, RBF=0, TBF=0
    .I2CxADD.value   = 0x0000,   // [15:10]=UI, ADD[9:0]=0; 
    .I2CxMSK.value   = 0x0000,   // [15:10]=UI, MSK[9:0]=0;
    .I2CxBRG.value   = 0x0000,   // BRG[15:0]=0
    .I2CxTRN.value   = 0x0000,   // [15:8]=UI, TXDATA[7:0]=0
    .I2CxRCV.value   = 0x0000,   // [15:8]=UI, RXDATA[7:0]=0
};

/* ============================================================================== */
/* ============================================================================== */
/* ============================================================================== */

/*********************************************************************************
 * @ingroup p33c-pral-i2c-properties
 * @brief   Gets the number of available peripheral instances
 * @details
 *  This variable is used to determine the number of available instances of the
 *  peripheral by returning the number of array elements of the instance handle
 *  list.
 * 
 **********************************************************************************/
static const uint16_t p33c_i2cInstances = (sizeof(p33c_i2cInstance_Handles)/sizeof(p33c_i2cInstance_Handles[0]));
    
/*********************************************************************************
 * @ingroup p33c-pral-i2c-methods
 * @brief   Enables power to an I2C peripheral instance
 * @param   i2cInstance Instance of the I2C module of type unsigned integer (e.g. 1=I2C1, 2=I2C2, etc.)
 * @return  0 = failure, turning on power to I2C peripheral instance was not successful
 * @return  1 = success, turning on power to I2C peripheral instance was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  on the power supply to the given I2C peripheral instance.
 *
 * @note
 *  When power to the peripheral is turned on, all registers are reset
 *  to their default values, requiring the peripheral to be reconfigured
 *  in user code.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_i2cInstance_PowerOn(uint16_t i2cInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
    switch (i2cInstance)
    { 
        #ifdef _I2C1MD
        case 1: _I2C1MD = 0; retval = (1 - _I2C1MD); break; // Enable power to I2C1 peripheral
        #endif
        #ifdef _I2C2MD
        case 2: _I2C2MD = 0; retval = (1 - _I2C2MD); break; // Enable power to I2C2 peripheral
        #endif
        #ifdef _I2C3MD
        case 3: _I2C3MD = 0; retval = (1 - _I2C3MD); break; // Enable power to I2C3 peripheral
        #endif
       
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-i2c-methods
 * @brief   Disables power to an I2C peripheral instance
 * @param   i2cInstance Instance of the I2C module of type unsigned integer (e.g. 1=I2C1, 2=I2C2, etc.)
 * @return  0 = failure, turning off power to I2C peripheral instance was not successful
 * @return  1 = success, turning off power to I2C peripheral instance was successful
 * @details
 *  Peripheral Module Disable (PMD) registers allow to cut power to 
 *  unused peripherals to reduce power consumption. This routine turns
 *  the power supply to the given I2C peripheral instance off.
 *
 * @note
 *  When power to the peripheral is turned off, all registers get inaccessible
 *  and all read or write operations will fail.
 *
 * @see @ref p33c-pral-pmd
 * 
 **********************************************************************************/
static inline int p33c_i2cInstance_PowerOff(uint16_t i2cInstance)    
{
    int retval = 1;
        
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 0; // Unlock PMD registers
    #endif
     switch (i2cInstance)
    { 
        #ifdef _I2C1MD
        case 1: _I2C1MD = 1; retval = _I2C1MD; break; // Enable power to I2C1 peripheral
        #endif
        #ifdef _I2C2MD
        case 2: _I2C2MD = 1; retval = _I2C2MD; break; // Enable power to I2C2 peripheral
        #endif
        #ifdef _I2C3MD
        case 3: _I2C3MD = 1; retval = _I2C3MD; break; // Enable power to I2C3 peripheral
        #endif
       
        default: retval=0; break;
    }
    #ifdef PMDCON
    PMDCONbits.PMDLOCK = 1; // Lock PMD registers
    #endif

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-i2c-methods
 * @brief   Enables a given I2C peripheral instance
 * @param   i2cInstance Instance of the I2C module of type unsigned integer (e.g. 1=I2C1, 2=I2C2, etc.)
 * @return  0 = failure, enabling I2C module was not successful
 * @return  1 = success, enabling I2C module was successful
 * 
 * @details
 *  This function enables the peripheral of desired I2C instance.
 * 
 *********************************************************************************/
static inline int p33c_i2cInstance_Enable(uint16_t i2cInstance) 
{
    int retval = 1;
    volatile P33C_I2C_INSTANCE_t* i2c;   
    
    // Check if addressed instance is within valid range
    if (p33c_i2cInstance_Exists(i2cInstance))
    {
        // Set pointer to memory address of desired I2C instance
        i2c = p33c_i2cInstance_GetHandle(i2cInstance);
        i2c->I2CxCONL.bits.I2CEN = 1; // I2C module is enabled
        
         // Verifying configuration process
         retval &= (bool)(i2c->I2CxCONL.bits.I2CEN == 1);
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range

    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-i2c-methods
 * @brief   Disables a given I2C peripheral instance
 * @param   i2cInstance Instance of the I2C module of type unsigned integer (e.g. 1=I2C1, 2=I2C2, etc.)
 * @return  0 = failure, disabling I2C module was not successful
 * @return  1 = success, disabling I2C module was successful
 * 
 * @details
 *  This function disables the peripheral of desired I2C instance. 
 * 
 *********************************************************************************/
static inline int p33c_i2cInstance_Disable(uint16_t i2cInstance)
{
    int retval = 1;
    volatile P33C_I2C_INSTANCE_t* i2c;    
    
    // Check if addressed instance is within valid range
    if (p33c_i2cInstance_Exists(i2cInstance))
    {
        // Set pointer to memory address of desired I2C instance
        i2c = p33c_i2cInstance_GetHandle(i2cInstance);
        i2c->I2CxCONL.bits.I2CEN = 0;  // I2C module is disabled
        
         // Verifying configuration process
         retval &= (bool)(i2c->I2CxCONL.bits.I2CEN == 0);
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range


    return(retval);
}

/*********************************************************************************
 * @ingroup p33c-pral-i2c-methods
 * @brief   Read the current configuration from the I2C module registers
 * @param   i2cInstance Instance of the I2C module of type unsigned integer (e.g. 1=I2C1, 2=I2C2, etc.)
 * @return  Generic I2C port Special Function Register set of type struct P33C_I2C_INSTANCE_t
 * 
 * @details
 *  This function copies the contents of all I2C ports registers of the 
 *  specified generator instance (e.g. I2C2) to a user variable of type 
 *  P33C_I2C_INSTANCE_t. This 'virtual' I2C configuration can then, for  
 *  example, be analyzed and/or modified in user code and applied to another 
 *  I2C port using function p33c_i2cInstance_SetConfig(...). 
 * 
 *********************************************************************************/
static inline P33C_I2C_INSTANCE_t p33c_i2cInstance_GetConfig(uint16_t i2cInstance)
{
    volatile P33C_I2C_INSTANCE_t* i2c;    

    // Check if addressed instance is within valid range
	if (p33c_i2cInstance_Exists(i2cInstance))
	{
        // Set pointer to memory address of desired I2C instance
        i2c = p33c_i2cInstance_GetHandle(i2cInstance);

        return(*i2c);
    }
    else { return(i2cConfigClear); } // Return clear config when addressed instance is out-of-range
}

/*********************************************************************************
 * @ingroup p33c-pral-i2c-methods
 * @brief   Writes a user-defined configuration to the I2C module registers
 * @param   i2cInstance Instance of the I2C port of type unsigned integer (e.g. 1=I2C1, 2=I2C2, etc.)
 * @param   i2cConfig   Generic I2C port Special Function Register set of type P33C_I2C_INSTANCE_t
 * @return  0 = failure, writing to I2C module registers was not successful
 * @return  1 = success, writing to I2C module registers was successful
 * 
 * @details
 *  This function writes a user-defined I2C port configuration of type 
 *  P33C_I2C_INSTANCE_t to the given I2C port peripheral instance (e.g. I2C2). 
 * 
 *********************************************************************************/
static inline int p33c_i2cInstance_SetConfig(uint16_t i2cInstance, P33C_I2C_INSTANCE_t i2cConfig)
{
    int retval = 1;
    volatile P33C_I2C_INSTANCE_t* i2c;    
    
    // Check if addressed instance is within valid range
	if (p33c_i2cInstance_Exists(i2cInstance))
	{
        // Set pointer to memory address of desired I2C instance
        i2c = p33c_i2cInstance_GetHandle(i2cInstance);
        *i2c = i2cConfig;
        
        // Verifying configuration process
        retval &= (bool)(i2c->I2CxCONL.value == i2cConfig.I2CxCONL.value);
    }
    else { retval = 0; } // Return error code when addressed instance is out-of-range
    
    return(retval);
}

#endif /* End of P33C_I2C_SFR_INTERFACE_H */

// __________________________
// end of file
