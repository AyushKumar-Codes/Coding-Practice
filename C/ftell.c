#include<stdio.h>
int main(){
    FILE *fp;
    int n,ch,pos;
    fp=fopen("new.txt","r");
    printf("Here is the content available in file ----->\n\n");
    while ((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    printf("\n\nfp=%d\n\n",ftell(fp));
    printf("\n Enter how many characters would u like to skip");
     scanf("%d",&n);
     fseek(fp,-n,SEEK_END);
     printf("\nn=%d\n",n);
     printf("\nfp=%d\n\n",ftell(fp));
     printf("\n Info after %d bytes------>\n\n\n",n);
     while((ch=fgetc(fp))!=EOF);
     printf("%c",ch);
     printf("\n\n");
    fclose(fp);
}