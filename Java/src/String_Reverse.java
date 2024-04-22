import java.util.*;

public class String_Reverse {
    public static void main(String[] args) {
        String S = "My Name is Ayush";
        //This method uses loop
//    char [] s1 = new char[S.length()];
//    for(int i=0;i<S.length();i++){
//        s1[i]=S.charAt(i);
//    }
//        System.out.println(s1);

//  This method is direct function method
//        StringBuilder S1= new StringBuilder(S); // S is in StringBuilder Constructor
//        S1.append(S); //if you are not using constructor in StringBuilder you can use append

//        System.out.println(S1.reverse());


//  Using input and StingBuilder
        Scanner sc = new Scanner(System.in);
        StringBuilder S2 = new StringBuilder();
        S2.append(sc.nextLine());
        System.out.println(S2.reverse());
    }
}
