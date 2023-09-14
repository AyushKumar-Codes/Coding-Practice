#include<stdio.h>
struct book
{
	int pages;
	int id;
	float price;
};
int main()
{
	int x;
	printf("Enter the number of book: ");
	scanf("%d",&x);
	struct book b[x];
	
	for(int i=0;i<x;i++)
	{
		printf("Enter the details of book %d: \n\n",i+1);
		printf("Enter no of pages:");
		scanf("%d",&b[i].pages);
		printf("Enter Book price:");
		scanf("%f",&b[i].price);
		printf("Enter Book Id:");
		scanf("%d",&b[i].id);
	}
	for(int i=0;i<x;i++)
	{
		printf("\nBooks %d detail:",i+1);
		printf("\nBooks Id:%d",b[i].id);
		printf("\nBooks Pages:%d",b[i].pages);
		printf("\nBooks Price:%f",b[i].price);
	}
}