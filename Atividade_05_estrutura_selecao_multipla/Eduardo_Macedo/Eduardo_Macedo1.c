#include <stdio.h>

int main() {
    int codigoProduto;

    printf("Digite o código do produto desejado: ");
    scanf("%d", &codigoProduto);

    printf("\n");

    switch (codigoProduto) {
        case 1254:
            printf("Produto selecionado: Sanduíche de presunto\n");
            printf("Valor: R$ 8,00\n");
            break;
        case 5698:
            printf("Produto selecionado: Churros\n");
            printf("Valor: R$ 3,50\n");
            break;
        case 7114:
            printf("Produto selecionado: Suco misterioso\n");
            printf("Descrição: Parece de limão, é de laranja, mas tem gosto de tamarindo!\n");
            printf("Valor: R$ 5,00\n");
            break;
        default:
            printf("ERRO: Código não cadastrado.\n");
            break;
    }

    return 0;
}
