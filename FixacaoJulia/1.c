#include <stdio.h>
#include <stdlib.h>

//Leia um código e mostrar a descrição e valor correspondente
int main ()
{
    int codigo;
    printf ("Digite o codigo:");
    scanf ("%d",&codigo);
    switch (codigo)
    {
        case 1: 
            printf ("Hamburguers__________30,00\n");
            break;
        case 2:
            printf ("Cheeseburguers_______35,50\n");
            break;
        case 3:
            printf ("Fritas_______________20,50\n");
            break;
        case 4:
            printf ("Refrigerante_________10,00\n");
            break;
        case 5:
            printf ("Milkshake____________30,00\n");
            break;
        default:
            printf("Codigo invalido\n");
    }

}