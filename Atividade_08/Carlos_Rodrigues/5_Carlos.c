#include <stdio.h>

int main() {
    
    int A[5], B[5], C[5];

    printf("Digite 5 números na letra A:\n");
    for (int x = 0; x < 5; x++) {
        printf("A[%d]: ", x);
        scanf("%d", &A[x]);
    }

    printf("\nDigite agora na letra B:\n");
    for (int x = 0; x < 5; x++) {
        printf("B[%d]: ", x);
        scanf("%d", &B[x]);
    }

    for (int x = 0; x < 5; x++) {
        C[x] = A[x] + B[x];
    }

    printf("\nVetor C (total) (soma de A + B):\n");
    for (int x = 0; x < 5; x++) {
        printf("C[%d] = %d\n", x, C[x]);
    }

    return 0;
}
