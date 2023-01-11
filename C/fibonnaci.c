#include <stdio.h>
int main()
{
    int x =0;
    int y=1;
    int z;
    printf("Number of term in Fibonacci ");
    scanf("%d",&z);
    for (int i=1;i<=z;i++)
    {
        printf("%d \n",x);
        int r=x+y;
        x=y;
        y=r;
    }
    return 0;
}