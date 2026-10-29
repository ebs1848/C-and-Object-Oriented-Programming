using namespace std ;
#include <iostream>
#include <string>

class TvShops{
	private:
		string brands;
		int stocks;
		double CostPrice;
		double SalePrice;
	
	public:
	
		TvShops(){
		}
	
		void setTvBrand(string brand, int stock, double cPrice, double sPrice){
			brands = brand;
			stocks = stock;
			CostPrice = cPrice;
			SalePrice = sPrice;
			}
		
		void increaseStock(int number){
			stocks = stocks + number;
			}
		
		void decreaseStock(int number){
			stocks = stocks	- number ;
			}
		
		void displayStock(){
			cout << endl ;
			cout << "Name of the brand: " << brands << endl ;
			cout << "Name of items: " << stocks << endl ;
			cout << "cost price: " << CostPrice << endl ;
			cout << "sale price: " << SalePrice << endl ;
			}
		
		string getBrand(){
			return brands;
			}
		
		double getCost(){
			return CostPrice;
			}
	    
		double getSalePrice(){
	    	return SalePrice;
			}
		
		int getStock(){
			return stocks;
			}
		
		double getTotalCost(){
			return stocks * getCost();
			}
		
		void displayStocks(){
			cout << endl ;
			}
		void incrSalePrice(int inumber)
		{
			SalePrice = SalePrice + (SalePrice * inumber/100);
		}
		void decrsSalePrice(int knumber)
		{
			SalePrice = SalePrice - (SalePrice * knumber/100);
		}
};
