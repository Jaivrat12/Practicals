/* Write a function which accepts an object as a parameter and returns object */
#include <iostream>
using namespace std;

class Object {

    public:
    string message;
};

Object fun(Object object) {

    cout << "Object recieved: " << object.message << '\n';
    Object newObject;
    newObject.message = "object from an object-returning-function";
    return newObject;
}

int main() {

    Object object1;
    object1.message = "object from main-function";
    Object object2 = fun(object1);
    cout << "Object recieved: " << object2.message << '\n';
    return 0;
}

// O/P:
// Object recieved: object from main-function
// Object recieved: object from an object-returning-function