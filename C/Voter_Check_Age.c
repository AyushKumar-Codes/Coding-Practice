#include<stdio.h>
int main(){
    int x;
    printf("Enter Your Age: ");
    scanf("%d",&x);
    if ((x<0) || (x>150)){
        printf("Invalid Age");
    }
    else if (x>=18){
        printf("You are Eligible for voting");
    }
    else{
        printf("You are not eligible for voting");
    }
}