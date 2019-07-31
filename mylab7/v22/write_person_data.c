#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

extern person_t *head;
void write_person_data(FILE *fp){
//output priority list by head into file


do{
fprintf(fp,"%d %s %d %d %d \n",head->age,head->name,head->vertical.feet,head->vertical.inches,head->idenifier);
head=head->next;

}while(head!=NULL);
 

}
