#include <iostream>
#include <string>

using namespace std;

int main()
{
    string FirstName, LastName, StudentNumber, ID;

    cout << "Enter your first name: ";
    getline(cin, FirstName, 'x');

    cout << "Enter your last name: ";
    getline(cin, LastName, 'x');

    cout << "Enter your student ID: ";
    getline(cin, StudentNumber, 'x');

    ID = FirstName + " " + LastName + " " + StudentNumber;
    cout << "Your information is: " << ID << endl;

    size_t found = StudentNumber.find(FirstName);
    if (found != string::npos) {
        StudentNumber.erase(found, FirstName.length());
    }

    ID = LastName;

    cout << "Enter your major: ";
    string Major;
    getline(cin, Major, 'x');

    ID += " " + Major;

    cout << "Your information is: " << ID << endl;
    return 0;
}


