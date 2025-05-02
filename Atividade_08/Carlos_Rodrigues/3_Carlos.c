#include <stdio.h>

int main() {
    
int elementos;

    printf("Digite o numero de elementos: ");
    scanf("%d", &elementos);

    int vetor[elementos];
    int soma = 0;

    for (int i = 0; i < elementos; i++) {
        printf("Digite o valor do %dº elemento: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    float media = (float)soma / elementos;
    printf("\nA media dos valores é: \n%.2f\n", media);

    printf("\nValores acima da media:\n");
    int acima = 0;
    for (int i = 0; i < elementos; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            acima++;
        }
    }

    printf("\nNúmero de valores acima da media: %d\n", acima);

    return 0;
}
