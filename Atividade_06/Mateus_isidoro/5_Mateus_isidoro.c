#include <stdlib.h>
#include <stdio.h>
int main() {
    int soma;
    soma = 0;
    for (int contador = 0; contador <= 100; contador++)
    {
        soma += contador;
        printf(" %d \n", soma);
    }
    printf("\nA soma dos 100 primeiros numeros naturais eh %d \n", soma);
    return 0;
}