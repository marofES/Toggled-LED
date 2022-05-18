#include<avr/io.h>
#include<util/delay.h>

int main(void){
	DDRD = 0xFF;//portD is Output
	PORTD = 0x55; //0b 10101010

	while(1){
		PORTD ^= 0xFF; // all Low
		_delay_ms(1000);
	}
}
