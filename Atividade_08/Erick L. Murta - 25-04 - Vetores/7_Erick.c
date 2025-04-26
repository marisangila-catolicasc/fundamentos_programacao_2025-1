#include <stdio.h>
#define TAMANHO 10

int main() {

    int numeros[TAMANHO] = {5, 12, 7, 23, 3, 9, 18, 4, 11, 30};
    int numeros_inv[TAMANHO];

    int i = 0;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d\n", numeros[i]);
    }
    int j = 0;
    for (i = TAMANHO-1; i >= 0; i--)
    {
        numeros_inv[j] = numeros[i];
        j++;
    }
    printf("===Numeros Ordem Original===\n");
    printf("[");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d, ", numeros[i]);
    }
    printf("]\n");
    printf("===Numeros Ordem Inversa===\n");
    printf("[");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d, ", numeros_inv[i]);
    }
    printf("]\n");
    
}