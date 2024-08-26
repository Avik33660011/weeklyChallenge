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

