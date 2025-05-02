#include <stdio.h>

int main() {
    int vetor[20], pares = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    return 0;
}
