#include "pic_specific.h"

void interrupt isr(void)
{
	static unsigned short count;

	if (TMR0IF)
	{
		TMR0 = TMR0 + 8;

		if (count++ == 20000)
		{
			count = 0;
			LED1 = !LED1;
		}

		TMR0IF = 0;
	}
}
