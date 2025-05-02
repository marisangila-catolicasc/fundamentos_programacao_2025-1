#include <stdio.h>

int main() {
    int vetor[10], n, encontrado = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o número que deseja encontrar: ");
    scanf("%d", &n);

    printf("\nVerificando posições do número %d:\n", n);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == n) {
            printf("Encontrado na posição %d\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Número não encontrado no vetor.\n");
    }

    return 0;
}