#include <stdio.h>

int main() {
    int vetor[15];
    int soma = 0;

    printf("Digite 15 numeros para o vetor:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 1; i < 15; i += 2) {
        soma += vetor[i];
    }

    printf(" A soma dos elementos em posições ímpares: %d\n", soma);
    return 0;
}