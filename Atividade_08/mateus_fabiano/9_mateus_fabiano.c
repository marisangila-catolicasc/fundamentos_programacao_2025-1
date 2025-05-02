#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorIntercalado[10];

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

    for (int i = 0; i < 5; i++) {
        vetorIntercalado[2 * i] = vetorA[i];
        vetorIntercalado[2 * i + 1] = vetorB[i];
    }

    printf("\nVetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorIntercalado[i]);
    }

    printf("\n");

    return 0;
}