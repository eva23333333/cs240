//first and second argument passes pointers to the input vectors and the third argument passes the pointer to vecdim. 
#include <stdio.h>
#include <stdlib.h>
#include "calc_sum.c"
#include "calc_diff.c"
#include "calc_min.c"
#include "calc_max.c"
extern double *D;
extern double *C;
int read_vecs(double **x, double **y, int *n){
//printf("start1");
//local variable
int i=0,j,k;
FILE *f1;
FILE *f2;
//OPEN FILE

 f1 = fopen("vectors_in.dat","r");
  if(f1 == NULL) {
        fprintf(stderr,"file  does not exist\n");
        return -1;
  }
//printf("inside read_vecs function");

 f2= fopen("vectors_out.dat","w");
   if(f1 == NULL) {
        fprintf(stderr,"file  does not exist\n");
        return -1;
  }

//READ DATA
fscanf(f1,"%d",&k);
  C=(double *) malloc(sizeof(double)*k);
 D=(double *) malloc(sizeof(double)*k);

*n=k;
*x=(double*)malloc(k*sizeof(double));
*y=(double*)malloc(k*sizeof(double));

if(*x==NULL||*y==NULL){
  fprintf(stderr,"malloc failed\n");
  return -3;
}

if(x==NULL||y==NULL){
  fprintf(stderr,"malloc failed\n");
}else{

//read first vector
for(i=0;i<*n;i++){
 if(fscanf(f1,"%lf",*x+i)!=1)
   return -1;

 if(fscanf(f1,"%lf",*y+i)!=1)
   return -1;
}
  
//assign value to C D


//printf("before");
for(i=0;i<k;i++){
 calc_diff((*x+i),(*y+i),i);
 calc_sum((*x+i),(*y+i),i);

}

for(i=0;i<k;i++){
fprintf(f2,"%.3f ",C[i]);
}
fprintf(f2,"\n");


for(i=0;i<k;i++){
fprintf(f2,"%.3f ",D[i]);
}
fprintf(f2,"\n");


fprintf(f2,"%.3f\n",calc_max(*x,k));
fprintf(f2,"%.3f\n",calc_min(*y,k));

}




}
