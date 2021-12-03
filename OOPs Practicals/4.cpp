/* W.A.P. to read m x n matrix and find avg of each row, column and matrix */
#include <iostream>
using namespace std;

int main() {

    int m, n;
    cout << "Enter number of rows & columns: ";
    cin >> m >> n;

    // Read Matrix Elements
    int matrix[m][n];
    for (int i = 0; i < m; i++) {

        cout << "Enter row " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate All Averages
    float matrix_avg = 0, row_avg[m] = { 0 }, col_avg[n] = { 0 };
    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {

            matrix_avg += matrix[i][j];
            row_avg[i] += matrix[i][j];
            col_avg[j] += matrix[i][j];
            if (i == m - 1) {
                col_avg[j] /= m;
            }
        }
        row_avg[i] /= n;
    }
    matrix_avg /= (m * n);

    // Display All Averages
    cout << "\nAverage of matrix elements: " << matrix_avg << "\n";
    for (int i = 0; i < m; i++) {
        cout << "\nAverage of elements in row " << i + 1 << ": " << row_avg[i];
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "\nAverage of elements in col " << i + 1 << ": " << col_avg[i];
    }

    return 0;
}

// Output:
// Enter number of rows & columns: 3 3
// Enter row 1: 6 4 7
// Enter row 2: 8 3 9
// Enter row 3: 7 9 5

// Average of matrix elements: 6.44444

// Average of elements in row 1: 5.66667
// Average of elements in row 2: 6.66667
// Average of elements in row 3: 7

// Average of elements in col 1: 7
// Average of elements in col 2: 5.33333
// Average of elements in col 3: 7