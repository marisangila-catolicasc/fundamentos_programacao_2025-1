#include <stdio.h>
#define TAMANHO 5
int main() {

    float numeros[TAMANHO] = {3.8, 2.71, 9.81, 1.61, 0.99};

    float soma = 0;

    float media = 0;

    int i = 0;

    for (i = 0; i < TAMANHO; i++)
    {
        soma = soma + numeros[i];
    }

    media = soma/TAMANHO;
    printf("a media eh: %f\n", media);

    for (i = 0; i < TAMANHO; i++)
    {
        if(numeros[i] > media){
            printf("%f eh maior que a media \n", numeros[i]);
        }
    }
}