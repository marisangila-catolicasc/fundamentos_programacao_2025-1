#include <stdio.h>

int main() {
    float valor_investimento;
    int tempo_investimento = 3;
    float taxa_ano = 5.0f; 
    float valor_final;

    printf("Digite o valor do investimento: ");
    scanf("%f", &valor_investimento);

    valor_final = valor_investimento + (valor_investimento * (taxa_ano / 100) * tempo_investimento);

    printf("O valor final do investimento é: %.2f\n", valor_final);

    return 0;
}
