#include <stdio.h>

/*Crie um programa que peça um número inteiro positivo ao usuário
e determine se ele é um número primo ou não*/

int main() {
    int num, isPrime = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if ((num!=1 && num!=2 && num!=3 && num!=5 && num!=7 && num!=9) &&
    (num%2 == 0 || num%3 == 0 || num%5 == 0 || num%7 == 0 || num%9== 0)) {
        isPrime = 0;
    }

    if (isPrime) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}