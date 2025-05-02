#include <stdio.h>

int main() {
    int vetor[15], soma = 0;

    printf("Digite 15 números:\n");
    for (int i = 0; i < 15; i++){
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 15; i += 2){
        soma += vetor[i];
    }

    printf("A soma dos elementos nas posições ímpares é: %d", soma);
}