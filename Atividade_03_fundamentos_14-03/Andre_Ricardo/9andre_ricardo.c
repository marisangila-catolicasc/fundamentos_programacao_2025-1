#include <stdio.h>
#include <math.h>

#define representante 0.20
#define impostos 0.30

int main() {
    float valor_compra;
    float valor_venda;

    printf("Digite o valor da compra: ");
    scanf("%d", &valor_compra);
    valor_venda = valor_compra + (valor_compra * representante) + (valor_compra * impostos);

    printf("O valor da venda é: %d\n", valor_venda);
}
