#include <stdio.h>
#include <math.h>

int main () {

float Raio, Peri, Area, pi;

pi = 3.14159265358979323846;
//printf("Qual o raio?");
scanf("%f",&Raio);
Peri = (Raio+Raio)*pi;
Area = (Raio*Raio)*pi;
printf("Perimetro: %.2f\n",Peri);
printf("Area: %.2f\n",Area);

return 0;
}