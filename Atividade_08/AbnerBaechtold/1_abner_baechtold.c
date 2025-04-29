#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    float media = soma / tamanho;
    printf("Media dos valores: %.2f\n", media);

    return 0;
}
