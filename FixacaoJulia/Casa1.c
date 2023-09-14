/*Calculadora Simples
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -, *, /).
O programa deve realizar a operação selecionada e exibir o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    double num1,num2;
    char operacao;

    printf("Digite o primeiro numero:");
    scanf("%lf",num1);

    /*For printf, arguments of type float are promoted to double so both %f and %lf are used for
    double. For scanf, you should use %f for float and %lf for double.*/

    printf("Digite o segundo numero:");
    scanf("%lf",num2);

    printf("Digite a operacao:");
    scanf("%c",operacao);

    switch (operacao)
    {
    case '+':
        printf("Resultado: %.2lf\n", num1+num2);
        break;
    case '-':
        printf("Resultado: %.2lf\n", num1-num2);
        break;
    case '*':
        printf("Resultado: %.2lf\n", num1*num2);
        break;
    case '/':
        if (num2!=0){
            printf("Resultado: %.2lf\n",num1/num2);
        } else {
            printf("Operacao nao pode ser realizada");
        }
        break;
    default:
        printf("operacao invalida\n");
    }

}