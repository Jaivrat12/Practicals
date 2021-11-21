/* W.A.P. to overload ++ operator to increment age of person by one month */
#include <iostream>
using namespace std;

class Age {

    public:
    int months, years;

    Age() {
        years = 0, months = 0;
    }

    Age(int y, int m) {
        years = y, months = m;
        validate();
    }

    void validate() {

        if (months >= 12) {
            years += months / 12;
            months %= 12;
        }
    }

    // Post increment
    Age operator++(int) {

        Age age(years, months++);
        validate();
        return age;
    }
};

class Person {

    public:
    string name;
    Age age;

    Person(string _name, Age _age) {
        name = _name;
        age = _age;
    }

    void print_age() {
        cout << age.years << " years, " << age.months << " months\n";
    }
};

int main() {

    Person p("Person1", Age(19, 23));
    cout << "Age of " << p.name << " before increment: ";
    p.print_age();
    cout << "Age of " << p.name << " after increment: ";
    p.print_age();
}