#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int y=x;
    int pal=0,r;
    while(x!=0){
        r=x%10;
        pal=pal*10+r;
        x=x/10;
    }
    int check=0;
    if (y==pal){
        for (int i=2;i<=y;i++){
            if ((y%i==0)&&(y!=i)){check++;}
        }
        if (check==0){printf("YES");}
        else{printf("NO");}
    }
    else{
        printf("NO");
    }
    return 0;
}