#include <stdio.h>

int main (void){
char drink, fries, C, L, W, Y, N; 
int meat, size; 
float bp, mbp, bap, fap, price;

printf("How much hamburger meat do you want\n");	
scanf("%d", &meat);
 if (meat == 1) {
 bp = 11.5;
}
 if (meat == 2) {
bp = 20;
} 
 if (meat == 3) {
bp = 29.5;
}	

printf("How much your size of meats do you want\n");		
scanf("%d", &size);	
mbp = bp*(size/100);

printf("Which drink would you like\n");		
scanf("%s", &drink);
if (drink == C) {
 bap = 9;
}
 if (drink == L) {
bap = 14.5;
} 
 if ( drink == W) {
bap = 4;
} 

printf("Do you want a fries\n");	
scanf("%s", &fries);
if (drink == Y) {
fap = 7.5;
}
 if (drink == N) {
fap = 0;
} 

price = (mbp + bap + fap);
printf("price: %f", price);
	
	
	
	return 0;
}
