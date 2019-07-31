#include <stdio.h>
#include <stdlib.h>
#include "revbits.c"
unsigned int checkURL();
char c='0';
char domname[100];
char domnameIP[100];

void main(){

	//read input
	int co=0;
	unsigned int r;
       int jj=0;

	while((c=getchar())!='\n'){

		//rules of change value
       		 if((int)c>=97 && (int)c<=122){
       		 c-=32;
        	}

   		*(domname+co)=c;
		++co;
	}


	//printf("\n");
	r=checkURL();
       // printf("%d",r);
	if(r==1){
		printf("ill-formed\n");
	}else{
		if((int)domname[0]>=48&&(int)domname[0]<=57){
			//get four number of address
			int i=0;
			int time=0;
			int a;
			for(time;time<3;time++){
			a=0;
      				for(i;i<100;i++){
 					if(domname[i]=='.'){
  			 		i++;    
   					 break;
     					}
     				a=a*10+((int)domname[i]-48);
   				}
   			int m=1;
   			int j;
			//before reverse
                        int ca=a;
                      for(j=0;j<32;j++){
                          
                                   //printf("%d",m&ca);
                                 
				   //STORE BITS TO IP
                                   if(j<8){
					   if((m&ca)==1){
					   
                                   domnameIP[jj]='1';
					   }else if((m&ca)==0){
					   domnameIP[jj]='0';
					   }
                                    jj++;
                                   }else if(j==8){
					   domnameIP[jj]='.';
					   jj++;
				   }
                                        ca=ca>>1;

                        }


                       //reverse

                         a=revbits(a);			
   			//print 
			 for(j=0;j<32;j++){
                          
				   printf("%d",m&a);
				   //STORE BITS TO IP
				  /* if(j<8){
				   domnameIP[jj]=(char)((m&a)+48);
				    jj++;
				   }*/
 		 			a=a>>1;
	
		       	}


  			 printf("\n");
			}

			int re=0;
			for(i;i<100;i++){
				if(domname[i]=='/'){
  					break;
				}
				re=re*10+(domname[i]-48);
			}

			//last seg of ip 
               		 int g;
			int mm=1;
               		 int rer=re;
                      for(g=0;g<32;g++){                     
                                   //STORE BITS TO IP
                                   if(g<8){
                                           if((mm&rer)==1){

                                   domnameIP[jj]='1';
                                           }else if((mm&rer)==0){
                                           domnameIP[jj]='0';
                                           }
                                    jj++;
                                   }
                                        rer=rer>>1;
                        }

			int m=1;
   			int j;
			re=revbits(re);
   			for(j=0;j<32;j++){
       			    printf("%d",m&re);
         			 re=re>>1;
 			 }
			printf("\n");

		}else{

		//check www or not
		if((int)domname[0]==87){
		  int i;
                 for(i=0;i<100;i++){
			 if(domname[i]=='/'){
			 break;
			 }
		     printf("%c",domname[i]);
		     domnameIP[jj]=domname[i];
		     jj++;
		 }
		 printf("\n");
		}else{
			printf("here\n");
			int s=0;
			int i;
			//check number or not
			if((int)domname[8]>=48 && (int)domname[8]<=57){
                        //get four number of address
                        int i=8;
                        int time=0;
                        int a;

for(time;time<3;time++){
			a=0;
      				for(i;i<100;i++){
 					if(domname[i]=='.'){
  			 		i++;    
   					 break;
     					}
     				a=a*10+((int)domname[i]-48);
   				}
   			int m=1;
   			int j;
			//before reverse
                        int ca=a;
                      for(j=0;j<32;j++){
                          
                                   //printf("%d",m&ca);
                                 
				   //STORE BITS TO IP
                                   if(j<8){
					   if((m&ca)==1){
					   
                                   domnameIP[jj]='1';
					   }else if((m&ca)==0){
					   domnameIP[jj]='0';
					   }
                                    jj++;
                                   }else if(j==8){
					   domnameIP[jj]='.';
					   jj++;
				   }
                                        ca=ca>>1;

                        }


                       //reverse

                         a=revbits(a);			
   			//print 
			 for(j=0;j<32;j++){
                          
				   printf("%d",m&a);
				  
 		 			a=a>>1;
	
		       	}


  			 printf("\n");
			}

			int re=0;
			for(i;i<100;i++){
				if(domname[i]=='/'){
  					break;
				}
				re=re*10+(domname[i]-48);
			}

			//last seg of ip 
               		 int g;
			int mm=1;
               		 int rer=re;
                      for(g=0;g<32;g++){                     
                                   //STORE BITS TO IP
                                   if(g<8){
                                           if((mm&rer)==1){

                                   domnameIP[jj]='1';
                                           }else if((mm&rer)==0){
                                           domnameIP[jj]='0';
                                           }
                                    jj++;
                                   }
                                        rer=rer>>1;
                        }

			int m=1;
   			int j;
			re=revbits(re);
   			for(j=0;j<32;j++){
       			    printf("%d",m&re);
         			 re=re>>1;
 			 }
			printf("\n");

                     
			}else{

				for(i=8;i<100;i++){
  					if(domname[i]=='/'){
					 break;
					}
				printf("%c",domname[i]);
			//	printf("condition");
			        domnameIP[jj]=domname[i];
				jj++;
				}
				printf("\n");
		  	 }
		}
		}

	}
	printf("\n");
	printf("ip\n");
	
       int q;
       for(q=0;q<100;q++){
       printf("%c",domnameIP[q]);
       }
       
	
	
	printf("\n");
}

unsigned int checkURL(){
if((int)domname[0]==87){
int i;	
	int c;
	for( i=0;i<100;i++){
		if(domname[i]=='/'){
		c=i;
		break;
		}
	}
//	printf("i:%i\n",i);

	if(domname[c-3]=='C'&& domname[c-2]=='O' &&domname[c-1]=='M'){

	return 0;
	
      }else if(domname[c-3]=='E'&& domname[c-2]=='D' &&domname[c-1]=='U'){
 	return 0;
	
	}else{
	 return 1;
	}

}else if((int)domname[0]==72){
	//H
	if((int)domname[1]!=84){
	return 1;
	}else{
		if((int)domname[2]!=84){
		return 1;
		}else{
			if((int)domname[3]!=80){
			return 1;
			}else{
				if((int) domname[4]!=83){
				 return 1;
				}else{
				return 0;
				}
			}
		}
	}
}else{
return 0;
}
}
