#include<stdio.h>

// int main(){
//     int row,col;
//     printf("No. of row: ");
//     scanf("%d",&row);
//     printf("No of columns: ");
//     scanf("%d",&col);
//     int matrix[row][col];
//     for (int i=0;i<row;i++){
//         for (int j=0;j<col;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     for (int i=0;i<row;i++){
//         for (int j=0;j<col;j++){
//             printf("%d\t",matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

//Transposed of a Matrix

int main(){
    int row,col;
    printf("No. of row: ");
    scanf("%d",&row);
    printf("No of columns: ");
    scanf("%d",&col);
    int matrix[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix is :\n");
        for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    int trow=0,tcol=0;
    printf("Tranposed Matrix is :\n");
    for (int i=0;i<col;i++){
        for (int j=0;j<row;j++){
        printf("%d\t",matrix[j][i]);
    }
    printf("\n");
}
}


