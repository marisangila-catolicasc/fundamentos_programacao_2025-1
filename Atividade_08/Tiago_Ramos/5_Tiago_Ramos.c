#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[5];
    int tamanho_vetor = sizeof(vetorA) / sizeof(vetorA[0]);

    printf("Digite os valores para o vetor A:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Valor %d vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nDigite os valores para o vetor B:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Valor %d vetor B: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < tamanho_vetor; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("\nValores no vetor C: ");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
