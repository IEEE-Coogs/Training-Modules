#include <iostream>
using namespace std;

int main() {
    long long n = 10;
    long long m = 7;

    long long x = 1; // consistent data type since we are expecting a long long in return

    // Calculating factorial of n modulo m
    for (int i = 2; i <= n; i++) {
        x = (x * i) % m;
    }

    cout << "Factorial of " << n << " modulo " << m << " is " << x << "\n";

    //! Handling negative remainders
    long long negative_value = -9;
    long long remainder = negative_value % m;
    if (remainder < 0) remainder += m;

    cout << "Remainder of " << negative_value << " modulo " << m << " is " << remainder << "\n";

    return 0;
}
