/* W.A.P. to take as input a fraction in the form a/b. Convert the same into lowest terms and print. */
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

int main() {

    int a, b;
    cout << "Enter the numerator: ";
    cin >> a;
    cout << "Enter the denominator: ";
    cin >> b;
    int divisor = gcd(a, b);
    cout << "Reduced form of " << a << " / " << b << " = "
         << a / divisor << " / " << b / divisor;
}