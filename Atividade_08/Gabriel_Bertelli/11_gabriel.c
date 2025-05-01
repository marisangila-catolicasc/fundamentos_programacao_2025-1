#include <stdio.h>

int main() {
    int vetor[15], i, soma = 0;

    printf("Digite 15 números inteiros:\n");
    for (i = 0; i < 15; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 1; i < 15; i += 2) {
        soma += vetor[i];
    }

    printf("A soma dos elementos nas posições ímpares é: %d\n", soma);

    return 0;
}
