import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class FileMerger {
    public static void main(String[] sasd) {
        Scanner sc = new Scanner(System.in);
        try {
            String f1 = sc.nextLine();
            String f2 = sc.nextLine();

            FileReader fr1 = new FileReader(f1);
            FileReader fr2 = new FileReader(f2);

            BufferedReader br1 = new BufferedReader(fr1);
            BufferedReader br2 = new BufferedReader(fr2);

            System.out.println("Merged file contents:");

            String t;
            while ((t = br1.readLine()) != null) {
                System.out.println(t);
            }

            while ((t = br2.readLine()) != null) {
                System.out.println(t);
            }
        } catch (IOException e) {
            System.out.println("File does not exist");
        }
    }
}
