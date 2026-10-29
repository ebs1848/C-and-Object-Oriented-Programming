#include <iostream>
using namespace std;

int main(void){
	
	FILE *canPtr;
	
	canPtr = fopen("rickSanchez.txt","r");
	
	char stword[6] ,ndword[8];
	
	if(canPtr == NULL){
	
	cout << "There isn't any txt file like that. Please check your code again." << endl;
	
	}
	
	else{
	
	fscanf(canPtr ,"%s%s" ,&stword ,&ndword);
	
	cout << "the text in rickSanchez.txt file: " << endl;
	
	cout << stword << " " << ndword << endl; 
	
	}
	
	fclose(canPtr);
	
	return 0;
}


