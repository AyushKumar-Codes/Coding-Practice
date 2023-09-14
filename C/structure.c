#include<stdio.h>
struct book
{
    int id;
    float price;
    int no_of_pages;
}a;
int main(){
    struct book b;
    printf("Enter details of book \n");
    printf("\n Enter id: ");
    scanf("%d",&b.id);
    printf("\nEnter book price: ");
    scanf("%f",&b.price);
    printf("\n Enter no. of pages: ");
    scanf("%d",&b.no_of_pages);

    printf("\nDetails of Book is \n");
    printf("ID = %d",b.id);
    printf("\nPrice = %f",b.price);
    printf("\nNo of pages = %d",b.no_of_pages);

}


//Coping an Structure to another Structure

struct book
{
    int id;
    float price;
    int no_of_pages;
};
int main(){
    struct book b,w;
    printf("Enter details of book \n");
    printf("\n Enter id: ");
    scanf("%d",&b.id);
    printf("\nEnter book price: ");
    scanf("%f",&b.price);
    printf("\n Enter no. of pages: ");
    scanf("%d",&b.no_of_pages);
    w=b;
    printf("\nDetails of Book is \n");
    printf("ID = %d",w.id);
    printf("\nPrice = %f",w.price);
    printf("\nNo of pages = %d",w.no_of_pages);

}