#include<stdio.h>
int main(){
    int n;
    int nv;
    int ar[5];
    printf("Enter elements in array: ");
    for(int i=0;i<4;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the location you want to insert an element: ");
    scanf("%d",&n);
    printf("Enter the value of the element :");
    scanf("%d",&nv);
    for(int i=4;i>(n-1);i--){
        ar[i]=ar[i-1];
    }
    ar[n-1]=nv;
    printf("Array after insertion: ");
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
}