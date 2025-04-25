#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, randomico;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    srand(time(NULL));
    randomico = rand() % 100;
    while (randomico != numero) {
        printf("Numero randomico gerado: %d\n", randomico);
        randomico = rand() % 100;
    }
    printf("Numero randomico gerado: %d\n", randomico);
    printf("O numero randomico gerado eh igual ao numero informado pelo usuario.\n");

    return 0;
}