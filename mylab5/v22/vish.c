#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define secretkey "purduepete"
#include <time.h>

void vsh(void);
void  main(){
vsh();
}
void vsh(void){


printf("Welcome to vsh!\n");
time_t t=time(NULL);
struct tm tm= *localtime(&t);
printf("now: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
pid_t k;
int status;
char a[10000];
char c;
int co=0;
char s[10] =">> ";
_Bool e=0;
int len;

while(1){
 e=0;
 int i;
//clear a
for(i=0;i<len;i++){
a[i]=NULL;
}


 fprintf(stdout,s,getpid());
 fgets(a,100,stdin);
  
          len=strlen(a);

        if(len==1){
		printf("What do you want?\n");
          a[len-1]='\0';
	}else if(len==2&&(a[0]=='Q'||a[0]=='q')){
		printf("quiting\n");
		exit(1);
	}else if(a[0]=='n'&&a[1]=='p'&&a[2]=='r'&&a[3]=='o'&&a[4]=='m'&&a[5]=='p'&&a[6]=='t'){
//	         s[10]="\0";
		for(i=7;i<len; i++){
			 if(a[i]!=' '){
				s[i-7]=a[i];
			
			}else{
  //                        s[i-7]=EOF;
				break;  
                          }

		}
	}else if(a[0]=='s'&&a[1]=='e'&&a[2]=='c'&&a[3]=='u'&&a[4]=='r'&&a[5]=='e'){
        int times=0;
       while(strcmp(secretkey,a)!=0 ){
	 if(times==3){ 
       		fprintf(stdout,"you've tried three times\n");
        	 exit(1);
       		}
	       fprintf(stdout,"secret key:\n");
        scanf("%s",a);
	times++;

       }

	}else if(a[0]=='p' && a[1]=='w' &&a[2]=='d'){

	     system("/bin/pwd");
	}else if(a[0]=='t' && a[1]=='o' &&a[2]=='p'){
            printf("inside top\n");
             execl("/usr/bin/top","/usr/bin/top",NULL);
       
	
	}else if(a[0]=='p'&& a[1]=='s'){
		printf("here");
		execl("/bin/ps","/bin/ps",NULL);
	
	}else{	
		k=fork();

		if(k==0){
		//child code
			fprintf(stdout,"forked child process: %s %d \n",a,getpid());
                        a[strlen(a)-1]=NULL;
                        //printf("a:%s\n",a);
                        //printf("a len:%d\n",strlen(a));
			execl(a,a,NULL);
			exit(1);
		}else{
		//parent code
			fprintf(stdout,"I'm the parent: %d\n",getpid());
			waitpid(k,&status,0);
		}
	}
	}
}
