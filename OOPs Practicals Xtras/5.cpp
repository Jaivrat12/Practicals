/* W.A.P. to take integer inputs from user till the user wants to & then print average and product of all numbers. */
#include <iostream>
using namespace std;

int main() {

    int n, prod = 1, ctr = 0;
    char ch;
    float avg = 0;
    do {

        cout << "Enter a number: ";
        cin >> n;
        avg += n; prod *= n; ctr++;
        cout << "Do you want to stop? (y/n): ";
        cin >> ch;
    } while (ch != 'y');
    avg /= ctr;
    cout << "\nAverage of given numbers = " << avg;
    cout << "\nProduct of given numbers = " << prod;
}