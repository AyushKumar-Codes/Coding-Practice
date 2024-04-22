import java.util.Scanner;
public class ArmstrongNumberCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a Number to Check Amrstrong: ");
        StringBuilder str = new StringBuilder();
        str.append(sc.nextLine());
        int sum=0;
        for(int i=0;i<str.length();i++){
            sum+= Math.pow(str.charAt(i)- '0' , str.length()) ;
        }
        if(sum == Integer.parseInt(str.toString())){
            System.out.println("It is a Armstrong Number");
        }
        else{
            System.out.println("It is not a Armstrong Number");
        }
    }
}
