#include <stdio.h>
#include <math.h>


int main() {
    int macas;
    float preco;

    printf("Digite o número de maçãs: \n");
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
