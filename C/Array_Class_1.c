#include <stdio.h>
// int main(){
//     int a[5];
//     for (int i=0;i<5;i++)
//     scanf("%d",&a[i]);
//     printf("Array is : ");
//     for (int i=0;i<5;i++)
//     printf("\n %d",a[i]);
// }
//Reverse order
// int main(){
//     int a[5];
//     for (int i=0;i<5;i++)
//     scanf("%d",&a[i]);
//     printf("Array is : ");
//     for (int i=4;i>=0;--i)
//     printf("\n %d",a[i]);
// }

//Sum of elements of array

// int main(){
//     int a[10];
//     int sum=0;
//     for (int i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for (int i=0;i<10;i++)
//     sum=sum+a[i];
//     printf("\nSum is %d",sum);

// }

//Adding each elements;
// int main(){
//     int a[10];
//     for (int i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     for (int i=0;i<10;i++)
//     a[i]+=2;
//     printf("After adding 2 to each elements:");
//     for (int i=0;i<10;i++)
//     printf("\n %d",a[i]);

// }



int main(){
    int a[10];
    for (int i=0;i<10;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for (int i=1;i<10;i++)
    if (max<a[i]){
        max=a[i];
    }
    printf("Maximum Element: %d",max);
}
