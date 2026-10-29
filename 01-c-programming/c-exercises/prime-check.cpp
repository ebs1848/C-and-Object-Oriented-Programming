#include<stdio.h>

int prime_or_not (int n){
	
	int i;
	
	for(i=2; i<n; i++){
		
		if(n % i == 0){
		
		return 0;
		}
	}

return 1;		
}	

int main(void){

	int j;
	
	printf("Please enter a number for learn to this number is prime or not:\t");
	scanf("%d",&j);
	
	if (prime_or_not(j) == 0){
		
		printf("This number is not prime\a");
	}	
	
	else{
	
	 	printf("This number is prime\a");
	}
	
return 0;
}
