import java.util.*;
public class PrimeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number to check whether It  is Prime or not : ");
        int num = sc.nextInt();
        if(num<=3 && num>1){
            System.out.println("It is a Prime Number");
        }
        else if (num>3) {
            boolean ch =false;
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    System.out.println("It is not a Prime Number");
                    ch=true;
                    break;
                }
            }
            if(!ch){
                System.out.println("It is a Prime Number");
            }
        }
        else {
            System.out.println("It is not a Prime Number");
        }

    }
}
