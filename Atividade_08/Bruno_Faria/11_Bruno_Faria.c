#include <stdio.h>

int main() {
    int vetor[15];
    int soma = 0;

    printf("Digite 15 numeros inteiros:\n");
    for (int i = 0; i < 15; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 1; i < 15; i += 2) {  // i começa em 1 e vai de 2 em 2
        soma += vetor[i];
    }

    printf("\nSoma dos elementos nas posicoes impares: %d\n", soma);

    return 0;
}
