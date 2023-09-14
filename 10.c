#include <stdio.h>

int main () {

int horas,minutos,V1;

//printf("Quantas horas?");
scanf("%d",&horas);
//printf("Quantos minutos?");
scanf("%d",&minutos);
V1 = horas*60;
minutos = minutos +V1;
printf("%d",minutos);

return 0;

}