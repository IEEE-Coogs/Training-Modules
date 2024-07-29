import java.util.Scanner;
import java.util.NoSuchElementException;

// make sure the public class name matches the file name, in this case 'BasicInputOutput'
public class BasicInputOutput {
    public static void main(String[] args) {
        // Introduction:
        // This program demonstrates basic input and output operations in Java.

        // Objective: Demonstrate how to print a simple message to the console
        System.out.println("Hello, World!");

        // Objective: Show how to read input from the console and print a personalized message
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        
        try {
            if (scanner.hasNextLine()) {
                String name = scanner.nextLine();
                System.out.println("Hello, " + name);
            } else {
                System.out.println("No input provided.");
            }
        } catch (NoSuchElementException e) {
            System.out.println("Error reading input: " + e.getMessage());
        }

        scanner.close();
    }
}
