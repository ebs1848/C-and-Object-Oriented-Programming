//000000000 emir behiç sağlam
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    string substitution_rules[26];

    for (char letter = 'a'; letter <= 'z'; letter++) {
        substitution_rules[letter - 'a'] = static_cast<char>('a' + (rand() % 26));
    }

    string secret_message;
    cout << "Enter your secret message: ";
    cin >> secret_message;

    string encrypted_message;
    for (char letter : secret_message) {
        if (islower(letter)) {
            encrypted_message += substitution_rules[letter - 'a'];
        } else {
            encrypted_message += letter;
        }
    }

    cout << "The encrypted message is: " << encrypted_message << endl;

    string decrypted_message;
    for (char letter : encrypted_message) {
        bool found = false;
        for (int i = 0; i < 26; i++) {
            if (encrypted_message[i] == letter) {
                decrypted_message += static_cast<char>('a' + i);
                found = true;
                break;
            }
        }
        if (!found) {
            decrypted_message += letter;
        }
    }

    cout << "The decrypted message is: " << decrypted_message << endl;

    return 0;
}
