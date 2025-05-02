#include <stdio.h>

int main() {
    int vetor[15];
    int soma = 0;
    
    printf("Digite 15 numeros inteiros:\n");
    for (int i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (i % 2 != 0) {
            soma += vetor[i];
        }
    }
    
    printf("\nA soma dos elementos em posicoes impares e: %d\n", soma);
    
    return 0;
}