#include <stdio.h>

//7. Faça um programa que leia um vetor de 10 elementos e armazene um segundo vetor com os mesmos elementos em ordem inversa.

int main() {
    int normal[10], inverso[10];
    int i;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &normal[i]);
    }

    for (i = 0; i < 10; i++) {
        inverso[i] = normal[9 - i];
    }

    printf("\nPadrão: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", normal[i]);
    }

    printf("\nInverso: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", inverso[i]);
    }

    return 0;
}