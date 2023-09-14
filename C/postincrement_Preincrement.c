#include<stdio.h>
int main(){
    int a= 4;
    ++a;//This is no difference in pre and post increment;
    // a++;
    printf("%d\n",a);

// Difference can be seen when we use the post and pre incre in a defining a variable
int w=5;
// int s=w++;// Value will be same as the w
int s=++w;// Value of s will be increased
printf("%d",s);
}