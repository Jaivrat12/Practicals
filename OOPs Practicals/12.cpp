/* W.A.P. to find square root using inline function */
#include <iostream>
#include <cmath>
using namespace std;

inline float square_root(float n) {
    return sqrt(n);
}

int main() {

    float n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square root of " << n << " is: " << square_root(n);
}