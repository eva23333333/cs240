#include <stdio.h>
#include <stdlib.h>
#include "person.h"
extern person_t *head;
void delete_person_data(unsigned short a, int b){

person_t *in;
in=head;
int c=0;
while(in!=NULL){
if(c==0){
	//if deleting first element 64
	if((in->age)==a){
	  if((in->idenifier)==b){
 		 head=in->next; 
 		 in=NULL;
 		 break;
  		}
	}	
}
       if(in->next!=NULL){	
	       person_t *cur=in->next;
		if((cur->next)!=NULL){
   	
			//deleting 31 avoiding last two element
       			if((cur->age)==a){
        			 if((cur->idenifier)==b){
	 				in->next=cur->next;
					 break;
	 				}
      			 }	
	
		}else{

      			 //deleting 22 cur->next is NULL
       
        	if((cur->age)==a){
         		 if((cur->idenifier)==b){
				in->next=NULL;
				break;
           		 }
	 	 }
		}

	}

c++;
in=in->next;
}



} 
