#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    (n%2==0)? printf("%d is an Even number",n):printf("%d is an Odd number",n);//Conditional Operator
    return 0;

}
// #include <stdio.h>
//     int main()
//     {
//         int x = 1, y = 0, z = 5;
//         int a = x && y && z++;
//         printf("%d", z);
//         return 0;
//     }






