#include <stdio.h>

int main() {
    int A[5], B[5], combinado[10];
    int i, pos = 0;

    printf("Digite 5 valores para o primeiro vetor:\n");
    for (i = 0; i < 5; ++i) {
        printf("A%d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 5 valores para o segundo vetor:\n");
    for (i = 0; i < 5; ++i) {
        printf("B%d: ", i + 1);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; ++i) {
        combinado[pos++] = A[i];
        combinado[pos++] = B[i];
    }

    printf("\nO vetor final intercalado será:\n");
    for (i = 0; i < 10; ++i) {
        printf("%d ", combinado[i]);
    }

    printf("\n");
    return 0;
}