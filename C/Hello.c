//This is How we can comment single line
/*
This is how we can Comment Multiple line
*/
// If left side of and operator is false then Right side of uniary increment or decrement will not work
#include<stdio.h>

int main() {
int a,b;
// printf("Hello World");
printf("Enter The value for a: ");
scanf("%d",&a);
printf("Enter the value for b: ");
scanf("%d",&b);
printf("Value of a is = %d\n",a);
printf("Value of b is = %d\n",b);
int c=a+b;
printf("Sum of %d and %d is = %d\n",a,b,c);
c=a-b;
printf("Substraction of %d and %d is = %d\n",a,b,c);
c=a*b;
printf("Multiplication of %d and %d is = %d\n",a,b,c);
float d=(float)a/(float)b;//Its type casting
printf("Division of %d and %d is = %.2f\n",a,b,d);
c=a%b;
printf("Modulus of %d and %d is = %d\n",a,b,c);
return 0;

}