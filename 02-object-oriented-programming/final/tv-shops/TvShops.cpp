#include <iostream>
#include <string>
#include "TvShops.h"

using namespace std;

int main(){
	
	double total_cost, total_cost1, total_cost2, total_cost3;
	double total_sale, total_sale1, total_sale2, total_sale3;
	int number, say, stockNum;
	char fbrand[15];
	double costP, saleP;
	
	TvShops model1, model2, model3;
	
	FILE *fPtr;
	
		if((fPtr =  fopen ("stock.txt","r")) == NULL){
	
		puts ("There isn't any txt file like that. Please check your code again.");
	
		}
	
		else{
        /*
			fscanf(fPtr, "%s %d %lf %lf", fbrand, &stockNum, &costP, &saleP);
			say = 1;
			
			 while( !feof(fPtr)){
			
				printf("%-10s %-d %7.2f %7.2f", fbrand, stockNum, costP, saleP);
			
				if(say == 1){
			 		
					 model1.setTvBrand(fbrand, stockNum, costP, saleP);
				
				}
				
				else if(say == 2){
					 
					 model2.setTvBrand(fbrand, stockNum, costP, saleP);
			 		
				
				}		
									
				else if(say == 3){
			 		 
					model3.setTvBrand(fbrand, stockNum, costP, saleP);
				
				}				
			
				else cout << "error" << endl;
				
				fscanf(fPtr, "%s %d %lf %lf", fbrand, &stockNum, &costP, &saleP);
				say++;
				
			}
		}
		*/
		
			say =1;
			while (fscanf(fPtr, "%s %d %lf %lf", fbrand, &stockNum, &costP, &saleP)!=EOF){

				if(say == 1){
 			
					 model1.setTvBrand(fbrand, stockNum, costP, saleP);
				
				}
				
				else if(say == 2){
		 		
					model2.setTvBrand(fbrand, stockNum, costP, saleP);
				
				}		
									
				else if(say == 3){

			 		 model3.setTvBrand(fbrand, stockNum, costP, saleP);

				}				
			
				else
					
					cout << "error" << endl;
				
				say++;
       	
   	 		}
		}
	
	fclose(fPtr);

	model1.displayStock();
	model2.displayStock();
	model3.displayStock();
	
	cout << endl << "total cost of inventory: ";
	cout << model1.getTotalCost() + model2.getTotalCost() + model3.getTotalCost();
	
	cout << endl << "enter the number of sales for first model: ";
	cin >> number;
	total_sale1 = number * model1.getSalePrice();
	total_cost1 = number * model1.getCost();
	model1.decreaseStock(number);
	
	cout << endl << "enter the number of sales for second model: ";
	cin >> number;
	total_sale2 = number * model2.getSalePrice();
	total_cost2 = number * model2.getCost();
	model2.decreaseStock(number);
	
	cout << endl << "enter the number of sales for third model: ";
	cin >> number;
	total_sale3 = number * model3.getSalePrice();
	total_cost3 = number * model3.getCost();
	model3.decreaseStock(number);
	
	total_sale = total_sale1 + total_sale2 + total_sale3;
	total_cost = total_cost1 + total_cost2 + total_cost3;
	
	cout << endl << "total sales amount at the end of day: " << total_sale;
	cout << endl << "total cost amount at the end of day: " << total_cost;
	cout << endl << "total profit amount at the end of day: " << total_sale - total_cost;
	
	model1.displayStock();
	model2.displayStock();
	model3.displayStock();
	
	return 0;
}
