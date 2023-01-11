#include<stdio.h>
int main(){
    char *words[20]={"DOG", "CAT", "ELEPHANT", "CROCODILE", "HIPPOPOTAMUS","Ayush"};//String Array
    int num[10]={1,2,3,4,5,8};//Int Array
    int num1[]={1,2,3,4,5,6,6,5,6,7,8};//Indefinte Length Array
    int t=sizeof(num);//int or size_t both data type can be used
    size_t t1=sizeof(num)/sizeof(num[0]);
    size_t d= sizeof(words);
    size_t s=sizeof(words)/sizeof(words[0]);//Size_t is a data type which is used to store size of elements ; This is formula for finding the length of array (Sizeof array / sizeof  first element in array)
    int n1=sizeof(num1);
    int tn1=sizeof(num1)/sizeof(num1[0]);
    printf("Size of Word Array is: %d bytes",d);
    printf("\nLength of Word Array is: %d",s);
    printf("\nSize of Num Array is: %d bytes",t);
    printf("\nLength of Num Array is: %d",t1);
    printf("\nSize of Indefinte Array is: %d bytes",n1);
    printf("\nLength of Indefinte Array is: %d",tn1);
    printf("\n%d",d/sizeof(int));//This is another formula for length of an array but this only works when array is constant and will not change
    //Counting number of elements in Array if that array is not full
    //VVI if an array is full then its value is counting is higher than the size of array we can use above formula in that case "sizeof(array)/sizeof(array[0])"
    int c=0 , cn=0 , cn1=0;
    for (int i=0;i<=100;i++){
        if((words[i]!='\0') && (i!=s)){// '\0' is use for null element
            c++;
        }
        if ((num[i]!=0) && (i!=t1)){// we can use 0 also because 0 is stored if it is null or empty
            cn++;
        
        } 
        if ((num1[i]!='\0') && (i!=tn1)){
            cn1++;
        }
        else{
            break;
        }
    }
    printf("\n number of elements in Word array: %d",c);
    printf("\n number of elements in Num array: %d",cn);//one extra is showing because of multiple if statement if we use if for num is used alone in that for loop 
    printf("\n number of elements in Indefinte array: %d",cn1);
// 2d Array length
printf("\n2-D Array:\n");
int arr[20][30]={{1,2,3,4,5},{2,1,6,7,8},{3,1,6,7,8}};
int row=sizeof(arr)/sizeof(arr[0]);
int col=sizeof(arr[0])/sizeof(arr[0][0]);
printf("Number of Row: %d",row);
printf("\nNumber of Col: %d",col); 
return 0;
}

