//main_24c01.c

#include<reg51.h>
#include"i2c.h"
#include"types.h"
#include"delay.h"

data u8 temp _at_ 0x30;

main(){
	delay_ms(3000);
	temp='q';
	i2cDevWrite(0xa0,0x7f,temp);
	temp=0;
	temp=i2cDevRead(0xa0,0x7f);
	if(temp=='q')
		P2&=~(1<<0);
while(1);
}
