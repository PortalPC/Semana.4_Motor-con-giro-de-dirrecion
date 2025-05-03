#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

in main(void){
  DDRD |=0xC0; 
  PORTD &=~(0xC0);
  DDRD &=~(0x20);
  PORTD |=0x20

  char flag=0;

  while(1){
    if(!(PIND & 0x20))){
      _delay_ms(100);
      switch(flag);
      switch(flag){
        caso 0:
        PORD |=(0X80)
        flag = 1;
        break;

    
      }
    }
  }
}