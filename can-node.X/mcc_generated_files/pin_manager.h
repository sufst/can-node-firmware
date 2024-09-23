/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47Q84
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set therm3 aliases
#define therm3_TRIS                 TRISAbits.TRISA0
#define therm3_LAT                  LATAbits.LATA0
#define therm3_PORT                 PORTAbits.RA0
#define therm3_WPU                  WPUAbits.WPUA0
#define therm3_OD                   ODCONAbits.ODCA0
#define therm3_ANS                  ANSELAbits.ANSELA0
#define therm3_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define therm3_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define therm3_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define therm3_GetValue()           PORTAbits.RA0
#define therm3_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define therm3_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define therm3_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define therm3_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define therm3_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define therm3_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define therm3_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define therm3_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set therm4 aliases
#define therm4_TRIS                 TRISAbits.TRISA1
#define therm4_LAT                  LATAbits.LATA1
#define therm4_PORT                 PORTAbits.RA1
#define therm4_WPU                  WPUAbits.WPUA1
#define therm4_OD                   ODCONAbits.ODCA1
#define therm4_ANS                  ANSELAbits.ANSELA1
#define therm4_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define therm4_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define therm4_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define therm4_GetValue()           PORTAbits.RA1
#define therm4_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define therm4_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define therm4_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define therm4_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define therm4_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define therm4_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define therm4_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define therm4_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set therm7 aliases
#define therm7_TRIS                 TRISAbits.TRISA2
#define therm7_LAT                  LATAbits.LATA2
#define therm7_PORT                 PORTAbits.RA2
#define therm7_WPU                  WPUAbits.WPUA2
#define therm7_OD                   ODCONAbits.ODCA2
#define therm7_ANS                  ANSELAbits.ANSELA2
#define therm7_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define therm7_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define therm7_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define therm7_GetValue()           PORTAbits.RA2
#define therm7_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define therm7_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define therm7_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define therm7_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define therm7_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define therm7_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define therm7_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define therm7_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set therm8 aliases
#define therm8_TRIS                 TRISAbits.TRISA3
#define therm8_LAT                  LATAbits.LATA3
#define therm8_PORT                 PORTAbits.RA3
#define therm8_WPU                  WPUAbits.WPUA3
#define therm8_OD                   ODCONAbits.ODCA3
#define therm8_ANS                  ANSELAbits.ANSELA3
#define therm8_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define therm8_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define therm8_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define therm8_GetValue()           PORTAbits.RA3
#define therm8_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define therm8_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define therm8_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define therm8_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define therm8_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define therm8_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define therm8_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define therm8_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set therm11 aliases
#define therm11_TRIS                 TRISAbits.TRISA4
#define therm11_LAT                  LATAbits.LATA4
#define therm11_PORT                 PORTAbits.RA4
#define therm11_WPU                  WPUAbits.WPUA4
#define therm11_OD                   ODCONAbits.ODCA4
#define therm11_ANS                  ANSELAbits.ANSELA4
#define therm11_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define therm11_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define therm11_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define therm11_GetValue()           PORTAbits.RA4
#define therm11_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define therm11_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define therm11_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define therm11_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define therm11_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define therm11_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define therm11_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define therm11_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set therm12 aliases
#define therm12_TRIS                 TRISAbits.TRISA5
#define therm12_LAT                  LATAbits.LATA5
#define therm12_PORT                 PORTAbits.RA5
#define therm12_WPU                  WPUAbits.WPUA5
#define therm12_OD                   ODCONAbits.ODCA5
#define therm12_ANS                  ANSELAbits.ANSELA5
#define therm12_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define therm12_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define therm12_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define therm12_GetValue()           PORTAbits.RA5
#define therm12_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define therm12_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define therm12_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define therm12_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define therm12_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define therm12_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define therm12_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define therm12_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set therm19 aliases
#define therm19_TRIS                 TRISBbits.TRISB0
#define therm19_LAT                  LATBbits.LATB0
#define therm19_PORT                 PORTBbits.RB0
#define therm19_WPU                  WPUBbits.WPUB0
#define therm19_OD                   ODCONBbits.ODCB0
#define therm19_ANS                  ANSELBbits.ANSELB0
#define therm19_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define therm19_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define therm19_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define therm19_GetValue()           PORTBbits.RB0
#define therm19_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define therm19_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define therm19_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define therm19_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define therm19_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define therm19_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define therm19_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define therm19_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set therm20 aliases
#define therm20_TRIS                 TRISBbits.TRISB1
#define therm20_LAT                  LATBbits.LATB1
#define therm20_PORT                 PORTBbits.RB1
#define therm20_WPU                  WPUBbits.WPUB1
#define therm20_OD                   ODCONBbits.ODCB1
#define therm20_ANS                  ANSELBbits.ANSELB1
#define therm20_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define therm20_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define therm20_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define therm20_GetValue()           PORTBbits.RB1
#define therm20_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define therm20_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define therm20_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define therm20_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define therm20_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define therm20_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define therm20_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define therm20_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set therm23 aliases
#define therm23_TRIS                 TRISBbits.TRISB2
#define therm23_LAT                  LATBbits.LATB2
#define therm23_PORT                 PORTBbits.RB2
#define therm23_WPU                  WPUBbits.WPUB2
#define therm23_OD                   ODCONBbits.ODCB2
#define therm23_ANS                  ANSELBbits.ANSELB2
#define therm23_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define therm23_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define therm23_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define therm23_GetValue()           PORTBbits.RB2
#define therm23_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define therm23_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define therm23_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define therm23_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define therm23_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define therm23_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define therm23_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define therm23_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set therm24 aliases
#define therm24_TRIS                 TRISBbits.TRISB3
#define therm24_LAT                  LATBbits.LATB3
#define therm24_PORT                 PORTBbits.RB3
#define therm24_WPU                  WPUBbits.WPUB3
#define therm24_OD                   ODCONBbits.ODCB3
#define therm24_ANS                  ANSELBbits.ANSELB3
#define therm24_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define therm24_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define therm24_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define therm24_GetValue()           PORTBbits.RB3
#define therm24_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define therm24_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define therm24_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define therm24_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define therm24_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define therm24_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define therm24_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define therm24_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set therm21 aliases
#define therm21_TRIS                 TRISBbits.TRISB4
#define therm21_LAT                  LATBbits.LATB4
#define therm21_PORT                 PORTBbits.RB4
#define therm21_WPU                  WPUBbits.WPUB4
#define therm21_OD                   ODCONBbits.ODCB4
#define therm21_ANS                  ANSELBbits.ANSELB4
#define therm21_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define therm21_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define therm21_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define therm21_GetValue()           PORTBbits.RB4
#define therm21_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define therm21_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define therm21_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define therm21_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define therm21_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define therm21_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define therm21_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define therm21_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set therm22 aliases
#define therm22_TRIS                 TRISBbits.TRISB5
#define therm22_LAT                  LATBbits.LATB5
#define therm22_PORT                 PORTBbits.RB5
#define therm22_WPU                  WPUBbits.WPUB5
#define therm22_OD                   ODCONBbits.ODCB5
#define therm22_ANS                  ANSELBbits.ANSELB5
#define therm22_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define therm22_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define therm22_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define therm22_GetValue()           PORTBbits.RB5
#define therm22_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define therm22_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define therm22_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define therm22_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define therm22_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define therm22_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define therm22_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define therm22_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set therm13 aliases
#define therm13_TRIS                 TRISCbits.TRISC0
#define therm13_LAT                  LATCbits.LATC0
#define therm13_PORT                 PORTCbits.RC0
#define therm13_WPU                  WPUCbits.WPUC0
#define therm13_OD                   ODCONCbits.ODCC0
#define therm13_ANS                  ANSELCbits.ANSELC0
#define therm13_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define therm13_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define therm13_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define therm13_GetValue()           PORTCbits.RC0
#define therm13_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define therm13_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define therm13_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define therm13_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define therm13_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define therm13_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define therm13_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define therm13_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set therm14 aliases
#define therm14_TRIS                 TRISCbits.TRISC1
#define therm14_LAT                  LATCbits.LATC1
#define therm14_PORT                 PORTCbits.RC1
#define therm14_WPU                  WPUCbits.WPUC1
#define therm14_OD                   ODCONCbits.ODCC1
#define therm14_ANS                  ANSELCbits.ANSELC1
#define therm14_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define therm14_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define therm14_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define therm14_GetValue()           PORTCbits.RC1
#define therm14_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define therm14_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define therm14_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define therm14_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define therm14_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define therm14_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define therm14_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define therm14_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set therm9 aliases
#define therm9_TRIS                 TRISCbits.TRISC2
#define therm9_LAT                  LATCbits.LATC2
#define therm9_PORT                 PORTCbits.RC2
#define therm9_WPU                  WPUCbits.WPUC2
#define therm9_OD                   ODCONCbits.ODCC2
#define therm9_ANS                  ANSELCbits.ANSELC2
#define therm9_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define therm9_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define therm9_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define therm9_GetValue()           PORTCbits.RC2
#define therm9_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define therm9_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define therm9_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define therm9_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define therm9_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define therm9_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define therm9_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define therm9_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set therm10 aliases
#define therm10_TRIS                 TRISCbits.TRISC3
#define therm10_LAT                  LATCbits.LATC3
#define therm10_PORT                 PORTCbits.RC3
#define therm10_WPU                  WPUCbits.WPUC3
#define therm10_OD                   ODCONCbits.ODCC3
#define therm10_ANS                  ANSELCbits.ANSELC3
#define therm10_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define therm10_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define therm10_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define therm10_GetValue()           PORTCbits.RC3
#define therm10_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define therm10_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define therm10_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define therm10_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define therm10_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define therm10_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define therm10_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define therm10_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set therm5 aliases
#define therm5_TRIS                 TRISCbits.TRISC4
#define therm5_LAT                  LATCbits.LATC4
#define therm5_PORT                 PORTCbits.RC4
#define therm5_WPU                  WPUCbits.WPUC4
#define therm5_OD                   ODCONCbits.ODCC4
#define therm5_ANS                  ANSELCbits.ANSELC4
#define therm5_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define therm5_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define therm5_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define therm5_GetValue()           PORTCbits.RC4
#define therm5_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define therm5_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define therm5_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define therm5_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define therm5_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define therm5_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define therm5_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define therm5_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set therm6 aliases
#define therm6_TRIS                 TRISCbits.TRISC5
#define therm6_LAT                  LATCbits.LATC5
#define therm6_PORT                 PORTCbits.RC5
#define therm6_WPU                  WPUCbits.WPUC5
#define therm6_OD                   ODCONCbits.ODCC5
#define therm6_ANS                  ANSELCbits.ANSELC5
#define therm6_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define therm6_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define therm6_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define therm6_GetValue()           PORTCbits.RC5
#define therm6_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define therm6_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define therm6_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define therm6_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define therm6_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define therm6_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define therm6_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define therm6_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set therm1 aliases
#define therm1_TRIS                 TRISCbits.TRISC6
#define therm1_LAT                  LATCbits.LATC6
#define therm1_PORT                 PORTCbits.RC6
#define therm1_WPU                  WPUCbits.WPUC6
#define therm1_OD                   ODCONCbits.ODCC6
#define therm1_ANS                  ANSELCbits.ANSELC6
#define therm1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define therm1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define therm1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define therm1_GetValue()           PORTCbits.RC6
#define therm1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define therm1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define therm1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define therm1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define therm1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define therm1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define therm1_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define therm1_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set therm2 aliases
#define therm2_TRIS                 TRISCbits.TRISC7
#define therm2_LAT                  LATCbits.LATC7
#define therm2_PORT                 PORTCbits.RC7
#define therm2_WPU                  WPUCbits.WPUC7
#define therm2_OD                   ODCONCbits.ODCC7
#define therm2_ANS                  ANSELCbits.ANSELC7
#define therm2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define therm2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define therm2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define therm2_GetValue()           PORTCbits.RC7
#define therm2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define therm2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define therm2_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define therm2_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define therm2_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define therm2_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define therm2_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define therm2_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RD0 procedures
#define RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define RD0_GetValue()              PORTDbits.RD0
#define RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define RD0_SetPullup()             do { WPUDbits.WPUD0 = 1; } while(0)
#define RD0_ResetPullup()           do { WPUDbits.WPUD0 = 0; } while(0)
#define RD0_SetAnalogMode()         do { ANSELDbits.ANSELD0 = 1; } while(0)
#define RD0_SetDigitalMode()        do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set RD1 procedures
#define RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RD1_GetValue()              PORTDbits.RD1
#define RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define RD1_SetPullup()             do { WPUDbits.WPUD1 = 1; } while(0)
#define RD1_ResetPullup()           do { WPUDbits.WPUD1 = 0; } while(0)
#define RD1_SetAnalogMode()         do { ANSELDbits.ANSELD1 = 1; } while(0)
#define RD1_SetDigitalMode()        do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set CFG_R30 aliases
#define CFG_R30_TRIS                 TRISDbits.TRISD2
#define CFG_R30_LAT                  LATDbits.LATD2
#define CFG_R30_PORT                 PORTDbits.RD2
#define CFG_R30_WPU                  WPUDbits.WPUD2
#define CFG_R30_OD                   ODCONDbits.ODCD2
#define CFG_R30_ANS                  ANSELDbits.ANSELD2
#define CFG_R30_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define CFG_R30_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define CFG_R30_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define CFG_R30_GetValue()           PORTDbits.RD2
#define CFG_R30_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define CFG_R30_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define CFG_R30_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define CFG_R30_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define CFG_R30_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define CFG_R30_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define CFG_R30_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define CFG_R30_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set CFG_R31 aliases
#define CFG_R31_TRIS                 TRISDbits.TRISD3
#define CFG_R31_LAT                  LATDbits.LATD3
#define CFG_R31_PORT                 PORTDbits.RD3
#define CFG_R31_WPU                  WPUDbits.WPUD3
#define CFG_R31_OD                   ODCONDbits.ODCD3
#define CFG_R31_ANS                  ANSELDbits.ANSELD3
#define CFG_R31_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define CFG_R31_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define CFG_R31_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define CFG_R31_GetValue()           PORTDbits.RD3
#define CFG_R31_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define CFG_R31_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define CFG_R31_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define CFG_R31_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define CFG_R31_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define CFG_R31_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define CFG_R31_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define CFG_R31_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set CFG_R32 aliases
#define CFG_R32_TRIS                 TRISDbits.TRISD4
#define CFG_R32_LAT                  LATDbits.LATD4
#define CFG_R32_PORT                 PORTDbits.RD4
#define CFG_R32_WPU                  WPUDbits.WPUD4
#define CFG_R32_OD                   ODCONDbits.ODCD4
#define CFG_R32_ANS                  ANSELDbits.ANSELD4
#define CFG_R32_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define CFG_R32_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define CFG_R32_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define CFG_R32_GetValue()           PORTDbits.RD4
#define CFG_R32_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define CFG_R32_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define CFG_R32_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define CFG_R32_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define CFG_R32_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define CFG_R32_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define CFG_R32_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define CFG_R32_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set CFG_R33 aliases
#define CFG_R33_TRIS                 TRISDbits.TRISD5
#define CFG_R33_LAT                  LATDbits.LATD5
#define CFG_R33_PORT                 PORTDbits.RD5
#define CFG_R33_WPU                  WPUDbits.WPUD5
#define CFG_R33_OD                   ODCONDbits.ODCD5
#define CFG_R33_ANS                  ANSELDbits.ANSELD5
#define CFG_R33_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define CFG_R33_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define CFG_R33_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define CFG_R33_GetValue()           PORTDbits.RD5
#define CFG_R33_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define CFG_R33_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define CFG_R33_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define CFG_R33_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define CFG_R33_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define CFG_R33_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define CFG_R33_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define CFG_R33_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set therm17 aliases
#define therm17_TRIS                 TRISDbits.TRISD6
#define therm17_LAT                  LATDbits.LATD6
#define therm17_PORT                 PORTDbits.RD6
#define therm17_WPU                  WPUDbits.WPUD6
#define therm17_OD                   ODCONDbits.ODCD6
#define therm17_ANS                  ANSELDbits.ANSELD6
#define therm17_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define therm17_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define therm17_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define therm17_GetValue()           PORTDbits.RD6
#define therm17_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define therm17_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define therm17_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define therm17_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define therm17_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define therm17_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define therm17_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define therm17_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set therm18 aliases
#define therm18_TRIS                 TRISDbits.TRISD7
#define therm18_LAT                  LATDbits.LATD7
#define therm18_PORT                 PORTDbits.RD7
#define therm18_WPU                  WPUDbits.WPUD7
#define therm18_OD                   ODCONDbits.ODCD7
#define therm18_ANS                  ANSELDbits.ANSELD7
#define therm18_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define therm18_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define therm18_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define therm18_GetValue()           PORTDbits.RD7
#define therm18_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define therm18_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define therm18_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define therm18_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define therm18_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define therm18_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define therm18_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define therm18_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set therm15 aliases
#define therm15_TRIS                 TRISEbits.TRISE0
#define therm15_LAT                  LATEbits.LATE0
#define therm15_PORT                 PORTEbits.RE0
#define therm15_WPU                  WPUEbits.WPUE0
#define therm15_OD                   ODCONEbits.ODCE0
#define therm15_ANS                  ANSELEbits.ANSELE0
#define therm15_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define therm15_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define therm15_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define therm15_GetValue()           PORTEbits.RE0
#define therm15_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define therm15_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define therm15_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define therm15_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define therm15_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define therm15_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define therm15_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define therm15_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set therm16 aliases
#define therm16_TRIS                 TRISEbits.TRISE1
#define therm16_LAT                  LATEbits.LATE1
#define therm16_PORT                 PORTEbits.RE1
#define therm16_WPU                  WPUEbits.WPUE1
#define therm16_OD                   ODCONEbits.ODCE1
#define therm16_ANS                  ANSELEbits.ANSELE1
#define therm16_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define therm16_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define therm16_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define therm16_GetValue()           PORTEbits.RE1
#define therm16_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define therm16_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define therm16_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define therm16_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define therm16_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define therm16_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define therm16_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define therm16_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/