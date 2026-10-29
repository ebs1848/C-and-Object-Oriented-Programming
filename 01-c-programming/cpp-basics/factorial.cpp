#include <iostream> 

using namespace std; 

int main(void){

int value ,fact ,result;

cout << "Please enter to calculate the factorial value you want : ";
cin >> value;

result = 1;
fact = 1;

while(value > fact){
fact++;
result = result * fact;	
}
 
 cout << "your result equal : "<< result << endl; 
 
return 0;
}

