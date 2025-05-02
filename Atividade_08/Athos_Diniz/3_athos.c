
#include <stdio.h>

int main() {
    int tamanho, i, acimaMedia = 0;
    float soma = 0, media;

    printf("Informe a quantidade de elementos: ");
    scanf("%d", &tamanho);

    int numeros[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / tamanho;

    printf("Média: %.2f\n", media);
    printf("Elementos acima da média:\n");

    for (i = 0; i < tamanho; i++) {
        if (numeros[i] > media) {
            printf("%d ", numeros[i]);
            acimaMedia++;
        }
    }

    printf("\nTotal acima da média: %d\n", acimaMedia);

    return 0;
}
