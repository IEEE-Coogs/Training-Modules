// Introduction:
// This program demonstrates formatted output in Java.

public class FormattedOutput {
    public static void main(String[] args) {
        /* Objective: Display how to use printf for formatted output */

        // example: Displaying an integer
        int age = 21;
        System.out.printf("I am %d years old, but I feel like I'm 100!%n%n", age);

        // example: Displaying a float with two decimal places
        double pi = 3.14159;
        System.out.printf("The value of pi to 2 decimal places is %.2f. It's not pie, but it's still delicious!%n%n", pi);

        // example: Displaying a string
        // String name = " *write your name* ";
        System.out.printf("Hello, my name is %s.%n%n", name);

        // example: Displaying multiple variables
        String item = "apple";
        int quantity = 5;
        double price = 1.25;
        System.out.printf("I bought %d %ss for $%.2f each. Yes, I know, I have an apple obsession.%n%n", quantity, item, price);

        // example: displaying a date
        int day = 24;
        String month = "July";
        int year = 2024;
        System.out.printf("Today's date is %s %d, %d. It's a perfect day to learn Java!%n%n", month, day, year);



        /* Objective: demonstrate formatted output using String.format */ 

        // example: displaying a floating-point number
        double temperature = 72.5;
        System.out.println(String.format("The current temperature is %.1f degrees Fahrenheit. It's hot enough to fry an egg on the sidewalk! %n%n", temperature));

        // example: displaying an integer with leading zeros
        int orderNumber = 42;
        System.out.println(String.format("Order number: %05d. Your secret agent number is safe with me.%n%n", orderNumber));

        // example: displaying percentages
        double discount = 0.15;
        System.out.println(String.format("You ate  %.0f%% of the pie, you owe me a whole pie! Just kidding, you have it 😸 %n%n", discount * 100));

        // example: displaying alignment
        System.out.println(String.format("|%-10s|%9s|", "Left", "Right"));
        System.out.println(String.format("|%-10s|%15s|", "Aligned", "Aligned (sort of)"));
    }
}
