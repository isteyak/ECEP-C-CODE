#include "pic_specific.h"
#include "main.h"
#include "timer0.h"

void init_config(void)
{
	/* Clear old content */
	PORTB = 0x00;

	/* Set PORTB as a Output */
	TRISB = 0x00;

	/* Config PORTB as digital */
	ADCON1 = 0x0E;

	init_timer0();

	/* Global Interrupt Enable */
	GIE = 1;
}

void main(void)
{
	init_config();

	while (1)
	{
		;
	}
}

