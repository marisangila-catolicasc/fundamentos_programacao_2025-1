#include <stdio.h>

int main() {
    
    float vetor[4];
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    float maior = vetor[0];
    float menor = vetor[0];

    for (int i = 1; i < tamanho_vetor; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior valor: %f\n", maior);
    printf("Menor valor: %f\n", menor);

    return 0;
}