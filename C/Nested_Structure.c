#include<stdio.h>
    struct account{
        int acc_no;
        float balance;
    };
    struct customer{
        char name[10];
        char add[10];
        struct account ac;
    };
int main(){
    struct customer cust;
    printf("Enter Customer name :");
    scanf("%s",cust.name);
    printf("Enter Customer address :");
    scanf("%s",cust.add);
    printf("Enter account Number:");
    scanf("%d",cust.ac.acc_no);
    printf("Enter Balance");
    scanf("%f",&cust.ac.balance);
    printf("Customer name : %s\n Address : %s \n",cust.name,cust.add);
    printf("Account number : %d\n Balance : %.2f \n",cust.ac.acc_no,cust.ac.balance);
}