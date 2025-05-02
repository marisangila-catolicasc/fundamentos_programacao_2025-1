#include <stdio.h>

int main() {
    int vetor[10], contrario[10];

    printf("Digite 10 numeros: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        contrario[i] = vetor[9 - i];
    }

    printf("\n Ordem contraria: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", contrario[i]);
    }

    return 0;
}
