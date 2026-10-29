#include <iostream>
#include <string>

using namespace std;

int main(void){

int a ,b;
string operation;

cout << "Welcome to calculator please chose your operation:" << endl; 
cout << "+" << endl; 
cout << "-" << endl; 
cout << "*" << endl; 
cout << "/" << endl; 

cin >> operation;

cout << "please enter your values" << endl;
cin >> a >>  b;


if(operation == "+"){
cout << "sum of your values : " << a + b;	
}

if(operation == "-"){
cout << "difference of your values : " << a - b;	
}

if(operation == "*"){
cout << "product of your values : " << a * b;	
}

if(operation == "/"){
cout << "quotient of your values : " << a / b;	
}

	return 0;
}
