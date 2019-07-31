#include <stdio.h>
#include <stdlib.h>
#include "person.h"

void insert_flist(unsigned short , char *, int , int , int );

void read_person_data(FILE *fp){
	//organize them as priority list	//first element pointed to head
	//last element next field=NULL

unsigned short a;
char *b;
int c;
int d; 
int e;

while(fscanf(fp,"%hd %s %d %d %d",&a,b,&c,&d,&e)!=EOF){
     insert_flist(a,b,c,d,e);
		}
}









