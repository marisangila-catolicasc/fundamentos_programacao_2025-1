#include <stdio.h>

int main() {
    int elemento;

    printf("Digite o numero de elementos: ");
    scanf("%d", &elemento);

    if (elemento <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    float vetor[elemento];

    for (int i = 0; i < elemento; i++) {
        printf("Digite o valor do %dº elemento: ", i + 1);
        scanf("%f", &vetor[i]);
    }
  
    float maior = vetor[0];
    float menor = vetor[0];

    for (int i = 1; i < elemento; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}
