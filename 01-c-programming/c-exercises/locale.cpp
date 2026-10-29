#include<stdio.h>
#include<locale.h>

int main(void){

setlocale(LC_ALL,"Turkish");

printf("some turkish charecter which is not in english\\");
printf("ç,ð,ý,ö,ü\n");

setlocale(LC_ALL,"German"); 

printf("some german charecter which is not in english: \t");
printf("ä,æ,é,µ,ß\a");

return 0;
}
