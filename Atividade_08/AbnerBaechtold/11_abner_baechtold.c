#include <stdio.h>

int main() {
    int vetor[15], soma = 0;
    printf("Digite 15 numeros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
        if (i % 2 == 1) {
            soma += vetor[i];
        }
    }

    printf("Soma dos elementos em posicoes impares: %d\n", soma);
    return 0;
}
