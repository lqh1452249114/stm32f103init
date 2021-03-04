#ifndef _BSP_DELAY_H
#define _BSP_DELAY_H

#include "main.h"  
 
void delay_init(void);
void delay_ms(u16 nms);
void delay_us(u32 nus);

#endif
