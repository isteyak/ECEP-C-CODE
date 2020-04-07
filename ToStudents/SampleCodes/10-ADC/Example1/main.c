#include "main.h"
#include "adc.h"

void glow_led(unsigned short adc_reg_val)
{
	char buff[5];
	unsigned char i;

    if (adc_reg_val > 512)
    {
        LED1 = ON;
    }
    else
    {
        LED1 = OFF;
    }

	i = 3;
	do
	{
		buff[i] = (adc_reg_val % 10) + '0';
		adc_reg_val = adc_reg_val / 10;
	} while (i--);
	buff[4] = '\0';

	clcd_print(buff, LINE2(0));
}

static void init_config(void)
{
	LED1 = OFF;

	TRISB0 = 0;

    init_adc();
}

void main(void)
{
    unsigned short adc_reg_val;

    init_config();

    while (1)
    {
        adc_reg_val = read_adc(CHANNEL4);
        glow_led(adc_reg_val);
    }
}
