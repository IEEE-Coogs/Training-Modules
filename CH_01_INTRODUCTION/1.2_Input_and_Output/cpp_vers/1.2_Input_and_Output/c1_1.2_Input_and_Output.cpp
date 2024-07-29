#include <iostream>
#include <fstream> // for file input and output
using namespace std;

int main()
{

    // ### *Basic Input and Output* ###

    // Objective: how to print a simple message to the console
    cout << "Hello, World! 🌍 Ready to start onto this new chapter?, lets get started!" << endl;

    //  Objective: how to read input from the console and print a personalized message
    string name;
    cout << "What's your name?: ";
    cin >> name;
    cout << "Ahoy, " << name << "! Welcome to the world of C++! \n" << endl;



    // ### *Formatted Output* ###

    // Objective: Demonstrate how to format output using the `<<` operator
    double pi = 3.14159;
    cout << "Here’s a fun fact: The value of Pi to 2 decimal places is " << fixed << setprecision(2) << pi << " 🍰 \n" << endl;

    // Objective: Show how to align and format numbers with width and precision using 'setw(length)'
    int id = 101;
    double price = 45.678;

    cout << "Book ID: " << setw(5) << id << " | Price: " << fixed << setprecision(2) << setw(7) << price <<"\n"<< endl;

    // another example
    string product = "Gadget";
    int quantity = 15;
    double price1 = 99.987;

    cout << "Product List:\n";

    // Left align product name and right align quantity and price
    cout << left << setw(15) << "Product"
         << right << setw(10) << "Quantity"
         << right << setw(10) << "Price" << endl;

    cout << left << setw(15) << product
         << right << setw(10) << quantity
         << right << setw(10) << fixed << setprecision(2) << price << " USD" << endl;



    // Objective: Use `printf` for advanced formatted output
    int stars = 1;
    printf("You’ve earned %d shiny star%s! ⭐️⭐️⭐️⭐️⭐️\n\n", stars, stars > 1 ? "s" : ""); // boolean to determine plural or not




    // ### *File Input and Output* ###

    // Objective: how to write into a file
    ofstream out("output1.txt");
    if (out.is_open()) {
        out << "File creation success! 🎉" << endl;
        out.close();
    }
    else{
        cout << "Oops! looks like we hit a snag. Could not open the file for writing." << endl;
    }


      // Objective: how to read the content from a file and print it
    ifstream inFile("output1.txt");
    string content;
    if (inFile.is_open()) {
        getline(inFile, content);
        cout << "Here’s what’s in your file: " << content << endl;
        inFile.close();
    } else {
        cout << "Could not open file, better luck next time!" << endl;
    }
}
