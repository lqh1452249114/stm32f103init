#include "stm32f10x.h"

#include "bsp_sys.h"
#include "bsp_gpio.h"
#include "bsp_delay.h"

int main()
{
	delay_init();
	bsp_gpio_init();
	while(1)
	{
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(1000);
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(1000);
	}
}

