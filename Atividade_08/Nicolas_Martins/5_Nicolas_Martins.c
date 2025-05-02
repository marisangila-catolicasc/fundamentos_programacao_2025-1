#include <stdio.h>

int main() {
    int arr1[5], arr2[5], result[5];
    int i;

    printf("Insira 5 números para o primeiro vetor:\n");
    for (i = 0; i < 5; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("\nInsira 5 números para o segundo vetor:\n");
    for (i = 0; i < 5; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < 5; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
    printf("\nO resultado da soma dos vetores será:\n");
    for (i = 0; i < 5; ++i) {
        printf("Resultado[%d] = %d\n", i + 1, result[i]);
    }

    return 0;
}

