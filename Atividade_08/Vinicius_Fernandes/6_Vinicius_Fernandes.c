#include <stdio.h>

int main() {
    int vetor[20];
    int contador_pares = 0;
    
    printf("Digite 20 números inteiros:\n");
    for(int i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if(vetor[i] % 2 == 0) {
            contador_pares++;
        }
    }
    
    printf("\nQuantidade de números pares: %d\n", contador_pares);
    
    return 0;
}