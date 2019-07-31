#include "vsubsum.h"
#include <stdio.h>
double max;
double calc_max(double* a,int b ){
//a is 1-d array, b is its size
//do not use funtion in math library
	double A;
	A=*a;
for(int i=1;i<b;i++){
	if(*(a+i)>A){
		A=*(a+i);
	}
}
max=A;	
printf("In function max : %lf",A);
return A;
}


