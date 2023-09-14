#include<stdio.h>
// int main(){
//     int x;
//     int pro=1;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         pro=pro*i;
//     }
//     printf("Factorial of %d is: %d",x,pro);
// }

// int main(){
//     int x;
//     int pro=1;
//     int i=1;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     while(i<=x){
//         pro=pro*i;
//         i++;
//     }
//     printf("Factorial of %d is: %d",x,pro);
// }

// Factorial using Function Method

// int fact(int);
// int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     int f=fact(a);
//     printf("Factorial of %d is %d",a,f);
// }
// int fact(int x){
//     int fac=1;
//     for (int i=1;i<=x;i++){
//         fac=fac*i;
//     }
//     return fac;
// }

//factorial using recurssion
int fact(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial of %d is %d",n,f);
}
int fact(int a){
    if ((a==1)||(a==0)){return 1;}
    else{
        int fac=a*fact(a-1);
        return fac;
    }
}