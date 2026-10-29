#include <iostream>
#include <string>
using namespace std;

class Coffee{
    private:

    string marks;
    int stocks, CostPrice, SalePrice;

    public:
        
		Coffee(){
		}
		
		void setCoffeeMark(string mark, int stock, int cPrice, int sPrice){
        	marks = mark;
        	stocks = stock;
        	CostPrice = cPrice;
        	SalePrice = sPrice;
        }
		
		void displayStock(){
			cout << endl ;
			cout << "Type of the coffee: " << marks << endl ;
			cout << "Name of items: " << stocks << endl ;
			cout << "cost price: " << CostPrice << endl ;
			cout << "sale price: " << SalePrice << endl ;
			}

		string getMark(){
			return marks;
			}
		
		int getStock(){
			return stocks;
			}
	
		double getCost(){
			return CostPrice;
			}
	    
		double getSalePrice(){
	    	return SalePrice;
			}
		
		void increaseStock(int number){
			stocks = stocks + number;
			}
		
		void decreaseStock(int number){
			stocks = stocks	- number ;
			}

		double getTotalCost(){
			return stocks * getCost();
			}

		void displayStocks(){
			cout << endl ;
			}

};
