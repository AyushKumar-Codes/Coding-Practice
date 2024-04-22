import java.util.*;
public class GCD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter numbers to find GCD: ");
        int a = sc.nextInt(),b= sc.nextInt();
        for(int i=Math.min(a,b);i>0;i--){
            if(a%i==0 && b%i==0){
                System.out.println("GCD of "+a+" and "+b+" is "+ i);
                break;
            }
        }
    }
}
