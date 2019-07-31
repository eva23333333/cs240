#include "vsubsum.h"
#include <stdio.h>
#include <stdlib.h>


double calc_max(double *, int);
double calc_min(double *, int);
void calc_diff(double *, double *, int);
void calc_sum(double *, double *, int);
extern int read_vecs(double **, double **, int * );
//declare C:difference  D:sum  as global
double *C;
double *D;
FILE *f2;
double min=0;
double max=0;

void main() {
//local variables
int n;
double *A;
double *B;
// C=(double *) malloc(sizeof(double)*vecdim);
// D=(double *) malloc(sizeof(double)*vecdim);

//check input validation
read_vecs(&A,&B,&n);

for(int i=0;i<n;i++){
printf("%lf ",A[i]);
}

printf("\n");

for(int i=0;i<n;i++){
printf("%lf ",B[i]);
}

printf("\n");
}
