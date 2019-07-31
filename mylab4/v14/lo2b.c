#include <stdio.h>


void lo2b(unsigned short a){

unsigned short i=a;
unsigned short m;
unsigned short r;
//inspects the two least significant bits of the input

//make mask 0011
m=~(~0<<2);

//by performing an & with mask
r=m&i;

//lo2b() inspects the two least significant bits of the input 

//by performing an & with a suitable mask that blocks out/ignores all other bit

//It outputs the 2-bit value using printf() in decimal format.

printf("%d\n",r);





}
