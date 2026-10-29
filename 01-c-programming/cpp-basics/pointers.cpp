#include <iostream>

using namespace std;

int main(void){

	int a =5;
	
	int*ptr = &a;
	
	cout << "the address of the variable : " << ptr << endl;	
	cout << "the address of the variable : " << &a << endl;
	cout << "the value of the variable : " << *ptr << endl;
	
	*ptr = 6;
	
	cout << "the new value of the variable : " << *ptr << endl;	
	
	
	return 0;
}
