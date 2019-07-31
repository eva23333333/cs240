 /*where the first and second argument are pointers to the input vectors, and the third argument passes vecdim by value. 
*/
#include "vsubsum.h"
#include <stdio.h>
extern double *C;
void calc_diff(double *a, double *b, int c ){
C[c]=*a-*b;
}
             
