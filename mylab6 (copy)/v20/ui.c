#include "vsubsum.h"
#include <stdio.h>
#include <stdlib.h>

//declare C:difference  D:sum  as global
double C[MAXSZ];
double D[MAXSZ];

double min=0;
double max=0;



void main(){
//declare local variables
double A[MAXSZ];
double B[MAXSZ];
int vecdim;


char x[100];
int c=0;
char o;
short s;
char *line=NULL;
size_t len=0;
ssize_t read;
int *vector;
int vecsize;
int i;

FILE *f1;
f1=fopen("vectors_in.dat","r");

FILE *f2;
f2=fopen("vectors_out.dat","w");

  // open failed
  if(f1 == NULL) {
        fprintf(stderr,"file test.dat does not exist\n");
        exit(1);
  }
 

  fscanf(f1,"%d",&vecdim);

   vector = (int *) malloc(vecsize*sizeof(int));
  if(vector == NULL) {
	fprintf(stderr,"malloc failed\n");
	exit(1);
  }

  for(i=0; i<vecsize; i++)
	fscanf(f1,"%d",&vector[i]);

  for(i=0; i<vecsize; i++)
	fprintf(stdout,"%d\n",vector[i]);

  free(vector);



fclose(f1);
fclose(f2);
}
