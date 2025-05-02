#include <stdio.h>

int main() {
    int vetor[20], i, contador = 0;

    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 20; i++) {
        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }

    printf("Quantidade de números pares: %d\n", contador);

    return 0;
}
