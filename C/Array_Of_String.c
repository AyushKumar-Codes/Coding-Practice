// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char arr[n][10];//This can store n words of max 10 length;
//     for(int i=0;i<n;i++){
//         scanf("%s",arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%s\n",arr[i]);
//     }
// }

// Storing whole sentence
// #include<stdio.h>
// #include <string.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char arr[n][100];//This can store n words of max 100 length;
//     scanf("\n");//This is need as we have ignore Enter button pressed after giving the value of n
//     for(int i=0;i<n;i++){
//         fgets(arr[i],100,stdin);
//     }

//     for(int i=0;i<n;i++){
//         printf("%s\n",arr[i]);
//         printf("%d\n",strlen(arr[i]));
//     }
// }