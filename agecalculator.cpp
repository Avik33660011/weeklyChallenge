
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



public class TestBoxing {
    public static void main(String[] args) {
        // Auto-boxing: converting primitive int to Integer object
        int primitiveInt = 10;
        Integer boxedInt = primitiveInt;  // Auto-boxing happens here
        System.out.println("Boxed Integer: " + boxedInt);

        // Auto-unboxing: converting Integer object back to primitive int
        Integer anotherBoxedInt = 20; 
        int unboxedInt = anotherBoxedInt;  // Auto-unboxing happens here
        System.out.println("Unboxed int: " + unboxedInt);

        // Auto-boxing: converting primitive double to Double object
        double primitiveDouble = 5.5;
        Double boxedDouble = primitiveDouble;  // Auto-boxing happens here
        System.out.println("Boxed Double: " + boxedDouble);

        // Auto-unboxing: converting Double object back to primitive double
        Double anotherBoxedDouble = 7.7;
        double unboxedDouble = anotherBoxedDouble;  // Auto-unboxing happens here
        System.out.println("Unboxed double: " + unboxedDouble);

        // Performing arithmetic operations with auto-unboxing
        Integer num1 = 100;
        Integer num2 = 200;
        int sum = num1 + num2;  // Auto-unboxing of num1 and num2, then addition
        System.out.println("Sum of num1 and num2: " + sum);

        // Auto-unboxing and boxing in conditional expressions
        Boolean isActive = true; // Auto-boxing from boolean to Boolean
        if (isActive) { // Auto-unboxing from Boolean to boolean
            System.out.println("The isActive flag is true.");
        }

        // Auto-unboxing in method calls
        Integer number = 15;
        printNumber(number);  // Auto-unboxing in method call
    }

    // Method that takes a primitive int parameter
    public static void printNumber(int num) {
        System.out.println("The number is: " + num);
    }
}


import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

public class CollectionAPITest {

    public static void main(String[] args) {
        // Testing List API
        System.out.println("Testing List API:");
        List<String> list = new ArrayList<>();
        testCollection(list);

        // Testing Set API
        System.out.println("\nTesting Set API:");
        Set<String> set = new HashSet<>();
        testCollection(set);
    }

    private static void testCollection(java.util.Collection<String> collection) {
        // add() method
        collection.add("Apple");
        collection.add("Banana");
        collection.add("Cherry");

        // get() method for List only
        if (collection instanceof List) {
            List<String> list = (List<String>) collection;
            System.out.println("Element at index 1 (get): " + list.get(1));
        }

        // size() method
        System.out.println("Size of the collection (size): " + collection.size());

        // isEmpty() method
        System.out.println("Is the collection empty? (isEmpty): " + collection.isEmpty());

        // iterator() method
        System.out.print("Elements in the collection (iterator): ");
        Iterator<String> iterator = collection.iterator();
        while (iterator.hasNext()) {
            System.out.print(iterator.next() + " ");
        }
        System.out.println();

        // remove() method
        collection.remove("Banana");
        System.out.println("After removing 'Banana' (remove), collection: " + collection);
    }
}


import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ColorListExample {

    public static void main(String[] args) {
        // Create a new ArrayList to hold color names
        List<String> colorList = new ArrayList<>();

        // Add some colors to the ArrayList
        colorList.add("Red");
        colorList.add("Blue");
        colorList.add("Green");
        colorList.add("Yellow");
        colorList.add("Purple");

        // Print out the collection using Iterator
        System.out.println("Printing elements using Iterator:");
        Iterator<String> iterator = colorList.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

        // Print out the collection using foreach loop
        System.out.println("\nPrinting elements using foreach loop:");
        for (String color : colorList) {
            System.out.println(color);
        }
    }
}



class MyThread extends Thread {

    public MyThread(String name) {
        super(name);  // Call the Thread constructor to set the name of the thread
    }

    @Override
    public void run() {
        System.out.println("Thread " + getName() + " is running.");
        try {
            // Sleep for 1 second to simulate some work
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println("Thread " + getName() + " was interrupted.");
        }
        System.out.println("Thread " + getName() + " is finished.");
    }
}

public class ThreadMethodsExample {
    public static void main(String[] args) {
        // Create a thread with a custom name
        MyThread thread1 = new MyThread("MyThread-1");
        
        System.out.println("Thread name: " + thread1.getName());
        System.out.println("Thread priority: " + thread1.getPriority());
        System.out.println("Is thread alive? " + thread1.isAlive());

        // Start the thread
        thread1.start();

        System.out.println("Is thread alive after start? " + thread1.isAlive());

        try {
            // Wait for thread1 to finish
            thread1.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread was interrupted.");
        }

        System.out.println("Is thread alive after join? " + thread1.isAlive());
    }
}



class MyRunnable implements Runnable {
    @Override
    public void run() {
        // Get the current thread that is running this Runnable
        Thread currentThread = Thread.currentThread();
        System.out.println("Running thread: " + currentThread.getName());

        // Simulate some work with sleep
        try {
            Thread.sleep(1000);  // Sleep for 1 second
        } catch (InterruptedException e) {
            System.out.println(currentThread.getName() + " was interrupted.");
        }

        System.out.println("Thread " + currentThread.getName() + " is finished.");
    }
}

public class MultipleThreadsExample {
    public static void main(String[] args) {
        // Create instances of the Runnable implementation
        MyRunnable runnable1 = new MyRunnable();
        MyRunnable runnable2 = new MyRunnable();
        MyRunnable runnable3 = new MyRunnable();

        // Create threads and assign the runnable instances
        Thread thread1 = new Thread(runnable1, "Thread-1");
        Thread thread2 = new Thread(runnable2, "Thread-2");
        Thread thread3 = new Thread(runnable3, "Thread-3");

        // Start the threads
        thread1.start();
        thread2.start();
        thread3.start();

        // Print information about all currently active threads
        Thread[] threads = new Thread[Thread.activeCount()];
        Thread.enumerate(threads); // Fill the array with all active threads

        System.out.println("\nCurrently active threads:");
        for (Thread t : threads) {
            System.out.println("Thread name: " + t.getName() + ", is alive: " + t.isAlive());
        }

        // Wait for all threads to finish
        try {
            thread1.join();
            thread2.join();
            thread3.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread was interrupted.");
        }

        System.out.println("\nAll threads have finished execution.");
    }
}


class MessagePrinter implements Runnable {
    private String message;

    public MessagePrinter(String message) {
        this.message = message;
    }

    @Override
    public void run() {
        while (true) {
            System.out.println(message);
            try {
                // Sleep for 400 milliseconds
                Thread.sleep(400);
            } catch (InterruptedException e) {
                System.out.println("Thread " + Thread.currentThread().getName() + " was interrupted.");
                break;  // Exit the loop if interrupted
            }
        }
    }
}

public class ContinuousMessagePrinter {
    public static void main(String[] args) {
        // Create two Runnable instances with different messages
        MessagePrinter printer1 = new MessagePrinter("Message from Thread1");
        MessagePrinter printer2 = new MessagePrinter("Message from Thread2");

        // Create two threads and pass the Runnable instances to them
        Thread thread1 = new Thread(printer1, "Thread1");
        Thread thread2 = new Thread(printer2, "Thread2");

        // Start the threads
        thread1.start();
        thread2.start();

        // Main thread will keep running until the user presses Ctrl+C to stop the program
        try {
            // Join threads to keep the main thread alive and waiting
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread was interrupted.");
        }
    }
}

// Thread class to display the first 10 terms of the Fibonacci series
class Fibonacci extends Thread {
    @Override
    public void run() {
        int n1 = 0, n2 = 1;
        System.out.println("Fibonacci Series:");
        System.out.print(n1 + " " + n2); // print first two numbers

        for (int i = 2; i < 10; i++) { // Loop to generate next 8 terms
            int n3 = n1 + n2;
            System.out.print(" " + n3);
            n1 = n2;
            n2 = n3;
        }
        System.out.println(); // Move to the next line after printing the series
    }
}

// Thread class to display numbers from 10 to 1 in reverse order
class Reverse extends Thread {
    @Override
    public void run() {
        System.out.println("Numbers in Reverse Order:");
        for (int i = 10; i >= 1; i--) { // Loop from 10 to 1
            System.out.print(i + " ");
        }
        System.out.println(); // Move to the next line after printing the numbers
    }
}

public class MultiThreadDemo {
    public static void main(String[] args) {
        // Create instances of both thread classes
        Fibonacci fibonacciThread = new Fibonacci();
        Reverse reverseThread = new Reverse();

        // Start the threads
        fibonacciThread.start();
        reverseThread.start();

        // Main thread waits for both threads to complete
        try {
            fibonacciThread.join();
            reverseThread.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }

        System.out.println("Main thread exiting.");
    }
}

class Fibonacci extends Thread {
    @Override
    public void run() {
        int n1 = 0, n2 = 1;
        System.out.println(n1); // First term of the Fibonacci series
        System.out.println(n2); // Second term of the Fibonacci series
        for (int i = 3; i <= 10; i++) {
            int n3 = n1 + n2;
            System.out.println(n3); // Next term in the Fibonacci series
            n1 = n2;
            n2 = n3;
        }
    }
}

class Reverse extends Thread {
    @Override
    public void run() {
        for (int i = 10; i >= 1; i--) {
            System.out.println(i); // Print numbers in reverse order
        }
    }
}

public class Main {
    public static void main(String[] args) {
        // Create instances of Fibonacci and Reverse threads
        Fibonacci fibonacciThread = new Fibonacci();
        Reverse reverseThread = new Reverse();

        // Start both threads
        fibonacciThread.start();
        reverseThread.start();
    }
}
class Fibonacci extends Thread {
    @Override
    public void run() {
        int n1 = 0, n2 = 1;
        System.out.print("Fibonacci series: ");
        for (int i = 1; i <= 10; i++) {
            System.out.print(n1 + " ");
            int n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        System.out.println(); // Move to the next line after printing the series
    }
}

class Reverse extends Thread {
    @Override
    public void run() {
        System.out.print("Reverse order: ");
        for (int i = 10; i >= 1; i--) {
            System.out.print(i + " ");
        }
        System.out.println(); // Move to the next line after printing the numbers
    }
}

public class ThreadExample {
    public static void main(String[] args) {
        // Create instances of the Fibonacci and Reverse classes
        Fibonacci fibonacciThread = new Fibonacci();
        Reverse reverseThread = new Reverse();

        // Start both threads
        fibonacciThread.start();
        reverseThread.start();

        // Wait for both threads to finish
        try {
            fibonacciThread.join();
            reverseThread.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }
    }
}

// Thread class to generate and display the first 10 terms of the Fibonacci series
class Fibonacci extends Thread {
    @Override
    public void run() {
        int n1 = 0, n2 = 1, n3;
        System.out.print("Fibonacci Series: ");
        System.out.print(n1 + " " + n2); // Printing first two numbers

        for (int i = 2; i < 10; i++) { // Loop starts from 2 as the first two numbers are already printed
            n3 = n1 + n2;
            System.out.print(" " + n3);
            n1 = n2;
            n2 = n3;
        }
        System.out.println(); // Move to the next line after printing the series
    }
}

// Thread class to display numbers from 10 to 1 in reverse order
class Reverse extends Thread {
    @Override
    public void run() {
        System.out.print("Reverse Order: ");
        for (int i = 10; i > 0; i--) {
            System.out.print(i + " ");
        }
        System.out.println(); // Move to the next line after printing the series
    }
}

public class MultiThreadSeries {
    public static void main(String[] args) {
        // Create instances of Fibonacci and Reverse thread classes
        Fibonacci fibonacciThread = new Fibonacci();
        Reverse reverseThread = new Reverse();

        // Start both threads
        fibonacciThread.start();
        reverseThread.start();

        // Wait for both threads to complete execution
        try {
            fibonacciThread.join();
            reverseThread.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }

        System.out.println("Both threads have finished execution.");
    }
}

import java.util.Hashtable;
import java.util.Scanner;

class Product {
    private String productId;
    private String productName;

    public Product(String productId, String productName) {
        this.productId = productId;
        this.productName = productName;
    }

    public String getProductId() {
        return productId;
    }

    public String getProductName() {
        return productName;
    }

    @Override
    public String toString() {
        return "Product ID: " + productId + ", Product Name: " + productName;
    }
}

public class ProductManager {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Hashtable<String, Product> products = new Hashtable<>();

        // Predefined products
        products.put("P001", new Product("P001", "Maruti800"));
        products.put("P002", new Product("P002", "MarutiZen"));
        products.put("P003", new Product("P003", "Maruti Esteem"));

        // Input for remaining products
        for (int i = 0; i < 7; i++) {
            System.out.println("Enter Product ID:");
            String productId = scanner.nextLine();
            System.out.println("Enter Product Name:");
            String productName = scanner.nextLine();
            products.put(productId, new Product(productId, productName));
        }

        // Search for a product
        System.out.println("Enter Product ID to search:");
        String searchId = scanner.nextLine();
        if (products.containsKey(searchId)) {
            System.out.println("Product found: " + products.get(searchId));
        } else {
            System.out.println("Product not found.");
        }

        // Remove a product
        System.out.println("Enter Product ID to remove:");
        String removeId = scanner.nextLine();
        if (products.containsKey(removeId)) {
            products.remove(removeId);
            System.out.println("Product removed.");
        } else {
            System.out.println("Product not found. Nothing to remove.");
        }

        // Display remaining products
        System.out.println("Remaining products in the hashtable:");
        for (Product product : products.values()) {
            System.out.println(product);
        }

        scanner.close();
    }
}


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class StudentCRUD {

    // Database URL, Username, and Password
    static final String DB_URL = "jdbc:mysql://localhost:3306/your_database_name"; // Replace with your DB name
    static final String USER = "your_username"; // Replace with your DB username
    static final String PASS = "your_password"; // Replace with your DB password

    public static void main(String[] args) {
        try (Connection conn = DriverManager.getConnection(DB_URL, USER, PASS);
             Statement stmt = conn.createStatement()) {

            // Create - Insert a new student record
            String insertSQL = "INSERT INTO Student (rollno, name, marks, address) VALUES (1, 'John Doe', 85, '123 Main St')";
            stmt.executeUpdate(insertSQL);
            System.out.println("Insert successful");

            // Read - Select all students
            String selectSQL = "SELECT * FROM Student";
            ResultSet rs = stmt.executeQuery(selectSQL);

            while (rs.next()) {
                // Retrieve by column name
                int rollno = rs.getInt("rollno");
                String name = rs.getString("name");
                int marks = rs.getInt("marks");
                String address = rs.getString("address");

                // Display values
                System.out.print("Roll No: " + rollno);
                System.out.print(", Name: " + name);
                System.out.print(", Marks: " + marks);
                System.out.println(", Address: " + address);
            }

            // Update - Update student's marks
            String updateSQL = "UPDATE Student SET marks = 90 WHERE rollno = 1";
            stmt.executeUpdate(updateSQL);
            System.out.println("Update successful");

            // Delete - Delete a student record
            String deleteSQL = "DELETE FROM Student WHERE rollno = 1";
            stmt.executeUpdate(deleteSQL);
            System.out.println("Delete successful");

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

CREATE TABLE Student (
    rollno INT PRIMARY KEY,
    name VARCHAR(50),
    marks FLOAT,
    address VARCHAR(100)
);



