#include <stdio.h>

int main() {
    float notas[5];
    float soma = 0.0;
    float media;

    printf("Digite 5 notas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 5;
    printf("Média das notas: %.2f\n", media);

    return 0;
}