#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1254:
            printf("Produto: Sanduíche de presunto\n");
            printf("Valor: R$8,00\n");
            break;
        case 5698:
            printf("Produto: Churros\n");
            printf("Valor: R$3,50\n");
            break;
        case 7114:
            printf("Produto: Suco de laranja que parece de limão mas tem gosto de tamarindo\n");
            printf("Valor: R$5,00\n");
            break;
        default:
            printf("Código inválido! Produto não encontrado.\n");
    }

    return 0;
}