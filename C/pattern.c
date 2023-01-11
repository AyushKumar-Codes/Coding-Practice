#include<stdio.h>
//Star pattern

// int main(){
//     int x;
//     printf("number of rows: ");
//     scanf("%d",&x);
//     for(int i=1;i<=x;i++){
//         for (int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//Number Pattern

int main(){
    int x;
    int g=0;
    printf("number of rows: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for (int j=1;j<=i;j++){
            g=g+1;
            printf("%d\t",g);
        }
        printf("\n");
    }
}