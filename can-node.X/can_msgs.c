/* 
 * File: 
 * Author: Alexander Mills (am9g22@soton.ac.uk)
 * CAN message structure based of what is documented in https://github.com/sufst/tem-firmware/blob/main/Orion-BMS-TEM-reference/thermistor_module_canbus.pdf
 * Revision history: 
 */
#include "config.h"


static uint8_t msg_data[8];

uint8_t get_checksum(uint8_t* data, uint8_t len) {
    uint8_t sum = 0;
    for(uint8_t i=0; i<len; i++) {
        sum += data[i];
    }
    return sum;
}


CAN_MSG_OBJ get_TM2BMS_Broadcast_msg(int8_t temps_array[], uint8_t module_id) {
    CAN_MSG_OBJ msg;
    
    //calculate data
    int8_t min_temp = 127;
    uint8_t min_temp_i = 0; 
    int8_t max_temp = -128;
    uint8_t max_temp_i = 0;
    
    uint8_t alive_therm_cnt = 0, is_dead = 0;
    
    int32_t total_temp = 0;
    for(uint8_t temp_i=0; temp_i<THERM_COUNT; temp_i++) {
        is_dead = !!(dead_therm_map[module_id-1] & (1 << temp_i));
        
        if (!is_dead) {
            int8_t this_temp = temps_array[temp_i];
            if(this_temp < min_temp)
            {
                min_temp = this_temp;
                min_temp_i = temp_i;
            }
            if(this_temp > max_temp)
            {
                max_temp = this_temp;
                max_temp_i = temp_i;
            }
            total_temp += this_temp;
            alive_therm_cnt++;
        }
    }
    
    int8_t avg_temp = total_temp / alive_therm_cnt;
    
    msg_data[0] = module_id - 1;
    msg_data[1] = (uint8_t)min_temp;
    msg_data[2] = (uint8_t)max_temp;
    msg_data[3] = (uint8_t)avg_temp;
    msg_data[4] = THERM_COUNT; 
    msg_data[5] = max_temp_i;
    msg_data[6] = min_temp_i;
    
    // checksum has magic offset
    msg_data[7] = get_checksum((uint8_t*)msg_data, 7) + 0x41;
    
    // assemble packet
    msg.msgId = 0x1839F380 + module_id;
    msg.field.formatType = CAN_2_0_FORMAT;
    msg.field.brs = CAN_NON_BRS_MODE;
    msg.field.dlc = DLC_8;
    msg.field.frameType = CAN_FRAME_DATA;
    msg.field.idType = CAN_FRAME_EXT;
    msg.data = msg_data;
    
    return msg;
}


CAN_MSG_OBJ get_TM_General_Broadcast_msg(int8_t temps_array[], uint8_t module_id) {
    static uint8_t broadcast_therm_i;
    
    CAN_MSG_OBJ msg;
    
    //calculate data
    int8_t min_temp = 127;
    uint8_t min_temp_i = 0; 
    int8_t max_temp = -128;
    uint8_t max_temp_i = 0;
    
    uint8_t alive_therm_cnt = 0, is_dead = 0;
    
    int32_t total_temp = 0;
    for(uint8_t temp_i=0; temp_i<THERM_COUNT; temp_i++) {
        is_dead = !!(dead_therm_map[module_id-1] & (1 << temp_i));
        
        if (!is_dead) {
            int8_t this_temp = temps_array[temp_i];
            if(this_temp < min_temp)
            {
                min_temp = this_temp;
                min_temp_i = temp_i;
            }
            if(this_temp > max_temp)
            {
                max_temp = this_temp;
                max_temp_i = temp_i;
            }
            total_temp += this_temp;
            alive_therm_cnt++;
        }
    }
    
    int8_t avg_temp = total_temp / alive_therm_cnt;
    
    uint16_t absolute_therm_id = (80 * module_id) + broadcast_therm_i;
    int8_t broadcast_therm_temp = temps_array[broadcast_therm_i];
    
    msg_data[0] = absolute_therm_id>>8;
    msg_data[1] = absolute_therm_id & 0xff;
    msg_data[2] = (uint8_t)broadcast_therm_temp;
    msg_data[3] = THERM_COUNT;
    msg_data[4] = (uint8_t)min_temp;
    msg_data[5] = (uint8_t)max_temp; 
    msg_data[6] = max_temp_i;
    msg_data[7] = min_temp_i;
    
    // assemble packet
    msg.msgId = 0x1838F380 + module_id;
    msg.field.formatType = CAN_2_0_FORMAT;
    msg.field.brs = CAN_NON_BRS_MODE;
    msg.field.dlc = DLC_8;
    msg.field.frameType = CAN_FRAME_DATA;
    msg.field.idType = CAN_FRAME_EXT;
    msg.data = msg_data;
    
    
    // increment broadcast_therm_i
    if(++broadcast_therm_i >= THERM_COUNT) {
        broadcast_therm_i = 0;
    }
    
    return msg;
}