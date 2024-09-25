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

// get/set PD_5 aliases
#define PD_5_TRIS                 TRISAbits.TRISA2
#define PD_5_LAT                  LATAbits.LATA2
#define PD_5_PORT                 PORTAbits.RA2
#define PD_5_WPU                  WPUAbits.WPUA2
#define PD_5_OD                   ODCONAbits.ODCA2
#define PD_5_ANS                  ANSELAbits.ANSELA2
#define PD_5_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define PD_5_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define PD_5_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define PD_5_GetValue()           PORTAbits.RA2
#define PD_5_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define PD_5_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define PD_5_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define PD_5_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define PD_5_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define PD_5_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define PD_5_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define PD_5_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set PD_6 aliases
#define PD_6_TRIS                 TRISAbits.TRISA3
#define PD_6_LAT                  LATAbits.LATA3
#define PD_6_PORT                 PORTAbits.RA3
#define PD_6_WPU                  WPUAbits.WPUA3
#define PD_6_OD                   ODCONAbits.ODCA3
#define PD_6_ANS                  ANSELAbits.ANSELA3
#define PD_6_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define PD_6_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define PD_6_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define PD_6_GetValue()           PORTAbits.RA3
#define PD_6_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define PD_6_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define PD_6_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define PD_6_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define PD_6_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define PD_6_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define PD_6_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define PD_6_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set PD_7 aliases
#define PD_7_TRIS                 TRISAbits.TRISA4
#define PD_7_LAT                  LATAbits.LATA4
#define PD_7_PORT                 PORTAbits.RA4
#define PD_7_WPU                  WPUAbits.WPUA4
#define PD_7_OD                   ODCONAbits.ODCA4
#define PD_7_ANS                  ANSELAbits.ANSELA4
#define PD_7_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define PD_7_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define PD_7_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define PD_7_GetValue()           PORTAbits.RA4
#define PD_7_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define PD_7_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define PD_7_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define PD_7_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define PD_7_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define PD_7_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define PD_7_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define PD_7_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set PD_1 aliases
#define PD_1_TRIS                 TRISBbits.TRISB1
#define PD_1_LAT                  LATBbits.LATB1
#define PD_1_PORT                 PORTBbits.RB1
#define PD_1_WPU                  WPUBbits.WPUB1
#define PD_1_OD                   ODCONBbits.ODCB1
#define PD_1_ANS                  ANSELBbits.ANSELB1
#define PD_1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define PD_1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define PD_1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define PD_1_GetValue()           PORTBbits.RB1
#define PD_1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define PD_1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define PD_1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define PD_1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define PD_1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define PD_1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define PD_1_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define PD_1_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set PD_2 aliases
#define PD_2_TRIS                 TRISBbits.TRISB2
#define PD_2_LAT                  LATBbits.LATB2
#define PD_2_PORT                 PORTBbits.RB2
#define PD_2_WPU                  WPUBbits.WPUB2
#define PD_2_OD                   ODCONBbits.ODCB2
#define PD_2_ANS                  ANSELBbits.ANSELB2
#define PD_2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define PD_2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define PD_2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define PD_2_GetValue()           PORTBbits.RB2
#define PD_2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define PD_2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define PD_2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define PD_2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define PD_2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define PD_2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define PD_2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define PD_2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set PD_3 aliases
#define PD_3_TRIS                 TRISBbits.TRISB3
#define PD_3_LAT                  LATBbits.LATB3
#define PD_3_PORT                 PORTBbits.RB3
#define PD_3_WPU                  WPUBbits.WPUB3
#define PD_3_OD                   ODCONBbits.ODCB3
#define PD_3_ANS                  ANSELBbits.ANSELB3
#define PD_3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define PD_3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define PD_3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define PD_3_GetValue()           PORTBbits.RB3
#define PD_3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define PD_3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define PD_3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define PD_3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define PD_3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define PD_3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define PD_3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define PD_3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set PD_4 aliases
#define PD_4_TRIS                 TRISBbits.TRISB4
#define PD_4_LAT                  LATBbits.LATB4
#define PD_4_PORT                 PORTBbits.RB4
#define PD_4_WPU                  WPUBbits.WPUB4
#define PD_4_OD                   ODCONBbits.ODCB4
#define PD_4_ANS                  ANSELBbits.ANSELB4
#define PD_4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define PD_4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define PD_4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define PD_4_GetValue()           PORTBbits.RB4
#define PD_4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define PD_4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define PD_4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define PD_4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define PD_4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define PD_4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define PD_4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define PD_4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set PWR_ON aliases
#define PWR_ON_TRIS                 TRISBbits.TRISB5
#define PWR_ON_LAT                  LATBbits.LATB5
#define PWR_ON_PORT                 PORTBbits.RB5
#define PWR_ON_WPU                  WPUBbits.WPUB5
#define PWR_ON_OD                   ODCONBbits.ODCB5
#define PWR_ON_ANS                  ANSELBbits.ANSELB5
#define PWR_ON_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define PWR_ON_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define PWR_ON_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define PWR_ON_GetValue()           PORTBbits.RB5
#define PWR_ON_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define PWR_ON_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define PWR_ON_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define PWR_ON_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define PWR_ON_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define PWR_ON_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define PWR_ON_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define PWR_ON_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set PD_8 aliases
#define PD_8_TRIS                 TRISCbits.TRISC1
#define PD_8_LAT                  LATCbits.LATC1
#define PD_8_PORT                 PORTCbits.RC1
#define PD_8_WPU                  WPUCbits.WPUC1
#define PD_8_OD                   ODCONCbits.ODCC1
#define PD_8_ANS                  ANSELCbits.ANSELC1
#define PD_8_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define PD_8_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define PD_8_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define PD_8_GetValue()           PORTCbits.RC1
#define PD_8_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define PD_8_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define PD_8_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define PD_8_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define PD_8_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define PD_8_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define PD_8_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define PD_8_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set PD_9 aliases
#define PD_9_TRIS                 TRISCbits.TRISC2
#define PD_9_LAT                  LATCbits.LATC2
#define PD_9_PORT                 PORTCbits.RC2
#define PD_9_WPU                  WPUCbits.WPUC2
#define PD_9_OD                   ODCONCbits.ODCC2
#define PD_9_ANS                  ANSELCbits.ANSELC2
#define PD_9_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define PD_9_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define PD_9_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define PD_9_GetValue()           PORTCbits.RC2
#define PD_9_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define PD_9_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define PD_9_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define PD_9_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define PD_9_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define PD_9_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define PD_9_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define PD_9_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set PD_10 aliases
#define PD_10_TRIS                 TRISCbits.TRISC3
#define PD_10_LAT                  LATCbits.LATC3
#define PD_10_PORT                 PORTCbits.RC3
#define PD_10_WPU                  WPUCbits.WPUC3
#define PD_10_OD                   ODCONCbits.ODCC3
#define PD_10_ANS                  ANSELCbits.ANSELC3
#define PD_10_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define PD_10_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define PD_10_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define PD_10_GetValue()           PORTCbits.RC3
#define PD_10_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define PD_10_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define PD_10_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define PD_10_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define PD_10_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define PD_10_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define PD_10_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define PD_10_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set CFG_R3 aliases
#define CFG_R3_TRIS                 TRISCbits.TRISC4
#define CFG_R3_LAT                  LATCbits.LATC4
#define CFG_R3_PORT                 PORTCbits.RC4
#define CFG_R3_WPU                  WPUCbits.WPUC4
#define CFG_R3_OD                   ODCONCbits.ODCC4
#define CFG_R3_ANS                  ANSELCbits.ANSELC4
#define CFG_R3_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define CFG_R3_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define CFG_R3_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define CFG_R3_GetValue()           PORTCbits.RC4
#define CFG_R3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define CFG_R3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define CFG_R3_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define CFG_R3_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define CFG_R3_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define CFG_R3_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define CFG_R3_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define CFG_R3_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set CFG_R4 aliases
#define CFG_R4_TRIS                 TRISCbits.TRISC5
#define CFG_R4_LAT                  LATCbits.LATC5
#define CFG_R4_PORT                 PORTCbits.RC5
#define CFG_R4_WPU                  WPUCbits.WPUC5
#define CFG_R4_OD                   ODCONCbits.ODCC5
#define CFG_R4_ANS                  ANSELCbits.ANSELC5
#define CFG_R4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define CFG_R4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define CFG_R4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define CFG_R4_GetValue()           PORTCbits.RC5
#define CFG_R4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define CFG_R4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define CFG_R4_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define CFG_R4_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define CFG_R4_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define CFG_R4_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define CFG_R4_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define CFG_R4_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set THERM_1 aliases
#define THERM_1_TRIS                 TRISCbits.TRISC6
#define THERM_1_LAT                  LATCbits.LATC6
#define THERM_1_PORT                 PORTCbits.RC6
#define THERM_1_WPU                  WPUCbits.WPUC6
#define THERM_1_OD                   ODCONCbits.ODCC6
#define THERM_1_ANS                  ANSELCbits.ANSELC6
#define THERM_1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define THERM_1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define THERM_1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define THERM_1_GetValue()           PORTCbits.RC6
#define THERM_1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define THERM_1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define THERM_1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define THERM_1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define THERM_1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define THERM_1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define THERM_1_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define THERM_1_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set THERM_2 aliases
#define THERM_2_TRIS                 TRISCbits.TRISC7
#define THERM_2_LAT                  LATCbits.LATC7
#define THERM_2_PORT                 PORTCbits.RC7
#define THERM_2_WPU                  WPUCbits.WPUC7
#define THERM_2_OD                   ODCONCbits.ODCC7
#define THERM_2_ANS                  ANSELCbits.ANSELC7
#define THERM_2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define THERM_2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define THERM_2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define THERM_2_GetValue()           PORTCbits.RC7
#define THERM_2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define THERM_2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define THERM_2_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define THERM_2_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define THERM_2_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define THERM_2_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define THERM_2_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define THERM_2_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

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

// get/set TESTPOINT aliases
#define TESTPOINT_TRIS                 TRISDbits.TRISD2
#define TESTPOINT_LAT                  LATDbits.LATD2
#define TESTPOINT_PORT                 PORTDbits.RD2
#define TESTPOINT_WPU                  WPUDbits.WPUD2
#define TESTPOINT_OD                   ODCONDbits.ODCD2
#define TESTPOINT_ANS                  ANSELDbits.ANSELD2
#define TESTPOINT_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define TESTPOINT_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define TESTPOINT_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define TESTPOINT_GetValue()           PORTDbits.RD2
#define TESTPOINT_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define TESTPOINT_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define TESTPOINT_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define TESTPOINT_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define TESTPOINT_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define TESTPOINT_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define TESTPOINT_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define TESTPOINT_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set CFG_R5 aliases
#define CFG_R5_TRIS                 TRISDbits.TRISD4
#define CFG_R5_LAT                  LATDbits.LATD4
#define CFG_R5_PORT                 PORTDbits.RD4
#define CFG_R5_WPU                  WPUDbits.WPUD4
#define CFG_R5_OD                   ODCONDbits.ODCD4
#define CFG_R5_ANS                  ANSELDbits.ANSELD4
#define CFG_R5_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define CFG_R5_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define CFG_R5_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define CFG_R5_GetValue()           PORTDbits.RD4
#define CFG_R5_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define CFG_R5_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define CFG_R5_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define CFG_R5_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define CFG_R5_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define CFG_R5_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define CFG_R5_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define CFG_R5_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set CFG_R6 aliases
#define CFG_R6_TRIS                 TRISDbits.TRISD5
#define CFG_R6_LAT                  LATDbits.LATD5
#define CFG_R6_PORT                 PORTDbits.RD5
#define CFG_R6_WPU                  WPUDbits.WPUD5
#define CFG_R6_OD                   ODCONDbits.ODCD5
#define CFG_R6_ANS                  ANSELDbits.ANSELD5
#define CFG_R6_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define CFG_R6_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define CFG_R6_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define CFG_R6_GetValue()           PORTDbits.RD5
#define CFG_R6_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define CFG_R6_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define CFG_R6_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define CFG_R6_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define CFG_R6_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define CFG_R6_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define CFG_R6_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define CFG_R6_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

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