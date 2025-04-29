#include <stdio.h>

int main() {
    int A[5], B[5], C[5];
    printf("Digite 5 numeros para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 5 numeros para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    printf("Soma dos elementos (vetor C):\n");
    for (int i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
        printf("%d ", C[i]);
    }

    return 0;
}
