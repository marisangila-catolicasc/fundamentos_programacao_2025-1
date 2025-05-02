#include <stdio.h>

int main() {
    int vetor[20];
    int qtd_pares = 0;
    
    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 0) {
            qtd_pares++;
        }
    }
    
    printf("\nQuantidade de numeros pares no vetor: %d\n", qtd_pares);
    
    return 0;
}