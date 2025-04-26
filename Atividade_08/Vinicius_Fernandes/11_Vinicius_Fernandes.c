#include <stdio.h>

int main() {
    int vetor[15];
    int soma = 0;

    printf("Digite 15 numeros:\n");
    for (int i = 0; i < 15; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 1; i < 15; i += 2){
        soma += vetor[i];
    }

    printf("A soma dos elementos nas posicoes impares eh: %d\n", soma);
    
    return 0;
}