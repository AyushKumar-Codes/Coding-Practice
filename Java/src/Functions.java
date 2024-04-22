import java.util.*;
public class Functions {
    static int add(int a,int b){//This method we have used static so that we dont need to make obj
        int c= a+b;
        return c;
    }
    String s_add(String a ,String b){// In this we don't use Static so we have to create a Obj of Functions Class in main function
        return a+b;
    }
    public static void main(String[] args) {
        int x=7,y=4;
        factorial obj = new factorial();
        System.out.println(add(x,y));
        String x1="Ayush",y1="Coder";
        Functions fn = new Functions();
        System.out.println(fn.s_add(x1,y1));

    }
}

