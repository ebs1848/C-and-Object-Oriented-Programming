#include <iostream>
#include <string>

using namespace std;

int main(void){

string password = "example123";

string input;

cout << "Please enter your passwords:" << endl;
cin >> input;

if (input == password) {
cout << "Welcome user";	
}

else{
cout << "Please enter your password correct";	
}

	return 0;
}
