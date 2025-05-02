
#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];
    
    printf("Digite %d valores:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    
    float media = soma / n;
    
    int count = 0;
    printf("\nA media e: %.2f\n", media);
    
    printf("Valores acima da media:\n");
    for(int i = 0; i < n; i++) {
        if(vetor[i] > media) {
            printf("%.2f ", vetor[i]);
            count++;
        }
    }
    
    printf("\nQuantidade de valores acima da media: %d\n", count);
    
    return 0;
}
