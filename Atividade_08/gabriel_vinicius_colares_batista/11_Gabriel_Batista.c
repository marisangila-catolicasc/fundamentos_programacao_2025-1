#include <stdio.h>

int main() {
   int vetor[15], i, soma = 0;

    for (i = 0; i < 15; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
        if (i % 2 != 0){
            soma += vetor[i];
        }
    }
    printf("Soma dos elementos na posicao impar: %d\n", soma);
    
    return 0; 
}

