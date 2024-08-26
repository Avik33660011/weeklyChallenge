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



