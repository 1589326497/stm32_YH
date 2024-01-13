#ifndef	_BSP_LED_H_
#define	_BSP_LED_H_
#include "stm32f1xx.h"

#define LED_PB0_ON		do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET);}while(0)
#define LED_PB0_OFF		do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_RESET);}while(0)
#define LED_PB0_Toggle 	do{HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_0);}while(0)
#define LED_PB1_ON		do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET);}while(0)
#define LED_PB1_OFF		do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_RESET);}while(0)
#define LED_PB1_Toggle 	do{HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_1);}while(0)
#define LED_PB10_ON		do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,GPIO_PIN_SET);}while(0)
#define LED_PB10_OFF		do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10,GPIO_PIN_RESET);}while(0)
#define LED_PB10_Toggle 	do{HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_10);}while(0)

//初始化LED灯对应的GPIO引脚
void LED_GPIO_Init(void);


#endif

