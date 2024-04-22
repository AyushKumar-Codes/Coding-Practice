import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

public class DateToDayFormaterJavaUtilities{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        DateTimeFormatter inputFormatter = DateTimeFormatter.ofPattern("yyyy-MM-dd");
        DateTimeFormatter outputFormatter = DateTimeFormatter.ofPattern("EEEE, MMMM dd, yyyy");

        String inputDate = scanner.nextLine();
        LocalDate date = LocalDate.parse(inputDate, inputFormatter);

        String formattedDate = date.format(outputFormatter);
        System.out.println(formattedDate);
    }
}

