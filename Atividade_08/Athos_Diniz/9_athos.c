
#include <stdio.h>

int main() {
    int A[5], B[5], C[10], i, k = 0;

    printf("Preencha o vetor A:\n");
    for (i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Preencha o vetor B:\n");
    for (i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[k++] = A[i];
        C[k++] = B[i];
    }

    printf("Vetor C (intercalado):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    return 0;
}
