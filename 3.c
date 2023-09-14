#include <stdio.h>
#include <math.h>

int main () {

float Base, Alt, Peri, Area, Diag;

//printf("Qual a base?");
scanf("%f",&Base);
//printf("qual a altura?");
scanf("%f",&Alt);
Peri = (Base*2) + (Alt*2);
Area = Base*Alt;
Diag = sqrt(((Base*Base)+(Alt*Alt)));
printf("Perimetro: %.2f\n",Peri);
printf("Area: %.2f\n",Area);
printf("Diagonal: %.2f\n",Diag);

return 0;

}