#include <stdio.h>
#include <math.h>

int main () {

float A, B, C;

//printf("Informe A");
scanf("%f",&A);
//printf("Informe B");
scanf("%f",&B);
C = B;
B = A;
A = C;
printf("%f ",A);
printf("%f",B);

return 0;
}