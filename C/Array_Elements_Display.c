#include <stdio.h>
int display(int m){
    printf("%d",m);
}
int main()
{
    int p[] = {3,5,6};
    display(p[0]);
    printf("\n");
    for (int i=0;i<3;i++){
        display(p[i]);
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     char p[100];
//     for (int i=0;i<=3;i++){
//         scanf("%d",&p[i]);
//     }
//     for(int i=0;i<=3;i++){
//         printf("%d\n",p[i]);
//     }
// }