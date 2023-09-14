#include<stdio.h>
// int main(){
// printf("\n 2-d Array :\n");
// int arr[30][40]={{1,2,3,4},{6,7,8,9},{2,6,8,9}};
// for (int i=0 ; i<30 ; i++ ){
//     int m=0;
//     for (int j=0; j<40 ; j++){
//         if (arr[i][j]!='\0'){
//         printf("%d ",arr[i][j]);
//          m=1;
//         }
//     }
//     if (m==1){
//     printf("\n");}
// }
// }

// elements in matrix
// int main(){
//     int matrix[3][3];
//     printf("Enter Matrix Elements: ");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         printf("\n");
//         for(int j=0;j<3;j++){
//             printf("%d\t",matrix[i][j]);
//         }
//     }
// }

//Adding 2-d Array elements
// int main(){
//     int matrix[3][3],sum=0;
//     printf("Enter Matrix Elements: ");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         printf("\n");
//         for(int j=0;j<3;j++){
//             printf("%d\t",matrix[i][j]);
//          sum=sum+matrix[i][j];
//         }
//     }
//     printf("\nSum of all the elemnts are: %d",sum);
// }

//Adding only Even Number in matrix
// int main(){
//     int matrix[3][3],sum=0;
//     printf("Enter Matrix Elements: ");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         printf("\n");
//         for(int j=0;j<3;j++){
//             printf("%d\t",matrix[i][j]);
//         if (matrix[i][j]%2==0)
//          sum=sum+matrix[i][j];
//         }
//     }
//     printf("\nSum of all the Even elemnts are: %d",sum);
// }

//Adding Elements of 2 matrix
// int main(){
//     int matrix[2][2];
//     int matrix1[2][2];
//     int matrix2[2][2];
//     printf("Enter Matrix Elements: ");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("Enter elements of 2nd matrix: ");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             scanf("%d",&matrix1[i][j]);
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//            matrix2[i][j]=matrix[i][j]+matrix1[i][j];
//         }
//     }
//     printf("\nMatrix 1: \n");
//         for(int i=0;i<2;i++){
//         printf("\n");
//         for(int j=0;j<2;j++){
//             printf("%d\t",matrix[i][j]);
//         }
//         }
//         printf("\nMatrix 2: \n");
//             for(int i=0;i<2;i++){
//         printf("\n");
//         for(int j=0;j<2;j++){
//             printf("%d\t",matrix1[i][j]);
//         }
//             }
//             printf("\nMatrix 3: \n");
//             for(int i=0;i<2;i++){
//         printf("\n");
//         for(int j=0;j<2;j++){
//             printf("%d\t",matrix2[i][j]);
//         }
//             }
// }

//Copying Elements of one matrix to another
int main(){
    int matrix[3][3],matrix1[3][3];
    printf("Enter Matrix Elements: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix1[i][j]=matrix[i][j];
        }
    }
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d\t",matrix1[i][j]);
        }
    }
}
