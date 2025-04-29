#include <stdio.h>

int main() {
    int A[5], B[5], C[10];
    printf("Digite 5 numeros para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 5 numeros para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        C[i * 2] = A[i];
        C[i * 2 + 1] = B[i];
    }

    printf("Vetor intercalado C:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
