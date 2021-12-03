/* W.A.P. to illustrate File I/O. */
#include <iostream>
#include <cstring>
#include <exception>
using namespace std;

class IntException : public exception {

    string failed_str;
    public:
    IntException(string str) { failed_str = str; }
    const char* what() const throw () {

        string msg = "Unable to convert '" + failed_str + "' to integer";
        char *err_msg = new char[msg.length() + 1];
        strcpy(err_msg, msg.c_str());
        return err_msg;
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
        cout << "\nWant to convert more? (y/n): ";
        cin >> ch;
        cout << '\n';
    }
    return 0;
}

// O/P:
// Enter number: 4224
// Successfully converted to integer: 4224

// Want to convert more? (y/n): y

// Enter number: 12a
// Error: Unable to convert '12a' to integer

// Want to convert more? (y/n): y

// Enter number: 123
// Successfully converted to integer: 123

// Want to convert more? (y/n): n