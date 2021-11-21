/*
W.A.P. that accepts two values either int or double. Design functions that
understand the input, add them and provide correct output.
*/
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {

    int i1 = 10, i2 = 12;
    double d1 = 12.4, d2 = 42.2;
    cout << i1 << " + " << i2 << " = " << add(i1, i2) << '\n';
    cout << d1 << " + " << d2 << " = " << add(d1, d2) << '\n';
}