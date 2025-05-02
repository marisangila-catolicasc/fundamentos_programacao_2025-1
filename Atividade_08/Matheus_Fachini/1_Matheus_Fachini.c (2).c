#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    
    int tamanho;
    float maior, menor;
    printf("Digite a medida do vetor: ");
    scanf("%d", &tamanho);
    float vetor[tamanho];
    printf("Digite os %d valores do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }
    printf("O maior valor do vetor e: %.2f\n", maior);
    printf("O menor valor do vetor e: %.2f\n", menor);
    return 0;
}