#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

person_t *head;
void read_person_data(FILE *);
void write_person_data(FILE *);
void insert_plist(unsigned short , char *, int , int , int );
void search_age_person_data(unsigned short );
void search_height_person_data(int ft1, int inch1, int ft2, int inch2);
void delete_person_data(unsigned short a, int b); 

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






unsigned short a=31;
//search_age_person_data(a);
int ft1=6;
int  inch1=11;
int ft2=5;
int inch2=9;
//search_height_person_data(ft1,inch1,ft2,inch2);

unsigned short x=31;
int y=111111;
delete_person_data(x,y);

person_t *in;
in=head;
while(in!=NULL){
printf("%d %s %d %d %d \n",in->age,in->name,in->vertical.feet,in->vertical.inches,in->idenifier);
in=in->next;
}


}
