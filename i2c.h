			/*i2c.h*/
#ifndef __I2C_H__
#define __I2C_H__

#include"types.h"
//I2C Bus events
extern void i2cStart(void);
extern void i2cStop(void);
extern void i2cWrite(u8);
extern void i2cAck(void);
extern void i2cNoAck(void);
extern void i2cMasterAck(void);
extern u8 i2cRead(void);
extern void i2cReStart(void);

//Slave function protocols
extern void i2cDevWrite(u8,u8,u8);
extern u8 i2cDevRead(u8,u8);
extern void i2cDevPageWrite(u8*,u8,u8,u8);
extern void i2cDevPageRead(u8*,u8,u8,u8);
#endif
			/*end of i2c.h*/