#include "bsp_key.h"

void KEY_GPIO_Init(void)	//KEY初始化PB12
{
	GPIO_InitTypeDef KEY_GPIO_Init;
	__HAL_RCC_GPIOB_CLK_ENABLE();
	
	KEY_GPIO_Init.Mode=GPIO_MODE_INPUT;
	KEY_GPIO_Init.Pin=GPIO_PIN_12;
	KEY_GPIO_Init.Pull=GPIO_PULLUP;
	KEY_GPIO_Init.Speed=GPIO_SPEED_FREQ_LOW;
	
	HAL_GPIO_Init(GPIOB,&KEY_GPIO_Init);
	
}

uint8_t Key_Scan(GPIO_TypeDef* GPIOx,uint16_t GPIO_pin)
{
	//判断按键是否被按下
	if(HAL_GPIO_ReadPin(GPIOx,GPIO_pin))
	{
		//按键被按下
		HAL_Delay(20);
		while(HAL_GPIO_ReadPin(GPIOx,GPIO_pin))
		{
			//松手检测
		}
		HAL_Delay(20);
		return KEY_NO;
	}
	else
	{
		//按键没有被按下
		return KEY_OFF;
	}
}

uint8_t* Key_State(GPIO_TypeDef* GPIOx,uint16_t GPIO_pin,uint8_t* state)
{
	
	if(Key_Scan(GPIOx,GPIO_pin))
	{
		*state=~*state;
	}
	return state;
}
	
	

