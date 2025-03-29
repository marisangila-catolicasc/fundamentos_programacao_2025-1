#include <stdio.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("Seu número é positivo.");
    } else {
        printf("Seu número é negativo.");
    }

    return 0;
}
