#include <stdio.h>

int main() {
    int n, i, count = 0;
    float soma = 0, media;

    printf("quantos números? ");
    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;
    printf("média: %.2f\n", media);
    printf("valores acima da média:\n");

    for(i = 0; i < n; i++) {
        if(vetor[i] > media) {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    printf("\ntotal acima da média: %d\n", count);

    return 0;
}

