#include<stdio.h>
// int main(){
//area of square

// int side;
// printf("Enter Value of side ");
// scanf("%d", &side);
// printf("Area of Square is %d\n", side * side);

// //area of Circle
// float radius;
// printf("Enter Radius of Circle :");
// scanf("%f", &radius);
// printf("Area of Circle is %f", 3.14 * radius * radius);

//Area of Rectangle
// float l,b;
// printf("\nEnter the length: ");
// scanf("%f",&l);
// printf("Enter the breath: ");
// scanf("%f",&b);
// printf("Area of rectange is %.2f",l*b);
// return 0;
// }

// Area of circle using functions 
float ar(float);
int main(){
    float r;
    printf("Enter value of radius : ");
    scanf("%f",&r);
    printf("Area of circle : %.2f",ar(r));
}
float ar(float r1){
    float area = r1*3.14*r1;
    return area;
}