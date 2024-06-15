import java.util.*;
import java.io.*;

public class AppendToFile {
    public static void main(String[] a) {
        Scanner sc = new Scanner(System.in);
        String f = sc.nextLine();

        try {
            FileWriter fw = new FileWriter(f, true);
            BufferedWriter bw = new BufferedWriter(fw);
            String s = sc.nextLine();
            bw.write(s);
            BufferedReader br = new BufferedReader(new FileReader(f));
            String line;
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
        }
        catch (IOException e) {
            System.out.println("File does not exist");
        }
    }
}
