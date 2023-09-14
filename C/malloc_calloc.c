#include <stdio.h>
#include <stdlib.h>
main(){
    int * p,i;
    p= (int *)malloc(5*sizeof(int));//int a[5]
    *p = 11;
    *(p+2) = 13;
    * (p+3) =14;
    * (p+4) = 15;
    p=(int *) realloc(p,7*size)
}