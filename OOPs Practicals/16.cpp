/*
Create a class called Employee that includes 3 pieces of information as instance
variables - first name (string), last name (string) and a monthly salary (double)
a. Create a constructor to initialize the 3 instance variables. Provide a get
   method for each instance variable.
b. Create 2 employee objects & display each object's yearly salary.
c. Give each employee a 10% raise and display each Employee's yearly salary again.
*/
#include <iostream>
using namespace std;

class Employee {

    string firstName, lastName;
    double monthly_salary;

    public:
    Employee(string first, string last, double sal) {
        firstName = first;
        lastName = last;
        monthly_salary = sal;
    }

    string get_first_name() { return firstName; }
    string get_last_name() { return lastName; }
    double get_monthly_salary() { return monthly_salary; }

    void raise_salary(double perc) {
        monthly_salary += monthly_salary * (perc / 100);
    }
};

void print_yearly_salary(Employee e) {
    cout << e.get_first_name() << " " << e.get_last_name() << "'s "
         << "yearly salary: " << e.get_monthly_salary() * 12 << '\n';
}

int main() {

    Employee e1("John", "Doe", 54500), e2("Jane", "Doe", 45500);
    print_yearly_salary(e1); print_yearly_salary(e2);
    e1.raise_salary(10); e2.raise_salary(10);
    cout << "\nAfter 10% Raise to both:\n";
    print_yearly_salary(e1); print_yearly_salary(e2);
}