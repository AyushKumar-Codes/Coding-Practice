import java.time.LocalDate;
import java.time.Period;

public class DateDifference {

    public static void main(String[] args) {
        LocalDate date1 = LocalDate.of(2024, 3, 20);
        LocalDate date2 = LocalDate.of(2024, 3, 30);
        Period difference = Period.between(date1, date2);

        System.out.println("Difference between dates: "
                + difference.getDays() + " days");
    }
}
