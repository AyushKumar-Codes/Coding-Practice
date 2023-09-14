#include<stdio.h>
void diaplay(int []);
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
display(a);
}
void display(int b[]){
    for(int i=0;i<10;i++){
        printf("\n %d",b[i]);
    }
}