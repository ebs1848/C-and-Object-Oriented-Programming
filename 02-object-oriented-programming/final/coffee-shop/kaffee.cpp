#include <iostream>
#include <string>
#include "kaffee.h"
using namespace std;

int main(){
	double total_cost, total_cost1, total_cost2, total_cost3;
	double total_sale, total_sale1, total_sale2, total_sale3;
	char mark [15];
	int number, stock, counter, costP, saleP;
	
	Coffee normal, filter, unfiltered;
	
	FILE *canPtr;
	
	canPtr = fopen ("kaffee.txt","r"); 
	
		if(canPtr == NULL){
	
			cout << "There isn't any txt file like that" << endl;
	
		}
	
		else{
			
			counter =1;
			while (fscanf(canPtr, "%s %d %d %d", mark, &stock, &costP, &saleP)!=EOF){

				if(counter == 1){
 			
					 normal.setCoffeeMark(mark, stock, costP, saleP);
				
				}
				
				else if(counter == 2){
		 		
					filter.setCoffeeMark(mark, stock, costP, saleP);
				
				}		
									
				else if(counter == 3){

			 		 unfiltered.setCoffeeMark(mark, stock, costP, saleP);

				}				
			
				else
					
					cout << "error" << endl;
				
				counter++;
       	
   	 		}
		}
		
	fclose(canPtr);
	
	normal.displayStock();
	filter.displayStock();
	unfiltered.displayStock();

	cout << endl << "total cost of inventory: ";
	cout << normal.getTotalCost() + filter.getTotalCost() + unfiltered.getTotalCost();
	
	cout << endl << "enter the number of sales for first model: ";
	cin >> number;
	total_sale1 = number * normal.getSalePrice();
	total_cost1 = number * normal.getCost();
	normal.decreaseStock(number);
	
	cout << endl << "enter the number of sales for second model: ";
	cin >> number;
	total_sale2 = number * filter.getSalePrice();
	total_cost2 = number * filter.getCost();
	filter.decreaseStock(number);
	
	cout << endl << "enter the number of sales for third model: ";
	cin >> number;
	total_sale3 = number * unfiltered.getSalePrice();
	total_cost3 = number * unfiltered.getCost();
	unfiltered.decreaseStock(number);
	
	total_sale = total_sale1 + total_sale2 + total_sale3;
	total_cost = total_cost1 + total_cost2 + total_cost3;
	
	cout << endl << "total sales amount at the end of day: " << total_sale;
	cout << endl << "total cost amount at the end of day: " << total_cost;
	cout << endl << "total profit amount at the end of day: " << total_sale - total_cost << endl;
	
	normal.displayStock();
	filter.displayStock();
	unfiltered.displayStock();

	return 0;
}
