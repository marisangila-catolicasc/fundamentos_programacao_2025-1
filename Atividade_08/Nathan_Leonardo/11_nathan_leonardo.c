#include <stdio.h>

int main() {
    int vetor[15];
    int i, soma = 0;

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 1; i < 15; i += 2) {
        soma += vetor[i];
    }

    printf("\nA soma dos elementos em posicoes impares (indices 1, 3, 5, ...) eh: %d\n", soma);

    return 0;
}
