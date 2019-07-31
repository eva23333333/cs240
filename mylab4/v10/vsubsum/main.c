#include "vsubsum.h"
#include <stdio.h>
#include <stdlib.h>

//declare C:difference  D:sum  as global
double C[MAXSZ];
double D[MAXSZ];

double min=0;
double max=0;

void print_result(int);

main(){
//declare local variables
double A[MAXSZ];
double B[MAXSZ];
int vecdim;
scanf("%d",&vecdim);

for(int i=0;i<vecdim;i++){
int r=read_vecs((A+i),(B+i),i);
if(r==-1){
fprintf(stderr,"wrong input");
printf("\n");
exit(1);
}
calc_diff((A+i),(B+i),i);
calc_sum((A+i),(B+i),i);

}

print_result(vecdim);

}

void print_result(int a){
	for(int i=0;i<a;i++){
		printf("%lf %lf ",C[i],D[i]);
		printf("\n");
	}
        printf("%s","max in C");
	calc_max(C,a);
 	printf("%lf",max);
	printf("\n");

	printf("%s","min in C");
        calc_min(C,a);

	printf("%lf",min);
	printf("\n");
}



