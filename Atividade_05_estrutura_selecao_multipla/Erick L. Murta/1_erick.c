#include <stdio.h>

int main(void) {
    int selecao;
    printf("[1254] - Sanduíche de presunto - R$8,00\n");
    printf("[5698] - Churros - R$3,50\n");
    printf("[7114] - Suco de laranja (que parece de limão mas tem gosto de tamarindo) - R$5,00\n");
    scanf("%d", &selecao);

    switch (selecao){
    case 1254:
        printf("Sanduiche de presunto - R$8,00\n");
        break;
    case 5698:
        printf("Churros - R$3,50\n");
        break;
    case 7114:
        printf("Suco de laranja (que parece de limão mas tem gosto de tamarindo) - R$5,00\n");
        break;
    default:
        printf("Item não registrado");
    }
}