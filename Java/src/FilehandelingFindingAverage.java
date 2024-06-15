import java.util.*;
import java.io.*;
public class FilehandelingFindingAverage {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            String f = sc.nextLine();
            FileReader fr = new FileReader(f);
            BufferedReader  br = new BufferedReader(fr);
            String line;
            ArrayList <Integer> g = new ArrayList <>();
            int sum =0 ;
            while ((line = br.readLine())!=null){
                g.add(Integer.parseInt(line));
                sum+=Integer.parseInt(line);
            }

            System.out.println("Average Grade : " + sum/g.size());
            Collections.sort(g);
            System.out.println("Highest Grade "+g.get(g.size()-1));
            System.out.println("Lowest Grade "+g.get(0));
        }
        catch (IOException e) {
            System.out.println("File Not Found");
        }

    }
}
