#include<stdio.h>
int main(){
printf("\n 2-d Array :\n");
int arr[30][40]={{1,2,3,4},{6,7,8,9},{2,6,8,9}};
for (int i=0 ; i<30 ; i++ ){
    int m=0;
    for (int j=0; j<40 ; j++){
        if (arr[i][j]!='\0'){
        printf("%d ",arr[i][j]);
         m=1;
        }
    }
    if (m==1){
    printf("\n");}
}
}