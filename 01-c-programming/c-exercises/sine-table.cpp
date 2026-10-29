#include <stdio.h>
#include <math.h>

int main(void) {
	int low, upper, step, x, y;
	double PI = 3.14159265;
	double value = PI / 180, value2;

	printf("Please input lowerbound for sine (deg): ");
	scanf("%d", &low);

	printf("Please input upperbound for sine (deg): ");
	scanf("%d", &upper);
	
	printf("Please input step size for sine (deg): ");
	scanf("%d", &step);

	for (y = 0; y < ((upper - low) / step); y++) {
		value2 = sin((low + (y * step)) * value) * 20;
		
		if (value2 == 0) {
			continue;
		}
		for (x = 0; x < value2; x++) {
			printf(" ");
		}
		printf("#\n");
	}
	return 0; 
}    
