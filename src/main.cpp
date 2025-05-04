#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void){
  DDRD |=0xC0; 
  PORTD &=~(0xC0);
  DDRD &=~(0x20);
  PORTD |=0x20

  char flag = 0;

  while(1){
    if(!(PIND & 0x20)){
      _delay_ms(100);
      switch(flag){
        caso 0:
        PORD |=(0X80)
        flag = 1;
        break;

        case 1:
        PORTD &= ~(0xC0);
        _delay_ms(50);
        PORTD |= (0x40);

        flag = 2
        break;
        
        case 2:
        PORTD &=~(0xC0);
        flag= 0;
        break;
      
      }
    }
  }
}