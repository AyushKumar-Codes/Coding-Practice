#include<stdio.h>
struct employee
{
    int id;
    char name[10];
    int age;
};
int main(){
    struct employee emp , *ptr; 
    ptr=&emp;
    printf("Enter Details of employee : id , name,age \n");
    scanf("%d%s%d",&ptr->id,(*ptr).name,&(*ptr).age);
    printf("Details of employee are; \n");
    printf("id= %d \n Name= %s\n Age= %d",ptr -> id,(*ptr).name,ptr->age);
}
