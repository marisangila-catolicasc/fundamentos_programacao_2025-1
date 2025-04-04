#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1254:
            printf("Sanduiche de presunto - R$8,00\n");
            break;
        case 5698:
            printf("Churros - R$3,50\n");
            break;
        case 7114:
            printf("Suco de laranja que parece de limao mas tem gosto de tamarindo - R$5,00\n");
            break;
        default:
            printf("Codigo invalido!\n");
    }

    return 0;
}