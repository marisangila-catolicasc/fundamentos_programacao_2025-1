#include <stdio.h>

int main() {
    int vetor[15];
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    int soma = 0;

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho_vetor; i++) {
        if (i % 2 != 0) {
            soma += vetor[i];
        }
    }

    printf("\nSoma dos valores nas posicoes impares: %d\n", soma);

    return 0;
}

