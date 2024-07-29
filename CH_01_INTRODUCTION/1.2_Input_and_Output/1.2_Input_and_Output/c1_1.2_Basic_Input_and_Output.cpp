#include <iostream>
using namespace std;

/*
    This program demonstrates basic input and output operations in C++.
    It prompts the user to enter two integers and a string, then
    outputs the entered values.
*/

int main() {

    // where we will store our values
    int numA, numB;
    string stringX;

//    /* first example: basic structure*/
//    cin >> numA >> numB >> stringX;
//    cout << "int a is: " << numA << " int b is: " << numB << " and string x is: " << stringX << endl;


    // second example: lets prompt user to input
    cout << "Please enter two integers and a string all spaced in the corresponding manner, 'int int string': ";
    cin >> numA >> numB >> stringX;
    cout << "int a is: " << numA << " int b is: " << numB << " and string x is: " << stringX << endl;

    return 0;
}
