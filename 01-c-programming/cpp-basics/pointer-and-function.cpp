#include <iostream>

using namespace std;

void degerDegistir(int *ptr){
	*ptr = 20;
cout << "fonksiyonun icindeki deger : " << *ptr << endl;
}

int main(void){

	int a = 5;
	
    cout << "a degiskenin degeri : " << a << endl;
	
	degerDegistir(&a);
	
	cout << "a degiskeninin yeni degeri : " << a << endl;	
	
	return 0;
}
