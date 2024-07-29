#include <iostream>
/*
 * This program demonstrates various methods to optimize input and output operations in C++.
 * It includes:
 * - Using std::ios::sync_with_stdio(false) and std::cin.tie(nullptr) for faster I/O.
 * - Using scanf() and printf() from the C standard library for efficient I/O.
 * - Using getline() to read whole lines of input.
 */

int main() {

    // Make I/O more efficient
    std::ios::sync_with_stdio(0); // disable sync with C I/O for faster input/output
    std::cin.tie(0); // untie cin from cout to avoid unnecessary flushes

//    // Example input and output
//    int a, b;
//    std::string x;
//
//    std::cin >> a >> b >> x;
//    std::cout << a << " " << b << " " << x << "\n"; // its really good practice to use '\n' instead of endl as endl will envoke flush operation


///* reading integers using scanf() */
//    int a, b;
//    scanf("%d %d", &a, &b)


///* printing integers using printf() */
//    int a = 24, b = 25;
//    printf("%d %d \n", a, b)


///* reading whole line from input possibly containing spaces */
//    std::string s;
//    getline(cin, s);


/* if amount of data is unknown when can use a loop (actually more like a demo) */
int a, b;
std::string x;

// read input until EOF
while (std::cin>>a>>b>>x){

    // output results
    std::cout<<a<<" "<<b<<" "<<x<<"\n";
    }

    return 0;
}

/*
indicate EOF
- Windows: `Ctrl+Z' followed by `Enter`
- Unix/Linux/Mac: `Ctrl+D`
*/