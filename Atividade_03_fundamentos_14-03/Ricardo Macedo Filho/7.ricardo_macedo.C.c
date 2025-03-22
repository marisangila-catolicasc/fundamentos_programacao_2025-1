#include <stdio.h>

int main() {
    float cambio, dolares, reais;

    printf("digite o valor do cambio do dolar para real: ");
    scanf("%f", &cambio);

    printf("digite a quantidade de dolares que deseja converter: ");
    scanf("%f", &dolares);

    reais = dolares * cambio;

    printf("para comprar %.2f dolares, voce precisa de %.2f reais.\n", dolares, reais);

    return 0;
}
