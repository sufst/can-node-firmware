/* 
 * File: 
 * Author: Ethan Turnbull (ert1g23@soton.ac.uk)
 * Revision history: 
 */
#include "config.h"


static uint8_t msg_data[8];
static int8_t therm_msg_data[8];

CAN_MSG_OBJ get_PD_Broadcast_msg(ADC_channel_t voltages_array[], uint8_t module_id, uint8_t multiplexor) {
    CAN_MSG_OBJ msg;
    
    // Packing the multiplexor (4 bits) into bits 0-3
    msg_data[0] |= (multiplexor & 0x0F); // Multiplexor takes bits 0-3

    // Packing CAN_NODE_PD_1 or 6 (12 bits) into bits 4-15
    msg_data[0] |= (voltages_array[0+(multiplexor*5)] & 0x00F) << 4; // Lower 4 bits of PD_1 in bits 4-7 of msg_data[0]
    msg_data[1] |= (voltages_array[0+(multiplexor*5)] >> 4) & 0xFF; // Upper 8 bits of PD_1 in msg_data[1]

    // Packing CAN_NODE_PD_2 or 7 (12 bits) into bits 16-29
    msg_data[2] |= (voltages_array[1+(multiplexor*5)] & 0x00FF);      // Lower 8 bits of PD_2 in msg_data[2]
    msg_data[3] |= (voltages_array[1+(multiplexor*5)] >> 8) & 0x0F;   // Upper 4 bits of PD_2 in bits 0-3 of msg_data[3]

    // Packing CAN_NODE_PD_3 or 8 (12 bits) into bits 30-43
    msg_data[3] |= (voltages_array[2+(multiplexor*5)] & 0x00F) << 4;  // Lower 4 bits of PD_3 in bits 4-7 of msg_data[3]
    msg_data[4] |= (voltages_array[2+(multiplexor*5)] >> 4) & 0xFF;   // Upper 8 bits of PD_3 in msg_data[4]

    // Packing CAN_NODE_PD_4 or 9 (12 bits) into bits 44-55
    msg_data[5] |= (voltages_array[3+(multiplexor*5)] & 0x00FF);      // Lower 8 bits of PD_4 in msg_data[5]
    msg_data[6] |= (voltages_array[3+(multiplexor*5)] >> 8) & 0x0F;   // Upper 4 bits of PD_4 in bits 0-3 of msg_data[6]

    // Packing CAN_NODE_PD_5 or 10 (12 bits) into bits 56-63
    msg_data[6] |= (voltages_array[4+(multiplexor*5)] & 0xF0) >> 4;   // Upper 4 bits of PD_5 in bits 4-7 of msg_data[6]
    msg_data[7] |= (voltages_array[4+(multiplexor*5)] & 0x00FF);   // Lower 8 bits of PD_5 in bits 0-8 of msg_data[7]

    // assemble packet
    msg.msgId = 0x600 + module_id + multiplexor; 
    msg.field.formatType = CAN_2_0_FORMAT;
    msg.field.brs = CAN_NON_BRS_MODE;
    msg.field.dlc = DLC_8;
    msg.field.frameType = CAN_FRAME_DATA;
    msg.field.idType = CAN_FRAME_EXT;
    msg.data = msg_data;
}

CAN_MSG_OBJ get_Therm_Broadcast_msg(int8_t temps_array[], uint8_t module_id, uint8_t multiplexor) {
    CAN_MSG_OBJ msg;
    
    // Packing the multiplexor (4 bits) into bits 0-3
    therm_msg_data[0] = multiplexor;
    therm_msg_data[1] = temps_array[0];
    therm_msg_data[2] = temps_array[1];

    // assemble packet
    msg.msgId = 0x600 + module_id + multiplexor;
    msg.field.formatType = CAN_2_0_FORMAT;
    msg.field.brs = CAN_NON_BRS_MODE;
    msg.field.dlc = DLC_8;
    msg.field.frameType = CAN_FRAME_DATA;
    msg.field.idType = CAN_FRAME_EXT;
    msg.data = msg_data;
}