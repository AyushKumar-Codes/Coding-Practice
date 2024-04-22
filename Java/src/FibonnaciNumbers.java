import java.util.*;
public class FibonnaciNumbers {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter a number to print the fibonnaci series till: ");
        int a =0 ,b=1 ,till,temp;
        till= sc.nextInt();
        while(a<=till){
            System.out.println(a);
            temp=a;
            a+=b;
            b=temp;
        }
    }
}
