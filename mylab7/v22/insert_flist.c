#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"


extern person_t *head;

void insert_flist(unsigned short a, char *b, int c, int d, int e){
//call malloc for person_t
person_t *temp, *in = head;
temp=malloc(sizeof(person_t));
temp->name=(char *)malloc(strlen(b)*sizeof(char));

if(head==NULL){
//store first element
head=malloc(sizeof(person_t));
head->name=(char *)malloc(strlen(b)*sizeof(char));
head->age=a;
strcpy(head->name,b);
head->vertical.feet=c;
head->vertical.inches=d;
head->idenifier=e;
head->next=NULL;
}else{
//store element in temp
temp->age=a;
strcpy(temp->name,b);
temp->vertical.feet=c;
temp->vertical.inches=d;
temp->idenifier=e;
temp->next=head;
head=temp;


}



}
