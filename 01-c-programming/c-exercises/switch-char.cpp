#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

setlocale(LC_ALL,"German");
int main(void){
char ch;
scanf("%c",&ch);

switch(ch)
{
  case 'A':
  case 'B':
	printf("Good work\n");
	break;
  case 'C':
  case 'D':
	 printf("You passed\n");
	 break;
  case 'F':
  	 printf("You failed\n");
	 break;
  default:
	 printf("Grade letter is not applicable.\n");

}


  return 0;
}

