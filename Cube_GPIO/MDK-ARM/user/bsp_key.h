
#ifndef _BSP_KEY_H_
#define _BSP_KEY_H_

#include "stm32f1xx.h"

#define KEY_NO 1
#define KEY_OFF 0


//初始化KEY灯对应的GPIO引脚
void KEY_GPIO_Init(void);
//扫描按键
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_pin);
//状态转换
uint8_t* Key_State(GPIO_TypeDef* GPIOx,uint16_t GPIO_pin,uint8_t *state);
#endif

