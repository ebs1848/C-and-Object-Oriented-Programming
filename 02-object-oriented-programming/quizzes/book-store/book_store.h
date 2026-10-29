#include <iostream>
#include <string>
using namespace std;

class BookType{

    private:

    string bookType;
    int stocks;
	double PurchasePrice, SalePrice;

    public:
        
		BookType(){
		}
		
		void setBookType(string Booktypes, int stock, double  pPrice, double sPrice){
        	bookType = Booktypes;
        	stocks = stock;
        	PurchasePrice = pPrice;
        	SalePrice = sPrice;
        }
		
		void displayProducts(){
			cout << endl ;
			cout << "Type of the book: " << bookType << endl ;
			cout << "The amount of stock: " << stocks << endl ;
			cout << "Purchase price: " << PurchasePrice << endl ;
			cout << "Sale price: " << SalePrice << endl ;
			}
			
		string getbookType(){
			return bookType;
			}
		
		int getStock(){
			return stocks;
			}
	
		double getPurchasePrice(){
			return PurchasePrice;
			}
	    
		double getSalePrice(){
	    	return SalePrice;
			}
				
		void decreaseStock(int number){
			stocks = stocks	- number ;
			}
			
	   	double getTotalPurchase(){
			return stocks * getPurchasePrice();
			}

		void displayStocks(){
			cout << endl ;
			}
};			
