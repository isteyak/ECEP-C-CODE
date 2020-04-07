#include "main.h"


void main()
{
	init_i2c_config();
		unsigned char add = 0x00;
	//	while (add <= 0x05)
	//	{
				 write_external_eeprom(0x00, 0); 
				 write_external_eeprom(0x01, 0); 
				 write_external_eeprom(0x02, 0); 
				 write_external_eeprom(0x03, 0); 
				 write_external_eeprom(0x04, 0); 

	//	}
}
