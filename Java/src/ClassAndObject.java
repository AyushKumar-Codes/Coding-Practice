import java.util.*;

class employee{
    String Name="";
    int id;
    int Salary;
    public void printDetails(){
        System.out.println("Employee Name is "+Name+" and its Id is "+id);
        System.out.println(Name+ " has salary "+Salary);
    }
}

public class ClassAndObject {
    public static void main(String[] args) {
        System.out.println("This is a our custom class");
        employee Ayush = new employee();
        Ayush.Name= "Ayush Singh";
        Ayush.id = 12;
        Ayush.Salary=1300;
        Ayush.printDetails();
        employee sibiston = new employee();
        System.out.print("Enter Name: ");
        Scanner sc = new Scanner(System.in);
        sibiston.Name = sc.nextLine();
        System.out.print("Enter id: ");
        sibiston.id=sc.nextInt();
        System.out.print("Enter Salary: ");
        sibiston.Salary= sc.nextInt();
        sibiston.printDetails();
        employee [] finance = new employee[2];
        sc.skip("\n");
        for(int i=0; i<2;i++){
            System.out.print("Enter Name: ");
            finance[i] = new employee();
            finance[i].Name = sc.nextLine();
            System.out.print("Enter id: ");
            finance[i].id=sc.nextInt();
            System.out.print("Enter Salary: ");
            finance[i].Salary= sc.nextInt();
            finance[i].printDetails();
            sc.skip("\n");
        }
    }
}
