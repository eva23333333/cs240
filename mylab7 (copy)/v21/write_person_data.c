#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

extern person_t *head;
void write_person_data(FILE *fp){
//output priority list by head into file
person_t *in;
in=head;

do{
fprintf(fp,"%d %s %d %d %d \n",in->age,in->name,in->vertical.feet,in->vertical.inches,in->idenifier);
in=in->next;

}while(in!=NULL);
 

}
