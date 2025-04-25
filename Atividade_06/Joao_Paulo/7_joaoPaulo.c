#include <stdio.h>

int main() {
    float numero, soma = 0.0, media;

    printf("Digite 8 numeros:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%f", &numero);
        soma += numero;  
    }

    media = soma / 8;

    printf("A media dos numeros digitados e: %.2f\n", media);

    return 0;
}
