#include <stdio.h>

int main() {
    int vetor[10], n, encontrado = 0;

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o numero que deseja encontrar: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == n) {
            printf("\nNumero encontrado na posicao %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}