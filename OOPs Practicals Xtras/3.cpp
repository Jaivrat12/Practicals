/* W.A.P. to print ASCII value of given number. ASCII value vary from 0 to 255. */
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number (0-255): ";
    cin >> n;
    cout << "ASCII value of " << n << " is: " << char(n);
    return 0;
}

// O/P:
// Enter a number (0-255): 42
// ASCII value of 42 is: *