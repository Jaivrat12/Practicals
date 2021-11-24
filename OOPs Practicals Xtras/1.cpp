/* W.A.P. to print the table of a given number 'n', till 'm' multiples */
#include <iostream>
using namespace std;

int main() {

    int n, m;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter number of multiples: ";
    cin >> m;

    for (int i = 1; i <= m; i++) {
        cout << n << " x " << i << " = " << n * i << '\n';
    }
}