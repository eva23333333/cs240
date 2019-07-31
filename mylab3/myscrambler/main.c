   
#include <stdio.h>
#include <string.h>

int main(){

//use scanf to store filename1 filename2 and encript number	
char str1[20], str2[30];
short s;
char o;
scanf("%s %s %hd",str1,str2,&s);

//open filename1 filename2 to read and write mode respectively
FILE *f1;
f1=fopen(str1,"r");
FILE *f2;
f2=fopen(str2,"w");


printf("\n");


//encript char one by one and store them to f2
while((o=fgetc(f1))!=EOF){

	o+=s;
	fputc(o,f2);
}

//close files
fclose(f1);
fclose(f2);






}
