#include <stdio.h>

int main() {
    int vetor[10];
    float soma = 0.0, media;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10;
    printf("Média: %.2f\n", media);
    printf("Valores acima da média:\n");

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > media) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}