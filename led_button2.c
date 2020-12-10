#include <16F877.h>
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD
#use delay(clock=4M)
void main()
{

set_tris_b(0x00);
set_tris_d(0x03);

#define buton1 pin_d0
#define buton2 pin_d1

output_b(0);
int x;



   while(TRUE)
   {
     x=1;  
     if(input(buton1) == 1 ){
     /*
     output_b(1);1.port için 2^0 output(0b 00000001);
     delay_ms(100);    
     output_b(2);2.port için 2^1 output(0b 00000010);
     delay_ms(100);
     output_b(4);3.port için 2^3 parantez içi decimal olarak yazýlýr 0. pinden düþünerekten
     delay_ms(100);
     output_b(8);4.port için
     delay_ms(100);
     output_b(16);5.port için
     delay_ms(100);
     output_b(32);6.port için
     delay_ms(100);
     output_b(64);7.port için
     delay_ms(100);
     output_b(128);8.port için
     */
     for(int a=0;a<8;++a){
     
     
     output_b(x);
     delay_ms(100);
     x=x*2;
     
     }
     x=x/2;
     if(input(buton2)==1)
     {
     for(int a=0;a<8;++a){
     
     
     output_b(x);
     delay_ms(100);
     x=x/2;
     
     }
     
     }
    
     }
     
     
      
      
   }

}
