
#include "bsp_led.h"
void LED_GPIO_Init(void)	//LED≥ı ºªØPB0 PB1 PB2
{
    GPIO_InitTypeDef LED_GPIO_Init;
    __HAL_RCC_GPIOB_CLK_ENABLE();

    LED_GPIO_Init.Mode=GPIO_MODE_OUTPUT_PP;
    LED_GPIO_Init.Pin=GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_10;
    LED_GPIO_Init.Pull=GPIO_NOPULL;
    LED_GPIO_Init.Speed=GPIO_SPEED_FREQ_LOW;

    HAL_GPIO_Init(GPIOB,&LED_GPIO_Init);

}

