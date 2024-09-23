/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File: 
 * Author: Alexander Mills (am9g22@soton.ac.uk)
 * CAN message structure bassed of what is documented in https://github.com/sufst/tem-firmware/blob/main/Orion-BMS-TEM-reference/thermistor_module_canbus.pdf
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef CAN_MSGS_H
#define	CAN_MSGS_H

#include "config.h"

static uint8_t broadcast_therm_i = 0;

/* returns checksum for a message 
 * data - message data
 * len - length of message data
 */
int8_t get_checksum(int8_t* data, uint8_t len);


/* generates CAN message object for Thermistor module -> BMS Broadcast
 * message CAN ID: 0x1839F38X where X is module ID 
 * 
 * TM_number - thermistor Module number (should be the same as MODULE_ID) 
 * lowest-temp and highest_temp - 8 bit signed , units are 1'C
 * therm_count - number of thermistors enabled on the module
 * highest and lowest therm_id - zero based indexes of enabled thermistors on this module
 * 
 * Automatically generates the checksum for this message, which mysteriously 
 * needs 0x41 added to the checksum
 */
CAN_MSG_OBJ get_TM2BMS_Broadcast_msg(int8_t temps_array[], uint8_t module_id);


/* generates CAN message object for Thermistor General Broadcast messages
 * message CAN ID: 0x1838F38X where X is module ID 
 * 
 * therm_id - relative thermistor ID = MODULE_ID * 80 + index_on_module 
 * temp - 8 bit signed, 1'C units
 * therm_count - number of thermistors enabled on the module
 * lowest-temp and highest_temp - 8 bit signed , units are 1'C
 * highest and lowest therm_id - zero based indexes of enabled thermistors on this module
 */ 
CAN_MSG_OBJ get_TM_General_Broadcast_msg(int8_t temps_array[], uint8_t module_id);


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* CAN_MSGS_H */

