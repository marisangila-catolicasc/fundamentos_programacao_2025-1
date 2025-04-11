#include <stdio.h>

int main() {
    int i, num, soma = 0;
    float media;

    for(i = 0; i < 8; i++) {
        printf("Digite o numero 1 %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }

    media = soma / 8.0;

    printf("A media eh: %.2f\n", media);
    return 0;
}