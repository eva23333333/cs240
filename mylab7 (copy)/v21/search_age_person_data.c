#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"
extern person_t *head;

void search_age_person_data(unsigned short a){

person_t *in;
in=head;
//printf("age:%d",in->age);
while(in!=NULL){
       	if((in->age)==a){
  fprintf(stdout,"%d %s %d %d %d \n",in->age,in->name,in->vertical.feet,in->vertical.inches,in->idenifier);
  }
in=in->next;

}
}
