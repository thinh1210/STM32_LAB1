/*
 * Q2.h
 *
 *  Created on: Sep 6, 2024
 *      Author: Asus
 */

#ifndef INC_Q2_H_
#define INC_Q2_H_
#include<main.h>
// LED_1 is used for GREEN, LED_2 --- RED, LED_3 --- YELLOW

void init_Q2(){
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
}
#define RED_ON 0
#define YELLOW_ON 1
#define GREEN_ON 2
#define RED_TIME 5
#define YELLOW_TIME 2
#define GREEN_TIME 3
int state=0;
int count_q2=0;
void LED_GREEN_on(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	state=GREEN_ON;
	count_q2=GREEN_TIME;
}
void LED_GREEN_off(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
}
void LED_RED_on(){
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	state=RED_ON;
	count_q2=RED_TIME;
}
void LED_RED_off(){
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
}
void LED_YELLOW_on(){
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	state=YELLOW_ON;
	count_q2=YELLOW_TIME;
}
void LED_YELLOW_off(){
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
}
void create_state_Q2(){
	LED_GREEN_off();
	LED_YELLOW_off();
	LED_RED_on();
	state=RED_ON;
}
void Q2_run(){
	switch (state) {
		case RED_ON:
			if(count_q2<=0){
				LED_RED_off();
				LED_GREEN_on();
			}
			break;

		case YELLOW_ON:
			if(count_q2<=0){
				LED_YELLOW_off();
				LED_RED_on();
			}
			break;
		case GREEN_ON:
			if(count_q2<=0){
				LED_GREEN_off();
				LED_YELLOW_on();
			}
			break;
		default:
			break;
	}
	count_q2--;
}
#endif /* INC_Q2_H_ */
