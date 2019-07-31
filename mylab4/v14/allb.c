#include <stdio.h>

void allb(unsigned int a){
//that outputs all the bits of the input on a single line (no space between bits). Print the least significant bit first, followed by the second least significant bit, and so forth. 
int i;
unsigned int m=1;

for(i=0;i<32;i++){
printf("%d",m&a);
a=a>>1;
}
printf("\n");
}
