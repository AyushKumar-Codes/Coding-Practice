//Without return type and without argument
#include<stdio.h>
// void add();
// int main(){
//     add();
// }
// void add(){
//     int a,b;
//     a=8;
//     b=8;
//     printf("Addition of two number is %d",a+b);
// }

//With return type and without argument

// int sub();
// int main(){
//     printf("Substraction of two number is %d",sub());
// }
// int sub(){
//     int a,b;
//     a=8;
//     b=3;
//     return a-b;
// }

//without return type and with argument
// void avg(int,int,int);
// int main (){
//     int a,b,c;
//     a=23;
//     b=56;
//     c=90;
//     avg(a,b,c);
// }
// void avg(int x,int y,int z){
//     int av;
//     av=(x,y,z)/3;
//     printf("Average of three numbers is %d",av);
// }

//with return type and with arguments
int mul(int, int ,int);
int main(){
    int a=4,b=6,c=8;
    printf("Multiplication of three numbers is %d",mul(a,b,c));
}
int mul(int x,int y,int z){
    int m=x*y*z;
    return m;
}