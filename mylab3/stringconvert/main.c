#include <stdio.h>
#include <stdlib.h>
char c='0';
void main(){

//read input
while((c=getchar())!=EOF){

//rules of change value
	if(c>='0' && c<='8'){
		++c;
	}else if(c=='9'){
	c='0';
	}
        if((int)c==33){
	c=46;
	}
	if((int)c>=65 && (int)c<=90){
	c+=32;
	}
	printf("%c",c);

}
}	
