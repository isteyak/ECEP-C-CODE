#include "main.h"

void init_i2c_config(void)
{
	//config PORTC as bidirectionaal */
	SDA = 1;
	SCL = 1;

	/* config MSSP module */
	SSPSTAT = 0x80;
	SSPCON1 = 0x28;

	//calculated according to SSPADD = ((Fosc/Bit-rate) / 4) - 1
	//Fosc = 20MHz and bit rate 1Mhz
	SSPADD = 4;
}
