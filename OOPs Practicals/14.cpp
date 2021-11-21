/*
If a class D is derived from two base classes B1 & B2, then write these classes each containing zero argument constructors.
Ensure while building an object of type D firstly the constructor of B2 should get called followed by that of B1.
Also provide destructor in each.
*/
#include <iostream>
using namespace std;

class B1 {

    public:
    B1() { cout << "class B1's constructor\n"; }
    ~B1() { cout << "class B1's destructor\n"; }
};

class B2 {

    public:
    B2() { cout << "class B2's constructor\n"; }
    ~B2() { cout << "class B2's destructor\n"; }
};

class D: public B2, public B1 {

    public:
    D() { cout << "class D's constructor\n"; }
    ~D() { cout << "class D's destructor\n"; }
};

int main() {

    D d;
    cout << "End of main\n";
}