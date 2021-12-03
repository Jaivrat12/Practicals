/* W.A.P. to print the diagonal elements of a matrix */
#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter size of square matrix: ";
    cin >> size;

    int matrix[size][size];
    for (int i = 0; i < size; i++) {

        cout << "Enter row " << i + 1 << ": ";
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nDiagonal Elements:\n";
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            if (i == j || i + j == size - 1) {
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
// Enter size of square matrix: 3
// Enter row 1: 1 2 3
// Enter row 2: 4 5 6
// Enter row 3: 7 8 9

// Diagonal Elements:
// 1   3
//   5
// 7   9