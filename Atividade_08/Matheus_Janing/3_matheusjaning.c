#include <stdio.h>

int main() {
    int numero[5], quantidade = 0;
    float media, soma = 0;

    printf("Insira 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numero[i]);
        soma += numero[i];
    }

    media = soma / 5;

    printf("Media = %.2f\n", media);

    printf("Valor(es) acima da media: ");
    for (int i = 0; i < 5; i++) {
        if (numero[i] > media) {
            printf("%d \n", numero[i]);
            quantidade++;
        }
    }

    printf("Quantidade de numeros acima da media: %d\n", quantidade);

}