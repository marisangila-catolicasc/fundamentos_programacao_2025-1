#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5], vetorC[10];
    int tamanho_vetor = sizeof(vetorA) / sizeof(vetorA[0]);
    int j = 0;

    printf("Digite os valores para o vetor A:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Posição %d vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }

    printf("\nDigite os valores para o vetor B:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Posição %d vetor B: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            vetorC[i] = vetorA[j];
        } else {
            vetorC[i] = vetorB[j];
            j++;
        }
    }

    printf("\nVetor C: ");
    for (int i = 0; i < sizeof(vetorC) / sizeof(vetorC[0]); i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
