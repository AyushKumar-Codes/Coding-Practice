package  com.learning;
import java.util.*;

class employee{
    private String Name="";
    private int id;
    private int Salary;
    public void printDetails(){//THis act like a getter or you can create return type getter
        System.out.println("Employee Name is "+Name+" and its Id is "+id);
        System.out.println(Name+ " has salary "+Salary);
    }
    public void setName(String n){
        Name = n;
    }
    public void setId(int i){
        id = i;
    }
    public void setSalary(int s){
        Salary = s;
    }
    public String getName(){
        return Name;
    }
}
public class GetterSetter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        employee Ayush = new employee();
        System.out.print("Enter Name: ");
        String n = sc.nextLine();
        Ayush.setName(n);
        System.out.print("Enter Id: ");
        int i = sc.nextInt();
        Ayush.setId(i);
        System.out.print("Enter Salary");
        int s = sc.nextInt();
        Ayush.setSalary(s);
        System.out.println("THe name of employee using getter method: "+ Ayush.getName());
        Ayush.printDetails();
    }
}
