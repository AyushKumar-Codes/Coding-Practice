import java.util.*;
import java.io.*;

public class ReverseFileContent {
    public static void main(String[] asd) {
        ArrayList<String> ar = new ArrayList<>();
        String f1;
        Scanner sc = new Scanner(System.in);
        f1 = sc.nextLine();

        try {
            FileReader fr = new FileReader(f1);
            BufferedReader br = new BufferedReader(fr);
            String t;
            while ((t = br.readLine()) != null) {
                ar.add(t);
            }
            Collections.reverse(ar);
            for (String i : ar) {
                System.out.println(i);
            }
        } catch (IOException e) {
            System.out.println("Error: Unable to read the file");
        }
    }
}
