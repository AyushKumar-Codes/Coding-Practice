import java.util.Scanner;
public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        StringBuilder Str = new StringBuilder();
        System.out.print("Enter a number or String to Check Palindrome: ");
        Str.append(sc.nextLine());
        System.out.println("Reverse of the Given input is " + Str.reverse());
        if(Str.toString().equals(Str.reverse().toString())){
            System.out.println("It is a Palindorme");
        }
        else{
            System.out.println("It is not a Palindrome");
        }
    }
}
