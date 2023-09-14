#include<stdio.h>
//Ascending Order
// int main(){
//     int arr[10]={1,2,3,5,6,4,8,7,9,0};
//     int temp;
//     for (int i =0;i<10;i++){
//         for(int j=i+1;j<10;j++){
//        if (arr[i] > arr[j]){
//         temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//        }
//         }
//     }
//         for(int i=0;i<10;i++){
//             printf("%d",arr[i]);
//         }
    
// }

//Desending Order
// int main(){
//     int arr[10]={1,2,3,5,6,4,8,7,9,0};
//     int temp;
//     for (int i =0;i<10;i++){
//         for(int j=i+1;j<10;j++){
//        if (arr[i] < arr[j]){
//         temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//        }
//         }
//     }
//         for(int i=0;i<10;i++){
//             printf("%d",arr[i]);
//         }
    
// }

//User Defined Array Ascending Order
int main(){
    int arr[10];
    int temp;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<10;i++){
        for(int j=i+1;j<10;j++){
       if (arr[i] > arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
        }
    }
        for(int i=0;i<10;i++){
            printf("%d\t",arr[i]);
        }
    
}
