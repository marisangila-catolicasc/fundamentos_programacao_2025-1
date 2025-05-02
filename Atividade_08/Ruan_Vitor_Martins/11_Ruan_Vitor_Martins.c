#include <stdio.h>
int main() {
    int vetor[15], i, soma = 0;

    for (i = 0; i < 15; i++) {
        printf("digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 1; i < 15; i += 2) {
        soma += vetor[i];
    }

    printf("\n soma dos numeros impares: %d\n", soma);

    return 0;
}
