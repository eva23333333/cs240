#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

person_t *head;
void read_person_data(FILE *);
void write_person_data(FILE *);
void insert_plist(unsigned short , char *, int , int , int );

void main(int argc,char **argv){
FILE *fp;
FILE *fn;

//openfile to read and write
fp = fopen(argv[1],"r");
  if(fp == NULL){ 
        fprintf(stderr,"file  does not exist\n");
       }
read_person_data(fp);
  
 fn=fopen(argv[2],"w");
if(fn == NULL){ 
        fprintf(stderr,"file  does not exist\n");
        }


fclose(fp);
write_person_data(fn);
fclose(fn);
}
