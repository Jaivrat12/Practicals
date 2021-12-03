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

    return 0;
}

// O/P:
// Enter a number: 15
// Enter number of multiples: 10
// 15 x 1 = 15
// 15 x 2 = 30
// 15 x 3 = 45
// 15 x 4 = 60
// 15 x 5 = 75
// 15 x 6 = 90
// 15 x 7 = 105
// 15 x 8 = 120
// 15 x 9 = 135
// 15 x 10 = 150