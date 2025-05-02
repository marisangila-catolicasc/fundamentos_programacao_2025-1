#include <stdio.h>

int main() {
    int A[5], B[5], C[10];

    printf("Digite 5 números para o vetor A:\n");
    for (int x = 0; x < 5; x++) {
        printf("A[%d]: ", x);
        scanf("%d", &A[x]);
    }

    printf("\nDigite 5 números para o vetor B:\n");
    for (int x = 0; x < 5; x++) {
        printf("B[%d]: ", x);
        scanf("%d", &B[x]);
    }

    for (int x = 0; x < 5; x++) {
        C[2*x] = A[x];
        C[2*x + 1] = B[x];
    }

    printf("\nVetor C (intercalado):\n");
    for (int x = 0; x < 10; x++) {
        printf("%d ", C[x]);
    }
    printf("\n");

    return 0;
}
