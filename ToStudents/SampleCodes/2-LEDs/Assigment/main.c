#include "main.h"

static void init_config(void)
{
	ADCON1 = 0x0F;

	LED_ARRAY = OFF;
	
	TRISB = 0x00;
}

void main(void)
{
	unsigned short i = 0;
	unsigned short j = 0;
	unsigned short k = 0;
	unsigned short l = 0;
	unsigned short wait = 0;
	unsigned short wait1 = 0;

	init_config();
	LED_ARRAY = 0x01;
	while (1)
	{

for(i = 0; i < 8; i++)
{
		LED_ARRAY = LED_ARRAY | 0x01 << i;

		for (wait = 500; wait--; )
		for (wait1 = 500; wait1--; );

}

for(j = 0; j < 8; j++)
{
		LED_ARRAY = LED_ARRAY & 0x7f >> j;
		for (wait = 500; wait--; )
		for (wait1 = 500; wait1--; );
}

for(k = 0; k < 8; k++)
{
		LED_ARRAY = LED_ARRAY | 0x80 >> k;
		for (wait = 500; wait--; )
		for (wait1 = 500; wait1--; );
}

for(l = 0; l < 8; l++)
{
		LED_ARRAY = LED_ARRAY & 0xFC << l;

		for (wait = 500; wait--; )
		for (wait1 = 500; wait1--; );

}
}

}
