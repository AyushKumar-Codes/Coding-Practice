#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
    char num[100];
    printf("Enter the number: ");
    scanf("%s",num);
    int len=strlen(num);
    int n;
    int sum=0;
    for (int i=0;i<len;i++){
        n=num[i]-'0';
        sum =sum+pow(n,len);
    }
    if (sum==atoi(num)){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
}