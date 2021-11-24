/* Write a function which swaps the values of two variables using references. */
#include <iostream>
using namespace std;

void swap(int& a, int& b) {

    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping, a = " << a << ", b = " << b;
    swap(a, b);
    cout << "\nAfter swapping, a = " << a << ", b = " << b;
}