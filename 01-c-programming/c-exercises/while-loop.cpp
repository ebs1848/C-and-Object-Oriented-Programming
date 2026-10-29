#include <stdio.h>
/*NAME = Emir Behiç SAĞLAM
  ID = 000000000*/
int main(void) {
    int number;
    printf("Welcome this program. Please enter the numbers\n");
    scanf("%d", &number);

    int input = 0;
    int total = 0;
	int max = number, min = number;
    
    while (number != 0){
        input++;
        total += number;

        if(number > max)
            max = number;

        else if (number < min)
            min = number;

        scanf("%d", &number);
    }

    float ave = total / input;

        if (input == 0)
            printf("No input entered.");

        else
            printf("Output:\n Maximum: %d\n Minimum: %d\n Average: %.3f", max, min, ave);
return 0;
}
