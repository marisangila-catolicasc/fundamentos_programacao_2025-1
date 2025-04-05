#include <stdio.h>

int main() {

    int codigoProduto;

    printf("Digite um código de produto: ");
    scanf("%d", &codigoProduto);

    switch (codigoProduto) {

        case 1254:
            printf("Produto: Sanduíche de presunto\nPreço: R$ 8,00\n");
            break;
        case 5689:
            printf("Produto: Churros\nPreço: R$ 3,50\n");
            break;
        case 7114:
            printf("Produto: Suco de laranja com gosto de limão, mas sabor de tamarindo\nPreço: R$ 5,00\n");
            break;
        default:
            printf("Código inválido! Produto não encontrado.\n");
            break;
    }

    return 0;
}
