#include <iostream>
#include <string>
#include "tv_shops_expert.h"

using namespace std;

int main(){
	int inumber;
	int choose;
	int model;
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
	
	cout << endl << "total cost of inventory: " ; 
	cout << model1.getTotalCost() + model2.getTotalCost() + model3.getTotalCost() << endl;
	
	

		do {
		cout << endl << "1. modele zam ve indirim icin 1 e bas " << endl << "2. modele zam ve  indirim icin 2 ye bas" << endl << "3. modele zam ve indirim icin 3 e bas" << endl << "4 alim ve satim islemi icin" <<endl << "0 cikmak icin" << endl;
		cin >> choose;
		
		switch  (choose) {

		case 1: 
		
		cout << "zam icin 1 indirim icin 2 " << endl;
		cin >> model;
		if(model == 1) {
		
		cout<< "model 1 maliyet zam miktarini girin "<<endl;
   	 	cin >> inumber ;
    	model1.incrSalePrice(inumber);
		model1.displayStock();
			break;
		}
		else if (model == 2) {
		cout<< "model 1 maliyet indirim miktarini girin "<<endl;
   	 	cin >> inumber ;
    	model1.decrsSalePrice(inumber);
		model1.displayStock();
			break;
		}
		case 2: 
		
		cout << "zam icin 1 indirim icin 2 " << endl;
		cin >> model;
		if(model == 1) {
		
		cout<< "model 2 maliyet zam miktarini girin "<<endl;
   	 	cin >> inumber ;
    	model2.incrSalePrice(inumber);
		model2.displayStock();
			break;
		}
		else if (model == 2) {
		cout<< "model 2 maliyet indirim miktarini girin "<<endl;
   	 	cin >> inumber ;
    	model2.decrsSalePrice(inumber);
		model2.displayStock();
		}
			break;
		
		
		case 3:
		
		cout << "zam icin 1 indirim icin 2 " << endl;
		cin >> model;
		if(model == 1) {
		
		cout<< "model 3 maliyet zam miktarini girin "<<endl;
   	 	cin >> inumber ;
    	model3.incrSalePrice(inumber);
		model3.displayStock();
			break;
		}
		else if (model == 2) {
		cout<< "model 3 maliyet indirim miktarini girin "<<endl;
   	 	cin >> inumber ;
    	model3.decrsSalePrice(inumber);
		model3.displayStock();
			break;
		}
		case 4 :
			
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
	
	break;
			
	}
	}while(choose !=0);
	
	
	

	model1.displayStock();
	model2.displayStock();
	model3.displayStock();
	
	
	return 0;

}

