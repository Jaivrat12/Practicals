/* W.A.P. to print ASCII values and their equivalent characters. ASCII value vary from 0 to 255. */
#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 256; i++) {
        cout << i << " = " << "["  << char(i) << "]";
        cout << ((i + 1) % 10 == 0 ? '\n' : '\t');
    }
}