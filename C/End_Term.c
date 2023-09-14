//Q1.
// #include<stdio.h>
// static int i=5;
// int main(){
//         if(--i){
//         main();
//         printf("%d\n",i);//Prints 0 0 0 0
//     }
// }

//Q2.
// #include<stdio.h>
// static int i=5;
// int main(){
//         if(--i){
//         printf("%d\n",i);//Prints 4 3 2 1 
//         main();
//     }
// }

//Q3
// #include<stdio.h>
// int main(){
//     int i=7;
//     printf("%d %d %d %d %d %d %d %d",i+2,i++,++i,i++,i++,i++,i,++i,i+1);
//     printf("\n%d",i);
// }

//Q4
// #include<stdio.h>
// int main(){
//     int x=2;
//     printf("%d %d %d",x*x,x++,++x);
//     printf("\n%d",x);
// }

//Q5
// #include<stdio.h>
// int main(){
//     float a=1.2;
//     double a1=1.2;
//     if (a==a1)printf("A True\n");
//     else printf("A False\n");
//     float b= 0.347;
//     double b1= 0.347;
//     if (b==b1)printf("B True");
//     else printf("B False");
// }


//Q5
// #include<stdio.h>
// void m(int *,int *);
// int main(){
//     int a =0,b=1;
//     m(&a,&b);
//     printf("%d %d",a,b);
// }
// void m(int * p, int *q){
//     p=q;
//     *p=2;
// }
//Q6
// #include<stdio.h>
// int main(){
//     int *p;
//     int m=12;
//     p=&m;
//     printf("%d\n",&p);
//     printf("%d",&m);
// }

//Q7.
// #include<stdio.h>
// int main(){
//     int a,b;
//     5*4+5;
//     a=(b+2,b=2,4);
//     printf("%d %d",a,b);
// }

//Q8.
// #include<stdio.h>
// int main(){
//     char i=1;// Its a cycle of 1-127 then -128-0
//     while(++i){
//         printf("%d ",i);
//     }
// }

//q9.
#include  <stdio.h>
    int main()
    {
       signed char chr;
       chr = 128; //loop position 
       printf("%d\n", chr);
       return 0;
    }