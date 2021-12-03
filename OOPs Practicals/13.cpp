/* W.A.P. to illustrate the use of friend function */
#include <iostream>
using namespace std;

class Circle {

    double radius;
    public:
    Circle(double r) { radius = r; }
    friend double get_area(Circle);
};

double get_area(Circle c) {
    return 3.14 * c.radius * c.radius;
}

int main() {

    Circle c(12.34);
    cout << "Area of circle is: " << get_area(c);
    return 0;
}

// O/P:
// Area of circle is: 478.145