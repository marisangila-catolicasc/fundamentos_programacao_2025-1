#include <stdio.h>

int main() {
    int vetor[10], vetorInverso[10], i;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        vetorInverso[i] = vetor[9 - i];  
    }

    printf("Vetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nVetor em ordem inversa:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorInverso[i]);
    }

    printf("\n");

    return 0;
}
