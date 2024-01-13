
#ifndef _BSP_KEY_H_
#define _BSP_KEY_H_

#include "stm32f1xx.h"

#define KEY_NO 1
#define KEY_OFF 0


//��ʼ��KEY�ƶ�Ӧ��GPIO����
void KEY_GPIO_Init(void);
//ɨ�谴��
uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_pin);
//״̬ת��
uint8_t* Key_State(GPIO_TypeDef* GPIOx,uint16_t GPIO_pin,uint8_t *state);
#endif

