#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// int main(){
//     char num[100];
//     printf("Enter the number: ");
//     scanf("%s",num);
//     int len=strlen(num);
//     int n;
//     int sum=0;
//     for (int i=0;i<len;i++){
//         n=num[i]-'0';
//         sum =sum+pow(n,len);
//     }
//     if (sum==atoi(num)){
//         printf("Number is Armstrong");
//     }
//     else{
//         printf("Number is not Armstrong");
//     }
// }

//Sum of 3 digits number
// int main(){
//     printf("Enter a number : ");
//     int n,r,n1;
//     int sum=0;
//     scanf("%d",&n);
//     n1=n;
//     while(n!=0){
//         r=n%10;
//         sum=sum+(r*r*r);
//         n=n/10;
//     }
//     printf("%d",sum);
//     if (sum==n1){
//         printf("Armstrong Number");
//     }
//     else{
//         printf("Not Arnstrong Number");
//     }
// }