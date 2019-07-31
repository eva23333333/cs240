
#include <stdio.h>
#include <limits.h>
#include <float.h> 
void main()
 
{
    printf("char\n");
    printf("%ld\n",sizeof(char));
    printf("%ld\n",sizeof(unsigned char));
    printf("%ld\n",sizeof(signed char));

    printf("short\n");
    printf("%ld\n", sizeof(short));
    printf("%ld\n",sizeof(unsigned short));
    printf("%ld\n",sizeof(signed short));
   

    printf("short int\n");
     printf("%ld\n", sizeof( short int));
    printf("%ld\n", sizeof( unsigned short int));
    printf("%ld\n", sizeof(signed short int));


    printf("float\n");
    printf("%ld\n",sizeof(float));
//float does not has signed value
   
   printf("int\n");
    printf("%ld\n", sizeof(int));
    printf("%ld\n",sizeof(unsigned int));
    printf("%ld\n",sizeof(signed int));

    printf("long int\n");
    printf("%ld\n", sizeof(long int));
    printf("%ld\n", sizeof( unsigned long int));
    printf("%ld\n", sizeof(signed long int));



   printf("long\n");
    printf("%ld\n", sizeof(long));
    printf("%ld\n",sizeof(unsigned long));
    printf("%ld\n",sizeof(signed long));

    printf("double\n");
    printf("%ld\n",sizeof(double));
//float does not has signed value



     printf("long double\n");
    printf("%ld\n", sizeof(long double));
 // long double is unsigned

    printf("\n");
   //assign large value
   char a=UCHAR_MAX;
   short b=SHRT_MAX; 
   short int c=SHRT_MAX;
   float d=FLT_MAX;
   int e=UINT_MAX;
   long int f=LONG_MAX;
   long g=LONG_MAX; 
   double h=DBL_MAX;
   long double i=LDBL_MAX; 

//print in hex decimal   
    printf("%0x\n",a);
    printf("%0x\n",b);
    printf("%0x\n",c);
    printf("%0x\n",d);
    printf("%0x\n",e);
    printf("%0x\n",f);
    printf("%0x\n",g);
    printf("%0x\n",h);
    printf("%0x\n",i);


}
