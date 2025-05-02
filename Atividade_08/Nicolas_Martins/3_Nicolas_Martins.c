#include <stdio.h>

int main() {
    int v[5];
    int soma = 0, acima = 0;
    float media;
    int i;

    for (i = 0; i < 5; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    media = (float)soma / 5;

    printf("A média será de : %.2f\n", media);
    printf("Os valores acima da média são: ");

    for (i = 0; i < 5; ++i) {
        if (v[i] > media) {
            printf("%d ", v[i]);
            ++acima;
        }
    }



    printf("\nTotal de números acima da média: %d\n", acima);
    return 0;
}
