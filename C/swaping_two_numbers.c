#include<stdio.h>
//Call by value
// void swap(int, int );
// int main(){
//     int a,b;
//     printf("Enter two numbers ");
//     scanf("%d %d",&a,&b);
//     swap(a,b);
//     printf("\nIn main- values are %d , %d",a,b);
// }
// void swap(int x,int y){
//     int z;
//     z=y;
//     y=x;
//     x=z;
//     printf("\nIn function values are %d , %d",x,y);
// }

//call by address
void swap(int *, int *);
int main(){
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nIn main- values are %d , %d",a,b);
}
void swap(int *x,int *y){
    int z;
    z=*y;
    *y=*x;
    *x=z;
    printf("\nIn function values are %d , %d",*x,*y);
}

