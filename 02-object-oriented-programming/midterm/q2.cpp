#include <iostream>
#include <string>

using namespace std;

const int AlphabetSize = 100; 
//function prototype
void FindRepeatedCharacters(const string& str);

int main() {
    string UserString;

    cout << "Enter a string: ";
    getline(cin, UserString);

    FindRepeatedCharacters(UserString);

    return 0;
}

void FindRepeatedCharacters(const string& str) {
    int CharCount[AlphabetSize] = {0};

    cout << "Repeated characters in the string:\n";

    for (char ch : str) {
        if (isalpha(ch)) {
            CharCount[tolower(ch) - 'a']++;
        }
    }

    for (int i = 0; i < AlphabetSize; ++i) {
        if (CharCount[i] > 1) {
            cout << static_cast<char>('a' + i) << ": " << CharCount[i] << " times\n";
        }
    }
}//000000000 Emir Behic SAGLAM
