// #include<stdio.h>
// int main(){
//     int n,* ptr,i;
//     printf("Enter no of elements");
//     scanf("%d",&n);
//     ptr=(int *)malloc(n*sizeof(int));
//     if(ptr != NULL){
//     for(i=0;i<0;i++){
//         scanf("%d",ptr+i);
//     }
//     for(i=0;i<n;i++){
//         printf("\n Element is %d",*(ptr+i));
//     }
//     }
//     else
//     printf("Malloc failed");
//     free(ptr);
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    //    p=(int *)malloc(3*sizeof(int)); // Dynamic Memory allocation
    p = (int *)calloc(3 ,sizeof(int)); // Dynamic Memory allocation
    // int p[3]; // Static Memomry Allocation
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The elements are : %d\n", p[i]);
    }
    p = (int *)realloc(p, 4 * sizeof(int));
    // p[4] = 5;
    // p[3] = 4;
    for (int i = 0; i <= 4; i++)
    {
        printf("The elements are : %d\n", p[i]);
    }

    return 0;
}