#include <stdio.h>
int main() {
    int v[5], soma = 0, cont = 0;
    float media;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }
    media = soma / 5.0;
    printf("Valores acima da média %.2f:\n", media);
    for (int i = 0; i < 5; i++) {
        if (v[i] > media) {
            printf("%d ", v[i]);
            cont++;
        }
    }
    printf("\nQuantidade: %d\n", cont);
    return 0;
}