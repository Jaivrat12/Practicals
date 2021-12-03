/* W.A.P. to overload + operator to concatenate two strings */
#include <iostream>
#include <cstring>
using namespace std;

class String {

    char *str;
    int size;

    public:
    String(char* s) {

        size = 0;
        char *c = s;
        while (*c) { size++; c++; }
        str = new char[size + 1];
        strcpy(str, s);
    }

    ~String() { delete str; }
    void print() { cout << str << '\n'; }
    String operator+(String s) { return strcat(str, s.str); }
};

int main() {

    String s1 = "abc";
    cout << "s1 = "; s1.print();
    String s2 = "def";
    cout << "s2 = "; s2.print();
    String s3 = s1 + s2;
    cout << "s3 = s1 + s2 = "; s3.print();
    return 0;
}

// O/P:
// s1 = abc
// s2 = def
// s3 = s1 + s2 = abcdef