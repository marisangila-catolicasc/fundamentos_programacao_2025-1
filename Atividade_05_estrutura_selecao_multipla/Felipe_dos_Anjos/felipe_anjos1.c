#include <stdio.h>

int main() {
    int cod;
    printf("Informe o código do produto: ");
    scanf("%d", &cod);

    switch (cod) {
        case 1254:
            printf("Sanduíche de presunto - Preço: R$ 8,00\n");
            break;
        case 5698:
            printf("Churros - Preço: R$ 3,50\n");
            break;
        case 7114:
            printf("Suco de laranja que parece de limão mas tem gosto de tamarindo - R$ 5,00\n\n");
            break;
        default:
            printf("ERRO: Código inválido.\n");
            break;
    }

    return 0;
}
