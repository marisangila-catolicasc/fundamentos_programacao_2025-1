#include <stdio.h>

int main() {
    int macas;
    float preco_macas, total_macas;

    printf("Quantas macas voce comrou?: ");
    scanf("%d", &macas);

    if (macas >= 12)
        preco_macas = 1.95;
    else
        preco_macas = 2.30;

    total_macas = macas * preco_macas;
    printf("O valor da sua compra eh: R$ %.2f\n", total_macas);

    return 0;
}