/*
Create an abstract class Shape which calculate the area & volume of 2D & 3D shapes
with methods getArea() & getVolume(). Reuse this class to calculate the area and
volume of square, circle, cube and sphere.
*/
#include <iostream>
using namespace std;

class Shape {

    public:
    static const double PI;
    virtual double getArea() = 0;
    virtual double getVolume() = 0;
};
const double Shape::PI = 3.1415926535;

class Square : public Shape {

    public:
    double side;
    Square(double a) { side = a; }
    double getArea() { return side * side; }
    double getVolume() { return 0; }
};

class Circle : public Shape {

    public:
    double radius;
    Circle(double r) { radius = r; }
    double getArea() { return PI * radius * radius; }
    double getVolume() { return 0; }
};

class Cube : public Shape {

    public:
    double side;
    Cube(double a) { side = a; }
    double getArea() { return 6 * side * side; }
    double getVolume() { return side * side * side; }
};

class Sphere : public Shape {

    public:
    double radius;
    Sphere(double r) { radius = r; }
    double getArea() { return 4 * PI * radius * radius; }
    double getVolume() {
        return 4 * PI * radius * radius * radius / 3;
    }
};

int main() {

    Square square(4); Circle circle(4);
    Cube   cube(4);   Sphere sphere(4);
    cout << "Area of square is: "   << square.getArea()   << '\n';
    cout << "Area of circle is: "   << circle.getArea()   << '\n';
    cout << "Area of cube is: "     << cube.getArea()     << '\n';
    cout << "Area of sphere is: "   << sphere.getArea()   << '\n';
    cout << "Volume of cube is: "   << cube.getVolume()   << '\n';
    cout << "Volume of sphere is: " << sphere.getVolume() << '\n';
}