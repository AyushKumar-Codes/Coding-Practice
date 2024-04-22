package com.constructor;
import java.util.*;

class employee{
    String Name="";
    int id;
    int Salary;
    public employee(String n, int i,int s){
        Name= n;
        id=i;
        Salary = s;
    }
    public  employee(){
        this.Name="Default Name";
        id = 0;
        Salary=0;
    }
    public void printDetails(){
        System.out.println("Employee Name is "+Name+" and its Id is "+id);
        System.out.println(Name+ " has salary "+Salary);
    }
}
public class Constructor {
    public static void main(String[] args) {
        employee Ayush = new employee(); // Default constructor used
        Ayush.printDetails();

        employee Sibastion = new employee("Ayush",23,23); // Parameterized constructor used
        Sibastion.printDetails();

    }
}
