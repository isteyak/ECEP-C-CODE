#include "main.h"

void i2c_fail(unsigned char status)
{
	SSPCON2bits.PEN = 1;
	WAIT_MSSP;
	PORTB = status;
	while(1);
}

void write_external_eeprom(unsigned char address, unsigned char data)
{
	START;
	SEND_INFO(CONTROL_IN);
	ACK(0b00000001);
	SEND_INFO(address);
	ACK(0b00000011);
	SEND_INFO(data);
	ACK(0b00000111);
	STOP;
}

unsigned char read_external_eeprom(unsigned char address)
{
	START;
	SEND_INFO(CONTROL_IN);
	ACK(0b01001111);
	SEND_INFO(address);
	ACK(0b00011111);
	RESTART;
	SEND_INFO(CONTROL_OUT);
	ACK(0b00111111);

	//change to recieve mode
	SSPCON2bits.RCEN = 1;
	WAIT_MSSP;

	NACK;
	STOP;
	return SSPBUF;
}
