/* W.A.P. to print the factorial of a number. */
#include <iostream>
using namespace std;

int main() {

    long long n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of the given number = " << factorial;
    return 0;
}

// O/P:
// Enter a number: 10
// Factorial of the given number = 3628800