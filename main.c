/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - pic24-dspic-pic32mm : v1.26
        Device            :  PIC32MM0064GPL036
    The generated drivers are tested against the following:
        Compiler          :  XC32 1.42
        MPLAB             :  MPLAB X 3.45
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"
#include "leds.h"
#include "buttons.h"
#include "timer_1ms.h"
#include "lcd.h"
#include "adc.h"
#include <stdio.h>

#define DELAY1MS     890
/*
                         Main application
 */

static void Delay ( unsigned int );
void Delay1Segundo(void);



void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalDisable();
    
    LCD_Initialize();
    ADC_SetConfiguration(ADC_CONFIGURATION_AUTO_SAMPLE_CONVERT);
    uint16_t adc_result = 0;
    
    
    
    
    
    LCD_PutString("hola mundo", 16);
    Delay1Segundo();
    LCD_ClearScreen();
    LCD_PutString("hola mundo ...1", 16);
    Delay1Segundo();
    LCD_ClearScreen();
    LCD_PutString("hola mundo ...2", 16);
    Delay1Segundo();
    LCD_ClearScreen();
    LCD_PutString("hola mundo ...3", 16);
    Delay1Segundo();
    LCD_ClearScreen();

        LED_Off(LED_D3);
        LED_Off(LED_D4);
        LED_Off(LED_D9);
        LED_Off(LED_D10);
            
        
    while (1)
    {



//        adc_result = ADC_Read10bit(ADC_CHANNEL_POTENTIOMETER);
        
        
        LED_On (LED_D3);
        LED_On (LED_D4);
        LED_On (LED_D9);
        LED_On (LED_D10);

        Delay1Segundo();
        
       
        
        LED_Off(LED_D3);
        LED_Off(LED_D4);
        LED_Off(LED_D9);
        LED_Off(LED_D10);
        
        Delay1Segundo();

        if (BUTTON_IsPressed(BUTTON_S3)){
        
                LED_On (LED_D3);


        }
 
        LCD_PutString("Prueba ...", 16);
        Delay1Segundo();
        LCD_ClearScreen();
        printf("\n\r ADC: %4u", adc_result);
        
        Delay1Segundo();
        
        
        
        
        
    }
}

static void Delay ( unsigned int retardo )
{

    while (retardo)
        {
            retardo-- ;
        }


}
void Delay1Segundo(void){
    int i;
    for (i = 0; i < 1000; i++){
        Delay(DELAY1MS);
    
    }
    
//    return();


}


/**
 End of File
*/