//Read Mode when file not exit
// #include<stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("new.txt","r");
//     if (p==NULL){
//         printf("File does not exit");

//     }
//     fclose(p);
// }

//Write Mode file creation 
// #include<stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("new.txt","w");
//     if (p==NULL){
//         printf("File does not exit");

//     }
//     else{
//     printf("File Created");}
//     fclose(p);
// }

// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char x;
//     fp=fopen("new.txt","w");
//     printf("Enter any key from keyboard : ");
//     x=getchar();
//     putc(x,fp);//putc and getc is use for printing and taking input single character while puts and gets is use for string
//     fclose(fp);
//     fp=fopen("new.text","r");
//     x=getc(fp);
//     printf("\nData stored in the file is %c",x);
//     fclose(fp);
// }
#include<stdio.h>
#include<string.h>
int main(){
    FILE *f;
    char x,ch;
    f=fopen("new.txt","w");
    printf("Enter a line");
    while(x!='.'){
        x=getche();
        fputc(x,f);
    }
    printf("\n Record saved\n");
    fclose(f);
    f=fopen("new.txt","r");
    printf("Data stored in the file: \n %s",x);
    while((ch=fgetc(f))!=EOF){
        printf("%c",ch);
    }
    fclose(f);
}