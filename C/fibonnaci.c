#include <stdio.h>
// int main()
// {
//     int x =0;
//     int y=1;
//     int z;
//     printf("Number of term in Fibonacci ");
//     scanf("%d",&z);
//     for (int i=1;i<=z;i++)
//     {
//         printf("%d \n",x);
//         int r=x+y;
//         x=y;
//         y=r;
//     }
//     return 0;
// }

//Using Recurrsion
int fib(int);
int main(){
    int x,y;
    scanf("%d",&x);
    for (int i=0;i<x;i++){
        y=fib(i);
        printf("%d\t",y);
    }
}
int fib(int a){
    int f;
    if ((a==0)||(a==1)){return a;}
    else{
        f=fib(a-1)+fib(a-2);
        return f;
    }
}
