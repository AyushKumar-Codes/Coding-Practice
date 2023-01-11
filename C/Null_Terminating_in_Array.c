#include<stdio.h>
int main(){
    char w[30]="Ayush";
    w[4]='\0';//This will terminate the array at 4th index or 4 index will be null
    // w[4]='0';//This will add "0" to 4th Index
    //w[2]='\0';//String will be terminated at 2nd Index
    printf("%s",w);

}