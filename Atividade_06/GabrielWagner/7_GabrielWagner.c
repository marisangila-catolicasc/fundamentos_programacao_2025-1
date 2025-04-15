#include <stdio.h>

int main() {
    int num, soma = 0;
    float media;

    for(int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }

    media = soma / 8.0;

    printf("Media: %.2f\n", media);
    return 0;
}
