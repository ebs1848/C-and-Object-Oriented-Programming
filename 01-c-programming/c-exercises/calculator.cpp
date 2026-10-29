#include <stdio.h>

int main(void){

int int1, int2, int3;
float fl1, fl2;

printf("please write first integer\n");	
scanf("%d", &int1);	

printf("please write second integer\n");	
scanf("%d", &int2);		

printf("please write third integer\n");	
scanf("%d", &int3);	

printf("please write first float\n");	
scanf("%f", &fl1);

printf("please write second float\n");	
scanf("%f", &fl2);		

int x = (int1 + int2) / int3;
int y = (int1 + int3) / int2;
int z = (int2 + int3) / int1;
float q =(fl1 + fl2) % (int1 + int2 + int3); 

printf("x: %d\ny: %d\nz: %d\nq: %f", x, y, z, q);

return 0;
}


