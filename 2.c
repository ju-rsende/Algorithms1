#include <stdio.h>

int main () {

float SalarioMinimo, KwGasto, ValorDKw, ValorPago, ValorDesc;

//printf("Qual o salario minimo atulamente?");
scanf("%f",&SalarioMinimo);
//printf("Quantos Kw vc consome?");
scanf("%f",&KwGasto);
ValorDKw = (0.0014285714)*SalarioMinimo;
ValorPago = KwGasto*ValorDKw;
ValorDesc = ValorPago - (ValorPago*0.1);
printf("Valor do kW: %.2f\n",ValorDKw);
printf("Valor a pagar: %.2f\n",ValorPago);
printf("Valor com desconto: %.2f",ValorDesc);

return 0;

}