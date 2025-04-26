#include <stdio.h>
#define TAMANHO 10

int main() {

    int numeros[TAMANHO] = {5, 12, 7, 23, 3, 9, 18, 4, 11, 30};

    int i = 0;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d\n", numeros[i]);
    }

    for (i = TAMANHO-1; i >= 0; i--)
    {
        printf("%d\n", numeros[i]);
    }
    
}