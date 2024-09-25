/*
 * Q3.h
 *
 *  Created on: Sep 6, 2024
 *      Author: Asus
 */

#ifndef INC_Q3_H_
#define INC_Q3_H_
#include<main.h>

// LED_1 is used for GREEN1, LED_2 --- RED1, LED_3 --- YELLOW1, LED4__GREEN2,2 LED5__RED2, LED6_YELLOW2
#define RED_ON 0
#define YELLOW_ON 1
#define GREEN_ON 2
#define RED_TIME 5
#define YELLOW_TIME 2
#define GREEN_TIME 3

int state1=0;
int count_q3_1=0;
int state2=0;
int count_q3_2=0;

void LED_GREEN_1_on(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	state1=GREEN_ON;
	count_q3_1=GREEN_TIME;
}
void LED_GREEN_1_off(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
}
void LED_RED_1_on(){
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	state1=RED_ON;
	count_q3_1=RED_TIME;
}
void LED_RED_1_off(){
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
}
void LED_YELLOW_1_on(){
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	state1=YELLOW_ON;
	count_q3_1=YELLOW_TIME;
}
void LED_YELLOW_1_off(){
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
}


void lane1(){
	count_q3_1--;
	switch (state1) {
		case RED_ON:
			if(count_q3_1<=0){
				LED_RED_1_off();
				LED_GREEN_1_on();
			}
			break;
		case YELLOW_ON:
			if(count_q3_1<=0){
				LED_YELLOW_1_off();
				LED_RED_1_on();
			}
			break;
		case GREEN_ON:
			if(count_q3_1<=0){
				LED_GREEN_1_off();
				LED_YELLOW_1_on();
			}
			break;
		default:
			break;
	}
}

void LED_GREEN_2_on(){
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	state2=GREEN_ON;
	count_q3_2=GREEN_TIME;
}
void LED_GREEN_2_off(){
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
}
void LED_RED_2_on(){
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	state2=RED_ON;
	count_q3_2=RED_TIME;
}
void LED_RED_2_off(){
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
}
void LED_YELLOW_2_on(){
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	state2=YELLOW_ON;
	count_q3_2=YELLOW_TIME;
}
void LED_YELLOW_2_off(){
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
}


void lane2(){
	count_q3_2--;
	switch (state2) {
		case RED_ON:
			if(count_q3_2<=0){
				LED_RED_2_off();
				LED_GREEN_2_on();
			}
			break;
		case YELLOW_ON:
			if(count_q3_2<=0){
				LED_YELLOW_2_off();
				LED_RED_2_on();
			}
			break;
		case GREEN_ON:
			if(count_q3_2<=0){
				LED_GREEN_2_off();
				LED_YELLOW_2_on();
			}
			break;
		default:
			break;
	}
}
void create_state_q3(){
	LED_RED_1_on();
	LED_GREEN_1_off();
	LED_YELLOW_1_off();

	LED_RED_2_off();
	LED_GREEN_2_on();
	LED_YELLOW_2_off();
}

void q3_run(){

	lane1();
	lane2();
}
#endif /* INC_Q3_H_ */
