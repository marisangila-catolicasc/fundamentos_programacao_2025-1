#include <stdio.h>
int main() {
    int qtd;
    float preco;
    printf("Digite a quantidade de macas compradas: ");
    scanf("%d", &qtd);
    preco = (qtd < 12) ? 2.30 * qtd : 1.95 * qtd;
    printf("Custo total: R$%.2f\n", preco);
    return 0;
}