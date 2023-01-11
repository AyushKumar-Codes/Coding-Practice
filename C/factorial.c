#include<stdio.h>
int main(){
    int x;
    int pro=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        pro=pro*i;
    }
    printf("Factorial of %d is: %d",x,pro);
}