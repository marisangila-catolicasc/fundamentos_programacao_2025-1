#include <stdio.h>

int main() {
    int vetor[10];
    int numero, encontrado = 0;
    
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nDigite um numero para buscar no vetor: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            printf("O numero %d esta presente na posicao %d do vetor.\n", numero, i);
            encontrado = 1;
        }
    }
    
    if (!encontrado) {
        printf("O numero %d nao foi encontrado no vetor.\n", numero);
    }
    
    return 0;
}