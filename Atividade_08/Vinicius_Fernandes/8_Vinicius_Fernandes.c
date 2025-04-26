#include <stdio.h>

int main() {
    int vetor[10];
    int numero;
    int encontrado = 0;
    
    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nDigite um número para buscar: ");
    scanf("%d", &numero);
    
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == numero) {
            printf("O número %d está na posição %d do vetor\n", numero, i);
            encontrado = 1;
        }
    }
    
    if(!encontrado) {
        printf("O número %d não foi encontrado no vetor\n", numero);
    }
    
    return 0;
}