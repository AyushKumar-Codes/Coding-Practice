//AUTO is used in default
#include<stdio.h>
// int main(){
//     int i=10;
//     printf("\n %d",i);
//     {
//         i=20;
//         printf("\n %d",i);
//     }
//     printf("\n %d",i);
// }


// main()
// {
//     auto int i=2;
//     {
//         auto int i=3;
//         printf("\n%d",i);
//     }
// {
//     printf("\n%d",i);
// }
// printf("\n%d",i);
// }

// main()
// {
//     register int i=2;
//     {
//         register int i=3;
//         printf("\n%d",i);
//     }
// {
//     printf("\n%d",i);
// }
// printf("\n%d",i);
// }

//AUTO VS STATIC
// void increment(void);
// int main(){
//     increment();
//     increment();
//     increment();
// }
// void increment()
// {
//     auto int i=1;
//     printf("\n%d",i);
//     i=i+1;
// }

// void increment(void);
// int main(){
//     increment();
//     increment();
//     increment();
// }
// void increment()
// {
//     static int i=1;
//     printf("\n%d",i);
//     i=i+1;
// }

// void function(void);
// int  x=21;
// int main(){
//     function();
//     x=10;
//     printf("\n In main x= %d",x);
//     function();
// }
// void function()
// {
//     printf("\n In function x= %d",x);
// }

//Static Storage Class

// #include<stdio.h>
// void m(){
// static int a=4;
// a++;
// printf("%d\n",a);
// }
// int main(){
//     m();
//     m();
// }

// //Extern Storage Class

// #include<stdio.h>
// int main(){
// // extern int a;//This will take Global Varaible
//    int a=0; //This will take local variable
//     printf("%d",a);
//     return 0;
// }
// int a=10;

//Register Storage Class

// #include <stdio.h>
// int main(){
//    register int a=10;//This will store the varirable a in register instead of ram
//    printf("%d",a);
// }

//Auto Storage Class
// without any specific storage class declaration variable has auto storage class