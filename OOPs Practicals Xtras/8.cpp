/* W.A.P. to print all prime numbers in a given range. */
#include <iostream>
using namespace std;

int main() {

    int min, max;
    cout << "Enter a range (space-separated): ";
    cin >> min >> max;
    min = min < 2 ? 2 : min;

    cout << "Prime numbers: ";
    for (int n = min; n <= max; n++) {

        bool is_prime = true;
        for (int i = 2; i <= n / 2; i++) {

            if (n % i == 0) {

                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << n << ", ";
        }
    }

    return 0;
}

// O/P:
// Enter a range (space-separated): 4 40
// Prime numbers: 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,