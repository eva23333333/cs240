//first and second argument passes pointers to the input vectors and the third argument passes the pointer to vecdim. 
#include <stdio.h>

int read_vecs(double *a, double *b, int *c){

if(scanf("%lf %lf", a, b) != 2 ){

    return -1;
}else{
    return 0;
}

}
