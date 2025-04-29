#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0], menor = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    return 0;
}
