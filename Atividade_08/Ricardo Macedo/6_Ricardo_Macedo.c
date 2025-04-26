#include <stdio.h>

int main() {
    int vetor[20], i, pares = 0;

    printf("digite 20 números:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) pares++;
    }

    printf("quantidade de números pares: %d\n", pares);

    return 0;
}
