#include <stdio.h>

int main() {
    int size, i;
    float acumulador = 0, media;

    printf("Informe o tamanho do seu veto:\n");
    scanf("%d", &size);

    float lista[size];

    for (i = 0; i < size; i++) {
        printf("Digite o %dº elemento: ", i + 1);
        scanf("%f", &lista[i]);
        acumulador += lista[i];
    }

    media = acumulador / size;

    printf("Media dos valores: %.2f\n", media);

    return 0;
}