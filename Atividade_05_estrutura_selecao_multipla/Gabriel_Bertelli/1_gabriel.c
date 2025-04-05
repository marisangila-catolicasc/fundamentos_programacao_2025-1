#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int codigo_produto;
    printf("Digite o código do produto: \n");
    scanf("%d", &codigo_produto);

    switch (codigo_produto) {
        case 1254:
            printf("Sanduíche de Presunto - R$8,00\n");
            break;
        case 5698:
            printf("Churros - R$3,50\n");
            break;
        case 7114:
            printf("Suco de laranja que parece de limão mas tem gosto de tamarindo - R$5,00\n");
            break;
        
        default:
            printf("A opção digitada é inválida\n");
            break;
    }
    return 0;
}
