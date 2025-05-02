#include <stdio.h>

int main() {
    int tamanho;
    float soma = 0, media;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    float vetor[tamanho];
    
    printf("Digite os %d valores do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    
    media = soma / tamanho;
    
    printf("A media dos valores do vetor e: %.2f\n", media);
    
    return 0;
}
