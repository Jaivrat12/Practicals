/* W.A.P. to print all 3-digit Armstrong numbers in a given range. */
#include <iostream>
using namespace std;

int digit_cubes_sum(int n) {

    if (n == 0) {
        return 0;
    }

    int digit = n % 10;
    int cube = digit * digit * digit;
    return cube + digit_cubes_sum(n / 10);
}

int main() {

    int min, max;
    cout << "Enter a range (3-digit numbers, space-separated): ";
    cin >> min >> max;
    for (int n = min; n <= max; n++) {

        if (n == digit_cubes_sum(n)) {
            cout << n << ", ";
        }
    }
}