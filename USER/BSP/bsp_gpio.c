#include "bsp_gpio.h"

void bsp_gpio_init()
{
    //输出
    {
        //打开时钟
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
        //初始化IO口
        {
            GPIO_InitTypeDef GPIO_InitStruct;

            GPIO_InitStruct.GPIO_Pin = GPIO_Pin_13;
            GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
            GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;

            GPIO_Init(GPIOC, &GPIO_InitStruct);
        }
    }
    //输入
    {
        //打开时钟
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
        //初始化IO口
        {
            GPIO_InitTypeDef GPIO_InitStruct;

            GPIO_InitStruct.GPIO_Pin = GPIO_Pin_15;
            GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPU;

            GPIO_Init(GPIOA, &GPIO_InitStruct);
        }
    }
}