#include <stdio.h>

int main() {

    int CodigoProduto;
    char Descricao;


    printf("[1] - sanduiche de presunto - R$ 8,00\n");
    printf("[2] - churros - R$3,50 \n");
    printf("[3] - suco de laranja que parece de limao mas tem gosto de tamarindo - R$ 5,00 \n ");
    printf("digite o código do produto que você deseja: ");
    scanf("%d", &CodigoProduto);
    switch(CodigoProduto)
    {
        case 1:
            printf("Voce escolheu Sanduiche de presunto e está custando R$ 8,00");
            break;

        case 2:
            printf("Voce escolheu Churros e está custando R$ 3,50");
            break;
        case 3:
            printf("Voce escolheu Suco de laranja que parece de limao mas tem gosto de tamarindo e está custando R$ 5,00");
            break;
    } 
}