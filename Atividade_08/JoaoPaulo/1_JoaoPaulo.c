#include <stdio.h>

int main() {
    int tamanho, i;
    float acumulador = 0, media;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float lista[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%f", &lista[i]);
        acumulador += lista[i];
    }

    media = acumulador / tamanho;

    printf("Média dos valores: %.2f\n", media);
  return 0;
}