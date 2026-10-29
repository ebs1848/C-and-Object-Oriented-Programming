#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;
    int hoursWorkedPerDay;

    initializeEmp(string empName, double empSalary, int empHoursWorked) {
        name = empName;
        salary = empSalary;
        hoursWorkedPerDay = empHoursWorked;
    }

public:
    Employee(string empName, double empSalary, int empHoursWorked) {
        initializeEmp(empName, empSalary, empHoursWorked);
    }

    void addSalary() {
        if (salary < 500) {
            salary += 10;
        }
    }

    void addWork() {
        if (hoursWorkedPerDay > 6) {
            salary += 5;
        }
    }

    void displayInfo() {
        cout << "Employee Name: " << name << "\n";
        cout << "Salary: $" << salary << "\n";
        cout << "Hours Worked Per Day: " << hoursWorkedPerDay << " hours\n";
    }
};

int main() {
    string name;
    double initialSalary;
    int initialHoursWorked;

    cout << "Enter the employee name: ";
    getline(cin, name);

    cout << "Enter the initial salary: $";
    cin >> initialSalary;

    cout << "Enter the initial hours worked per day: ";
    cin >> initialHoursWorked;

    Employee employee1(name, initialSalary, initialHoursWorked);

    cout << "\nInitial Employee Information:\n";
    employee1.displayInfo();

    employee1.addSalary();
    employee1.addWork();

    cout << "\nUpdated Employee Information:\n";
    employee1.displayInfo();

    return 0;
}

