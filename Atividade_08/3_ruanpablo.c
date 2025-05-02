#include <stdio.h>

int main() {
    int v[5], soma = 0, cont = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }
    float media = soma / 5.0;
    printf("Acima da media: ");
    for (int i = 0; i < 5; i++) {
        if (v[i] > media) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
    return 0;
}