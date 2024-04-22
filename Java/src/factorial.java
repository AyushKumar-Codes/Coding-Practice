import java.util.*;
public class factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number for the factorial: ");
        int num = sc.nextInt();

        int pro = 1;
        for(int i=2;i<=num;i++){
            pro*=i;
        }
        System.out.printf("Factorial of %d is %d",num,pro);

    }
}
