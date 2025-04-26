#include <stdio.h>

int main() {
    int A[5], B[5], C[5], i;

    printf("digite 5 números para o vetor A:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("digite 5 números para o vetor B:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
        C[i] = A[i] + B[i];
    }

    printf("vetor c (soma de A + B):\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
