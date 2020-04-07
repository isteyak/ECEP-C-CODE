#include "main.h"
#include "digital_keypad.h"

void glow_on_press(unsigned char key)
{
unsigned int i, j;
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

	if (key == SWITCH3)
	{
		LED_ARRAY = 0xFF;

		for (i = 0; i < 8; i++)
		{
			LED_ARRAY = LED_ARRAY & 0x7f >> i;
			for (wait = 500; wait--;)
			for (wait1 = 500; wait1--;);
		}
	}

	if (key == SWITCH4)
	{
		LED_ARRAY = 0xFF;

		for (i = 0; i < 8; i++)
		{
			LED_ARRAY = LED_ARRAY & 0xFC << i;
			
			for (wait = 500; wait--;)
			for (wait1 = 500; wait1--;);
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
unsigned int i, k, l;
unsigned int wait;
unsigned int wait1;
unsigned int j;
	init_config();
//LED_ARRAY = 0x00;
	while (1)
	{

		key = read_digital_keypad(STATE_CHANGE);
		
		if (key == SWITCH1 || key == SWITCH2 || key == SWITCH3 || key == SWITCH4)
		{
			i = key;   
		}

		glow_on_press(i);

	}
}
