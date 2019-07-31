#include <stdio.h>

unsigned int revbits(unsigned int x){
int i;
unsigned int y, m, r;

  // set mask to 00 ... 01
  m = ~(~0 << 1);

     	// loop over all 32 bits from lsb to msb
  for(i=0; i<32; i++) {
        // zero out all bits but for lsb
        y = x & m;
  //      printf("%u", y);
	r=r <<1;
         r=r|y;
	// right shift to inspect the next significant bit
        x = x >> 1;
  }
  printf("\n");
  return r;
}

