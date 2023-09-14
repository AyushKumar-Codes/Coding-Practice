#include<stdio.h>
#include<string.h>
int main(){
    char str[40]="Ayush";
    char sstr[40];
    int I,l;
    printf("Index: ");
    scanf("%d",&I);
    printf("Upto: ");
    scanf("%d",&l);
    strncpy(sstr,str+I,l);
    sstr[l]='\0';//Terminating it as it is giving extra elements
    printf("Substring:   %s",sstr);

    //Printing particular Index Element
    int a;
    char word[40];
    printf("\nEnter the word: ");
    scanf("%s",word);
    printf("Enter the Index: ");
    scanf("%d",&a);
    printf("Element on that Index: %c",word[a]);
    int a1;
    char *word1[40]={"Apple","Ball"};
    printf("\nEnter the Index: ");
    scanf("%d",&a1);
    printf("Element on that Index: %s",word1[a1]);
}