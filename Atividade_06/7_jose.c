#include <stdio.h>

int main() {
    float numeros, soma, media;

    printf("Digite 8 numeros:\n");
    
    for (int i = 0; i <= 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros);
        soma += numeros;
    }

    media = soma / 8;
    printf("A media dos numeros e: %.2f\n", media);

    return 0;
}