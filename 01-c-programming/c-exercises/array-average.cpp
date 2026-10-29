#include<stdio.h>

int main(void){
	
	float numbers[5];
	int i;
	float sum = 0.0;
	
	for(i=0; i<5; i++){
		printf("please enter a number:\n");
		scanf("%f",&numbers[i]);
		sum += numbers[i];
	}
	
	printf("avarege of your number is %2.f",sum/5);
	
	return 0;
}
