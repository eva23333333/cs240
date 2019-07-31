#include <stdio.h>
#include <string.h>
#include <stdarg.h>	
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void cprintf(const char *S, ...){
	int c=0;
	char *sFlag=(char*)malloc(sizeof(S));
	sFlag=strdup(S);
	while(*sFlag){
		if(*sFlag=='%') ++c;
		++sFlag;
	}
	va_list arglist;
	va_start(arglist, c);
	for(int i=0;i<c;++i){
		char c=va_arg(arglist, int);	
		cout<<c;
	}
	va_end(arglist);
}

int main(){
	cprintf("%c %c %c", 'a', 'b', 'c');
	return 0;
}
