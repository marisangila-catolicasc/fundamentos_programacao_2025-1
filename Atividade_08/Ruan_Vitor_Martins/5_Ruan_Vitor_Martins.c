#include <stdio.h>
int main() {
    int A[5], B[5], C[5], i;

    for (i = 0; i < 5; i++) {
        printf("vetor a posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("vetor b posicao %d: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    printf("somas do vetor c:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");
    return 0;
}
