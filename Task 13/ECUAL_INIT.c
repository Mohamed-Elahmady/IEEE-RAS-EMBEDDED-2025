/* 
 * File:   ECUAL_INIT.c
 * Author: mohammedel-ahmady
 *
 * Created on July 14, 2025, 12:30 PM
 */

/******************* Section 0 : Includes *******************/

#include "ECUAL_INIT.h"

/******************* Section 1 :  Variables Definitions *******************/


/******************* Section 2 :  Helper Functions Declarations *******************/

GPIO_Led led1 = {
    .pin.Port = GPIO_PortC,
    .pin.Pin = GPIO_Pin0,
    .pin.Direction = GPIO_Output,
    .connection = Led_Source,
    .state = Led_Off
};

GPIO_Led led2 = {
    .pin.Port = GPIO_PortC,
    .pin.Pin = GPIO_Pin1,
    .pin.Direction = GPIO_Output,
    .connection = Led_Source,
    .state = Led_Off
};

GPIO_Led led3 = {
    .pin.Port = GPIO_PortC,
    .pin.Pin = GPIO_Pin2,
    .pin.Direction = GPIO_Output,
    .connection = Led_Source,
    .state = Led_Off
};

GPIO_Segment seg1 = {
    .pins[Segment_Pin0].Port = GPIO_PortC,
    .pins[Segment_Pin0].Pin = GPIO_Pin3,
    .pins[Segment_Pin0].Direction = GPIO_Output,
    .pins[Segment_Pin0].Logic = GPIO_Low,
    
    .pins[Segment_Pin1].Port = GPIO_PortC,
    .pins[Segment_Pin1].Pin = GPIO_Pin4,
    .pins[Segment_Pin1].Direction = GPIO_Output,
    .pins[Segment_Pin1].Logic = GPIO_Low,
    
    .pins[Segment_Pin2].Port = GPIO_PortC,
    .pins[Segment_Pin2].Pin = GPIO_Pin5,
    .pins[Segment_Pin2].Direction = GPIO_Output,
    .pins[Segment_Pin2].Logic = GPIO_Low,
    
    .pins[Segment_Pin3].Port = GPIO_PortC,
    .pins[Segment_Pin3].Pin = GPIO_Pin6,
    .pins[Segment_Pin3].Direction = GPIO_Output,
    .pins[Segment_Pin3].Logic = GPIO_Low,
    
    .connection = Segment_Common_Anode
};

GPIO_Pin_CFG seg_chan1 = {
    .Port = GPIO_PortD,
    .Pin = GPIO_Pin0,
    .Direction = GPIO_Output,
    .Logic = GPIO_Low
};

GPIO_Pin_CFG seg_chan2 = {
    .Port = GPIO_PortD,
    .Pin = GPIO_Pin1,
    .Direction = GPIO_Input,
    .Logic = GPIO_Low
};

Chr_Lcd_4Bit lcd1 = {
    .Rs_Pin.Port = GPIO_PortB,
    .Rs_Pin.Pin = GPIO_Pin0,
    .Rs_Pin.Direction = GPIO_Output,
    .Rs_Pin.Logic = GPIO_Low,

    .Rw_Pin.Port = GPIO_PortB,
    .Rw_Pin.Pin = GPIO_Pin1,
    .Rw_Pin.Direction = GPIO_Output,
    .Rw_Pin.Logic = GPIO_Low,

    .En_Pin.Port = GPIO_PortB,
    .En_Pin.Pin = GPIO_Pin2,
    .En_Pin.Direction = GPIO_Output,
    .En_Pin.Logic = GPIO_Low,

    .Data_Pins[0].Port = GPIO_PortC,
    .Data_Pins[0].Pin = GPIO_Pin0,
    .Data_Pins[0].Direction = GPIO_Output,
    .Data_Pins[0].Logic = GPIO_Low,

    .Data_Pins[1].Port = GPIO_PortC,
    .Data_Pins[1].Pin = GPIO_Pin1,
    .Data_Pins[1].Direction = GPIO_Output,
    .Data_Pins[1].Logic = GPIO_Low,

    .Data_Pins[2].Port = GPIO_PortC,
    .Data_Pins[2].Pin = GPIO_Pin2,
    .Data_Pins[2].Direction = GPIO_Output,
    .Data_Pins[2].Logic = GPIO_Low,

    .Data_Pins[3].Port = GPIO_PortC,
    .Data_Pins[3].Pin = GPIO_Pin3,
    .Data_Pins[3].Direction = GPIO_Output,
    .Data_Pins[3].Logic = GPIO_Low
};

Chr_Lcd_8Bit lcd2 = {
    .Rs_Pin.Port = GPIO_PortB,
    .Rs_Pin.Pin = GPIO_Pin3,
    .Rs_Pin.Direction = GPIO_Output,
    .Rs_Pin.Logic = GPIO_Low,

    .Rw_Pin.Port = GPIO_PortB,
    .Rw_Pin.Pin = GPIO_Pin4,
    .Rw_Pin.Direction = GPIO_Output,
    .Rw_Pin.Logic = GPIO_Low,

    .En_Pin.Port = GPIO_PortB,
    .En_Pin.Pin = GPIO_Pin5,
    .En_Pin.Direction = GPIO_Output,
    .En_Pin.Logic = GPIO_Low,

    .Data_Pins[0].Port = GPIO_PortD,
    .Data_Pins[0].Pin = GPIO_Pin0,
    .Data_Pins[0].Direction = GPIO_Output,
    .Data_Pins[0].Logic = GPIO_Low,

    .Data_Pins[1].Port = GPIO_PortD,
    .Data_Pins[1].Pin = GPIO_Pin1,
    .Data_Pins[1].Direction = GPIO_Output,
    .Data_Pins[1].Logic = GPIO_Low,

    .Data_Pins[2].Port = GPIO_PortD,
    .Data_Pins[2].Pin = GPIO_Pin2,
    .Data_Pins[2].Direction = GPIO_Output,
    .Data_Pins[2].Logic = GPIO_Low,

    .Data_Pins[3].Port = GPIO_PortD,
    .Data_Pins[3].Pin = GPIO_Pin3,
    .Data_Pins[3].Direction = GPIO_Output,
    .Data_Pins[3].Logic = GPIO_Low,
    
    .Data_Pins[4].Port = GPIO_PortD,
    .Data_Pins[4].Pin = GPIO_Pin4,
    .Data_Pins[4].Direction = GPIO_Output,
    .Data_Pins[4].Logic = GPIO_Low,

    .Data_Pins[5].Port = GPIO_PortD,
    .Data_Pins[5].Pin = GPIO_Pin5,
    .Data_Pins[5].Direction = GPIO_Output,
    .Data_Pins[5].Logic = GPIO_Low,

    .Data_Pins[6].Port = GPIO_PortD,
    .Data_Pins[6].Pin = GPIO_Pin6,
    .Data_Pins[6].Direction = GPIO_Output,
    .Data_Pins[6].Logic = GPIO_Low,

    .Data_Pins[7].Port = GPIO_PortD,
    .Data_Pins[7].Pin = GPIO_Pin7,
    .Data_Pins[7].Direction = GPIO_Output,
    .Data_Pins[7].Logic = GPIO_Low
};

/******************* Section 3 : Software Interfaces Definitions (APIs) *******************/

void Ecual_Init(void){
    Std_ReturnType ret = E_NOT_OK;
    ret = GPIO_Led_INIT(&led1);
    ret = GPIO_Led_INIT(&led2);
    ret = GPIO_Led_INIT(&led3);
    ret = GPIO_Segment_INIT(&seg1);
    ret = GPIO_Pin_INIT(&seg_chan1);
    ret = GPIO_Pin_INIT(&seg_chan2);
}

/******************* Section 4:  Helper Functions Definitions *******************/
