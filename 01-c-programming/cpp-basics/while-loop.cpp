#include <iostream>
#include <string>

using namespace std;

int main(void){
	
string passport = "123456";	
string input;
	
	cout << "please enter you passport" << endl; 
	cin >> input;
	
	while (input != passport){
		
		cout << "your passport is not correct pls enter again" << endl; 
		cin >> input;
	}
	
	return 0;
}
