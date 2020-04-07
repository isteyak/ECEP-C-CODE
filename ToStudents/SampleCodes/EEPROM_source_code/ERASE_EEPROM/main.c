#include "main.h"


void main()
{
		unsigned char add = 5;
				 write_internal_eeprom(0, '1'); 
				// for(int i = 0; i <= 250; i++);
				 write_internal_eeprom(1,  '1'); 
				 //for(int i = 0; i <= 250; i++);
				 write_internal_eeprom(2, '1'); 
				 //for(int i = 0; i <= 250; i++);
				 write_internal_eeprom(3, '1'); 
				// for(int i = 0; i <= 250; i++);
				 write_internal_eeprom(4, 0); 
		/*		 while(add <= 255)
				 {
				 	 write_internal_eeprom(add++, 0);
				 for(int i = 0; i <= 500; i++);
				 }*/
				 while(1);
}
