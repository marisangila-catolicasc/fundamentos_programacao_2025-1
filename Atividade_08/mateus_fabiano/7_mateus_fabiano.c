#include <stdio.h>

int main() {
    int vetor[10], inverso[10];

    printf("Digite 10 elementos inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Copia em ordem inversa
    for (int i = 0; i < 10; i++) {
        inverso[i] = vetor[9 - i];
    }

    printf("\nVetor em ordem inversa:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", inverso[i]);
    }

    printf("\n");

    return 0;
}