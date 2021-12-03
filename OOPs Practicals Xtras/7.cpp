/* W.A.P. to calculate the sum of digits of a given number. */
#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n) {

        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of all digits = " << sum;
    return 0;
}

// O/P:
// Enter a number: 4224
// Sum of all digits = 12