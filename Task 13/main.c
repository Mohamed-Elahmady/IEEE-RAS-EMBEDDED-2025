/*
 * File:   main.c
 * Author: mohammedel-ahmady
 *
 * Created on June 26, 2025, 7:24 PM
 */

#include "main.h"

int main(void) {
    Std_ReturnType ret = E_NOT_OK;
    Application_Init();

    while (1) {       
        ret = GPIO_Led_Turn_On(&led1);
        for (uint8 sec = 15; sec > 0; sec--) {
            for (uint8 i = 0; i < 50; i++) {
                ret = GPIO_Pin_Write_Logic(&seg_chan2, GPIO_Low);
                ret = GPIO_Pin_Write_Logic(&seg_chan1, GPIO_High);
                ret = GPIO_Segment_Write_Number(&seg1, sec / 10);
                _delay_ms(10);
                ret = GPIO_Pin_Write_Logic(&seg_chan1, GPIO_Low);
                ret = GPIO_Pin_Write_Logic(&seg_chan2, GPIO_High);
                ret = GPIO_Segment_Write_Number(&seg1, sec % 10);
                _delay_ms(10);
            }
        }
        ret = GPIO_Led_Turn_Off(&led1);
        _delay_ms(5);
        ret = GPIO_Led_Turn_On(&led2);
        
        ret = GPIO_Led_Turn_On(&led2);
        for (uint8 sec = 5; sec > 0; sec--) {
            for (uint8 j = 0; j < 50; j++) {
                ret = GPIO_Pin_Write_Logic(&seg_chan2, GPIO_Low);
                ret = GPIO_Pin_Write_Logic(&seg_chan1, GPIO_High);
                ret = GPIO_Segment_Write_Number(&seg1, sec / 10);
                _delay_ms(10);
                ret = GPIO_Pin_Write_Logic(&seg_chan1, GPIO_Low);
                ret = GPIO_Pin_Write_Logic(&seg_chan2, GPIO_High);
                ret = GPIO_Segment_Write_Number(&seg1, sec % 10);
                _delay_ms(10);
            }
        }
        ret = GPIO_Led_Turn_Off(&led2);
        _delay_ms(5);
        ret = GPIO_Led_Turn_On(&led3);
        
        ret = GPIO_Led_Turn_On(&led3);
        for (uint8 sec = 10; sec > 0; sec--) {
            for (uint8 k = 0; k < 50; k++) {
                ret = GPIO_Pin_Write_Logic(&seg_chan2, GPIO_Low);
                ret = GPIO_Pin_Write_Logic(&seg_chan1, GPIO_High);
                ret = GPIO_Segment_Write_Number(&seg1, sec / 10);
                _delay_ms(10);
                ret = GPIO_Pin_Write_Logic(&seg_chan1, GPIO_Low);
                ret = GPIO_Pin_Write_Logic(&seg_chan2, GPIO_High);
                ret = GPIO_Segment_Write_Number(&seg1, sec % 10);
                _delay_ms(10);
            }
        }
        ret = GPIO_Led_Turn_Off(&led3);
        _delay_ms(5);
    }
    return EXIT_SUCCESS;
}

void Application_Init(void) {
    Ecual_Init();

}