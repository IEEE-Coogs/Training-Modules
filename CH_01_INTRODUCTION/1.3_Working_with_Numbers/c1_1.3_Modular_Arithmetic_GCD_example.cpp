#include <iostream>
using namespace std;

// Function to compute GCD using the Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;  // using modular arithmetic to find the remainder
        a = temp;
    }
    return a;
}

int main() {
    long long a = 56;
    long long b = 98;

    long long result = gcd(a, b);

    cout << "GCD of " << a << " and " << b << " is " << result << "\n";

    return 0;
}
