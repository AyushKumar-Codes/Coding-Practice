#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char num[20];
    printf("Enter Number: ");
    scanf("%s",num);
    int len =  strlen(num); 
    int n;
    int sum=0;
    for (int i=0;i<len;i++){
    int pro = 1;
    n = num[i]-'0';//Integer Conversion this converts only single character
    for (int j=1;j<=n;j++){
    pro = pro*j;}
    sum=sum+pro;
    }
    if (sum==atoi(num)){
        printf("%s is Strong Number",num);
    }
    else{
    printf("%s is Not a Strong Number",num);}
}