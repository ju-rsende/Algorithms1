#include <stdio.h>
#include <math.h>

int main () {

float numerador,denominador,resultado;


//printf("Qual o numerador?");
scanf("%f",&numerador);
//printf("Qual o denominador?");
scanf("%f",&denominador);
resultado = numerador/denominador;
printf("%f",resultado);

return 0;
}