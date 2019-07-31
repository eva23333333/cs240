#include <stdio.h>
#include <stdlib.h>
#include "person.h"
extern person_t *head;
void search_height_person_data(int ft1, int inch1, int ft2, int inch2){
int  fl;
int  inl;
int  fh;
int  inh;
if(ft1>=ft2){
fh=ft1;
inh=inch1;
fl=ft2;
inl=inch2;
}else{
fh=ft2;
inh=inch2;
fl=ft1;
inl=inch1;
}
person_t *in;
in=head;
//printf("hf:%d hin:%d lf:%d li:%d \n",fh,inh,fl,inl );
while(in!=NULL){
// see if in.vertical is inbetween
//printf("in's feet:%d inches:%d \n",in->vertical.feet,in->vertical.inches);
if(((in->vertical.feet)<fh)||(((in->vertical.feet)==fh)&&((in->vertical.inches)<=inh)))
{  
// printf("meet high bound condition\n");  
  if(( (in->vertical.feet)>fl)||(((in->vertical.feet)==fl)&&(in->vertical.inches>=inl)))
{
 // printf("meet both condition\n");
  fprintf(stderr,"%d %s %d %d %d\n",in->age,in->name,in->vertical.feet,in->vertical.inches,in->idenifier);
}
in=in->next;
}

}
}
