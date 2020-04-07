#ifndef INIT_I2C_CONFIG_H
#define INIT_I2C_CONFIG_H

#define CONTROL_IN 0xA0
#define CONTROL_OUT 0xA1
#define SDA PORTCbits.RC4
#define SCL PORTCbits.RC3
#define WAIT_MSSP while(!PIR1bits.SSPIF); PIR1bits.SSPIF = 0;
#define ACK(data) if(SSPCON2bits.ACKSTAT) { i2c_fail(data); }

#define SEND_INFO(data) SSPBUF = data; WAIT_MSSP
#define START SSPCON2bits.SEN = 1; WAIT_MSSP
#define STOP SSPCON2bits.PEN = 1; WAIT_MSSP

#define RESTART SSPCON2bits.RSEN = 1; WAIT_MSSP
#define NACK SSPCON2bits.ACKEN = 1
void init_i2c_config(void);
#endif
