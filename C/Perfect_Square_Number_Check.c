#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    float p=pow(n,0.5);
    // printf("%f\n",p);
    int flag=0;
    for (int i=0;i<=n;i++){
    if (p==i){
        printf("Perfect Number");
        flag++;
        break;
    }
    }
    if (flag==0){
        printf("Not a Perfect Number");
    }
}