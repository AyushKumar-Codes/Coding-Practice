#include<stdio.h>
// int main(){
//     int a,b;
    // scanf("%d%d",&a,&b);
    // if(a>b){
    //     printf("Greatest number is: %d",a);
    // }
    // else{
    //     printf("Greatest Number is: %d",b);
    // }
    
// }
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     if (a>=0){printf("%d is a positive number",a);}
//     else{printf("%d is a negative number",a);}
// }
int main(){
    int m;
    printf("Enter your marks: ");
    scanf("%d",&m);
    if ((m>=90)&&(m<=100)){
        printf("Grade is A");
    }
    else if ((m>=80)&&(m<=89)){
        printf("Grade is B");
    }
    else if ((m>=70)&&(m<=79)){
        printf("Grade is c");
    }
    else if ((m>=60)&&(m<=69)){
        printf("Grade is D");
    }
    else{
        printf("Fail");
    }
}