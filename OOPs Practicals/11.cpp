/* W.A.P. to illustrate the use of scope resolution operator */
#include <iostream>
using namespace std;

class X {

    public:
    static string x;
};
string X::x = "static variable X::x";

string x = "global variable x";

int main() {

    string x = "local variable x";
    cout << x << '\n';
    cout << ::x << '\n';
    cout << X::x << '\n';
    return 0;
}

// O/P:
// local variable x
// global variable x
// static variable X::x