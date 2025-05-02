#include <stdio.h>
int main() {
    int tamanho;
    int qtd_acima_media = 0;
    float soma = 0, media;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    printf("Digite os %d valores inteiros do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / tamanho;
    
    printf("A media dos valores do vetor e: %.2f\n", media);
    printf("Valores acima da media: ");
    
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            qtd_acima_media++;
        }
    }
  
    printf("\nQuantidade de valores acima da media: %d\n", qtd_acima_media);
  
    return 0;
}