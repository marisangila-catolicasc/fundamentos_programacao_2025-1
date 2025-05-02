#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[5];

    printf("Digite 5 números para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 5 números para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    printf("\nSoma dos elementos (vetor C = A + B):\n");
    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("C[%d] = %d\n", i, vetorC[i]);
    }

    return 0;
}