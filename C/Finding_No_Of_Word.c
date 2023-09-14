#include<string.h>
#include<stdio.h>
int main(){
    char str[15];
    int i=0, n=0;
    printf("Enter the string : ");
    gets(str);
    while(str[i]!='\0'){
        if (str[i]==' '){
            n++;
        }
    i++;
    }
printf("Number of words = %d",n+1);
}