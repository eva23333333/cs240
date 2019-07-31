#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define secretkey "purduepete"



int main(){
pid_t k;
int status;
char *a;
int asize;
char c;
int co=0;
char s[10] =">> ";
_Bool e=0;
int len;


//a=(char *)malloc(asize*sizeof(char));
while(1){
 e=0;
 int i;
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
	
		for(i=7;i<17; i++){
//			  printf("a[%d]:%c",i,a[i]);
			if(a[i]=='e'&&a[i+1]=='n'&&a[i+2]=='u'){
                                s[i-7]='\0';
                               //  printf("s[%d]:%c",i-7,s[i-7]);
				break;
                        
			}else if(a[i]!=' '){
				s[i-7]=a[i];
				// printf("s[%d]:%c",i-7,s[i-7]);
			
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

	}else if(a[0]=='t' && a[1]=='o' &&a[2]=='p'){

             execl("/bin/top","/bin/top",NULL);
       
	
	}else if(a[0]=='p'&& a[1]=='s'){
		printf("here");
		execl("/bin/ps","/bin/ps",NULL);
	
	}else{	
		k=fork();

		if(k==0){
		//child code
			fprintf(stdout,"forked child process: %s %d\n","/bin/ls",getpid());
			execl("/bin/ls","/bin/ls",NULL);
		}else{
		//parent code
			fprintf(stdout,"I'm the parent: %d\n",getpid());
			waitpid(k,&status,0);
		}
	}
}
}
