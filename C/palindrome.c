#include <stdio.h>
#include <string.h>
int main()
{
    char x[100],y[100];
    printf("Enter you Number or Word: ");
    scanf("%s",x);
    strcpy(y,x);
    if (strcmp(x,strrev(y))==0){
    printf("palindrome");
    printf("\nReverse of word is: %s",y);
    }
    else{
    printf("Not palindrome");
    printf("\nReverse of word is: %s",y);
    }
}