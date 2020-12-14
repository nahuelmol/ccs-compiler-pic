#include<16f876.h>

#fuses XT, NOWDT
#use delay(clock=4000000)

#BYTE TRISB = 0x86
#BYTE PORTB = 0x86

#define onesecond 1000

void main(){
   
   bit_clear(TRISB,0); //use bit_clear to set pins as output, and pointing the pin with the number of the second argument in "()"
   bit_clear(PORTB,0); //then the same as above
   
   while(1){
      
      bit_set(PORTB,0);
      delay_ms(onesecond);
      bit_clear(PORTB,0);
      delay_ms(onesecond);

   };
   
}
