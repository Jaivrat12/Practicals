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

    cout << "Boundary Elements:\n";
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
}