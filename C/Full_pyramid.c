#include<stdio.h>
#include<string.h>
// int main(){
//     int n;
//     printf("Number of Row: ");
//     scanf("%d",&n);
//     int c=n;
//     char star[n];
//     strcpy(star,"*");
//     for (int i=0;i<n;i++){
//         if(i!=0){strcat(star," * *");}
//         for (int j=c-1;j>0;j--){// give negative value in place "j>0" to shift pyramid to right side
//             printf("  ");
//         }
//         printf("%s\n",star);
//         c--;
//     }
// }
  
// Reverse Pyramid :-
int main(){
    int n;
    printf("Number of rows: ");
    scanf("%d",&n);
    char star[5000];
    // char star[n];//This has Error in some inputts
    int c=0;
    // strcpy(star,"*");
    for (int i=0;i<n-1;i++){strcat(star,"**");}
    for (int i=((2*n)-1);i>-1;i=i-2){//(2*n)-1 is the formula for odd number of nth term 
        if (i!=((2*n)-1)){
            star[i]='\0';
            }
        for (int j=0;j<c;j++){// add more in "j<c" to shift pyramid to the right side
            printf(" ");
        }
        printf("%s\n",star);
        c++;
    }
    
}
