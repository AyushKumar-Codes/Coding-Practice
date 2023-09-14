// #include<stdio.h>
// struct student{
//     char name[30];
//     int roll;
// }s,s1;
// int main(){
//     FILE *fp;
//     fp=fopen("k.dat","wb");
//     printf("Enter Name and roll no:- ");
//     scanf("%s%d",s.name,&s.roll);
//     fwrite(&s,sizeof(s),1,fp);
//     printf("record saved");
//     fclose(fp);
//     fp=fopen("k.dat","rb");
//     if (fp==NULL)
//     printf("File not present");
//     else
//     {
//         fread(&s1,sizeof(s1),1,fp);
//         printf("\nName :- %s rollno:- %d ",s1.name,s1.roll);
//     }
//     fclose(fp);
//     return 0;
// }

#include<stdio.h>
struct student{
	char name[30];
	int r;
}s[20],s1[20];
int main()
{
	FILE*fp;
	int n,i;
	printf("\n Enter total no of students \t");
	scanf("%d",&n);
	fp=fopen("astruct.dat","wb");
	for(i=0;i<n;i++)
{
	printf("enter name and roll no \n");
	scanf("%s%d",s[i].name,&s[i].r);
}
fwrite(&s,sizeof(s),3,fp);
fclose(fp);
fp=fopen("astruct.dat","rb");
printf("\n Data in file is: \n");
fread(&s1,sizeof(s1),3,fp);
for(i=0;i<3;i++)
{
	printf("\n%s",s1[i].name);
	printf("\t %d",s1[i].r);
}
fclose(fp);
return 0;
}
