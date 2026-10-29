#include <iostream>
#include <string>

using namespace std;

int main(void){

string sys_username = "emir_behic_saglam";		
string sys_password = "sys12345";

string username;
string password;

cout << "Please enter your username: ";

cin >> username;

cout << "Please enter your password: ";

cin >> password;

if (username == sys_username && password == sys_password){
cout << "welcome again emir";	
}

if (username != sys_username || password != sys_password){
cout << "your password or your username is false";	
}

/*
else if (username != sys_username && password == sys_password){
cout << "your username isn't correct";	
}

else if (username == sys_username && password != sys_password){
cout << "your password isn't correct" << endl;	
}

else {
cout << "your password and username aren't correct" << endl;	
}
*/
	return 0;
}
