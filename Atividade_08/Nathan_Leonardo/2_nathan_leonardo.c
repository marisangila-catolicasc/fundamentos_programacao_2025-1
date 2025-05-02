#include <stdio.h>

int main() {
    int n, i;
    float maior, menor;

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

        if (i == 0) {
            maior = menor = vetor[i]; 
        } else {
            if (vetor[i] > maior) maior = vetor[i];
            if (vetor[i] < menor) menor = vetor[i];
        }
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}
