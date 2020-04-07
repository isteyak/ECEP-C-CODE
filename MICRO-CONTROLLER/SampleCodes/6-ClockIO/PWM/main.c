#include "main.h"
#include "digital_keypad.h"

#define PERIOD			100

void software_pwm(void)
{
	unsigned char key;
	static unsigned short wait = 0;
	static unsigned char prog_cycle;
	static unsigned char duty_change = 50;

	key = read_digital_keypad(LEVEL);

	if (!wait--)
	{
		wait = 10000;

		if (key == SWITCH1)
		{
			if (duty_change != PERIOD)
			{
				duty_change++;
			}
		}

		if (key == SWITCH2)
		{
			if (duty_change != 0)
			{
				duty_change--;
			}
		}
	}

	if (prog_cycle < duty_change)
	{
		LED1 = ON;
	}
	else
	{
		LED1 = OFF;
	}

	if (prog_cycle++ == PERIOD)
	{
		prog_cycle = 0;
	}
}

static void init_config(void)
{
	ADCON1 = 0x0F;

	LED1 = OFF;
	
	TRISB0 = 0;

	init_digital_keypad();
}

void main(void)
{
	init_config();

	while (1)
	{
		software_pwm();
	}
}
