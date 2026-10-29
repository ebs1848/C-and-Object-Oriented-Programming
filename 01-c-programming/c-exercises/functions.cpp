#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int hatayibas(int hata){
	setlocale(LC_ALL,"German");
	printf(" ßßßßßßßßßß kodu %d",hata);
}

int main (void){
    setlocale(LC_ALL,"Turkish");
	int number;	
    
	printf("please enter a positives number\n");
    scanf("%d",&number);
	
	if(number <= 0){
	hatayibas(404);
}
	
	else{
	printf("congratilation");
}
	
	
return 0;	
}
