#include<stdio.h>

int main(void){
int midtern1, midtern2, final;
float average, credit;
printf("please write result of first midtern\n");
scanf("%d", &midtern1);
printf("please write result of second midtern\n");
scanf("%d", &midtern2);
printf("please write result of final\n");
scanf("%d", &final);

average = (midtern1 *3/10.0 + midtern2 *3/10.0 + final *4/10.0);

 if (average >= 90) {
 printf("congratulation you are passed the course\n");
 printf("your number note : AA\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 4");
 credit = 4;
}

 else if (average >= 85 && average < 90) {
 printf("congratulation you are passed the course\n");									
 printf("your number note : AB\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 3.5");
 credit = 3.5;
}

 else if (average >= 80 && average < 85) {
 printf("congratulation you are passed the course\n");
 printf("your number note : BB\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 3");
 credit = 3;
}

 else if (average >= 75 && average < 80) {
 printf("congratulation you are passed the course\n");
 printf("your number note : CB\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 2.5");
 credit = 2.5;
}

 else if (average >= 70 && average < 75) {
 printf("congratulation you are passed the course\n");
 printf("your number note : CC\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 2\n");
 credit = 2;
}

 else if (average >= 65 && average < 70) {
 printf("congratulation you are passed the course\n");
 printf("your number note : DC\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 1.5\n");
 credit = 1.5;
}

 else if (average >= 60 && average < 65) {
 printf("congratulation you are passed the course\n");
 printf("your number note : DD\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 1\n");
 credit = 1;
}

 else if (average >= 50 && average < 60) {
 printf("unfortunately you have to take the resit exam\n");
 printf("your number note : FD\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 0.5\n");
 credit = 0.5;
}

 else if (average >= 0 && average < 50) {
 printf("unfortunately you are failed the course. You had to take again the course\n");
 printf("your number note : FF\n");
 printf("you are avarege note of course : %.3f\n", average);	
 printf("you are credit of course : 0\n");
 credit = 0;
}

 if (credit >= 0 && credit <2.5){
 printf("your credit of course is few");
 }
 return 0;
}
