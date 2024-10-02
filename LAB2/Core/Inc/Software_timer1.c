/*
 * Software_timer1.c
 *
 *  Created on: Sep 21, 2024
 *      Author: win
 */
#include "Software_timer.h"
#include "main.h"
#include "LED_BLINKED.h"
const int MAX_LED = 4;
int index_led = 0;
int led_buffer [4]={1,2,3,4};
int timer1_counter = 0 ;
int timer1_flag = 0 ;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0 ;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0 ){
			timer1_flag = 1;
		}
	}
}

void update7SEG(int index){
   			switch(index){
   			case 0:
   				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
   				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
   				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
   			    HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
   			    display7SEG(led_buffer [0]);
   				break;
   			case 1:
   				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
   				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
   				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
   				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
   				display7SEG(led_buffer [1]);

   				break;
   			case 2:
   				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
   				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
   				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
   				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
   				display7SEG(led_buffer [2]);
   				break;
   			case 3:
   				HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
   				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
   				HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
   				HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
   				display7SEG(led_buffer [3]);
   				break;
   			default:
   				break;
   			}
   		}
