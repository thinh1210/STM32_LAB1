/*
 * Q4.h
 *
 *  Created on: Sep 6, 2024
 *      Author: Asus
 */

#ifndef Q4_H_
#define Q4_H_
#include<main.h>

const int16_t array_seg_pin[]={
		SEG_0_Pin,
		SEG_1_Pin,
		SEG_2_Pin,
		SEG_3_Pin,
		SEG_4_Pin,
		SEG_5_Pin,
		SEG_6_Pin,
};
int inter=6;
void test(){
	HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], SET);
	HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], SET);
	HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], SET);
	HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], SET);
	HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
	HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
	HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], SET);

	HAL_GPIO_WritePin(GPIOA, array_seg_pin[inter], RESET);
	inter--;
	if(inter<0){
		inter=6;
	}
}

void display7SEG ( int number){
	switch (number) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOA, array_seg_pin[6], RESET);
			break;

		default:
			break;
	}
}
#endif /* Q4_H_ */
