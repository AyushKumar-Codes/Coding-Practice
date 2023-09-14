#include<stdio.h>
// int main(){
//     int i=5,*ptr;
//     ptr=&i;
//     printf("%u",ptr);
//     printf("\n%d",&i);
//     printf("\n%d",*ptr);
//     printf("\n%d",i);
//     printf("\n%d",&ptr);
// }

// int main(){
//     int a=12;
//     float b=1.222;
//     char c='a';
//     void *ptr;
//     ptr=&a;
//     printf("Integer no= %d\n",*(int *) ptr);
//     ptr=&b;
//     printf("Float no %f \n",*(float *)ptr);
//     ptr=&c;
//     printf("Character is %c ",*(char *)ptr);
// }

// #include<stdio.h>
// int main(){
//     int a[5],*p,sum=0;
//     printf("Enter elements of array\n");
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     p=a; //p=&a[0];
//     for(int i=0;i<5;i++){
//         sum=sum+*(p+1);
//     }
//     printf("\nSum of array element aare %d",sum);
//     }
// }

//Sum of elements in array using array
// int main(){
//     int a[5],*p,max=0;
//     printf("Enter elements of array\n");
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     p=a; //p=&a[0];
//     max=*p;
//     for(int i=0;i<5;i++){
//         if(max<*(p+i)){
//             max=*(p+i);
//         } 
//     }
//     printf("\nMaximum Element is %d",max);
    
// }

//Arithmatic Operation On pointer and its value
int *p1,*p2,*p3,*p4;
int i=10;
int j=2;
int a[5]={10,20,3,40,5};
int main(){
    int m,n,x,y,z;
    p1=&i;
    p2=&j;
    p3=&a[1];
    p4=&a[3];
    m=p4-p3;
    printf("\nPointer Substraction is =%d",m);
    printf("\nthe value of p1 is= %d",p1);
    printf("\nthe value of p2 is= %d",p2);
    printf("\nthe value of p3 is= %d",p3);
    x=*p3+2;
    p3=p3+2;
    printf("\n The value of integer add in pointer deref is= %d",x);
    printf("\n The value of integer add in pointer is = %d",p3);
    printf("\n The value of integer add in pointer is = %d",*p3);
    if (p1>=p2){
        printf("\n%d\n%d\n%d",m,n,x);
    }
    if(p1<=p2){
        printf("\n%u\n%u\n%u",p1,p2,p3);
    }
    if (p3==p4){
        printf("\nhello");
    }
}
