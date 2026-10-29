#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int value;
	
	printf("Welcome to my divisibility controler and odd or even finder program\n");
	printf("Please enter your integer value =====>\t");
	scanf("%d",&value);
	
	if(value%2==0){
	printf("your value is even and\n");
	printf("*your value can divided by 2\n");
	}
	else if(value%2!=0){
	printf("your value is odd and\n");
	printf("*your value can't divided by 2\n");
	}
	
	if(value%3==0){
	printf("*your value can divided by 3\n");
	}
	else if(value%3!=0){
	printf("*your value can't divided by 3\n");
	}
	
	if(value%4==0){
	printf("*your value can divided by 4\n");
	}
	else if(value%4!=0){
	printf("*your value can't divided by 4\n");
	}
	
	if(value%5==0){
	printf("*your value can divided by 5\n");
	}
	else if(value%5!=0){
	printf("*your value can't divided by 5\n");
	}
	
	if(value%6==0){
	printf("*your value can divided by 6\n");
	}
	else if(value%6!=0){
	printf("*your value can't divided by 6\n");
	}
	
	if(value%7==0){
	printf("*your value can divided by 7\n");
	}
	else if(value%7!=0){
	printf("*your value can't divided by 7\n");
	}
	
	if(value%8==0){
	printf("*your value can divided by 8\n");
	}
	else if(value%8!=0){
	printf("*your value can't divided by 8\n");
	}
	
	if(value%9==0){
	printf("*your value can divided by 9\n");
	}
	else if(value%9!=0){
	printf("*your value can't divided by 9\n");
	}
	
	if(value%10==0){
	printf("*your value can divided by 10\n");
	}
	else if(value%10!=0){
	printf("*your value can't divided by 10\n");
	}
	
	printf("thanks for trying this program\a");
	return 0;
}
