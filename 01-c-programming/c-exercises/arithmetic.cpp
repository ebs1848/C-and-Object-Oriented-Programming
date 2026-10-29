#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	
	int x, y;
	float q, w, v, z;

	
	printf("Enter your integer values please...\n");
	scanf("%d\n%d",&x ,&y);
	
	printf("Enter your float values please...\n");
	scanf("%f\n%f\n%f\n%f",&q ,&w ,&v ,&z);
		
	
	x += 5; 	 // x = x+5
	y -= 3;      // y = y-3
	q *= 1.5; 	 // q = q*1.5
	w /= 0.75;	 // w = w/0.75
	v = x*y*(q+w);
	/*z = v % 5.0;*/
	
	printf("Last values are:\n %d\n %d\n %f\n %f\n %f\n %f",x ,y ,q ,w ,v ,z);
	
	return 0;
}
