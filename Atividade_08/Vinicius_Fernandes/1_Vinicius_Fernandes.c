#include <stdio.h>

int main() {
    float vetor[100];
    int tamanho;
    float soma;

    printf("Digite o tamanho do vetor(max 100): ");
    scanf("%d", &tamanho);
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++){
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    float media = soma / tamanho;
    printf("\nA media dos valores do vetor e: %.2f\n", media);
    
    return 0;
}