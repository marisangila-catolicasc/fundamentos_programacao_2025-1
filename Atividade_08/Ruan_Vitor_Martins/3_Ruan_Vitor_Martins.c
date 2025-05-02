#include <stdio.h>
int main() {
    int tam, i, cont = 0;
    float soma = 0, media;

    printf("numeros inseridos: ");
    scanf("%d", &tam);

    int vetor[tam];

    for (i = 0; i < tam; i++) {
        printf("%d ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / tam;

    printf("media: %.2f\n", media);
    printf("acima da media:\n");

    for (i = 0; i < tam; i++) {
        if (vetor[i] > media) {
            printf("%d\n", vetor[i]);
            cont++;
        }
    }

    printf("quantos acima da media: %d\n", cont);

    return 0;
}
