#include <stdio.h>

int main() {
    int tamanho, i, contador = 0;
    float soma = 0, media;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / tamanho;

    printf("Média dos valores: %.2f\n", media);
    printf("Valores acima da média:\n");

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    printf("\nQuantidade de valores acima da média: %d\n", contador);

    return 0;
}
