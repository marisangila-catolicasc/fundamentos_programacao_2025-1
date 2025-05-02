#include <stdio.h>

int main() {
    int vetor[10];
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores na ordem de entrada: ");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nValores na ordem inversa: ");
    for (int i = tamanho_vetor-1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

