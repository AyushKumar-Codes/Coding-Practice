// //Here char is reserving 4 bits
// #include<stdio.h>
// struct abc
// {
//     int b;
//     char c;
// }s;
// int main(){
// printf("%d",sizeof(s));
// }
//To solve above problem char should be 1 bit
#include<stdio.h>
struct abc
{
    int b;
    char c;
}__attribute__((packed))s;
int main(){
printf("%d",sizeof(s));
}