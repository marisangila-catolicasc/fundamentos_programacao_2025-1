#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[5];

    printf("Digite 5 numeros para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nDigite 5 numeros para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("\nVetor C (somas de A e B):\n");
    for (int i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i, vetorC[i]);
    }

    return 0;
}
