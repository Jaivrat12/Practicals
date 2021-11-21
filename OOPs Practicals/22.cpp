/*
Create a base class that contains a function display(), displaying "I am in base".
Function with same name display() is in derived class, displaying "I am in derived".
*/
#include <iostream>
using namespace std;

class Base {

    public:
    void display() {
        cout << "I am in Base\n";
    }
};

class Derived: public Base {

    public:
    void display() {
        cout << "I am in Derived\n";
    }
};

int main() {

    Base base;
    Derived derived;
    base.display();
    derived.display();
}