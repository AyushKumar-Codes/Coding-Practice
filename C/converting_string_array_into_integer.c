#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// int main(){
//     char p[100];
//     scanf("%s",p);
//     strrev(p);
//     int n = atoi(p);
//     printf("%d",n);

// }
//Sum of string numbers
int main(){
    char *nstr[20]={"12", "2", "3", "4", "5"};
    int n;
    int sum=0;
    for (int i=0;i<5;i++){
        n=atoi(nstr[i]);
        // sscanf(nstr[i],"%d",&n); //This will also works 
        // n=nstr[i]-'0'; //This will not work here
        // n=*nstr[i]-'0';//This will work but this can convert only single number like first digit of num to integer
        printf("%d\n",n);
        sum=sum+n;
    }
    printf("Sum is %d",sum);
}