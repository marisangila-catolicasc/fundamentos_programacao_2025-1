#include <stdio.h>

int main() {
    int A[5], B[5], C[10];

    printf("Digite 5 números para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite 5 números para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        C[2*i] = A[i];
        C[2*i + 1] = B[i];
    }

    printf("Vetor C (intercalado):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
