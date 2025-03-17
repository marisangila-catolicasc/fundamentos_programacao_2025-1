#include <stdio.h>

int main(){
    float investimento;
    float juros_simples = 0.05;
    int anos = 3;
    float valor_final;

    printf("Digite o valor a ser investido por 3 anos:\n");
    scanf("%f", &investimento);

    valor_final = investimento + (investimento * juros_simples * anos);
    printf("O valor esperado em 3 anos eh de R$ %.2f.", valor_final);

}