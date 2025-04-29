#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n], soma = 0;
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    float media = (float)soma / n;
    printf("Media: %.2f\nValores acima da media:\n", media);

    for (int i = 0; i < n; i++) {
        if (vetor[i] > media) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
