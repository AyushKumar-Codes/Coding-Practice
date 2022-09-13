#include<stdio.h>
//area of square
int main() {
int side;
printf("Enter Value of side ");
scanf("%d", &side);
printf("Area of Square is %d\n", side * side);
//area of Circle
float radius;
printf("Enter Radius of Circle ");
scanf("%f", &radius);
printf("Area of Circle is %f", 3.14 * radius * radius);
return 0;
}