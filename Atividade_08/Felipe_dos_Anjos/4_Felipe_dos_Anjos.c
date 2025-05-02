#include <stdio.h>

int main() {
    int vetor[10];

    printf("Insira 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNúmeros na sequência em que foram digitados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nNúmeros na ordem contrária:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}