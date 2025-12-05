/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47Q84
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include <stdint.h>

// Array of ADCs, first value is zero to match pin numbering on PCB and CAN multiplexer
ADC_channel_t STRAIN_ADCS[] = {
    0, 
    channel_ANA1,
    channel_ANB4,
    channel_ANA0,
    channel_ANB5,
    channel_ANB3,
    channel_ANB0,
    channel_ANB2,
    channel_ANB1,
    channel_ANA4,
    channel_ANA2,
    channel_ANA5,
    channel_ANA3
};

#define LOOP_PERIOD 20
#define DATA_BYTE_LENGTH 6

uint8_t transmitData[DATA_BYTE_LENGTH];
CAN_TX_MSG_REQUEST_STATUS transmitStatus;
CAN_MSG_OBJ transmitMsgObj;

/*
 * Reads a predefined ADC channel (e.g. IO_STR{1-12} or IO_POS{1-3})
 */
adc_result_t read_adc(ADC_channel_t adc_channel) {
    ADC_StartConversion(adc_channel);
    while(!(ADC_IsConversionDone()));
    return ADC_GetConversionResult();
}

/*
 * Broadcasts the provided reading over CAN
 */
bool broadcast_strain_reading(uint8_t str_n, adc_result_t adc_value) {
    // 4-bit multiplexer - little-endian like platform
    transmitData[0] = (str_n & 0x0F);
    // pack ADC value 1 byte at a time
    transmitData[1] = (adc_value >> 0) & 0xFF;
    transmitData[2] = (adc_value >> 8) & 0xFF;
    
    // Setup message
    transmitMsgObj.msgId = 0x650;
    transmitMsgObj.field.formatType = CAN_2_0_FORMAT;
    transmitMsgObj.field.brs = CAN_NON_BRS_MODE;
    transmitMsgObj.field.frameType = CAN_FRAME_DATA;
    transmitMsgObj.field.idType = CAN_FRAME_STD;
    transmitMsgObj.field.dlc = DATA_BYTE_LENGTH;
    transmitMsgObj.data = transmitData;
    
    // Try and send message
    if (CAN_TX_FIFO_AVAILABLE != CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ)) {
        return false;
    }
    
    transmitStatus = CAN1_Transmit(CAN1_TX_TXQ, &transmitMsgObj);
    return CAN_TX_MSG_REQUEST_SUCCESS == transmitStatus;
}

/*
 * Main application
*/
int main(void)
{
    SYSTEM_Initialize();
    ADC_SelectContext(CONTEXT_1);
    INTERRUPT_GlobalInterruptEnable();
    while(1)
    {
        if (CAN1_OperationModeGet() == CAN_CONFIGURATION_MODE) {
            CAN1_OperationModeSet(CAN_NORMAL_2_0_MODE);
            continue;
        }
        for (uint8_t str_n = 1; str_n <= 12; str_n++) {
            while (CAN_TX_FIFO_AVAILABLE != CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ)) {
                // wait for CAN buffer to be free
                __delay_ms(LOOP_PERIOD);
            }
            adc_result_t adc_value = read_adc(STRAIN_ADCS[str_n]);
            if (!broadcast_strain_reading(str_n, adc_value)) {
                // cry
                __delay_ms(1000);
            }
        }
        __delay_ms(LOOP_PERIOD);
    }    
}
