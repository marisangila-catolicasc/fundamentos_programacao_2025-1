#include <stdio.h>

int main() {
    int size, i, acimaDaMedia = 0;
    float somar = 0, media;

    printf("Informe a quantidade de elementos:\n");
    scanf("%d", &size);

    int numeros[size];

    for (i = 0; i < size; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        somar += numeros[i];
    }

    media = somar / size;

    printf("Média: %.2f\n", media);
    printf("Elementos acima da média:\n");

    for (i = 0; i < size; i++) {
        if (numeros[i] > media) {
            printf("%d ", numeros[i]);
            acimaDaMedia++;
        }
    }

    printf("\nTotal acima da média: %d\n", acimaDaMedia);

    return 0;
}