/*
 * Q1.h
 *
 *  Created on: Sep 5, 2024
 *      Author: Asus
 */
#include<main.h>
#ifndef INC_Q1_H_
#define INC_Q1_H_

void init_q1(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin );
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}
int count_q1=0;

void create_state(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
}
void q1_run(){
	if(count_q1>=2){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin );
		HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
	}
	count_q1++;
}
#endif /* INC_Q1_H_ */
