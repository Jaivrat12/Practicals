/* W.A.P. to take 10 integers from keyboard using loop and print their average value. */
#include <iostream>
using namespace std;

int main() {

    int n;
    float avg = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {

        cin >> n;
        avg += n;
    }
    avg /= 10;
    cout << "Average of given numbers = " << avg;

    return 0;
}

// O/P:
// Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
// Average of given numbers = 5.5