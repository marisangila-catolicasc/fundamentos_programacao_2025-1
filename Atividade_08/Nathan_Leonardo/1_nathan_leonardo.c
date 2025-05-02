#include <stdio.h>

int main() {
    int n, i;
    float soma = 0.0, media;


    printf("Quantos elementos o vetor tera? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho invalido. O vetor deve ter pelo menos um elemento.\n");
        return 1;
    }

    float vetor[n];  

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;

    printf("\nA media dos valores é: %.2f\n", media);

    return 0;
}
