#include "main.h"
#include "digital_keypad.h"

void glow_on_press(unsigned char key)
{
unsigned int i;
unsigned int wait;
unsigned int wait1;
#if 0
	if (key == SWITCH1)
	{
		LED1 = !LED1;
	}
	else
	{
	}
#else
	if (key == SWITCH1)
	{
		LED_ARRAY = OFF;

		for(i = 0; i < 8; i++)
		{
		    LED_ARRAY = LED_ARRAY | 0x80 >> i;

		for(wait = 500; wait--; )
		for(wait1 = 500; wait1--; );

		}
	}
	if (key == SWITCH2)
	{
		LED_ARRAY = OFF;

		for(i = 0; i < 8; i++)
		{
		    LED_ARRAY = LED_ARRAY | 0x01 << i;

		for(wait = 500; wait--; )
		for(wait1 = 500; wait1--; );

		}
	}
/*	else
	{
		LED1 = OFF;
	}*/
#endif
}

static void init_config(void)
{
	ADCON1 = 0x0F;

	LED_ARRAY = OFF;
	TRISB = 0x00;

	init_digital_keypad();
}

void main(void)
{
	unsigned char key;
unsigned int i;
unsigned int wait;
unsigned int wait1;
unsigned int j;
	init_config();
LED_ARRAY = 0x01;
	while (1)
	{

		LED_ARRAY = LED_ARRAY | 0x01 << j;

		for(wait = 500; wait--; )
		for(wait1 = 500; wait1--; );
		j++;
		key = read_digital_keypad(STATE_CHANGE);
		glow_on_press(key);
		for (i = 5000; i--; );
		if(j == 8)
		{
		    j = 0;
		}


	}
}
