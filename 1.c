#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int Numero, Centena, Dezena, Unidade, NumeroInvertido, Aux;

    //printf ("Digite um numero CDU: ");
    scanf ("%d", &Numero);
    Centena = Numero % 10;
    Aux = (Numero/10);
    Dezena = Aux%10;
    Aux = (Aux/10);
    Unidade = Aux%10;
    NumeroInvertido = Centena*100 + Dezena*10 + Unidade;
    printf ("%d", NumeroInvertido);
    return 0;


}