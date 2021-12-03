/* Write a function which swaps the values of two variables using pointers. */
#include <iostream>
using namespace std;

void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping, a = " << a << ", b = " << b;
    swap(&a, &b);
    cout << "\nAfter swapping, a = " << a << ", b = " << b;
    return 0;
}

// O/P:
// Enter two numbers: 24 42
// Before swapping, a = 24, b = 42
// After swapping, a = 42, b = 24