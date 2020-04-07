#include "pic_specific.h"
#include "main.h"
#include "matrix_keypad.h"
#include "clcd.h"

void check_matrix_keypad(void)
{
	unsigned char key;
	static unsigned char i;

	key = read_switches(LEVEL_CHANGE);

	if (key != ALL_RELEASED)
	{
		clcd_print("Key ", LINE2(1));
		clcd_putch('0' + (key / 10), LINE2(5));
		clcd_putch('0' + (key % 10), LINE2(6));
		clcd_print(" Pressed ", LINE2(7));
	}
	else
	{
		clcd_print(" No Key Pressed ", LINE2(0));
	}
}

void init_config(void)
{
	init_matrix_keypad();
	init_clcd();

	clcd_print(" Matrix  Keypad ", LINE1(0));
}

void main(void)
{
	init_config();

	while(1)
	{
		check_matrix_keypad();
	}
}
