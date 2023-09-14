//Printing Splited Token

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char arr[]="Ayush is a coder";
//     char *ptr=strtok(arr," ");
//     while (ptr!=NULL){
//         printf("%s\n",ptr);
//         ptr= strtok(NULL," ");
//     }
//     return 0;
// }

//Storing Tokens in Array

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char arr[]="Ayush is a coder";
//     char *ptr=strtok(arr," ");
//     char *ar[10];
//     int j=0;
//     while (ptr!=NULL){
//         ar[j]=ptr;
//         ptr= strtok(NULL," ");
//         j++;
//     }
//     for(int i=0;i<j;i++){// Here (j-1) is the last index for the splited word stored in array.
//         printf("%s\n",ar[i]);
//     }
//     return 0;
// }

// How to split the user input  sentence 

#include<stdio.h>
#include<string.h>
int main() {
    char arr[50];
    printf("Enter the sentence: ");
    gets(arr);
    char *ptr=strtok(arr," ");
    char *ar[10];
    int j=0;
    while (ptr!=NULL){
        ar[j]=ptr;
        ptr= strtok(NULL," ");
        j++;
    }
    printf("Splited words : \n");
    for(int i=0;i<j;i++){// Here (j-1) is the last index for the splited word stored in array.
        printf("%d) %s\n",i+1,ar[i]);
    }
    return 0;
}