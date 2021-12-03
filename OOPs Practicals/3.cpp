/* W.A.P. to find the GCD and LCM of 2 numbers */
#include <iostream>
using namespace std;

int gcd(int a, int b) {

    int min_n = a < b ? a : b;
    for (int i = min_n; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
}

int lcm(int a, int b) {

    int min_n = a < b ? a : b;
    int max_n = a > b ? a : b;
    int upper_limit = a * b;
    for (int i = min_n; i <= upper_limit; i += min_n) {
        if (i % max_n == 0) {
            return i;
        }
    }
}

int main() {

    int a, b;
    cout << "Enter both numbers (a, b): ";
    cin >> a >> b;

    cout << "\nGCD: " << gcd(a, b)
         << "\nLCM: " << lcm(a, b);

    return 0;
}

// Output:
// Enter both numbers (a, b): 16 92

// GCD: 4
// LCM: 368