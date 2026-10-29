#include <iostream>
#include <string>

using namespace std;

int main(void){
	
	int factorial = 1;
	int number ,i;
	
	cout << "please enter yor value for calculate your factorial value:" << endl;
	cin >> number;
	
	for(i = 1; i <= number; i++){
		factorial *= i;
	} 
	
	cout << "your result : " << factorial << endl;
	
	return 0;
}
