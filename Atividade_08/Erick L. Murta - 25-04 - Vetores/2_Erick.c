#include <stdio.h>
#define TAMANHO 5
int main() {

    float numeros[TAMANHO] = {3.14, 2.71, 9.81, 1.61, 0.99};
    float maior_numero = 0;

    for(int i; i < TAMANHO; i++){
        if (numeros[i] > maior_numero)
        {
            maior_numero = numeros[i];
        }
    }

    printf("%f", maior_numero);
}