#include<stdio.h>

long arr[35];

long find(long n)
{
    long bin = 0;
    long dec = n;
    long i = 1;

    while (dec > 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }

    return bin;
}

void logic(char str[32]) {
    int arr1[35];
    int count;
    int k=0;
    for (count = 0; str[count] != '\0'; ++count);
    if(count==32) {
        for(int i = 0; i < count; i++){
        arr1[i] = str[i];
    }

    for(int j = 0;j<count;j=j+2) {
        int num = arr1[j]<<8;
        num += arr1[j+1];
        arr[k] = find(num);
        k++;
    }
    }
    else {
        printf("Noooo! its the wrong password.\n");
        exit(0);
    }
}

void flag_check ()
{
  FILE* file = fopen ("pass.txt", "r");
  long i = 0;
  int j=0;
  int count=0;
  long arr1[20];

  fscanf (file, "%ld", &i);
  while (!feof (file))
    {
      arr1[j]=i;
      j++;
      fscanf (file, "%ld", &i);
    }
  fclose (file);
  for(int k=0; k<16; k++){
      if(arr1[k]==arr[k]){
          count++;
    }
  }
  if(count==16){
      printf("Wow! You unlocked the door.\n");
}
else {
    printf("Oh! I think you need to try hard.\n");
}
}

int main() {
    char str[35];
    printf("Enter the Key: ");
    gets(str);
    logic(str);
    flag_check();
    return 0;
}