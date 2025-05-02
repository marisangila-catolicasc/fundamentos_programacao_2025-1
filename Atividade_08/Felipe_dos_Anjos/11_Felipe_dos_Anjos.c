#include <stdio.h>

int main() {
    int vetor[15];
    int soma = 0;

    printf("Por favor, insira 15 números inteiros para o vetor:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 1; i < 15; i += 2) {
        soma += vetor[i];
    }

    printf("A soma dos números localizados nas posições ímpares do vetor é: %d\n", soma);
    return 0;
}