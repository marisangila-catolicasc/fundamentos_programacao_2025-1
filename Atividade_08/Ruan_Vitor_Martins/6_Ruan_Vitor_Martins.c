#include <stdio.h>
int main() {
    int vetor[20], i, pares = 0;

    for (i = 0; i < 20; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
            pares++;
    }

    printf("numeros pares: %d\n", pares);
    return 0;
}
