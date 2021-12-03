/*
Create a base class called shape. Use this class to store two double type values
that could be used to compute the area of figures. Derive two specific classes
called triangle and rectangle from the base shape. Add to base class, a member
function get_data() to initialize base class data members & another member function
display_area() to compute and display the area of figures. Mark the display_area()
as a virtual function & redefine this function in the derived class to suit their
requirements. (Use pure virtual function)
*/
#include <iostream>
using namespace std;

class Shape {

    protected:
    double base, height;
    public:
    virtual void display_area() = 0;
};

class Triangle: public Shape {

    public:
    Triangle(double b, double h) {
        base = b, height = h;
    }
    void display_area() {
        cout << "Area of this triangle is: " << 0.5 * base * height << '\n';
    }
};

class Rectangle: public Shape {

    public:
    Rectangle(double b, double h) {
        base = b, height = h;
    }
    void display_area() {
        cout << "Area of this rectangle is: " << base * height << '\n';
    }
};

int main() {

    Triangle tri(2.5, 8);
    Rectangle rect(9, 4.5);
    tri.display_area();
    rect.display_area();
    return 0;
}

// O/P:
// Area of this triangle is: 10
// Area of this rectangle is: 40.5