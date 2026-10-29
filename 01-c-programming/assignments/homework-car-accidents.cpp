#include <stdio.h>

int main( void )
{

int intx, inty;
printf( "how old is this car?\n" );
scanf( "%d", & intx );
printf("how much accident you had?\n");
scanf("%d", &inty);
printf("base price: ");
if (intx <= 2010) {
printf("%d", 856 * inty);
} else if (intx <= 2013) {
printf("%d", 811 * inty);
} else if (intx <= 2016) {
printf("%d", 783 * inty);
} else if (intx <= 2019) {
printf("%d", 807 * inty);
} else {
printf("%d", 1065 * inty);
}
return 0;

}
