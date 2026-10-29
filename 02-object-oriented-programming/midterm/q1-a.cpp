#include <iostream>
#include <string>

using namespace std;

const int ArraySize = 7;
//function prototypes
void GetStringsFromUser(string strings[], int size);
void DisplayStrings(const string strings[], int size);

int main() {
    string UserStrings[ArraySize];

    GetStringsFromUser(UserStrings, ArraySize);

    cout << "Your provided strings:\n";
    DisplayStrings(UserStrings, ArraySize);

    return 0;
}

void GetStringsFromUser(string strings[], int size) {
    cout << "Please provide " << size << " strings:\n";

    for (int i = 0; i < size; ++i) {
        cout << "Enter string #" << i + 1 << ": ";
        getline(cin, strings[i]);  
    }
}

void DisplayStrings(const string strings[], int size) {
    cout << "Entered strings:\n";
    for (int i = 0; i < size; ++i) {
        cout << "String #" << i + 1 << ": " << strings[i] << "\n";
    }
}//000000000 Emir Behic SAGLAM
