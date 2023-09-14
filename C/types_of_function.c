//Call by pointer
#include<stdio.h>
void modify(int *);
int main(){
    int x;
    scanf("%d",&x);
    modify(&x);
    printf("\nValue of x is : %d",x);
}
void modify(int *y){
    *y=*y+1;
    printf("Value of Y is %d",*y);
}