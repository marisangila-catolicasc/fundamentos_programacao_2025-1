#include <stdio.h>

int main() {
    int tamanho, i;
    float soma = 0, media;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / tamanho;

    printf("A média dos valores é: %.2f\n", media);

    return 0;
}
