#include <stdio.h>

int main() {
    int vetor[100];
    int tamanho;
    float soma = 0;
    
    printf("Digite o tamanho do vetor(max 100): ");
    scanf("%d", &tamanho);
    printf("Digite os valores do vetor: \n");
    for(int i = 0; i < tamanho; i++){
        printf("Vetor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    float media = soma / tamanho;
    printf("\nA media dos valores do vetor eh: %.2f\n", media);
    int acima_media = 0;
    printf("Numeros acima da media: ");
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > media){
            if(acima_media > 0){
                printf(", ");
            }
            printf("%d ", vetor[i]);
            acima_media++;
        }
    }

    printf("\nQuantidade de valores acima da media: %d\n", acima_media);
    
    return 0;
}
