#include <stdio.h>

int main() {
    int A[5], B[5], C[5], i;

    printf("Insira os valores do vetor A:\n");
    for (i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Agora, insira os valores do vetor B:\n");
    for (i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    printf("Resultado no vetor C:\n");
    for (i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}