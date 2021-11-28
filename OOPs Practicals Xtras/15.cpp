/* W.A.P. to illustrate File I/O. */
#include <iostream>
#include <exception>
using namespace std;

class IntException : public exception {

    string failed_str;
    public:
    IntException(string str) { failed_str = str; }
    const char * what () const throw () {

        string msg = "Unable to convert '" + failed_str + "' to integer";
        return msg.c_str();
    }
};

int str_to_int(string str) {

    int num = 0;
    for (int i = 0; i < str.length(); i++) {

        if (str[i] < '0' || str[i] > '9') {
            throw IntException(str);
        }
        num = (num * 10) +  int(str[i] - '0');
    }
    return num;
}

int main() {

    char ch = 'y';
    string str;
    while (ch == 'y') {

        try {

            cout << "Enter number: ";
            cin >> str;
            int num = str_to_int(str);
            cout << "Successfully converted to integer: " << num << '\n';
        } catch (IntException& e) {
            cout << "Error: " << e.what() << '\n';
        } catch (...) {
            cout << "An unknown error occured...\n";
        }
        cout << "Want to convert more? (y/n): ";
        cin >> ch;
    }
}