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

#include "config.h"
#include "can_msgs.h"
#include "therm_LUT.h"

ADC_channel_t therm_to_adc_channel[] = {
THERM_1,
THERM_2
};

ADC_channel_t pd_to_adc_channel[] = {
PD_1,
PD_2,
PD_3,
PD_4,
PD_5,
PD_6,
PD_7,
PD_8,
PD_9,
PD_10
};


int8_t adc_to_temp(adc_result_t reading) 
{
    // just read from thermistor curve LUT
	return therm_lut[reading];
}

uint8_t module_id; // 0 to 15, set by config resistors R3-R6
int8_t temps[THERM_COUNT];
ADC_channel_t pd_voltages[PD_COUNT];

void main(void)
{
    uint8_t is_dead;
    CAN_MSG_OBJ msg;
    
    // initialise the device
    SYSTEM_Initialize();
	ADC_SelectContext(CONTEXT_1);
    
//     read module ID from config resistors
    module_id = (1 - CFG_R3_GetValue()) * 1 +
                (1 - CFG_R4_GetValue()) * 2 +
                (1 - CFG_R5_GetValue()) * 4 +
                (1 - CFG_R6_GetValue()) * 8 + 1;
        
    while (1)
    {   
        //read temps
		for (uint8_t therm_i = MIN_THERM_ID; therm_i <= MAX_THERM_ID; therm_i++)
		{
      ADC_StartConversion(therm_to_adc_channel[therm_i]);
      while(!ADC_IsConversionDone());
      adc_result_t reading = ADC_GetConversionResult();
      temps[therm_i-MIN_THERM_ID] = adc_to_temp(reading);
		}

    for (uint8_t pd_i = MIN_PD_ID; pd_i <= MAX_PD_ID; pd_i++)
    {
      ADC_StartConversion(pd_to_adc_channel[pd_i]);
      while(!ADC_IsConversionDone());
      adc_result_t reading = ADC_GetConversionResult();
      // The following is implemented into the candbc file
      //reading = reading * 3.3 * 5 / 1024; // convert to volts (3.3v reference, 4:1 potential divider and 12 bit adc)
      pd_voltages[pd_i-MIN_PD_ID] = reading;
    }


        // set up can interface
		switch (CAN1_OperationModeGet())
		{
		case CAN_CONFIGURATION_MODE:
			CAN1_OperationModeSet(CAN_NORMAL_2_0_MODE);
			break;
		case CAN_NORMAL_2_0_MODE:
			// transmit data
		    if(CAN_TX_FIFO_AVAILABLE == (CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ)))
		    {
          // PD broadcast msg
          for (uint8_t multiplexor = 0; multiplexor <= 1; multiplexor++)
          {
            msg = get_PD_Broadcast_msg(pd_voltages, module_id, multiplexor);
            CAN1_Transmit(CAN1_TX_TXQ, &msg);
            while(CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) == CAN_TX_FIFO_FULL);
          }

          // Thermistor broadcast msg
          uint8_t multiplexor = 3;
          msg = get_Therm_Broadcast_msg(temps, module_id, multiplexor);
          CAN1_Transmit(CAN1_TX_TXQ, &msg);
          while(CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) == CAN_TX_FIFO_FULL);
		    }
			break;
		default:
			break;
		}
		__delay_ms(LOOP_PERIOD);
    }
}
/**
 End of File
*/