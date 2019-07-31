#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>





int CreateAppProcess(char **command){

pid_t k;
int status;
k=fork();

	if(k==0){
	
	//child code
	fprintf(stdout,"forked child process: %s %d\n","/bin/ls",getpid());

	execv(command[0],command);
        exit(1);
	
	}else if(k>0){
	
	//parent code
	return(getpid());
	}else{
	return -1;
	}
}
	
