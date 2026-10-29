#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


long int faktoriyel(int sayi){

	int fact = 1;

		for (;sayi > 0; sayi--)

		fact *= sayi;

return fact;
}


int main(void){
    
	setlocale(LC_ALL,"Turkish");
    
	int n;
    
	printf("Faktöriyelini istediðiniz sayýyý girin:\t");
	scanf("%d",&n);
	
    printf("faktöriyel:%ld\t" ,faktoriyel(n));
	
	return 0;
}
