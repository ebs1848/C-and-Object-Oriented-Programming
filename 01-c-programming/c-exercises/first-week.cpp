#include <stdio.h>

int main(void){

int int1, int2, int3;
float fl1, fl2;

printf("Please enter first integer\n");
scanf("%d", &int1);

printf("Please enter second integer\n");
scanf("%d", &int2);

printf("Please enter third integer\n");
scanf("%d", &int3);

printf("Please enter first float\n");
scanf("%f", &fl1);

printf("Please enter second float\n");
scanf("%f", &fl2);

int a = (int1 + int2) / int3;
float b = (int1 + int3) - (fl1 + int2);
float c = (fl1 / fl2) * (int2 - int1);

printf("a: %d\nb: %f\nc: %f\n", a, b, c);
return 0;
}
