import java.util.*;
public class StrToIntConvertor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String Str = sc.nextLine();
        int num = Integer.valueOf(Str) + 100;
        System.out.println(num);
        int num1 = sc.nextInt();
        sc.skip("\n");
        String Str1 = num1 + " this is value of num1";
        System.out.println(Str1);
    }
}
