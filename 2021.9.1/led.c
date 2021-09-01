#include "led.h"

void LED_1_ON(void)
{
	P1=0xfe;
				
}

void LED_1_OFF()
{
	P1=0xff;
}