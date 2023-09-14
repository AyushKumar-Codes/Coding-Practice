#include<stdio.h>
#include<math.h>
int main()
{
int a = 1, b = 2, c = 3;
//valid
a = b + c;
//invalid
// b + c = a;
printf("Sum %d \n", -3 + 2);
printf("Subtraction %d \n", -3 - 2);
printf("Division %d \n", 3 / 2);
printf("Multiplication%d \n", -3 * 2);
printf("Modulus %d \n", -3 % 2);
int power = pow(a,b);
printf("Power a raise to b is %d", power);
return 0;
}