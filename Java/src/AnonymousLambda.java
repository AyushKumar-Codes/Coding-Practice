//By using abstract class

//abstract class Vehicle{
//    abstract void drive();
//}
//
//class AnonymousLambda{
//    public static void main(String[] args) {
//        Vehicle car = new Vehicle() {
//            @Override
//            void drive() {
//                System.out.println("I'm driving a car.");
//            }
//        };
//        car.drive();
//    }
//}

//by implementing Interface
//@FunctionalInterface
//interface Human{
//    void walk();
//}
//
//class AnontmousLambda{
//    public static void main(String[] args) {
//        Human John = new Human() {
//            @Override
//            public void walk() {
//                System.out.println("John walks.");
//            }
//        };
//        John.walk();
//    }
//}

//When only one function is in interface

@FunctionalInterface
interface LambaExp{
    void meth1(int a, int b);
}

class AnonymousLambda{
    public static void main(String[] args) {

        LambaExp obj =(a,b)->{
            System.out.println("The value of a and b is : "+ a + "," + b);
        };
        obj.meth1(5,10);
    }
}


