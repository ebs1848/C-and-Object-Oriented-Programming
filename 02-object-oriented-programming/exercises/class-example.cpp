#include <iostream>
#include <string>

using namespace std;

class Student {
public:

    string name;
    int roll_no;
    string phone_number;
    string address;

    void displayInfo() {
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << roll_no << "\n";
        cout << "Phone Number: " << phone_number << "\n";
        cout << "Address: " << address << "\n";
        cout << "-----------------------------\n";
    }
};

/*int main() {
	Student student1;

    student1.name = "Sam";
    student1.roll_no = 1;
    student1.phone_number = "609-532-7402";
    student1.address = "2831 Boardwalk, Atlantic City, New Jersey ";

	cout << "Student Information for Sam:\n";
    student1.displayInfo();


	 Student student2;

    student2.name = "John";
    student2.roll_no = 2;
    student2.phone_number = "505-422-2201";
    student2.address = "Example Street 1, Ankara";

	cout << "Student Information for John:\n";
    student2.displayInfo();

    return 0;
}*/

int main() {

    Student student1;

    cout << "Enter information for Sam:\n";
    cout << "Name: ";
    getline(cin, student1.name);

    cout << "Roll No: ";
    cin >> student1.roll_no;

    cout << "Phone Number: ";
    cin.ignore();
    getline(cin, student1.phone_number);

    cout << "Address: ";
    getline(cin, student1.address);

    cout << "\nStudent Information for Sam:\n";
    student1.displayInfo();

    Student student2;

    cout << "\nEnter information for John:\n";
    cout << "Name: ";
    cin.ignore();  
    getline(cin, student2.name);

    cout << "Roll No: ";
    cin >> student2.roll_no;

    cout << "Phone Number: ";
    cin.ignore();  
    getline(cin, student2.phone_number);

    cout << "Address: ";
    getline(cin, student2.address);

    cout << "\nStudent Information for John:\n";
    student2.displayInfo();

    return 0;
}

