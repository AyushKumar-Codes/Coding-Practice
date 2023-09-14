#include<stdio.h>
int main(){
    int n;
    int ar[5];
    printf("Enter elements in array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the location you want to delete an element: ");
    scanf("%d",&n);
    for(int i=(n-1);i<4;i++){
        ar[i]=ar[i+1];
    }
    // ar[4]='\0';
    printf("Array after Deletion: ");
    for(int i=0;i<4;i++){
        printf("%d ",ar[i]);
    }
}