#include <iostream>
#include <string>

using namespace std;

const int ArraySize = 7;
//function prototypes
void GetStringsFromUser(string strings[], int size);
void DisplayStrings(const string strings[], int size);
int FindStringIndex(const string strings[], int size, const string& target);

int main() {
    string UserStrings[ArraySize];

    GetStringsFromUser(UserStrings, ArraySize);

    cout << "Your provided strings:\n";
    DisplayStrings(UserStrings, ArraySize);

    cout << "Enter a string to search in the array: ";
    string SearchString;
    getline(cin, SearchString);

    int index = FindStringIndex(UserStrings, ArraySize, SearchString);

    if (index != -1) {
        cout << "String found at index: " << index + 1 << "\n";
    } else {
        cout << "String not found in the array.\n";
    }

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
}

int FindStringIndex(const string strings[], int size, const string& target) {
    for (int i = 0; i < size; ++i) {
        if (strings[i] == target) {
            return i;
        }
    }
    return -1;  
}//000000000 Emir Behic SAGLAM
