/* W.A.P. to print all the prime factors of a given number. */
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factors: ";
    for (int i = 2; i <= n / 2; i++) {

        if (n % i == 0) {

            bool is_prime = true;
            for (int j = 2; j <= i / 2; j++) {

                if (i % j == 0) {

                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                cout << i << ", ";
            }
        }
    }
}