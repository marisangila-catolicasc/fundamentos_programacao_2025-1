#include <stdio.h>

int main() {
    int idade;
    float peso;
    char tipo;

    printf("Idade do pet: ");
    scanf("%d", &idade);
    printf("Peso do pet: ");
    scanf("%f", &peso);
    printf("Tipo do pet (c = cachorro / g = gato): ");
    scanf(" %c", &tipo);

    return 0;
}
