#include <stdio.h>

int main() {
    int quantidade;
    float preco, total;

    printf("Digite a quantidade de maçãs: ");
    scanf("%d", &quantidade);

    if (quantidade < 12)
        preco = 2.30;
    else
        preco = 1.95;

    total = quantidade * preco;
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
