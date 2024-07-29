#include <iostream>
/*
 * This program demonstrates basic input and output operations in C++.
 * The lines std::ios::sync_with_stdio(false) and std::cin.tie(nullptr)
 * are used to optimize I/O operations by:
 * - Disabling synchronization between C++ streams and C streams for faster I/O.
 * - Untying std::cin from std::cout to prevent automatic flushing before input operations.
 */

int main() {

    // Make I/O more efficient
    std::ios::sync_with_stdio(0); // disable sync with C I/O for faster input/output
    std::cin.tie(0); // untie cin from cout to avoid unnecessary flushes

    // Example input and output
    int a, b;
    std::string x;

    std::cin >> a >> b >> x;
    std::cout << a << " " << b << " " << x << "\n"; // its really good practice to use '\n' instead of endl as endl will envoke flush operation

    return 0;
}
