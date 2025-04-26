#include <stdio.h>

int main() {
    int n, i;
    float maior, menor;

    printf("quantos números deseja inserir? ");
    scanf("%d", &n);

    float vetor[n];

    for (i = 0; i < n; i++) {
        printf("digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    maior = menor = vetor[0];

    for (i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("maior valor: %.2f\n", maior);
    printf("menor valor: %.2f\n", menor);

    return 0;
}
