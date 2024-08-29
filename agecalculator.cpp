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

