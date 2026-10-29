#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
const double PI = 3.14159;
float ac, asqp, bsqp, arp, brp, crp, rco, hco, rcy, hcy, rsp ,hpy, apy; 
double vc, vsqp, vrp, vco, vcy, vsp, vpy;
printf("Welcome to Wolume Calculator Program\n");
printf("You can calculate the volume of all regular polygons in this program.\n"); 
printf("Also you can enter the values as floats \n\n\n");
printf("calculator of cube volume\n\n");

printf("please write the value of a\n");
scanf("%f",&ac);

vc = ac*ac*ac;

printf("the volume of cube is\n");
printf("vsq: %.5f\n\n\n\a",vc);

printf("calculator of square prism volume\n\n");

printf("please write the value of a\n");
scanf("%f",&asqp);

printf("please write the value of b\n");
scanf("%f",&bsqp);

vsqp = asqp*asqp*bsqp;

printf("the volume of square prism is\n");
printf("vsqp: %.5f\n\n\n\a",vsqp);

printf("calculator of rectangular prism volume\n\n");

printf("please write the value of a\n");
scanf("%f",&arp);

printf("please write the value of b\n");
scanf("%f",&brp);

printf("please write the value of c\n");
scanf("%f",&crp);

vrp = arp*brp*crp;

printf("the volume of rectangular prism is\n");
printf("vrp: %.5f\n\n\n\a",vrp);

printf("calculator of cylinder volume\n\n");

printf("please write the value of r\n");
scanf("%f",&rcy);

printf("please write the value of h\n");
scanf("%f",&hcy);

vcy = (hcy*PI*rcy*rcy);

printf("the volume of cylinder is\n");
printf("vcy: %.5f\n\n\n\a",vcy);

printf("calculator of cone volume\n\n");

printf("please write the value of r\n");
scanf("%f",&rco);

printf("please write the value of h\n");
scanf("%f",&hco);

vco = (hco*PI*rco*rco)/3.0;

printf("the volume of cone is\n");
printf("vco: %.5f\n\n\n\a",vco); 

printf("calculator of sphere volume\n\n");

printf("please write the value of r\n");
scanf("%f",&rsp);

vsp = 4.0*(PI*rsp*rsp*rsp)/3.0;

printf("the volume of sphere is\n");
printf("vsp: %.5f\n\n\n\a",vsp);

printf("calculator of pyramid volume\n\n");

printf("please write the value of area of baser\n");
scanf("%f",&apy);

printf("please write the value of h\n");
scanf("%f",&hpy);

vpy = (apy*hpy)/3.0;

printf("the volume of sphere is\n");
printf("vpy: %.5f\n\n\n\a",vpy);
return 0;
}
