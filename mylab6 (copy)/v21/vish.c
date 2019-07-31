
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define secretkey "purduepete"
#define MAXINPUT 50
#define MAXARGS MAXINPUT
//Your vish, when it detects user input exceeding MAXINPUT, 
//should print a suitable message to stdout, 
//print a fresh prompt, and wait for user input. 

//xecv() takes the full pathname of an executable binary as its first argument. Its second argument s is an array of pointers to strings

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
//int door;
while(1){

//door=0;
//printf("beginning of loop\n");

 //clear up parameters, userinp
 co=0;
 len=0;
 for(i=0;i<strlen(userinp);i++){
   userinp[i]=NULL;
 } 
//check parameter

// fprintf(stdout,"len","")

 e=0;
 int i;
 fprintf(stdout,st,getpid());

 // get input 
 while((c=getchar())!=EOF&&(c!='\n')){
   if(co==49){
   printf(" len is greater than 50, please type something new\n " );
  // door=1;	
  // c='\0';
 //  c=EOF;
  // break;
  // clear 
 /* for(i=0;i<MAXINPUT;i++){
  userinp[i]=NULL;
  }*/
  co++;
   continue;
  }
  userinp[co]=c;
  userinp[co+1]='\0';
 // if(c==' '){
 // userinp[co]=' ';
  
  co++;
  
 }
 

//deal with *s[MAXARGS]

// During parsing when each of the tokens in the user input is determined,
 // use malloc() to dynamically allocate memory to hold the token strings. 
/*
 *s=&userinp[0];
 si++;
 for(i=0;i<MAXARGS;i++){
  if(userinp[i]==' '){

  *(s+si)=&userinp[i+1];
  si++;
  }
 }
 s[si]=NULL;
*/
 int counter =0;
// char *temp;

  *s=strtok(userinp," ");
  counter++;
//  printf("1");
  for(i=1;i<MAXARGS;i++){
 // printf("1");
  *(s+i)=strtok(NULL," ");
 // printf("2");
 // *(s+i)=malloc(strlen(temp));
 // printf("3");
 // strcpy(*(s+i),temp);
  counter++;
 }

// printf("check0\n");
/* 
//insert /bin and judge where to put
  if(strcmp(*s,"host")==0 || strcmp(*s,"time")==0){
printf("check1\n");  
 char *t = malloc(1000);
  strcpy(t, "/usr/bin/");
  strcat(t,*s);
  *s = malloc(1000);
  strcpy(*s, t);

  }else{
 printf("check\n");

  char *t = malloc(1000);
  strcpy(t, "/bin/");
  strcat(t,*s);
  *s = malloc(1000);
  strcpy(*s, t);
  }*/

  /* 
  //malloc each element

 for(i=1;i<counter;i++){
  *(s+i)=malloc(strlen(s[i]));
 }
  
*/

//This includes "/bin/ps", "/bin/mv" that must have two file names as command-line arguments
//"/usr/bin/host", and "/usr/bin/time" whose argument is an executable. 
//After running the executable, time prints to stdout how much CPU time (among other resources) the executable has consumed. 





 //count len
 for(len=0;len<MAXINPUT;len++){
   if(userinp[len]==NULL){
   break;
   }
 }


//fprintf(stdout,"userinp:%s",userinp);
fprintf(stdout,"s[0]:%s\n",*s);
fprintf(stdout,"s[1]:%s\n",*(s+1));
fprintf(stdout,"s[2]:%s\n",*(s+2));
fprintf(stdout,"s[3]:%s\n",*(s+3));





//different cases
//if(door==0){
        if(len==0){
                printf("What do you want?\n");
         	// userinp[len-1]='\0';
        }else if(len==1&&(userinp[0]=='Q'||userinp[0]=='q')){
                printf("quiting\n");
                exit(1);
        }else if(userinp[0]=='n'&&userinp[1]=='p'&&userinp[2]=='r'&&userinp[3]=='o'&&userinp[4]=='m'&&userinp[5]=='p'&&userinp[6]=='t'){
  //              printf("inside nprompt\n");
                for(i=7;i<len; i++){

                        if(userinp[i]!=NULL){
                                st[i-7]=userinp[i];
                                st[i-6]='\0';

                        }

                }

        }else if(userinp[0]=='s'&&userinp[1]=='e'&&userinp[2]=='c'&&userinp[3]=='u'&&userinp[4]=='r'&&userinp[5]=='e'){
       	       
//	      	printf("inside secure\n");	
	       	int times=0;
    	  	 while(strcmp(secretkey,userinp)!=0 ){
               //clear userinp
	       for(i=0;i<MAXINPUT;i++){
	       userinp[i]=NULL;
	       }
			 if(times==3){
               		 fprintf(stdout,"you've tried three times\n");
                	 exit(1);
		//	break;
       			}
              
		 fprintf(stdout,"secret key:\n");
       		 scanf("%s",userinp);
       		 times++;

      		 }

        }else {
//		printf("inside fork\n");
                k=fork();

                if(k==0){
                //child code
                 fprintf(stdout,"forked child process: %s %d\n",s[0],getpid());
                     execv(s[0],s);
                }else{
                //parent code
                        fprintf(stdout,"I'm the parent: %d\n",getpid());
                        waitpid(k,&status,0);
                }
        }
//}
  //printf("end of loop\n");
}
}
