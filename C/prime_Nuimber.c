#include<stdio.h>
int main(){
    int n,f=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if (n%i==0){
            printf("Not A Prime Number");
            f=1;
            break;
        }
    }
    if (n==0|| n==1){
        printf("It is not a Prime Number");
    }
    else if (f==0||n==2){
        printf("It is a prime number");
    }
    return 0;
}