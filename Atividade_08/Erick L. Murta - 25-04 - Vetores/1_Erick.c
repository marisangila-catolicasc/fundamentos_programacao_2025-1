#include <stdio.h>
#define TAMANHO 5
int main() {

    float numeros[TAMANHO] = {3.14, 2.71, 9.81, 1.61, 0.99};

    float soma = 0;

    float media = 0;

    for (int i = 0; i < TAMANHO; i++)
    {
        soma = soma + numeros[i];
    }

    media = soma/TAMANHO;
    printf("%f", media);
    
}