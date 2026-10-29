#include <iostream>
#include <string>
#include "book_store.h"
using namespace std;

int main(){
	
	double tp, tp1, tp2, tp3, ts, ts1, ts2, ts3;
	double own_money, gain;
	char type [15];
	int n, c, bstock; 
	double Purchasep, Salep;
	
	BookType book1, book2, book3;
	
	FILE *canPtr;
	
	canPtr = fopen ("book_store.txt","r"); 
	
		if(canPtr == NULL){
	
			cout << "There isn't any txt file like that" << endl;
	
		}
	
		else{
			
			c =1;
			while (fscanf(canPtr, "%s %d %lf %lf", type, &bstock, &Purchasep, &Salep)!=EOF){

				if(c == 1){
 			
					book1.setBookType(type, bstock, Purchasep, Salep);
				
				}
				
				else if(c == 2){
		 		
					book2.setBookType(type, bstock, Purchasep, Salep);
				
				}		
									
				else if(c == 3){

			 		 book3.setBookType(type, bstock, Purchasep, Salep);

				}				
			
				else
					
					cout << "error" << endl;
				
				c++;
       	
   	 		}
		}
		
	fclose(canPtr);
	
	book1.displayProducts();
	book2.displayProducts();
	book3.displayProducts();
	
	cout << endl << "total cost of inventory: ";
	cout << book1.getTotalPurchase() + book2.getTotalPurchase() + book3.getTotalPurchase();
	
	cout << endl << "enter the number of sales for first type book: ";
	cin >> n;
	ts1 = n * book1.getSalePrice();
	tp1 = n * book1.getPurchasePrice();
	book1.decreaseStock(n);
	
	cout << endl << "enter the number of sales for second type book: ";
	cin >> n;
	ts2 = n * book2.getSalePrice();
	tp2 = n * book2.getPurchasePrice();
	book2.decreaseStock(n);
	
	cout << endl << "enter the number of sales for third type book: ";
	cin >> n;
	ts3 = n * book3.getSalePrice();
	tp3 = n * book3.getPurchasePrice();
	book3.decreaseStock(n);
	
	ts = ts1 + ts2 + ts3;
	tp = tp1 + tp2 + tp3;
	gain = ts - tp;
	
	cout << endl << "total sales amount at the end of day: " << ts;
	cout << endl << "total purchase amount at the end of day: " << tp;
	cout << endl << "total profit amount at the end of day: " << gain << endl;
	
	own_money = 3000 + gain;
	
	cout << endl << "earn money at the end of day:" << own_money << endl;
	
	book1.displayProducts();
	book2.displayProducts();
	book3.displayProducts();
	
	}
