/**
  System Interrupts Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for MPLAB(c) Code Configurator interrupts.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15.1
        Device            :  PIC32MM0064GPL036
    The generated drivers are tested against the following:
        Compiler          :  XC32 1.42
        MPLAB             :  MPLAB X 3.45

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>
/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RB10, high using LATBbits.LATB10.

  @Description
    Sets the GPIO pin, RB10, high using LATBbits.LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB10 high (1)
    LED_D3_SetHigh();
    </code>

*/
#define LED_D3_SetHigh()          ( LATBSET = (1 << 10) )
/**
  @Summary
    Sets the GPIO pin, RB10, low using LATBbits.LATB10.

  @Description
    Sets the GPIO pin, RB10, low using LATBbits.LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB10 low (0)
    LED_D3_SetLow();
    </code>

*/
#define LED_D3_SetLow()           ( LATBCLR = (1 << 10) )
/**
  @Summary
    Toggles the GPIO pin, RB10, using LATBbits.LATB10.

  @Description
    Toggles the GPIO pin, RB10, using LATBbits.LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB10
    LED_D3_Toggle();
    </code>

*/
#define LED_D3_Toggle()           ( LATBINV = (1 << 10) )
/**
  @Summary
    Reads the value of the GPIO pin, RB10.

  @Description
    Reads the value of the GPIO pin, RB10.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB10
    postValue = LED_D3_GetValue();
    </code>

*/
#define LED_D3_GetValue()         PORTBbits.RB10
/**
  @Summary
    Configures the GPIO pin, RB10, as an input.

  @Description
    Configures the GPIO pin, RB10, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB10 as an input
    LED_D3_SetDigitalInput();
    </code>

*/
#define LED_D3_SetDigitalInput()   ( TRISBSET = (1 << 10) )
/**
  @Summary
    Configures the GPIO pin, RB10, as an output.

  @Description
    Configures the GPIO pin, RB10, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB10 as an output
    LED_D3_SetDigitalOutput();
    </code>

*/
#define LED_D3_SetDigitalOutput()   ( TRISBCLR = (1 << 10) )
/**
  @Summary
    Sets the GPIO pin, RB11, high using LATBbits.LATB11.

  @Description
    Sets the GPIO pin, RB11, high using LATBbits.LATB11.

  @Preconditions
    The RB11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB11 high (1)
    LED_D4_SetHigh();
    </code>

*/
#define LED_D4_SetHigh()          ( LATBSET = (1 << 11) )
/**
  @Summary
    Sets the GPIO pin, RB11, low using LATBbits.LATB11.

  @Description
    Sets the GPIO pin, RB11, low using LATBbits.LATB11.

  @Preconditions
    The RB11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB11 low (0)
    LED_D4_SetLow();
    </code>

*/
#define LED_D4_SetLow()           ( LATBCLR = (1 << 11) )
/**
  @Summary
    Toggles the GPIO pin, RB11, using LATBbits.LATB11.

  @Description
    Toggles the GPIO pin, RB11, using LATBbits.LATB11.

  @Preconditions
    The RB11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB11
    LED_D4_Toggle();
    </code>

*/
#define LED_D4_Toggle()           ( LATBINV = (1 << 11) )
/**
  @Summary
    Reads the value of the GPIO pin, RB11.

  @Description
    Reads the value of the GPIO pin, RB11.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB11
    postValue = LED_D4_GetValue();
    </code>

*/
#define LED_D4_GetValue()         PORTBbits.RB11
/**
  @Summary
    Configures the GPIO pin, RB11, as an input.

  @Description
    Configures the GPIO pin, RB11, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB11 as an input
    LED_D4_SetDigitalInput();
    </code>

*/
#define LED_D4_SetDigitalInput()   ( TRISBSET = (1 << 11) )
/**
  @Summary
    Configures the GPIO pin, RB11, as an output.

  @Description
    Configures the GPIO pin, RB11, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB11 as an output
    LED_D4_SetDigitalOutput();
    </code>

*/
#define LED_D4_SetDigitalOutput()   ( TRISBCLR = (1 << 11) )
/**
  @Summary
    Sets the GPIO pin, RB12, high using LATBbits.LATB12.

  @Description
    Sets the GPIO pin, RB12, high using LATBbits.LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB12 high (1)
    LED_D9_SetHigh();
    </code>

*/
#define LED_D9_SetHigh()          ( LATBSET = (1 << 12) )
/**
  @Summary
    Sets the GPIO pin, RB12, low using LATBbits.LATB12.

  @Description
    Sets the GPIO pin, RB12, low using LATBbits.LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB12 low (0)
    LED_D9_SetLow();
    </code>

*/
#define LED_D9_SetLow()           ( LATBCLR = (1 << 12) )
/**
  @Summary
    Toggles the GPIO pin, RB12, using LATBbits.LATB12.

  @Description
    Toggles the GPIO pin, RB12, using LATBbits.LATB12.

  @Preconditions
    The RB12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB12
    LED_D9_Toggle();
    </code>

*/
#define LED_D9_Toggle()           ( LATBINV = (1 << 12) )
/**
  @Summary
    Reads the value of the GPIO pin, RB12.

  @Description
    Reads the value of the GPIO pin, RB12.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB12
    postValue = LED_D9_GetValue();
    </code>

*/
#define LED_D9_GetValue()         PORTBbits.RB12
/**
  @Summary
    Configures the GPIO pin, RB12, as an input.

  @Description
    Configures the GPIO pin, RB12, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB12 as an input
    LED_D9_SetDigitalInput();
    </code>

*/
#define LED_D9_SetDigitalInput()   ( TRISBSET = (1 << 12) )
/**
  @Summary
    Configures the GPIO pin, RB12, as an output.

  @Description
    Configures the GPIO pin, RB12, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB12 as an output
    LED_D9_SetDigitalOutput();
    </code>

*/
#define LED_D9_SetDigitalOutput()   ( TRISBCLR = (1 << 12) )
/**
  @Summary
    Sets the GPIO pin, RB13, high using LATBbits.LATB13.

  @Description
    Sets the GPIO pin, RB13, high using LATBbits.LATB13.

  @Preconditions
    The RB13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB13 high (1)
    LED_D10_SetHigh();
    </code>

*/
#define LED_D10_SetHigh()          ( LATBSET = (1 << 13) )
/**
  @Summary
    Sets the GPIO pin, RB13, low using LATBbits.LATB13.

  @Description
    Sets the GPIO pin, RB13, low using LATBbits.LATB13.

  @Preconditions
    The RB13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB13 low (0)
    LED_D10_SetLow();
    </code>

*/
#define LED_D10_SetLow()           ( LATBCLR = (1 << 13) )
/**
  @Summary
    Toggles the GPIO pin, RB13, using LATBbits.LATB13.

  @Description
    Toggles the GPIO pin, RB13, using LATBbits.LATB13.

  @Preconditions
    The RB13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB13
    LED_D10_Toggle();
    </code>

*/
#define LED_D10_Toggle()           ( LATBINV = (1 << 13) )
/**
  @Summary
    Reads the value of the GPIO pin, RB13.

  @Description
    Reads the value of the GPIO pin, RB13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB13
    postValue = LED_D10_GetValue();
    </code>

*/
#define LED_D10_GetValue()         PORTBbits.RB13
/**
  @Summary
    Configures the GPIO pin, RB13, as an input.

  @Description
    Configures the GPIO pin, RB13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB13 as an input
    LED_D10_SetDigitalInput();
    </code>

*/
#define LED_D10_SetDigitalInput()   ( TRISBSET = (1 << 13) )
/**
  @Summary
    Configures the GPIO pin, RB13, as an output.

  @Description
    Configures the GPIO pin, RB13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB13 as an output
    LED_D10_SetDigitalOutput();
    </code>

*/
#define LED_D10_SetDigitalOutput()   ( TRISBCLR = (1 << 13) )
/**
  @Summary
    Sets the GPIO pin, RB14, high using LATBbits.LATB14.

  @Description
    Sets the GPIO pin, RB14, high using LATBbits.LATB14.

  @Preconditions
    The RB14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB14 high (1)
    BUTTON_S4_SetHigh();
    </code>

*/
#define BUTTON_S4_SetHigh()          ( LATBSET = (1 << 14) )
/**
  @Summary
    Sets the GPIO pin, RB14, low using LATBbits.LATB14.

  @Description
    Sets the GPIO pin, RB14, low using LATBbits.LATB14.

  @Preconditions
    The RB14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB14 low (0)
    BUTTON_S4_SetLow();
    </code>

*/
#define BUTTON_S4_SetLow()           ( LATBCLR = (1 << 14) )
/**
  @Summary
    Toggles the GPIO pin, RB14, using LATBbits.LATB14.

  @Description
    Toggles the GPIO pin, RB14, using LATBbits.LATB14.

  @Preconditions
    The RB14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB14
    BUTTON_S4_Toggle();
    </code>

*/
#define BUTTON_S4_Toggle()           ( LATBINV = (1 << 14) )
/**
  @Summary
    Reads the value of the GPIO pin, RB14.

  @Description
    Reads the value of the GPIO pin, RB14.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB14
    postValue = BUTTON_S4_GetValue();
    </code>

*/
#define BUTTON_S4_GetValue()         PORTBbits.RB14
/**
  @Summary
    Configures the GPIO pin, RB14, as an input.

  @Description
    Configures the GPIO pin, RB14, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB14 as an input
    BUTTON_S4_SetDigitalInput();
    </code>

*/
#define BUTTON_S4_SetDigitalInput()   ( TRISBSET = (1 << 14) )
/**
  @Summary
    Configures the GPIO pin, RB14, as an output.

  @Description
    Configures the GPIO pin, RB14, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB14 as an output
    BUTTON_S4_SetDigitalOutput();
    </code>

*/
#define BUTTON_S4_SetDigitalOutput()   ( TRISBCLR = (1 << 14) )
/**
  @Summary
    Sets the GPIO pin, RB3, high using LATBbits.LATB3.

  @Description
    Sets the GPIO pin, RB3, high using LATBbits.LATB3.

  @Preconditions
    The RB3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB3 high (1)
    IO_RB3_SetHigh();
    </code>

*/
#define IO_RB3_SetHigh()          ( LATBSET = (1 << 3) )
/**
  @Summary
    Sets the GPIO pin, RB3, low using LATBbits.LATB3.

  @Description
    Sets the GPIO pin, RB3, low using LATBbits.LATB3.

  @Preconditions
    The RB3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB3 low (0)
    IO_RB3_SetLow();
    </code>

*/
#define IO_RB3_SetLow()           ( LATBCLR = (1 << 3) )
/**
  @Summary
    Toggles the GPIO pin, RB3, using LATBbits.LATB3.

  @Description
    Toggles the GPIO pin, RB3, using LATBbits.LATB3.

  @Preconditions
    The RB3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB3
    IO_RB3_Toggle();
    </code>

*/
#define IO_RB3_Toggle()           ( LATBINV = (1 << 3) )
/**
  @Summary
    Reads the value of the GPIO pin, RB3.

  @Description
    Reads the value of the GPIO pin, RB3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB3
    postValue = IO_RB3_GetValue();
    </code>

*/
#define IO_RB3_GetValue()         PORTBbits.RB3
/**
  @Summary
    Configures the GPIO pin, RB3, as an input.

  @Description
    Configures the GPIO pin, RB3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB3 as an input
    IO_RB3_SetDigitalInput();
    </code>

*/
#define IO_RB3_SetDigitalInput()   ( TRISBSET = (1 << 3) )
/**
  @Summary
    Configures the GPIO pin, RB3, as an output.

  @Description
    Configures the GPIO pin, RB3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB3 as an output
    IO_RB3_SetDigitalOutput();
    </code>

*/
#define IO_RB3_SetDigitalOutput()   ( TRISBCLR = (1 << 3) )
/**
  @Summary
    Sets the GPIO pin, RB5, high using LATBbits.LATB5.

  @Description
    Sets the GPIO pin, RB5, high using LATBbits.LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB5 high (1)
    IO_RB5_SetHigh();
    </code>

*/
#define IO_RB5_SetHigh()          ( LATBSET = (1 << 5) )
/**
  @Summary
    Sets the GPIO pin, RB5, low using LATBbits.LATB5.

  @Description
    Sets the GPIO pin, RB5, low using LATBbits.LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB5 low (0)
    IO_RB5_SetLow();
    </code>

*/
#define IO_RB5_SetLow()           ( LATBCLR = (1 << 5) )
/**
  @Summary
    Toggles the GPIO pin, RB5, using LATBbits.LATB5.

  @Description
    Toggles the GPIO pin, RB5, using LATBbits.LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB5
    IO_RB5_Toggle();
    </code>

*/
#define IO_RB5_Toggle()           ( LATBINV = (1 << 5) )
/**
  @Summary
    Reads the value of the GPIO pin, RB5.

  @Description
    Reads the value of the GPIO pin, RB5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB5
    postValue = IO_RB5_GetValue();
    </code>

*/
#define IO_RB5_GetValue()         PORTBbits.RB5
/**
  @Summary
    Configures the GPIO pin, RB5, as an input.

  @Description
    Configures the GPIO pin, RB5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB5 as an input
    IO_RB5_SetDigitalInput();
    </code>

*/
#define IO_RB5_SetDigitalInput()   ( TRISBSET = (1 << 5) )
/**
  @Summary
    Configures the GPIO pin, RB5, as an output.

  @Description
    Configures the GPIO pin, RB5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB5 as an output
    IO_RB5_SetDigitalOutput();
    </code>

*/
#define IO_RB5_SetDigitalOutput()   ( TRISBCLR = (1 << 5) )
/**
  @Summary
    Sets the GPIO pin, RB6, high using LATBbits.LATB6.

  @Description
    Sets the GPIO pin, RB6, high using LATBbits.LATB6.

  @Preconditions
    The RB6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB6 high (1)
    IO_RB6_SetHigh();
    </code>

*/
#define IO_RB6_SetHigh()          ( LATBSET = (1 << 6) )
/**
  @Summary
    Sets the GPIO pin, RB6, low using LATBbits.LATB6.

  @Description
    Sets the GPIO pin, RB6, low using LATBbits.LATB6.

  @Preconditions
    The RB6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB6 low (0)
    IO_RB6_SetLow();
    </code>

*/
#define IO_RB6_SetLow()           ( LATBCLR = (1 << 6) )
/**
  @Summary
    Toggles the GPIO pin, RB6, using LATBbits.LATB6.

  @Description
    Toggles the GPIO pin, RB6, using LATBbits.LATB6.

  @Preconditions
    The RB6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB6
    IO_RB6_Toggle();
    </code>

*/
#define IO_RB6_Toggle()           ( LATBINV = (1 << 6) )
/**
  @Summary
    Reads the value of the GPIO pin, RB6.

  @Description
    Reads the value of the GPIO pin, RB6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB6
    postValue = IO_RB6_GetValue();
    </code>

*/
#define IO_RB6_GetValue()         PORTBbits.RB6
/**
  @Summary
    Configures the GPIO pin, RB6, as an input.

  @Description
    Configures the GPIO pin, RB6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB6 as an input
    IO_RB6_SetDigitalInput();
    </code>

*/
#define IO_RB6_SetDigitalInput()   ( TRISBSET = (1 << 6) )
/**
  @Summary
    Configures the GPIO pin, RB6, as an output.

  @Description
    Configures the GPIO pin, RB6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB6 as an output
    IO_RB6_SetDigitalOutput();
    </code>

*/
#define IO_RB6_SetDigitalOutput()   ( TRISBCLR = (1 << 6) )
/**
  @Summary
    Sets the GPIO pin, RC0, high using LATCbits.LATC0.

  @Description
    Sets the GPIO pin, RC0, high using LATCbits.LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC0 high (1)
    ADC_CHANNEL_POTENTIOMETER_SetHigh();
    </code>

*/
#define ADC_CHANNEL_POTENTIOMETER_SetHigh()          ( LATCSET = (1 << 0) )
/**
  @Summary
    Sets the GPIO pin, RC0, low using LATCbits.LATC0.

  @Description
    Sets the GPIO pin, RC0, low using LATCbits.LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC0 low (0)
    ADC_CHANNEL_POTENTIOMETER_SetLow();
    </code>

*/
#define ADC_CHANNEL_POTENTIOMETER_SetLow()           ( LATCCLR = (1 << 0) )
/**
  @Summary
    Toggles the GPIO pin, RC0, using LATCbits.LATC0.

  @Description
    Toggles the GPIO pin, RC0, using LATCbits.LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC0
    ADC_CHANNEL_POTENTIOMETER_Toggle();
    </code>

*/
#define ADC_CHANNEL_POTENTIOMETER_Toggle()           ( LATCINV = (1 << 0) )
/**
  @Summary
    Reads the value of the GPIO pin, RC0.

  @Description
    Reads the value of the GPIO pin, RC0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC0
    postValue = ADC_CHANNEL_POTENTIOMETER_GetValue();
    </code>

*/
#define ADC_CHANNEL_POTENTIOMETER_GetValue()         PORTCbits.RC0
/**
  @Summary
    Configures the GPIO pin, RC0, as an input.

  @Description
    Configures the GPIO pin, RC0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC0 as an input
    ADC_CHANNEL_POTENTIOMETER_SetDigitalInput();
    </code>

*/
#define ADC_CHANNEL_POTENTIOMETER_SetDigitalInput()   ( TRISCSET = (1 << 0) )
/**
  @Summary
    Configures the GPIO pin, RC0, as an output.

  @Description
    Configures the GPIO pin, RC0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC0 as an output
    ADC_CHANNEL_POTENTIOMETER_SetDigitalOutput();
    </code>

*/
#define ADC_CHANNEL_POTENTIOMETER_SetDigitalOutput()   ( TRISCCLR = (1 << 0) )
/**
  @Summary
    Sets the GPIO pin, RC1, high using LATCbits.LATC1.

  @Description
    Sets the GPIO pin, RC1, high using LATCbits.LATC1.

  @Preconditions
    The RC1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC1 high (1)
    ADC_CHANNEL_TEMPERATURE_SENSOR_SetHigh();
    </code>

*/
#define ADC_CHANNEL_TEMPERATURE_SENSOR_SetHigh()          ( LATCSET = (1 << 1) )
/**
  @Summary
    Sets the GPIO pin, RC1, low using LATCbits.LATC1.

  @Description
    Sets the GPIO pin, RC1, low using LATCbits.LATC1.

  @Preconditions
    The RC1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC1 low (0)
    ADC_CHANNEL_TEMPERATURE_SENSOR_SetLow();
    </code>

*/
#define ADC_CHANNEL_TEMPERATURE_SENSOR_SetLow()           ( LATCCLR = (1 << 1) )
/**
  @Summary
    Toggles the GPIO pin, RC1, using LATCbits.LATC1.

  @Description
    Toggles the GPIO pin, RC1, using LATCbits.LATC1.

  @Preconditions
    The RC1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC1
    ADC_CHANNEL_TEMPERATURE_SENSOR_Toggle();
    </code>

*/
#define ADC_CHANNEL_TEMPERATURE_SENSOR_Toggle()           ( LATCINV = (1 << 1) )
/**
  @Summary
    Reads the value of the GPIO pin, RC1.

  @Description
    Reads the value of the GPIO pin, RC1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC1
    postValue = ADC_CHANNEL_TEMPERATURE_SENSOR_GetValue();
    </code>

*/
#define ADC_CHANNEL_TEMPERATURE_SENSOR_GetValue()         PORTCbits.RC1
/**
  @Summary
    Configures the GPIO pin, RC1, as an input.

  @Description
    Configures the GPIO pin, RC1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC1 as an input
    ADC_CHANNEL_TEMPERATURE_SENSOR_SetDigitalInput();
    </code>

*/
#define ADC_CHANNEL_TEMPERATURE_SENSOR_SetDigitalInput()   ( TRISCSET = (1 << 1) )
/**
  @Summary
    Configures the GPIO pin, RC1, as an output.

  @Description
    Configures the GPIO pin, RC1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC1 as an output
    ADC_CHANNEL_TEMPERATURE_SENSOR_SetDigitalOutput();
    </code>

*/
#define ADC_CHANNEL_TEMPERATURE_SENSOR_SetDigitalOutput()   ( TRISCCLR = (1 << 1) )
/**
  @Summary
    Sets the GPIO pin, RC8, high using LATCbits.LATC8.

  @Description
    Sets the GPIO pin, RC8, high using LATCbits.LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC8 high (1)
    BUTTON_S6_SetHigh();
    </code>

*/
#define BUTTON_S6_SetHigh()          ( LATCSET = (1 << 8) )
/**
  @Summary
    Sets the GPIO pin, RC8, low using LATCbits.LATC8.

  @Description
    Sets the GPIO pin, RC8, low using LATCbits.LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC8 low (0)
    BUTTON_S6_SetLow();
    </code>

*/
#define BUTTON_S6_SetLow()           ( LATCCLR = (1 << 8) )
/**
  @Summary
    Toggles the GPIO pin, RC8, using LATCbits.LATC8.

  @Description
    Toggles the GPIO pin, RC8, using LATCbits.LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC8
    BUTTON_S6_Toggle();
    </code>

*/
#define BUTTON_S6_Toggle()           ( LATCINV = (1 << 8) )
/**
  @Summary
    Reads the value of the GPIO pin, RC8.

  @Description
    Reads the value of the GPIO pin, RC8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC8
    postValue = BUTTON_S6_GetValue();
    </code>

*/
#define BUTTON_S6_GetValue()         PORTCbits.RC8
/**
  @Summary
    Configures the GPIO pin, RC8, as an input.

  @Description
    Configures the GPIO pin, RC8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC8 as an input
    BUTTON_S6_SetDigitalInput();
    </code>

*/
#define BUTTON_S6_SetDigitalInput()   ( TRISCSET = (1 << 8) )
/**
  @Summary
    Configures the GPIO pin, RC8, as an output.

  @Description
    Configures the GPIO pin, RC8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC8 as an output
    BUTTON_S6_SetDigitalOutput();
    </code>

*/
#define BUTTON_S6_SetDigitalOutput()   ( TRISCCLR = (1 << 8) )
/**
  @Summary
    Sets the GPIO pin, RC9, high using LATCbits.LATC9.

  @Description
    Sets the GPIO pin, RC9, high using LATCbits.LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC9 high (1)
    BUTTON_S3_SetHigh();
    </code>

*/
#define BUTTON_S3_SetHigh()          ( LATCSET = (1 << 9) )
/**
  @Summary
    Sets the GPIO pin, RC9, low using LATCbits.LATC9.

  @Description
    Sets the GPIO pin, RC9, low using LATCbits.LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC9 low (0)
    BUTTON_S3_SetLow();
    </code>

*/
#define BUTTON_S3_SetLow()           ( LATCCLR = (1 << 9) )
/**
  @Summary
    Toggles the GPIO pin, RC9, using LATCbits.LATC9.

  @Description
    Toggles the GPIO pin, RC9, using LATCbits.LATC9.

  @Preconditions
    The RC9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC9
    BUTTON_S3_Toggle();
    </code>

*/
#define BUTTON_S3_Toggle()           ( LATCINV = (1 << 9) )
/**
  @Summary
    Reads the value of the GPIO pin, RC9.

  @Description
    Reads the value of the GPIO pin, RC9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC9
    postValue = BUTTON_S3_GetValue();
    </code>

*/
#define BUTTON_S3_GetValue()         PORTCbits.RC9
/**
  @Summary
    Configures the GPIO pin, RC9, as an input.

  @Description
    Configures the GPIO pin, RC9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC9 as an input
    BUTTON_S3_SetDigitalInput();
    </code>

*/
#define BUTTON_S3_SetDigitalInput()   ( TRISCSET = (1 << 9) )
/**
  @Summary
    Configures the GPIO pin, RC9, as an output.

  @Description
    Configures the GPIO pin, RC9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC9 as an output
    BUTTON_S3_SetDigitalOutput();
    </code>

*/
#define BUTTON_S3_SetDigitalOutput()   ( TRISCCLR = (1 << 9) )

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC32MM0064GPL036
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize(void);

#endif
