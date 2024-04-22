import java.util.*;

//My attempt but not optimized

public class PrimeFactorization {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter the number to get its Prime Factors: ");
        int num= sc.nextInt();
        ArrayList <Integer> parr= new ArrayList<>();
        for(int i=1;i<=num;i++) {
            if (i <= 3 && i >= 1) {
                parr.add(i);
            }
            else if (i > 3) {
                boolean chk =false;
                for (int j = 2; j < i; j++) {
                    if (i % j == 0) {
                        chk=true;
                        break;
                    }
                }
                if(!chk){
                    parr.add(i);
                }
            }
        }

        // To see the prime numbers in parr
//        for(int i=0;i<parr.size();i++){
//            System.out.println(parr.get(i));
//        }

        System.out.print("Prime Factors are : ");
        for(int i=0;i<parr.size();i++){
            if(num%parr.get(i)==0){
                System.out.print(parr.get(i)+" ");
                num/= parr.get(i);
                i=0;
            }
        }

    }
}




//Optimized Code from Internet

//public class PrimeFactorization {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        System.out.print("Enter the number to get its Prime Factors: ");
//        int num = sc.nextInt();
//
//        // Print the number of 2s that divide num
//        while (num % 2 == 0) {
//            System.out.print(2 + " ");
//            num /= 2;
//        }
//
//        // num must be odd at this point so a skip of 2 can be used
//        for (int i = 3; i <= Math.sqrt(num); i += 2) {
//            // While i divides num, print i and divide num
//            while (num % i == 0) {
//                System.out.print(i + " ");
//                num /= i;
//            }
//        }
//
//        // This condition is to handle the case when num is a prime number
//        // greater than 2
//        if (num > 2)
//            System.out.print(num);
//    }
//}

