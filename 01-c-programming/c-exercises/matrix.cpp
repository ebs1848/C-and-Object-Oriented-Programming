#include<stdio.h>

int main(void){
	int sum;
	int matrix[3][5];
	int i,j;
	
	for (i=0; i<3; i++){
		for(j=0; j<5; j++){
		scanf("%d",&matrix[i][j]);
		}
	printf("\n");
    }
    
	for (j=0; j<5; j++){
		for(i=0; i<3; i++){
		sum += matrix[i][j];
	    }
		printf("%d\t",sum);
		sum == 0;
		}
	return 0;	
}
