/* W.A.P. to illustrate I/O manipulators. */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n = 15;
    cout << "Octal representation of " << n << " is: "
         << setbase(8) << n << setbase(10) << '\n';
    cout << "Hexadecimal representation of " << n << " is: "
         << setbase(16) << n << setbase(10) << '\n';

    double pi = 3.14159;
    cout << "\nSetting precision to 2 on " << pi << ": "
         << fixed << setprecision(2) << pi << '\n';

    cout << "\nSet width to align numbers to right:\n";
    for (int i = 1; i <= 10000; i *= 10) {
        cout << setw(5) << i << '\n';
    }

    cout << "\nFilling indents in each line:\n";
    for (int i = 1; i <= 10000; i *= 10) {
        cout << setfill('*') << setw(5) << i << '\n';
    }
}