import java.io.*;

public class BufferedReadWriteExample {
    public static void main(String[] args) {
        String inputFilePath = "input.txt";
        String outputFilePath = "output.txt";

        // Reading from the file using BufferedReader
        try (BufferedReader bufferedReader = new BufferedReader(new FileReader(inputFilePath))) {
            // Writing to the file using BufferedWriter
            try (BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(outputFilePath))) {
                String line;
                while ((line = bufferedReader.readLine()) != null) {
                    System.out.println("Reading Line: " + line);
                    bufferedWriter.write(line);
                    bufferedWriter.newLine();  // Add a new line in the output file
                }
                System.out.println("Data has been written to " + outputFilePath);
            } catch (IOException e) {
                System.out.println("An error occurred while writing to the file: " + e.getMessage());
            }
        } catch (IOException e) {
            System.out.println("An error occurred while reading the file: " + e.getMessage());
        }
    }
}
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

//
import java.io.File;
import java.text.SimpleDateFormat;

public class FileSpecifications {
    public static void main(String[] args) {
        // Replace the file path with your desired file or directory path
        String filePath = "path/to/your/file.txt";
        
        File file = new File(filePath);
        
        if (file.exists()) {
            System.out.println("File Name: " + file.getName());
            System.out.println("Is File: " + file.isFile());
            System.out.println("Is Directory: " + file.isDirectory());
            System.out.println("Last Modified: " + getFormattedDate(file.lastModified()));
            System.out.println("File Size: " + file.length() + " bytes");
            System.out.println("File Path: " + file.getAbsolutePath());
        } else {
            System.out.println("The file or directory does not exist.");
        }
    }
    
    private static String getFormattedDate(long millis) {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
        return sdf.format(millis);
    }
}

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileReadWrite {
    public static void main(String[] args) {
        // File path for reading and writing
        String filePath = "myFile.txt";

        // Example content to write to the file
        String contentToWrite = "Hello, this is a sample text written to the file.";

        // Writing content to the file
        writeFile(filePath, contentToWrite);

        // Reading content from the file
        readFile(filePath);
    }

    // Method to write content to a file using FileOutputStream
    private static void writeFile(String filePath, String content) {
        try (FileOutputStream fos = new FileOutputStream(filePath)) {
            // Convert the string content to bytes and write it to the file
            fos.write(content.getBytes());
            System.out.println("Content written to file: " + filePath);
        } catch (IOException e) {
            System.err.println("Error writing to file: " + e.getMessage());
        }
    }

    // Method to read content from a file using FileInputStream
    private static void readFile(String filePath) {
        try (FileInputStream fis = new FileInputStream(filePath)) {
            int byteRead;
            System.out.println("Content read from file: ");
            
            // Read the file byte by byte until the end of the file (-1)
            while ((byteRead = fis.read()) != -1) {
                // Convert the byte to a char and print it
                System.out.print((char) byteRead);
            }
        } catch (IOException e) {
            System.err.println("Error reading from file: " + e.getMessage());
        }
    }
}


import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileCopy {
    public static void main(String[] args) {
        // Source file path to read from
        String sourceFilePath = "source.txt";

        // Destination file path to write to
        String destinationFilePath = "destination.txt";

        // Call the copyFile method to perform the copy operation
        copyFile(sourceFilePath, destinationFilePath);
    }

    // Method to copy content from source file to destination file
    private static void copyFile(String sourceFilePath, String destinationFilePath) {
        try (FileInputStream fis = new FileInputStream(sourceFilePath);
             FileOutputStream fos = new FileOutputStream(destinationFilePath)) {

            int byteRead;
            // Read each byte from the source file and write it to the destination file
            while ((byteRead = fis.read()) != -1) {
                fos.write(byteRead);
            }
            System.out.println("File copied successfully from " + sourceFilePath + " to " + destinationFilePath);

        } catch (IOException e) {
            System.err.println("Error during file operations: " + e.getMessage());
        }
    }
}

import java.io.*;

public class BufferedReadWriteExample {
    public static void main(String[] args) {
        String inputFilePath = "input.txt";
        String outputFilePath = "output.txt";

        // Reading from the file using BufferedReader
        try (BufferedReader bufferedReader = new BufferedReader(new FileReader(inputFilePath))) {
            // Writing to the file using BufferedWriter
            try (BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(outputFilePath))) {
                String line;
                while ((line = bufferedReader.readLine()) != null) {
                    System.out.println("Reading Line: " + line);
                    bufferedWriter.write(line);
                    bufferedWriter.newLine();  // Add a new line in the output file
                }
                System.out.println("Data has been written to " + outputFilePath);
            } catch (IOException e) {
                System.out.println("An error occurred while writing to the file: " + e.getMessage());
            }
        } catch (IOException e) {
            System.out.println("An error occurred while reading the file: " + e.getMessage());
        }
    }
}

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class StringSearchInFile {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the file name and the search string
        System.out.print("Enter a file name: ");
        String fileName = scanner.nextLine();

        System.out.print("Enter a word to search: ");
        String searchString = scanner.nextLine();

        int occurrenceCount = 0; // Initialize the count of occurrences

        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            String line;
            while ((line = reader.readLine()) != null) {
                // Split the line into words
                String[] words = line.split("\\s+");

                // Count the occurrences of the search string in this line
                for (String word : words) {
                    if (word.equals(searchString)) {
                        occurrenceCount++;
                    }
                }
            }
        } catch (IOException e) {
            System.out.println("An error occurred while reading the file: " + e.getMessage());
            return;
        }

        System.out.println("The word \"" + searchString + "\" occurs " + occurrenceCount + " times in the file.");
    }
}


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ReadConsoleData {
    public static void main(String[] args) {
        // Create a BufferedReader object to read input from the console
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter some text: ");

        try {
            // Read a line of text from the console
            String input = reader.readLine();
            
            // Print the input to the console
            System.out.println("You entered: " + input);
        } catch (IOException e) {
            System.out.println("An error occurred while reading input: " + e.getMessage());
        }
    }
}

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class WordCountInFile {
    public static void main(String[] args) {
        // File name provided here
        String fileName = "example.txt"; // Replace with your file path

        int wordCount = 0;

        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            String line;
            
            // Read the file line by line
            while ((line = reader.readLine()) != null) {
                // Split the line into words using whitespace as delimiter
                String[] words = line.split("\\s+");

                // Increment the word count by the number of words in the current line
                wordCount += words.length;
            }
        } catch (IOException e) {
            System.out.println("An error occurred while reading the file: " + e.getMessage());
        }

        // Output the word count
        System.out.println("The file contains " + wordCount + " words.");
    }
}

import java.io.*;

public class StudentSerializationDemo {
    public static void main(String[] args) {
        // Create a Student object
        Student student = new Student(1, "John Doe", 20);

        // Serialize the Student object
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("student.ser"))) {
            oos.writeObject(student);
            System.out.println("Serialization complete: " + student);
        } catch (IOException e) {
            System.out.println("IOException occurred during serialization: " + e.getMessage());
        }

        // Deserialize the Student object
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("student.ser"))) {
            Student deserializedStudent = (Student) ois.readObject();
            System.out.println("Deserialization complete: " + deserializedStudent);
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Exception occurred during deserialization: " + e.getMessage());
        }
    }
}

import java.io.*;

// Student class implements Serializable to allow serialization
class Student implements Serializable {
    private static final long serialVersionUID = 1L; // Unique identifier for serialization

    private int id;
    private String name;
    private int age;

    // Constructor
    public Student(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    // Override toString method for easy display
    @Override
    public String toString() {
        return "Student{id=" + id + ", name='" + name + "', age=" + age + "}";
    }
}

public class StudentSerializationDemo {
    public static void main(String[] args) {
        // Create a Student object
        Student student = new Student(1, "John Doe", 20);

        // Serialize the Student object
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("student.ser"))) {
            oos.writeObject(student);
            System.out.println("Serialization complete: " + student);
        } catch (IOException e) {
            System.out.println("IOException occurred during serialization: " + e.getMessage());
        }

        // Deserialize the Student object
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("student.ser"))) {
            Student deserializedStudent = (Student) ois.readObject();
            System.out.println("Deserialization complete: " + deserializedStudent);
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Exception occurred during deserialization: " + e.getMessage());
        }
    }
}

//
import java.io.*;

public class RandomAccessFileExample {
    public static void main(String[] args) {
        // File to work with
        String fileName = "myFile.txt";

        // Write data to the file using RandomAccessFile
        try (RandomAccessFile raf = new RandomAccessFile(fileName, "rw")) {
            // Write some text to the file
            raf.writeUTF("Hello, this is a test for RandomAccessFile in Java.");

            // Print out a message indicating success
            System.out.println("Data written to file successfully.");
        } catch (IOException e) {
            System.out.println("IOException occurred while writing to the file: " + e.getMessage());
        }

        // Read data from the file using RandomAccessFile
        try (RandomAccessFile raf = new RandomAccessFile(fileName, "r")) {
            // Move the file pointer to the beginning of the file
            raf.seek(0);

            // Read and print out the text from the file
            String content = raf.readUTF();
            System.out.println("Data read from file: " + content);
        } catch (IOException e) {
            System.out.println("IOException occurred while reading from the file: " + e.getMessage());
        }
    }
}

public class TestException {

    public static void main(String[] args) {
        TestException test = new TestException();
        
        // Test NumberFormatException
        test.testNumberFormatException();

        // Test ArrayIndexOutOfBoundsException
        test.testArrayIndexOutOfBoundsException();

        // Test ArithmeticException
        test.testArithmeticException();

        // Test NullPointerException
        test.testNullPointerException();

        // Test ClassNotFoundException
        test.testClassNotFoundException();
    }

    public void testNumberFormatException() {
        try {
            String invalidNumber = "abc";
            int number = Integer.parseInt(invalidNumber);  // This will throw NumberFormatException
        } catch (NumberFormatException e) {
            System.out.println("Caught NumberFormatException: " + e.getMessage());
        }
    }

    public void testArrayIndexOutOfBoundsException() {
        try {
            int[] numbers = {1, 2, 3};
            int invalidIndex = numbers[5];  // This will throw ArrayIndexOutOfBoundsException
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Caught ArrayIndexOutOfBoundsException: " + e.getMessage());
        }
    }

    public void testArithmeticException() {
        try {
            int result = 10 / 0;  // This will throw ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Caught ArithmeticException: " + e.getMessage());
        }
    }

    public void testNullPointerException() {
        try {
            String str = null;
            int length = str.length();  // This will throw NullPointerException
        } catch (NullPointerException e) {
            System.out.println("Caught NullPointerException: " + e.getMessage());
        }
    }

    public void testClassNotFoundException() {
        try {
            Class.forName("com.example.NonExistentClass");  // This will throw ClassNotFoundException
        } catch (ClassNotFoundException e) {
            System.out.println("Caught ClassNotFoundException: " + e.getMessage());
        }
    }
}

public class CalcAverage {

    public static void main(String[] args) {
        CalcAverage calc = new CalcAverage();

        try {
            // Test with a valid natural number
            System.out.println("Average of first 5 natural numbers: " + calc.avgFirstN(5));

            // Test with an invalid input (negative number)
            System.out.println("Average of first -3 natural numbers: " + calc.avgFirstN(-3));
        } catch (IllegalArgumentException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }

    public double avgFirstN(int N) {
        if (N <= 0) {
            throw new IllegalArgumentException("N must be a natural number (greater than 0).");
        }

        // Calculate the sum of the first N natural numbers
        double sum = N * (N + 1) / 2.0;
        
        // Calculate the average
        return sum / N;
    }
}

//
import java.util.Scanner;

// Custom Exception Class
class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String message) {
        super(message);
    }
}

// Account Class
public class Account {
    private int accountNumber;
    private String accountHolderName;
    private double balance;

    public Account(int accountNumber, String accountHolderName, double balance) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(int amt) {
        if (amt > 0) {
            balance += amt;
            System.out.println("Deposited: " + amt);
        } else {
            System.out.println("Deposit amount must be positive.");
        }
    }

    public void withdraw(int amt) throws InsufficientFundsException {
        if (amt > balance) {
            throw new InsufficientFundsException("Insufficient funds for withdrawal.");
        } else if (amt <= 0) {
            System.out.println("Withdrawal amount must be positive.");
        } else {
            balance -= amt;
            System.out.println("Withdrawn: " + amt);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter account number: ");
        int accountNumber = scanner.nextInt();

        scanner.nextLine();  // Consume newline

        System.out.print("Enter account holder name: ");
        String accountHolderName = scanner.nextLine();

        System.out.print("Enter initial balance: ");
        double initialBalance = scanner.nextDouble();

        // Create Account object
        Account account = new Account(accountNumber, accountHolderName, initialBalance);

        System.out.print("Enter amount to withdraw: ");
        int amtToWithdraw = scanner.nextInt();

        try {
            account.withdraw(amtToWithdraw);
            System.out.println("New balance: " + account.getBalance());
        } catch (InsufficientFundsException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }

        scanner.close();
    }
}



import java.util.Scanner;

// Custom Exception for incorrect age
class IncorrectAgeException extends Exception {
    public IncorrectAgeException(String message) {
        super(message);
    }
}

// Custom Exception for incorrect nationality
class IncorrectNationalityException extends Exception {
    public IncorrectNationalityException(String message) {
        super(message);
    }
}

// Voter class to check voting eligibility
public class Voter {
    private String name;
    private String nationality;
    private int age;

    // Constructor
    public Voter(String name, String nationality, int age) {
        this.name = name;
        this.nationality = nationality;
        this.age = age;
    }

    // Method to check eligibility for voting
    public void check() throws IncorrectAgeException, IncorrectNationalityException {
        if (!"Indian".equalsIgnoreCase(this.nationality)) {
            throw new IncorrectNationalityException("Voter is not an Indian citizen.");
        }

        if (this.age < 18) {
            throw new IncorrectAgeException("Voter is not old enough to vote.");
        }

        System.out.println("Voter is eligible to vote.");
    }

    // toString method to display voter information
    @Override
    public String toString() {
        return "Voter [Name: " + name + ", Nationality: " + nationality + ", Age: " + age + "]";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Accept user input for name, nationality, and age
        System.out.print("Enter Name: ");
        String name = scanner.nextLine();

        System.out.print("Enter Nationality: ");
        String nationality = scanner.nextLine();

        System.out.print("Enter Age: ");
        int age = scanner.nextInt();

        // Create a Voter object
        Voter voter = new Voter(name, nationality, age);

        try {
            // Print voter information
            System.out.println(voter);
            // Check if the voter is eligible to vote
            voter.check();
        } catch (IncorrectAgeException | IncorrectNationalityException e) {
            // Handle exceptions by printing the error message
            System.out.println("Exception caught: " + e.getMessage());
        }

        scanner.close();
    }
}


import java.util.Scanner;

// Number class
public class Number {
    private int firstNumber;
    private int secondNumber;
    private double result;

    // Constructor to initialize values
    public Number(int firstNumber, int secondNumber) {
        this.firstNumber = firstNumber;
        this.secondNumber = secondNumber;
    }

    // Method to add firstNumber and secondNumber
    public void add() {
        result = firstNumber + secondNumber;
        System.out.println("Sum: " + result);
    }

    // Method to subtract secondNumber from firstNumber
    public void sub() {
        result = firstNumber - secondNumber;
        System.out.println("Difference: " + result);
    }

    // Method to multiply firstNumber and secondNumber
    public void mul() {
        result = firstNumber * secondNumber;
        System.out.println("Product: " + result);
    }

    // Method to divide firstNumber by secondNumber
    public void div() throws ArithmeticException {
        if (secondNumber == 0) {
            throw new ArithmeticException("Division by zero is undefined.");
        } else {
            result = (double) firstNumber / secondNumber;
            System.out.println("Quotient: " + result);
        }
    }

    // Main method to display a menu and perform operations
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int a = scanner.nextInt();

        System.out.print("Enter the second number: ");
        int b = scanner.nextInt();

        // Create a Number object
        Number number = new Number(a, b);

        while (true) {
            System.out.println("\nChoose an operation:");
            System.out.println("1. Add");
            System.out.println("2. Subtract");
            System.out.println("3. Multiply");
            System.out.println("4. Divide");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            try {
                switch (choice) {
                    case 1:
                        number.add();
                        break;
                    case 2:
                        number.sub();
                        break;
                    case 3:
                        number.mul();
                        break;
                    case 4:
                        number.div();
                        break;
                    case 5:
                        System.out.println("Exiting...");
                        scanner.close();
                        return;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                }
            } catch (ArithmeticException e) {
                System.out.println("Exception caught: " + e.getMessage());
            }
        }
    }
}





