#include <stdio.h>

int main() {
    int n, i;
    float soma = 0.0;

    printf("quantos números deseja inserir? ");
    scanf("%d", &n);

    float vetor[n];

    for (i = 0; i < n; i++) {
        printf("digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    float media = soma / n;
    printf("a média dos valores é: %.2f\n", media);

    return 0;
}

