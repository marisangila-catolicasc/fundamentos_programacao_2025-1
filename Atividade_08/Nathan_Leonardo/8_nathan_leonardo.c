#include <stdio.h>

int main() {
    int vetor[10];
    int i, numeroBusca, encontrado = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para buscar no vetor: ");
    scanf("%d", &numeroBusca);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == numeroBusca) {
            printf("Numero %d encontrado na posicao %d.\n", numeroBusca, i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Numero %d nao encontrado no vetor.\n", numeroBusca);
    }

    return 0;
}
