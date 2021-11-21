/*
Write an application to create a super class Employee with information first name
and last name and methods getFirstName(), getLastName(). Derive the subclasses
ContractEmployee and RegularEmployee with the information about department,
designation & method displayFullName(), getDepartment(), getDesignation(), to print
the salary and to set the department name & designation of the corresponding
sub-class objects respectively.
*/
#include <iostream>
using namespace std;

class Employee {

    string firstName, lastName;

    public:
    Employee(string first, string last) {
        firstName = first; lastName = last;
    }
    string getFirstName() { return firstName; }
    string getLastName() { return lastName; }
};

class ContractEmployee : public Employee {

    string department, designation;
    double salary;

    public:
    ContractEmployee(
        string first, string last,
        string dept, string desg, double sal
    ): Employee(first, last) {
        department = dept; designation = desg; salary = sal;
    }

    void displayFullName() {
        cout << getFirstName() + " " + getLastName();
    }

    string getDepartment() { return department; }
    string getDesignation() { return designation; }
    void setDepartment(string dept) { department = dept; }
    void setDesignation(string desg) { designation = desg; }

    void printSalary() {
        cout << "Salary of "; displayFullName();
        cout << " is: " << salary << "\n";
    }
};

class RegularEmployee : public Employee {

    string department, designation;
    double salary;

    public:
    RegularEmployee(
        string first, string last,
        string dept, string desg, double sal
    ): Employee(first, last) {
        department = dept; designation = desg; salary = sal;
    }

    void displayFullName() {
        cout << getFirstName() + " " + getLastName();
    }

    string getDepartment() { return department; }
    string getDesignation() { return designation; }
    void setDepartment(string dept) { department = dept; }
    void setDesignation(string desg) { designation = desg; }

    void printSalary() {

        cout << "Salary of "; displayFullName();
        cout << " is: " << salary << "\n";
    }
};

int main() {

    ContractEmployee ce("John", "Chen", "Marketing", "Marketing Manager", 24000);
    RegularEmployee re("Nancy", "Austin", "Finance", "Finance Manager", 18000);
    ce.printSalary(); re.printSalary();
}