#include <stdio.h>

int main() {
    int quantidade;
    float preco, custo_total;

    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &quantidade);
    
    if (quantidade < 12) {
        preco = 2.30; 
    } else {
        preco = 1.95; 
    }
    custo_total = quantidade * preco;
    printf("O custo total da compra é: R$ %.2f\n", custo_total);

    return 0;
}