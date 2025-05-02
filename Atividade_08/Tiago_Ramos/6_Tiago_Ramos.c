#include <stdio.h>

int main() {
    int vetor[20];
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    int pares = 0;

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d", pares);

    return 0;
}
