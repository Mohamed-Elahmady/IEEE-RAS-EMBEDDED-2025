/*
 * File:   main.c
 * Author: mohammedel-ahmady
 *
 * Created on June 26, 2025, 7:24 PM
 */

#include "main.h"

Btn_State state[5] = {Btn_Released, Btn_Released, Btn_Released, Btn_Released, Btn_Released};
uint8 flag = 0;

int main(void) {
    Std_ReturnType ret = E_NOT_OK;
    Application_Init();

    while (1) {  
        flag = 0x00;
        for(uint8 i = 0; i < 5; i++){
            ret = GPIO_Btn_Read_State(&btns[i], &state[i]);
            if(state[i] == Btn_Pressed){
                flag++;
            }
        }
        
        if(state[0] == Btn_Pressed && flag == 0x01){
            ret = GPIO_DC_Motor_Rotate_ClockWise(&motor1);
            ret = GPIO_DC_Motor_Rotate_ClockWise(&motor2);
        }
        else if(state[1] == Btn_Pressed && flag == 0x01){
            ret = GPIO_DC_Motor_Rotate_Counter_ClockWise(&motor1);
            ret = GPIO_DC_Motor_Rotate_Counter_ClockWise(&motor2);
        }
        else if(state[2] == Btn_Pressed && flag == 0x01){
            ret = GPIO_DC_Motor_Rotate_ClockWise(&motor1);
            ret = GPIO_DC_Motor_Rotate_Counter_ClockWise(&motor2);
        }
        else if(state[3] == Btn_Pressed && flag == 0x01){
            ret = GPIO_DC_Motor_Rotate_Counter_ClockWise(&motor1);
            ret = GPIO_DC_Motor_Rotate_ClockWise(&motor2);
        }
        else if(state[4] == Btn_Pressed && flag == 0x01){
            ret = GPIO_DC_Motor_Brake(&motor1);
            ret = GPIO_DC_Motor_Brake(&motor2);
        }
        else{
            ret = GPIO_DC_Motor_Brake(&motor1);
            ret = GPIO_DC_Motor_Brake(&motor2);
        }
    }
    return EXIT_SUCCESS;
}

void Application_Init(void) {
    Ecual_Init();

}