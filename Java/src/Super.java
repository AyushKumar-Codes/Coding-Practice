//package src.super;
import java.util.*;

class animal{
    String name;
    animal(String n){
        name = n;
    }
    public void details(){
        System.out.println(name+" this comes under Animal Class");
    }
}

class dog extends animal{
    String breed;
    dog(String n , String b){
        super(n);
        breed = b;
    }
    public void details(){
        super.details();
        System.out.println(name+" is a dog");
        System.out.println("Its breed name is : "+breed);
    }
}

public class Super {
    public static void main(String[] args) {
        dog d =new dog("Milli","Indian Spitz");
        d.details();
    }
}
