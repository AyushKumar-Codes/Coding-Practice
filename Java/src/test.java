
import java.io.FileReader;
import java.util.*;
//import java.lang.*;
import java.io.*;
import java.time.format.DateTimeFormatter;
import java.time.LocalDate;
import java.time.Period;
import java.time.temporal.ChronoUnit;


public class test {
    public static void main(String[] args) {
//        String a = "Ayush";
//        String b="Ayus";
//        int[][] a = new int[4][2];
//        for(char i : a.toUpperCase().toCharArray()){
//            System.out.println(i);
//        }
//        Scanner sc = new Scanner(System.in);

//        for(int i=0;i<4;i++){
//            a[i]=sc.nextInt();
//        }
//        Arrays.sort(a);
//        System.out.println(a[1].length);
//        System.out.print("Enter Name: ");
//        String n = sc.nextLine();
//        System.out.print("Enter age: ");
//        int a = sc.nextInt();
//        System.out.print("Enter address: ");
//        String ad = sc.nextLine();
//        System.out.println("adress"+ad);

//        String s = "12.34";
//        int s =23;
//        double a = Double.valueOf(s);
//        System.out.println(a);

//        String  s = "Ayush";
//        StringBuilder s1 = new StringBuilder(s);
//        System.out.println(s1.toString().equals(s));
//        s1.reverse();

//        char  a = 'a';
//        System.out.println(Character.toUpperCase(a));
//        System.out.println(s.toUpperCase());

//        String a = "23412";
//        int[] b = new int[4];
//        b[0]=1;
//        System.out.println(a.length());
//        System.out.println(b.length + " " + b[0]);

//        for(char i: a.toCharArray()){
//            System.out.println(i-'0' + 2);
//        }

//        System.out.println(System.currentTimeMillis());

//        String s = sc.nextLine();
//        DateTimeFormatter in = DateTimeFormatter.ofPattern("yyy-MM-dd");
//        DateTimeFormatter out = DateTimeFormatter.ofPattern("EEEE , MMMM , yyyy");
//        String s1 = sc.nextLine();
//        LocalDate da = LocalDate.parse(s,in);
//        LocalDate da1 = LocalDate.parse(s1,in);
//        Period diff = Period.between(da,da1);
//        System.out.println(diff.getDays());
//        String a = da1.format(out);
//        System.out.println(a);

//        try {
//            int[] arr = {1, 2, 3, 4};
//
//            System.out.print(arr[9]);
//        }
//        catch (ArrayIndexOutOfBoundsException e) {}{
//            System.out.print("Array index out of bounds");
//        }

//        try{
//            FileReader r = new FileReader("log.text");
//            BufferedReader br = new BufferedReader(r);
//            String line;
//            while((line = br.readLine())!=null){
//                System.out.println(line);
//            }
//        }
//        catch(Exception e){
//            System.out.println("Error reading log file");
//        }

//        try {
//            FileWriter r = new FileWriter("log.text",true);
//            BufferedWriter br = new BufferedWriter(r);
//            Scanner sc = new Scanner(System.in);
//            String line = sc.nextLine();
//            br.write("\n"+line);
//            br.close();
//        } catch (Exception e) {
//            System.out.println("Error reading log file");
//        }

//        try{
//            int a = 3 , b =0;
//            System.out.println(a/b);
//        }
//        catch(ArithmeticException e){
//            System.out.println("Dividingn by 0");
//        }

//        System.out.println(Character.toUpperCase('a'));

//       Map<String, Integer> map = new HashMap<>();
//        map.put("a", 1);
//        map.put("a", 2);
//        for( int i : map.values()){
//            System.out.println(i);
//        }

//        ArrayList<Integer> arr = new ArrayList<>();
//        arr.add(1);
//        arr.add(4);
//        arr.add(5);
//        arr.add(2);
//        arr.remove(2);
//        Collections.sort(arr);
//        System.out.println(arr);
//
//        try {
//            FileReader fr = new FileReader("log.text");
//            BufferedReader br = new BufferedReader(fr);
//            ArrayList<String> list = new ArrayList<>();
//            String line;
//            while ((line = br.readLine()) != null) {
//                list.add(line);
////            }
//            Collections.reverse(list);
//            for (String i : list) {
//                System.out.println(i);
//            }
//        }
//        catch (Exception e) {
//            System.out.println(e);
//        }

//        int a =  256;
//        String s = Integer.toString(a);
//        for(int i=s.length()-1;i>=0;i--) {
//            System.out.print(s.charAt(i));
//        }

//        String s = "Ay ush";
//        String a = s.replace("y u","j");
//        StringBuffer sb =new StringBuffer(s);
////        sb.replace("//by//b","a");
//        System.out.println(a);

//        System.out.println(s.indexOf("u"));

//        System.out.println(Character.isUpperCase('A'));

//        ArrayList<Integer> arr = new ArrayList<>();
//        arr.add(2);
//        arr.add(50);
//        arr.add(3);
//        arr.add(12);
//        arr.add(5);
//        Collections.rotate(arr,2);
//        System.out.println(arr);

//        int [] arr ={23,1,34,12,56};
//        Arrays.sort(arr);

//        System.out.println(Math.pow(2,4));

//        Scanner sc = new Scanner(System.in);
//        String s1 = sc.nextLine();
//        String s2 = sc.nextLine();
//        DateTimeFormatter in = DateTimeFormatter.ofPattern("dd/MM/yyyy");
//        DateTimeFormatter out = DateTimeFormatter.ofPattern("EE , MMMM  , yyyy");
//        LocalDate d1  = LocalDate.parse(s1,in);
//        LocalDate d2  = LocalDate.parse(s2,in);
//        Period diff = Period.between(d1,d2);
//        Long days = ChronoUnit.DAYS.between(d1,d2);
//        System.out.println(days);
//        System.out.println(diff.getDays());
//        System.out.println(diff.getMonths());
//        System.out.println(diff.getYears());
//        System.out.println(diff.getChronology());
//        String date = d1.format(out);
//        System.out.println(date);

//        System.out.println(("A").equalsIgnoreCase("a"));

//        try {
//            FileWriter fw  = new FileWriter("log.text",true);
//            BufferedWriter bw = new BufferedWriter(fw);
//            String s = "Ayush Kuamr";
//            bw.write(s);
//            bw.close();
//            FileReader fr = new FileReader("log.text");
//            BufferedReader br = new BufferedReader(fr);
//            String line ;
//            while((line = br.readLine())!=null){
//                System.out.println(line);
//            }
//            br.close();
//        }
//        catch(IOException e){
//            System.out.println(e);
//        }
        double v = 98.45677;
        System.out.printf("Avg is %.2f ", v);


    }
}
