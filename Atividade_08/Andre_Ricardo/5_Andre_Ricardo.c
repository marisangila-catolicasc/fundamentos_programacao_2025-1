#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[5], i;

    printf("Digite 5 números para o vetor A:\n");
    for (i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 5 números para o vetor B:\n");
    for (i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("Somas armazenadas no vetor C:\n");
    for (i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i, vetorC[i]);
    }

    return 0;
}
