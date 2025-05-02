#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem de entrada:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nOrdem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}