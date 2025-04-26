#include <stdio.h>

int main() {
    int A[5], B[5], C[10], i, j = 0;

    printf("digite 5 números para o vetor A:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("digite 5 números para o vetor B:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 5; i++) {
        C[j++] = A[i];
        C[j++] = B[i];
    }

    printf("vetor C (intercalado):\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}