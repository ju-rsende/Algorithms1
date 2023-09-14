#include <stdio.h>
#include <math.h>

int main () {
    float catop, catad, hipo;

//printf("Qual o valor do cateto oposto");
scanf("%f",&catop);
//printf("Qual o valor do cateto adjacente");
scanf("%f",&catad);
hipo = sqrt((catad*catad)+(catop*catop));
printf("Hipotenusa: %.2f",hipo);

    return 0;
}