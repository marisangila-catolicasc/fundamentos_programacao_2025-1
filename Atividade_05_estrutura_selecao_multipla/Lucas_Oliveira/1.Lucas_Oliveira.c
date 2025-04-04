#include <stdio.h>
int main() {
    int codigo, produto;
    float valor;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    switch (codigo){
        case 1254:
            produto = 1;
            valor = 8.00;
            printf("Descricao: Sanduiche de Presunto\n");
            break;
        case 5698:
            produto = 2;
            valor = 3.50;
            printf("Descricao: Churros\n");
            break;
        case 7114:
            produto = 3;
            valor = 5.00;
            printf("Descricao: Suco de Laranja que parece de limao mas tem gosto de tamarindo\n");
            break;
    }   
    printf("O produto custa R$%.2f", valor);
    return 0;
}