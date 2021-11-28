/* W.A.P. to illustrate File I/O. */
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file;

    // Opening file for writing
    file.open("demo.txt", ios::out);

    // Checking if file was opened successfully or not
    if (file.is_open()) {

        // Writing to file
        file << "C++ is a general-purpose programming language.\n";
        file << "It was created by Bjarne Stroustrup.\n";
        file << "It is an extension of the C programming language, or C with Classes.\n";

        // Closing file
        file.close();

    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }

    // Opening file for reading
    file.open("demo.txt", ios::in);
    if (file.is_open()) {

        // Calculating size of file
        file.seekg(0, ios::end);
        int size = file.tellg();
        cout << "Size of file: " << size << " bytes\n\n";

        // Reading from file (line by line)
        string line;
        file.seekg(0);
        cout << "Contents of file:\n";
        while (getline(file, line)) {
            cout << line << '\n';
        }

        file.close();

    } else {
        cout << "Unable to open file for reading.\n";
        return 1;
    }
    return 0;
}