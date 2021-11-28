/*
W.A.P. to overload all arithmetic operators.
*/
#include <iostream>
#include <numeric>
using namespace std;

class Fraction {

    public:
    int numerator, denominator;
    Fraction(int n = 0, int d = 1) { numerator = n, denominator = d; }

    void print() {
        cout << "(" << numerator << " / " << denominator << ")";
    }

    Fraction operator+(Fraction f) {

        int d = lcm(denominator, f.denominator);
        int n1 = numerator * (d / denominator);
        int n2 = f.numerator * (d / f.denominator);
        return Fraction(n1 + n2, d);
    }

    Fraction operator-(Fraction f) {

        int d = lcm(denominator, f.denominator);
        int n1 = numerator * (d / denominator);
        int n2 = f.numerator * (d / f.denominator);
        return Fraction(n1 - n2, d);
    }

    Fraction operator*(Fraction f) {
        return Fraction(numerator * f.numerator, denominator * f.denominator);
    }

    Fraction operator/(Fraction f) {
        return Fraction(numerator * f.denominator, denominator * f.numerator);
    }
};

int main() {

    Fraction f1(1, 2), f2(3, 4), f3;
    f3 = f1 + f2;
    f1.print(); cout << " + "; f2.print(); cout << " = "; f3.print(); cout << '\n';
    f3 = f1 - f2;
    f1.print(); cout << " - "; f2.print(); cout << " = "; f3.print(); cout << '\n';
    f3 = f1 * f2;
    f1.print(); cout << " * "; f2.print(); cout << " = "; f3.print(); cout << '\n';
    f3 = f1 / f2;
    f1.print(); cout << " / "; f2.print(); cout << " = "; f3.print(); cout << '\n';
}