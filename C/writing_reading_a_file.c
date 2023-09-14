#include<stdio.h>
int main(){
    int rn;
    char name[20];
    FILE *fp;
    fp=fopen("new.txt","w");
    printf("Enter rollno and name\n");
    scanf("%d %s",&rn,name);
    fprintf(fp,"%d %s",rn,name);
    fclose(fp);
    fp=fopen("new.txt","r");
    fscanf(fp,"%d %s",&rn,name);
    printf("%d %s\n",rn,name);
    fclose(fp);
}