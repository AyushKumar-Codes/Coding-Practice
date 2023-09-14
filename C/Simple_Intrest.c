#include<stdio.h>
int main(){
    int a,p,r,t;
    float si;
    printf("Enter the Priciple Amount: ");
    scanf("%d",&p);
    printf("Enter the rate: ");
    scanf("%d",&r);
    printf("Enter the Time Period: ");
    scanf("%d",&t);
    a=p*(1+r*t);
    si=((float)p*(float) r*(float)t)/100;
    printf("The amount is : %d\n",a);
    printf("The Simple Interest is : %.2f",si);
return 0;
}