#include <stdio.h>

int main() {

    int codigo_produto;
    char descricao;
    
    

    printf("[1254] - sanduiche de presunto - R$ 8,00\n");
    printf("[5698] - churros - R$3,50 \n");
    printf("[7114] - suco de laranja que parece de limao mas tem gosto de tamarindo - R$ 5,00 \n ");
    printf("digite o código do produto que você deseja: ");
    scanf("%d", &codigo_produto);
    switch(codigo_produto)
    {
        case 1254:
            printf("Voce escolheu Sanduiche de presunto - R$ 8,00");
            break;

        case 5698:
            printf("Voce escolheu Churros - R$ 3,50");
            break;
        case 7114:
            printf("Voce escolheu Suco de laranja que parece de limao mas tem gosto de tamarindo - R$ 5,00");
            break;
    } 
}
