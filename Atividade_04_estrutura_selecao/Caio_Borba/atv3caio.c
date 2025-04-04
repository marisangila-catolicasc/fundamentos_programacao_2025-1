#include <stdio.h>

int main() {
    int macas;
    float preco;

    printf("Digite a quantidade de macas: \n");
    scanf("%d", &macas);

    if (macas >= 12 ) {
        preco = 1.95;
        float total = macas * preco;
        printf("Total: R$%.2f", total);
    } else {
        preco = 2.30;
        float total = macas * preco;
        printf("Total: R$%.2f", total);
    }
}
