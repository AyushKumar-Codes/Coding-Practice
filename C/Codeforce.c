#include<stdio.h>
#include<math.h>
int main(){
    int w;
    scanf("%d",&w);
    int lim= pow(2,8);
    while(w--!=0){
    int n;
    scanf("%d",&n);
    int arr[n];
    int carr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int check=0;
    for(int i=0;i<=lim;i++){
    int xor=(arr[0]^i);
        for(int j=1;j<n;j++){
            xor^=(arr[j]^i);
        }
        if(xor==0){
            printf("%d",i);
            check=1;
            break;
        }
    }
    if (check==0){
        printf("%d",-1);
    }
}
}