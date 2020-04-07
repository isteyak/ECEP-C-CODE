#ifndef I2C_H
#define I2C_H


void i2c_fail(unsigned char status);
void write_external_eeprom(unsigned char address, unsigned char data);
unsigned char read_external_eeprom(unsigned char);
#endif
