#include<stdio.h>
struct book
{
	int pages;
	int id[3];
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
		printf("\nEnter the details of book %d: \n\n",i+1);
		printf("Enter No. of pages:");
		scanf("%d",&b[i].pages);
		printf("Enter Book's price:");
		scanf("%f",&b[i].price);
		for(int j=0;j<3;j++){
		
		printf("Enter %d Book Id:",j+1);
		scanf("%d",&b[i].id[j]);
	}
	}
	for(int i=0;i<x;i++)
	{
		printf("\nBooks %d detail:",i+1);
		for(int j=0;j<3;j++){
		
		printf("Book Id %d : %d\n",j,b[i].id[j]);}
		
		printf("\nBooks Pages:%d",b[i].pages);
		printf("\nBooks Price:%f",b[i].price);
	}
}