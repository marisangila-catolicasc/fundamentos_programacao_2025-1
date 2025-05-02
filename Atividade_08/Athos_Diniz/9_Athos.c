#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[10], i, j = 0;

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
        vetorC[j++] = vetorA[i];
        vetorC[j++] = vetorB[i];
    }

    printf("Vetor C intercalado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }

    printf("\n");

    return 0;
}
