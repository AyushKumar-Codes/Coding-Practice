#include <stdio.h>
#include <string.h>
// int main()
// {
//     char x[100],y[100];
//     printf("Enter you Number or Word: ");
//     scanf("%s",x);
//     strcpy(y,x);
//     if (strcmp(x,strrev(y))==0){ //strcmp gives 0 if both strings are same
//     printf("palindrome");
//     printf("\nReverse of word is: %s",y);
//     }
//     else{
//     printf("Not palindrome");
//     printf("\nReverse of word is: %s",y);
//     }
// }

int main(){
    printf("Enter a number : ");
    int n,r,n1;
    int rev=0;
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        r=n%10;
        rev=(rev)*10+r;
        n=n/10;
    }
    printf("Reverse is: %d\n",rev);
    if (rev==n1){
        printf("Palindrome Number");
        }
    else{
        printf("Not Palindrome");
    }
}