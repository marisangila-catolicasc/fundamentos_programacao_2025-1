#include <stdio.h>

int main() {
    int vetor[20];
    int pares = 0;

    printf("Insira 20 números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nTotal de números pares informados: %d\n", pares);

    return 0;
}