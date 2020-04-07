#include "main.h"
#include "external_interrupt.h"
#include "isr.h"

extern bit key_detected;

static void init_config(void)
{
	ADCON1 = 0x0F;

	TRISB7 = 0;
	TRISB0 = 1;

	init_external_interrupt();

	GIE = 1;
}

void main(void)
{
	unsigned short wait;
	unsigned short wait1;
         static bit once;
         init_config();

    while (1)
    {
		if(key_detected)
		{
			key_detected = 0;
			LED8 = !LED8;
		}
#if 0


		if(RB0 && once)
		{
		    once = 0;
		    key_detected = 1;
		}
		else if(!RB0)
		{
		    once = 1;
		}
#endif
		
		for (wait = 100; wait--; )
		for (wait1 = 10000; wait1--; );
    }
}
