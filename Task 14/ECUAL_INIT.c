/* 
 * File:   ECUAL_INIT.c
 * Author: mohammedel-ahmady
 *
 * Created on July 14, 2025, 12:30 PM
 */

/******************* Section 0 : Includes *******************/

#include "ECUAL_INIT.h"

/******************* Section 1 :  Variables Definitions *******************/

GPIO_Btn btns[5] = {
    { .pin.Port = GPIO_PortD, .pin.Pin = GPIO_Pin0, .pin.Direction = GPIO_Input, .pin.Logic = GPIO_Low,  .connection = Btn_Active_High },
    { .pin.Port = GPIO_PortD, .pin.Pin = GPIO_Pin1, .pin.Direction = GPIO_Input, .pin.Logic = GPIO_High, .connection = Btn_Active_High },
    { .pin.Port = GPIO_PortD, .pin.Pin = GPIO_Pin2, .pin.Direction = GPIO_Input, .pin.Logic = GPIO_Low,  .connection = Btn_Active_High },
    { .pin.Port = GPIO_PortD, .pin.Pin = GPIO_Pin3, .pin.Direction = GPIO_Input, .pin.Logic = GPIO_High, .connection = Btn_Active_High },
    { .pin.Port = GPIO_PortD, .pin.Pin = GPIO_Pin4, .pin.Direction = GPIO_Input, .pin.Logic = GPIO_Low,  .connection = Btn_Active_High }
};

DC_Motor motor1 = {
    .INs[0].Port = GPIO_PortC,
    .INs[0].Pin = GPIO_Pin0,
    .INs[0].Direction = GPIO_Output,
    .INs[0].Logic = GPIO_Low,
    
    .INs[1].Port = GPIO_PortC,
    .INs[1].Pin = GPIO_Pin1,
    .INs[1].Direction = GPIO_Output,
    .INs[1].Logic = GPIO_Low,
    
};

DC_Motor motor2 = {
    .INs[0].Port = GPIO_PortC,
    .INs[0].Pin = GPIO_Pin2,
    .INs[0].Direction = GPIO_Output,
    .INs[0].Logic = GPIO_Low,
    
    .INs[1].Port = GPIO_PortC,
    .INs[1].Pin = GPIO_Pin3,
    .INs[1].Direction = GPIO_Output,
    .INs[1].Logic = GPIO_Low,
    
};



/******************* Section 2 :  Helper Functions Declarations *******************/



/******************* Section 3 : Software Interfaces Definitions (APIs) *******************/

void Ecual_Init(void){
    Std_ReturnType ret = E_NOT_OK;
    
    for(uint8 i = 0; i < 5; i++){
        ret = GPIO_Btn_INIT(&btns[i]);
    }
    
    ret = GPIO_DC_Motor_INIT(&motor1);
    ret = GPIO_DC_Motor_INIT(&motor2);
    
}

/******************* Section 4:  Helper Functions Definitions *******************/
