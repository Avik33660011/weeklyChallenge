// Question 5
// AVIK CHAKRABORTY 18700219053
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
 
// function to calculate current age
void findAge(int current_date, int current_month,
             int current_year, int birth_date,
             int birth_month, int birth_year)
{
    
    int month[] = { 31, 28, 31, 30, 31, 30, 31,
                          31, 30, 31, 30, 31 };
 
    
    if (birth_date > current_date) {
        current_date = current_date + month[birth_month - 1];
        current_month = current_month - 1;
    }
 
    
    if (birth_month > current_month) {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }
 
    
    int calculated_date = current_date - birth_date;
    int calculated_month = current_month - birth_month;
    int calculated_year = current_year - birth_year;
 
    
    cout<<"Present Age"<<" "<<"Years:"<<calculated_year<<"Months:"<<calculated_month<<"Days:"<<calculated_date<<endl;
}
 

int main()
{
    cout<<"Enter Current Date"<<endl;

    // current dd// mm/yyyy
    int current_date;
    cin>>current_date;
    int current_month;
    cin>>current_month; 
    int current_year;
    cin>>current_year;
    cout<<"Enter Birth Date"<<endl;
    // birth dd// mm// yyyy
    int birth_date;
    cin>>birth_date;
    int birth_month;
    cin>>birth_month;
    int birth_year;
    cin>>birth_year;
 
    // function call to print age
    findAge(current_date, current_month, current_year,
            birth_date, birth_month, birth_year);
    return 0;
}


import java.util.Scanner;

public class LeapYearChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Prompt the user for a year
        System.out.print("Enter a year: ");
        int year = scanner.nextInt();
        
        // Check if the year is a leap year
        boolean isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        
        // Output the result
        if (isLeapYear) {
            System.out.println(year + " is a leap year.");
        } else {
            System.out.println(year + " is not a leap year.");
        }

        scanner.close();
    }
}


import java.util.Scanner;

public class ArmstrongNumberChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a number
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        
        // Store the original number to compare later
        int originalNumber = number;
        int sum = 0;
        int digits = 0;

        // Calculate the number of digits in the number
        while (originalNumber != 0) {
            originalNumber /= 10;
            digits++;
        }

        // Reset the original number
        originalNumber = number;

        // Calculate the sum of each digit raised to the power of the number of digits
        while (originalNumber != 0) {
            int digit = originalNumber % 10;
            sum += Math.pow(digit, digits);
            originalNumber /= 10;
        }

        // Check if the sum is equal to the original number
        if (sum == number) {
            System.out.println(number + " is an Armstrong number.");
        } else {
            System.out.println(number + " is not an Armstrong number.");
        }

        scanner.close();
    }
}

import java.util.Scanner;

public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the number of terms in the Fibonacci series
        System.out.print("Enter the number of terms for the Fibonacci series: ");
        int n = scanner.nextInt();

        // Initialize the first two numbers in the Fibonacci series
        int first = 1, second = 1;

        System.out.print("Fibonacci series: " + first + " " + second);

        // Generate the Fibonacci series up to n terms
        for (int i = 3; i <= n; i++) {
            int next = first + second;
            System.out.print(" " + next);
            first = second;
            second = next;
        }

        scanner.close();
    }
}



public class Book {
    // Private attributes for book title and price
    private String Book_title;
    private double Book_price;

    // Getter method for Book_title
    public String getBookTitle() {
        return Book_title;
    }

    // Setter method for Book_title
    public void setBookTitle(String bookTitle) {
        this.Book_title = bookTitle;
    }

    // Getter method for Book_price
    public double getBookPrice() {
        return Book_price;
    }

    // Setter method for Book_price
    public void setBookPrice(double bookPrice) {
        this.Book_price = bookPrice;
    }

    // Method to create a book with title and price
    public void createBook(String title, double price) {
        setBookTitle(title);
        setBookPrice(price);
    }

    // Method to display book information
    public void showBook() {
        System.out.println("Book Title: " + getBookTitle());
        System.out.println("Book Price: $" + getBookPrice());
    }
}


import java.util.Scanner;

public class BookInfo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Create a new Book object
        Book myBook = new Book();

        // Get user input for book title and price
        System.out.print("Enter the book title: ");
        String title = scanner.nextLine();

        System.out.print("Enter the book price: ");
        double price = scanner.nextDouble();

        // Create book with the input data
        myBook.createBook(title, price);

        // Display book information
        System.out.println("\nBook Information:");
        myBook.showBook();

        scanner.close();
    }
}

public class Account {
    private String accountHolderName;
    private int accountNumber;
    private double balance;

    // Default constructor
    public Account() {
        this.accountHolderName = "";
        this.accountNumber = 0;
        this.balance = 0.0;
    }

    // Parameterized constructor
    public Account(String accountHolderName, int accountNumber, double balance) {
        this.accountHolderName = accountHolderName;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    // Method to deposit amount
    public void deposit(int amt) {
        if (amt > 0) {
            balance += amt;
            System.out.println("Deposited: $" + amt);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }

    // Method to withdraw amount
    public void withdraw(int amt) {
        if (amt > 0) {
            if (amt <= balance) {
                balance -= amt;
                System.out.println("Withdrew: $" + amt);
            } else {
                System.out.println("Insufficient balance.");
            }
        } else {
            System.out.println("Invalid withdrawal amount.");
        }
    }

    // Method to display account details
    @Override
    public String toString() {
        return "Account Holder: " + accountHolderName + "\n" +
               "Account Number: " + accountNumber + "\n" +
               "Balance: $" + balance;
    }
}


import java.util.Scanner;

public class AccountInfo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input for first account
        System.out.println("Enter details for Account 1:");
        System.out.print("Account Holder Name: ");
        String name1 = scanner.nextLine();
        System.out.print("Account Number: ");
        int number1 = scanner.nextInt();
        System.out.print("Initial Balance: ");
        double balance1 = scanner.nextDouble();

        // Create first account
        Account account1 = new Account(name1, number1, balance1);

        // Input for second account
        scanner.nextLine(); // Consume the newline
        System.out.println("\nEnter details for Account 2:");
        System.out.print("Account Holder Name: ");
        String name2 = scanner.nextLine();
        System.out.print("Account Number: ");
        int number2 = scanner.nextInt();
        System.out.print("Initial Balance: ");
        double balance2 = scanner.nextDouble();

        // Create second account
        Account account2 = new Account(name2, number2, balance2);

        // Display account details
        System.out.println("\nAccount 1 Details:");
        System.out.println(account1);

        System.out.println("\nAccount 2 Details:");
        System.out.println(account2);

        // Perform some transactions
        System.out.print("\nEnter amount to deposit in Account 1: ");
        int depositAmount1 = scanner.nextInt();
        account1.deposit(depositAmount1);

        System.out.print("Enter amount to withdraw from Account 2: ");
        int withdrawAmount2 = scanner.nextInt();
        account2.withdraw(withdrawAmount2);

        // Display updated account details
        System.out.println("\nUpdated Account 1 Details:");
        System.out.println(account1);

        System.out.println("\nUpdated Account 2 Details:");
        System.out.println(account2);

        scanner.close();
    }
}

import java.util.Scanner;

public class ArrayOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Define the size of the arrays
        System.out.print("Enter the size of the arrays: ");
        int size = scanner.nextInt();

        // Declare and initialize the arrays
        int[] array1 = new int[size];
        int[] array2 = new int[size];
        int[] sumArray = new int[size];
        int[] differenceArray = new int[size];
        int[] productArray = new int[size];
        double[] quotientArray = new double[size];

        // Input values for the first array
        System.out.println("Enter values for the first array:");
        for (int i = 0; i < size; i++) {
            System.out.print("Value at index " + i + ": ");
            array1[i] = scanner.nextInt();
        }

        // Input values for the second array
        System.out.println("Enter values for the second array:");
        for (int i = 0; i < size; i++) {
            System.out.print("Value at index " + i + ": ");
            array2[i] = scanner.nextInt();
        }

        // Perform arithmetic operations
        for (int i = 0; i < size; i++) {
            sumArray[i] = array1[i] + array2[i];
            differenceArray[i] = array1[i] - array2[i];
            productArray[i] = array1[i] * array2[i];
            if (array2[i] != 0) {
                quotientArray[i] = (double) array1[i] / array2[i];
            } else {
                quotientArray[i] = Double.NaN; // Handle division by zero
            }
        }

        // Display the results
        System.out.println("\nArithmetic Operations Results:");
        System.out.println("Index\tArray1\tArray2\tSum\tDifference\tProduct\tQuotient");
        for (int i = 0; i < size; i++) {
            System.out.printf("%d\t%d\t%d\t%d\t%d\t\t%d\t%f%n", 
                              i, array1[i], array2[i], sumArray[i], differenceArray[i], productArray[i], quotientArray[i]);
        }

        scanner.close();
    }
}



public class Stack {
    private int[] stackArray;
    private int top;
    private int capacity;

    // Constructor to initialize the stack
    public Stack(int size) {
        capacity = size;
        stackArray = new int[capacity];
        top = -1; // Stack is initially empty
    }

    // Push method to add an element to the stack
    public void push(int value) {
        if (isFull()) {
            System.out.println("Stack is full. Cannot push " + value);
        } else {
            stackArray[++top] = value;
            System.out.println("Pushed " + value + " onto the stack");
        }
    }

    // Pop method to remove and return the top element from the stack
    public int pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty. Cannot pop.");
            return -1; // Return an invalid value
        } else {
            return stackArray[top--];
        }
    }

    // Method to check if the stack is empty
    public boolean isEmpty() {
        return top == -1;
    }

    // Method to check if the stack is full
    public boolean isFull() {
        return top == capacity - 1;
    }

    // Method to get the size of the stack
    public int size() {
        return top + 1;
    }
}


public class StackDemo {
    public static void main(String[] args) {
        Stack stack = new Stack(5); // Create a stack with capacity of 5

        // Push elements onto the stack
        stack.push(10);
        stack.push(20);
        stack.push(30);

        // Pop elements from the stack
        System.out.println("Popped from stack: " + stack.pop());
        System.out.println("Popped from stack: " + stack.pop());

        // Try popping from an empty stack
        System.out.println("Popped from stack: " + stack.pop());

        // Push more elements
        stack.push(40);
        stack.push(50);
        stack.push(60); // This should succeed

        // Try pushing into a full stack
        stack.push(70); // This should fail

        // Display the size of the stack
        System.out.println("Current stack size: " + stack.size());
    }
}


public class Employee {
    // Private member variables
    private int employeeId;
    private String employeeName;
    private double basicSalary;
    private double hra;
    private double medical;
    private double pf;
    private double pt;
    private double netSalary;
    private double grossSalary;

    // No-argument constructor
    public Employee() {
        this.employeeId = 0;
        this.employeeName = "";
        this.basicSalary = 0.0;
        this.hra = 0.0;
        this.medical = 0.0;
        this.pf = 0.0;
        this.pt = 200.0; // Fixed value for PT
        this.netSalary = 0.0;
        this.grossSalary = 0.0;
    }

    // Parameterized constructor
    public Employee(int employeeId, String employeeName, double basicSalary) {
        this.employeeId = employeeId;
        this.employeeName = employeeName;
        this.basicSalary = basicSalary;
        this.pt = 200.0; // Fixed value for PT
        calculateSalaries(); // Calculate salaries upon initialization
    }

    // Getters and setters for employeeld, employeeName, basicSalary, netSalary, and grossSalary
    public int getEmployeeId() {
        return employeeId;
    }

    public void setEmployeeId(int employeeId) {
        this.employeeId = employeeId;
    }

    public String getEmployeeName() {
        return employeeName;
    }

    public void setEmployeeName(String employeeName) {
        this.employeeName = employeeName;
    }

    public double getBasicSalary() {
        return basicSalary;
    }

    public void setBasicSalary(double basicSalary) {
        this.basicSalary = basicSalary;
        calculateSalaries(); // Recalculate salaries when the basic salary changes
    }

    public double getNetSalary() {
        return netSalary;
    }

    public double getGrossSalary() {
        return grossSalary;
    }

    // Method to calculate gross salary and net salary
    private void calculateSalaries() {
        this.hra = 0.50 * basicSalary;
        this.pf = 0.12 * basicSalary;
        this.medical = 0.0; // Assuming a fixed medical allowance if needed
        this.grossSalary = basicSalary + hra + medical;
        this.netSalary = grossSalary - (pt + pf);
    }

    // Method to display employee details
    public void displayDetails() {
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Employee Name: " + employeeName);
        System.out.println("Basic Salary: " + basicSalary);
        System.out.println("HRA: " + hra);
        System.out.println("Medical: " + medical);
        System.out.println("PF: " + pf);
        System.out.println("PT: " + pt);
        System.out.println("Gross Salary: " + grossSalary);
        System.out.println("Net Salary: " + netSalary);
    }

    // Main method for testing
    public static void main(String[] args) {
        Employee employee1 = new Employee(1, "John Doe", 50000);
        employee1.displayDetails();

        Employee employee2 = new Employee(2, "Jane Smith", 60000);
        employee2.displayDetails();
    }
}

//L4Q10

public class Main {
    public enum Day {
        SUNDAY(0),
        MONDAY(1),
        TUESDAY(2),
        WEDNESDAY(3),
        THURSDAY(4),
        FRIDAY(5),
        SATURDAY(6);

        private final int dayNumber;

        Day(int dayNumber) {
            this.dayNumber = dayNumber;
        }

        public int getDayNumber() {
            return dayNumber;
        }
    }

    public static void main(String[] args) {
        for (Day day : Day.values()) {
            System.out.println(day.getDayNumber() + " " + day);
        }
    }
}

// 
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the user
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a number
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();

        // Convert and display the number in binary, octal, and hexadecimal formats
        System.out.println("Binary: " + Integer.toBinaryString(number));
        System.out.println("Octal: " + Integer.toOctalString(number));
        System.out.println("Hexadecimal: " + Integer.toHexString(number));

        // Close the scanner
        scanner.close();
    }
}


//

public class Main {
    public static void main(String[] args) {
        // Print table header
        System.out.printf("%-10s %-22s %-22s %-10s%n", "Type", "Min Value", "Max Value", "Size (bits)");
        System.out.println("---------------------------------------------------------------");

        // Byte data type
        System.out.printf("%-10s %-22s %-22s %-10d%n", "Byte", Byte.MIN_VALUE, Byte.MAX_VALUE, Byte.SIZE);

        // Short data type
        System.out.printf("%-10s %-22s %-22s %-10d%n", "Short", Short.MIN_VALUE, Short.MAX_VALUE, Short.SIZE);

        // Integer data type
        System.out.printf("%-10s %-22s %-22s %-10d%n", "Integer", Integer.MIN_VALUE, Integer.MAX_VALUE, Integer.SIZE);

        // Long data type
        System.out.printf("%-10s %-22s %-22s %-10d%n", "Long", Long.MIN_VALUE, Long.MAX_VALUE, Long.SIZE);

        // Float data type
        System.out.printf("%-10s %-22s %-22s %-10d%n", "Float", Float.MIN_VALUE, Float.MAX_VALUE, Float.SIZE);

        // Double data type
        System.out.printf("%-10s %-22s %-22s %-10d%n", "Double", Double.MIN_VALUE, Double.MAX_VALUE, Double.SIZE);
    }
}

//

public class SumOfDigitsInString {
    public static void main(String[] args) {
        String s = "14abc9kj";
        int sum = sumOfDigits(s);
        System.out.println("The sum of digits in the string \"" + s + "\" is: " + sum);
    }

    public static int sumOfDigits(String s) {
        int sum = 0;
        // Iterate over each character in the string
        for (int i = 0; i < s.length(); i++) {
            char currentChar = s.charAt(i);
            // Check if the character is a digit
            if (Character.isDigit(currentChar)) {
                // Convert the character to its integer value and add it to the sum
                sum += Character.getNumericValue(currentChar);
            }
        }
        return sum;
    }
}

//

class Employee {
    // Attributes of an employee
    private int id;
    private String name;
    private double salary;

    // Constructor to initialize an employee object
    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    // Getter methods to access employee information
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    // Method to print employee details
    public void printEmployeeInfo() {
        System.out.println("Employee ID: " + id);
        System.out.println("Employee Name: " + name);
        System.out.println("Employee Salary: " + salary);
        System.out.println("------------------------");
    }
}

public class Main {
    public static void main(String[] args) {
        // Create an array to store Employee objects
        Employee[] employees = new Employee[3];

        // Initialize employee objects and add them to the array
        employees[0] = new Employee(1, "John Doe", 50000);
        employees[1] = new Employee(2, "Jane Smith", 60000);
        employees[2] = new Employee(3, "Emily Johnson", 70000);

        // Print all employee information
        System.out.println("Employee Information:");
        System.out.println("------------------------");
        for (Employee employee : employees) {
            employee.printEmployeeInfo();
        }
    }
}


//

// Base class
class Game {
    // Default constructor for Game class
    public Game() {
        System.out.println("Game constructor called");
    }
}

// Subclass of Game
class BoardGame extends Game {
    // Default constructor for BoardGame class
    public BoardGame() {
        System.out.println("BoardGame constructor called");
    }
}

// Subclass of BoardGame
class Chess extends BoardGame {
    // Default constructor for Chess class
    public Chess() {
        System.out.println("Chess constructor called");
    }
}

// Class to demonstrate the behavior
public class GameDemo {
    public static void main(String[] args) {
        // Creating an object of Chess class
        Chess ch = new Chess();
    }
}


//employee class
import java.util.Scanner;

class Employee {
    // Attributes
    private int id;
    private String name;
    private double salary;

    // Default constructor
    public Employee() {
        this.id = 0;
        this.name = "";
        this.salary = 0.0;
    }

    // Parameterized constructor
    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    // Getter methods
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    // Setter methods
    public void setId(int id) {
        this.id = id;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    // toString method to display employee details
    @Override
    public String toString() {
        return "Employee [ID=" + id + ", Name=" + name + ", Salary=" + salary + "]";
    }
}

//
class WageEmployee extends Employee {
    // Additional attributes for WageEmployee
    private int hrs;
    private int rate;

    // Default constructor
    public WageEmployee() {
        super();  // Call to Employee's default constructor
        this.hrs = 0;
        this.rate = 0;
    }

    // Parameterized constructor
    public WageEmployee(int id, String name, double salary, int hrs, int rate) {
        super(id, name, salary);  // Call to Employee's parameterized constructor
        this.hrs = hrs;
        this.rate = rate;
    }

    // Getter methods for additional attributes
    public int getHrs() {
        return hrs;
    }

    public int getRate() {
        return rate;
    }

    // Setter methods for additional attributes
    public void setHrs(int hrs) {
        this.hrs = hrs;
    }

    public void setRate(int rate) {
        this.rate = rate;
    }

    // Method to compute salary
    public void computeSalary() {
        double computedSalary = hrs * rate;
        setSalary(computedSalary);  // Use setter from Employee class to set salary
    }

    // Override toString to display WageEmployee details
    @Override
    public String toString() {
        return super.toString() + ", WageEmployee [Hours=" + hrs + ", Rate=" + rate + "]";
    }
}


//

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Accept input from the user
        System.out.println("Enter Employee ID: ");
        int id = scanner.nextInt();

        System.out.println("Enter Employee Name: ");
        String name = scanner.next();

        System.out.println("Enter Hours Worked: ");
        int hrs = scanner.nextInt();

        System.out.println("Enter Rate per Hour: ");
        int rate = scanner.nextInt();

        // Create a WageEmployee object using parameterized constructor
        WageEmployee wageEmployee = new WageEmployee(id, name, 0.0, hrs, rate);

        // Compute the salary
        wageEmployee.computeSalary();

        // Print the WageEmployee details including the computed salary
        System.out.println("Employee Details: " + wageEmployee.toString());

        scanner.close();
    }
}


class SalesPerson extends WageEmployee {
    // Additional attributes for SalesPerson
    private int sales;
    private int commission;

    // Default constructor
    public SalesPerson() {
        super(); // Call to WageEmployee's default constructor
        this.sales = 0;
        this.commission = 0;
    }

    // Parameterized constructor
    public SalesPerson(int id, String name, double salary, int hrs, int rate, int sales, int commission) {
        super(id, name, salary, hrs, rate); // Call to WageEmployee's parameterized constructor
        this.sales = sales;
        this.commission = commission;
    }

    // Getter methods for additional attributes
    public int getSales() {
        return sales;
    }

    public int getCommission() {
        return commission;
    }

    // Setter methods for additional attributes
    public void setSales(int sales) {
        this.sales = sales;
    }

    public void setCommission(int commission) {
        this.commission = commission;
    }

    // Override computeSalary method
    @Override
    public void computeSalary() {
        double baseSalary = getHrs() * getRate();
        double commissionAmount = sales * commission / 100.0;
        double totalSalary = baseSalary + commissionAmount;
        setSalary(totalSalary); // Use setter from Employee class to set the total salary
    }

    // Override toString to display SalesPerson details
    @Override
    public String toString() {
        return super.toString() + ", SalesPerson [Sales=" + sales + ", Commission=" + commission + "%]";
    }
}

//

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Accept input from the user
        System.out.println("Enter Employee ID: ");
        int id = scanner.nextInt();

        System.out.println("Enter Employee Name: ");
        String name = scanner.next();

        System.out.println("Enter Hours Worked: ");
        int hrs = scanner.nextInt();

        System.out.println("Enter Rate per Hour: ");
        int rate = scanner.nextInt();

        System.out.println("Enter Sales Made: ");
        int sales = scanner.nextInt();

        System.out.println("Enter Commission Percentage: ");
        int commission = scanner.nextInt();

        // Create a SalesPerson object using parameterized constructor
        SalesPerson salesPerson = new SalesPerson(id, name, 0.0, hrs, rate, sales, commission);

        // Compute the salary
        salesPerson.computeSalary();

        // Print the SalesPerson details including the computed salary
        System.out.println("SalesPerson Details: " + salesPerson.toString());

        scanner.close();
    }
}

// Employee.java
public class Employee {
    private String name;
    private int empId;

    public Employee(String name, int empId) {
        this.name = name;
        this.empId = empId;
    }

    public String getName() {
        return name;
    }

    public int getEmpId() {
        return empId;
    }

    public void displayDetails() {
        System.out.println("Employee Name: " + name);
        System.out.println("Employee ID: " + empId);
    }
}

// Manager.java
public class Manager extends Employee {
    private int fixedSalary;
    private int incentives;

    public Manager(String name, int empId, int fixedSalary, int incentives) {
        super(name, empId);
        this.fixedSalary = fixedSalary;
        this.incentives = incentives;
    }

    public int computeSalary() {
        return fixedSalary + incentives;
    }

    @Override
    public void displayDetails() {
        super.displayDetails();
        System.out.println("Fixed Salary: " + fixedSalary);
        System.out.println("Incentives: " + incentives);
        System.out.println("Total Salary: " + computeSalary());
    }
}

//

// TestEmployee.java
public class TestEmployee {
    public static void main(String[] args) {
        // Creating an array of Employee objects
        Employee[] employees = new Employee[3];
        
        // Adding different types of employees to the array
        employees[0] = new Employee("Alice Smith", 101);
        employees[1] = new Manager("John Doe", 102, 50000, 10000);
        employees[2] = new Employee("Bob Johnson", 103);

        // Loop through the array and print details of each employee
        for (Employee emp : employees) {
            emp.displayDetails();
            System.out.println(); // Adding a line break between employee details
        }
    }
}


// Abstract class Instrument
abstract class Instrument {
    // Abstract method play
    abstract void play();
}

// Subclass Piano extending Instrument
class Piano extends Instrument {
    // Overriding the play method for Piano
    @Override
    void play() {
        System.out.println("Piano is playing tan tan tan tan");
    }
}

// Subclass Flute extending Instrument
class Flute extends Instrument {
    // Overriding the play method for Flute
    @Override
    void play() {
        System.out.println("Flute is playing toot toot toot toot");
    }
}

// Subclass Guitar extending Instrument
class Guitar extends Instrument {
    // Overriding the play method for Guitar
    @Override
    void play() {
        System.out.println("Guitar is playing tin tin tin");
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        // Array of Instrument type references
        Instrument[] instruments = new Instrument[10];

        // Assigning different types of instruments to the array
        instruments[0] = new Piano();
        instruments[1] = new Flute();
        instruments[2] = new Guitar();
        instruments[3] = new Piano();
        instruments[4] = new Flute();
        instruments[5] = new Guitar();
        instruments[6] = new Piano();
        instruments[7] = new Flute();
        instruments[8] = new Guitar();
        instruments[9] = new Piano();

        // Looping through the array to check polymorphic behavior
        for (int i = 0; i < instruments.length; i++) {
            // Playing the instrument
            instruments[i].play();

            // Checking the type of each instrument using instanceof
            if (instruments[i] instanceof Piano) {
                System.out.println("Instrument at index " + i + " is a Piano");
            } else if (instruments[i] instanceof Flute) {
                System.out.println("Instrument at index " + i + " is a Flute");
            } else if (instruments[i] instanceof Guitar) {
                System.out.println("Instrument at index " + i + " is a Guitar");
            }
        }
    }
}


