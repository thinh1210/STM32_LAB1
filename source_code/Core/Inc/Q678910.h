/*
 * Q5.h
 *
 *  Created on: Sep 6, 2024
 *      Author: Asus
 */

#ifndef INC_Q678910_H_
#define INC_Q678910_H_

#include<main.h>
#include<math.h>
int arr_led_pin[]={
		LED_1_Pin,
		LED_2_Pin,
		LED_3_Pin,
		LED_4_Pin,
		LED_5_Pin,
		LED_6_Pin,
		LED_7_Pin,
		LED_8_Pin,
		LED_9_Pin,
		LED_10_Pin,
		LED_11_Pin,
		LED_12_Pin,
};
GPIO_TypeDef *arr_led_port[]={
		LED_1_GPIO_Port,
		LED_2_GPIO_Port,
		LED_3_GPIO_Port,
		LED_4_GPIO_Port,
		LED_5_GPIO_Port,
		LED_6_GPIO_Port,
		LED_7_GPIO_Port,
		LED_8_GPIO_Port,
		LED_9_GPIO_Port,
		LED_10_GPIO_Port,
		LED_11_GPIO_Port,
		LED_12_GPIO_Port,
};
void test_sequence(){
	for(int i=0; i<12; i++){
		HAL_GPIO_WritePin(GPIOB,arr_led_pin[i], SET);
		HAL_Delay(100);
		HAL_GPIO_WritePin(GPIOB, arr_led_pin[i], RESET);
	}
}
void turn_on_all_led(){
	for(int i=0; i<12; i++){
		HAL_GPIO_WritePin(GPIOB,arr_led_pin[i], SET);
	}
}
void setNumberOnClock(int num){
	if(num<0|| num>11) return;
	HAL_GPIO_WritePin(GPIOB, arr_led_pin[num], SET);
}
void clearNumberOnClock(int num){
	if(num<0|| num>11) return;
	HAL_GPIO_WritePin(GPIOB, arr_led_pin[num], RESET);
}
void clearAllClock(){
	for(int i=0; i<12; i++){
		HAL_GPIO_WritePin(GPIOB,arr_led_pin[i], RESET);
	}
}
int second=0;
int minute=0;
int hour=0;

int second_on_screen=0;
int minute_on_screen=0;
int hour_on_screen=0;


void create_state(){
	second_on_screen=second/5;
	minute_on_screen=minute/5;
	hour_on_screen=hour;
	setNumberOnClock(second_on_screen);
	setNumberOnClock(minute_on_screen);
	setNumberOnClock(hour_on_screen);
}
void update_clock(){
	if(floor(second/5) != second_on_screen ){
		clearNumberOnClock(second_on_screen);
		second_on_screen=second/5;
	}
	if(floor(minute/5) != minute_on_screen){
		clearNumberOnClock(minute_on_screen);
		minute_on_screen=minute/5;
	}
	if(hour!=hour_on_screen){
		clearNumberOnClock(hour_on_screen);
		hour_on_screen=hour;
	}
	setNumberOnClock(second_on_screen);
	setNumberOnClock(minute_on_screen);
	setNumberOnClock(hour_on_screen);


}
void ex10(){
	second++;
	if(second >=60){

		second=0;
		minute++;
	}
	if(minute>=60){
		minute=0;
		hour++;
	}
	if(hour>=12){
		hour=0;
	}
	update_clock();
}

#endif /* INC_Q678910_H_ */
