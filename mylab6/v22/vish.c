#include "CreateAppProcess.c"
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define secretkey "purduepete"
#define MAXINPUT 50
#define MAXARGS MAXINPUT

int CreateAppProcess(char **);
char userinp[MAXINPUT];
char *s[MAXARGS];//an array of pointers to strings

int main(){

pid_t k;
int status;
char c;
int co=0;
char st[10] =">> ";
_Bool e=0;
int len;
int i;
int si=0;
while(1){



 //clear up parameters, userinp
 co=0;
 len=0;
 for(i=0;i<MAXINPUT;i++){
   userinp[i]=NULL;
 } 

//check parameter



 e=0;
 int i;
 fprintf(stdout,st,getpid());

 // get input 
 while((c=getchar())!=EOF&&(c!='\n')){
  if(co==49){
  break;
  }
  userinp[co]=c;
  userinp[co+1]='\0';
  if(c==' '){
  userinp[co]=' ';
  }
  co++;

 }
 


 int counter =0;


  *s=strtok(userinp," ");
  counter++;

  for(i=1;i<MAXARGS;i++){

  *(s+i)=strtok(NULL," ");

  counter++;
 }





 //count len
 for(len=0;len<MAXINPUT;len++){
   if(userinp[len]==NULL){
   break;
   }
 }


//different cases

        if(len==0){
                printf("What do you want?\n");
         
        }else if(len==1&&(userinp[0]=='Q'||userinp[0]=='q')){
                printf("quiting\n");
                exit(1);
        }else if(userinp[0]=='n'&&userinp[1]=='p'&&userinp[2]=='r'&&userinp[3]=='o'&&userinp[4]=='m'&&userinp[5]=='p'&&userinp[6]=='t'){

                for(i=7;i<len; i++){

                        if(userinp[i]!=NULL){
                                st[i-7]=userinp[i];
                                st[i-6]='\0';

                        }

                }

        }else if(userinp[0]=='s'&&userinp[1]=='e'&&userinp[2]=='c'&&userinp[3]=='u'&&userinp[4]=='r'&&userinp[5]=='e'){
   
	       	int times=0;
    	  	 while(strcmp(secretkey,userinp)!=0 ){
        		 if(times==3){
               		 fprintf(stdout,"you've tried three times\n");
                	 exit(1);
       			}
              
		 fprintf(stdout,"secret key:\n");
       	 char t;
          int tc=0;
                while((t=getchar())!=EOF&&(t!='\n')){
                userinp[tc]=t;
                tc++;   
                }
       		 times++;

      		 }

        }else{
	
           CreateAppProcess(s);     
	
}
}
}
