#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[5];

    printf("Informe 5 valores para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nAgora, digite 5 valores para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("\nVetor C (resultado da soma de A com B):\n");
    for (int i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i, vetorC[i]);
    }

    return 0;
}