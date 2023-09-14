#include<stdio.h>
main()
{
      int a1= 97,a;
      float b= 2311.126;
      printf("\"hello\"");// display "hello"
      char s[40]="I am going to attend lecture";
      char c='x';
      a=(int)b;
      printf("a= %d",a);
      printf("\na1= %c",a1);
      
      printf("\n *************formatting of int***********");
      printf("\n\na= %d",a);    //display as such
      printf("\n\na= %5d",a);   // _2311
      printf("\n\na= %.5d",a); //02311
      printf("\n\na= %05d",a); //02311
      printf("\n\na= %-5d",a); // display as such
      printf("\n\na= %-05d",a); //display as such
      
      
      printf("\n *************formatting of float***********");
      printf("\n\nb= %f",b); // as such
      printf("\n\nb= %3f",b); // as such
      printf("\n\nb= %.2f",b); //after decimal 2 digit - roundup
      printf("\n\nb= %.4f",a); //after decimal 4 digit-ru
      printf("\n\nbbb= %10.4f",a); //total 10 but after digit 4 and 
                                    //if no. of digits are less then 10 then give space
      
      printf("\n\nbg= %g",b); // as such it display max 6 digits
      printf("\n\nbg= %2g",b);// total 2 and shift decimal too after 1st digit
      printf("\n\nbg= %.4g",a);// total 4 and will not shift decimal after 1st digit-round up
      
      printf("\n\nbe= %e",b); //shift dot/decimal after 1st
      printf("\n\nbe= %.2e",b);// shift dot after 1st and after decml 2 digits will be there
      printf("\n\nbe= %.4e",a); //shift dot after 1st and after decml 4 digits will be there
      
      printf("\n *************formatting of char***********");
      printf("\n\nc= %c",c);//x
      printf("\n\nc= %5c",c);//_ _ _ _x
      printf("\n\nc= %.4c",c);// display as such
      printf("\n\nc= %05c",c);//0000x
      printf("\n\nc= %-5c",c);// display as such
      
      printf("\n *************formatting of string***********");
      printf("\n\ncs= %s",s);
      printf("\n\ncs= %5s",s);//min 5 char
      printf("\n\ncs= %.5s",s);//max 5
      printf("\n\ncs= %.50s",s);//as such
      printf("\n\ncs= %-.50s",s);//as such
      printf("\n\ncs= %50s",s);// space_ _ _ - -  _ i am going to attend lecture
      

}
