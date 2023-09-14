// #include<stdio.h>
// int main()
// {
//     int p=30,*x,*z;
//     x=&p;
//     printf("%d",x);
//     p++;
//     z=x;
//     *x++=*z++;
//     printf("p=%d,*x=%d,*z=%d\n",p,*x,*z);
// }

// #include<stdio.h>
// int main()
// {
//     int p=10,*x,*z;
//     x=&p;
//     z=x;
//     printf("%p %p",z,x);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char p[]="Hello";
//     char q[]="World ";
//     printf("%s",strcpy(q,strcat(p,q)));
// }


// #include <stdio.h>
// int main() {
// int a = 10;
// printf("%d\n", ++a + a++);
// return 0;
// }


// #include <stdio.h>
// #include<stdlib.h>
// int main() {
// int *a,*p;
// a=(int *)calloc(1,sizeof(int));
// a=10;
// // p=free(a);
// printf("%d",p);
// return 0;
// }


// #include <stdio.h>
// int main() {
// char *a= "String";
// char *b=" String";
// b[0]=a[6];
// printf("%s",b);
// return 0;
// }


// #include <stdio.h>
// int main() {
// printf("%d",98%15);
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Row: ");
//     scanf("%d",&r);
//     printf("Column: ");
//     scanf("%d",&c);
//     int l[r][c];
//     for (int i=0;i<r;i++){
//         for (int j=0 ; j<c;j++){
//             scanf("%d",&l[i][j]);
//         }
//     }
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             printf("%d ",l[j][i]);
//     }
//     printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1=n;
    char a='a';
    for (int i=n;i>0;i--){
        for(int j=0;j<i;j++){
        printf("%c " ,a);
        a++;
        }
        n1--;
        printf("\n");
    }
}