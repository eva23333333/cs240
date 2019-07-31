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
/*
int vecdim=1;


int i;
int r;


  f2 = fopen("vectors_out.dat","w");
  if(f2 == NULL) {
        fprintf(stderr,"file  does not exist\n");
        exit(1);
  }     
printf("here1");


printf("here2");
//printf("vecdim:%d",vecdim);
  for( i=0;i<vecdim;i++){
printf("here3"); 
read_vecs((A+i),(B+i),&vecdim);
  }


for(i=0;i<vecdim;i++){
calc_diff((A+i),(B+i),i);

calc_sum((A+i),(B+i),i);
}

for(i=0;i<vecdim;i++){
fprintf(f2,"%.3f ",C+i);

}
fprintf(f2,"\n");

for(i=0;i<vecdim;i++){
fprintf(f2,"%.3f ",D+i);

}

fprintf(f2,"\n");
fprintf(f2,"%.3f \n",calc_max(A,vecdim));
fprintf(f2,"%.3f  \n",calc_min(B,vecdim)); 

//close(f1);
//close(f2);
*/
}
