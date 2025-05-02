#include <stdio.h>

int main() {
    int vetor[10], inverso[10];
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho_vetor; i++) {
        inverso[i] = vetor[tamanho_vetor - 1- i];
    }
    printf("\nVetor original: ");

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nVetor inverso: ");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", inverso[i]);
    }

    return 0;
}
