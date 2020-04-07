#include "main.h"

static void init_config(void)
{
	ADCON1 = 0x0F;

	LED_ARRAY = OFF;
	
	TRISB = 0x00;
}

void main(void)
{
	unsigned short i;

	init_config();
unsigned short L = 0x55;
	while (1)
	{
	//	LED_ARRAY = 0x55;
//		for (i = 50000; i--; );
LED_ARRAY = ~L;
		//LED_ARRAY = 0xAA;
		for (i = 50000; i--; );
	}
}
