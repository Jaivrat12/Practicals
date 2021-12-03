/* W.A.P. to print the boundary elements of a matrix */
#include <iostream>
using namespace std;

int main() {

    int m, n;
    cout << "Enter number of rows & columns: ";
    cin >> m >> n;

    int matrix[m][n];
    for (int i = 0; i < m; i++) {

        cout << "Enter row " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nBoundary Elements:\n";
    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {

            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                cout << matrix[i][j];
            } else {
                cout << " ";
            }
            cout << " ";
        }
        cout << '\n';
    }

    return 0;
}

// O/P:
// Enter number of rows & columns: 5 4
// Enter row 1: 1 2 3 4
// Enter row 2: 5 6 7 8
// Enter row 3: 9 0 1 2
// Enter row 4: 3 4 5 6
// Enter row 5: 7 8 9 0

// Boundary Elements:
// 1 2 3 4
// 5     8
// 9     2
// 3     6
// 7 8 9 0