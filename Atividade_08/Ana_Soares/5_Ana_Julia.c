#include <stdio.h>

int main() {
    int A[5], B[5], C[5];

    printf("Digite 5 numeros no vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 5 numeros no vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    // Exibição do vetor C
    printf("\nVetor C (soma de A + B):\n");
    for (int i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
