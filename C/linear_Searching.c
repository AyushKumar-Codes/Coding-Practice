#include<stdio.h>
int main(){
    int arr[10];
    int key;
    printf("Enter elements in array: ");
    for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);}
    printf("Enter the Element for searching:");
    scanf("%d",&key);
    int flag=0;
    for(int i=0;i<10;i++){
    if (arr[i]==key){
        printf("Found at Location %d ",i+1);
        flag++;
    }
    }
    if(flag==0){
        printf("Not Found");
    } 
}