#include <stdio.h>

int main(void) {
    float cotacaoDolar;
    float valorDolares;
    
    printf("Digite a cotação do dólar no dia de hoje: ");
    scanf("%f", &cotacaoDolar);
    
    printf("Informe o valor em dólares que deseja converter: ");
    scanf("%f", &valorDolares);
    
    float valorReais = valorDolares * cotacaoDolar;
    
    printf("\nO valor em reais é: %.2f\n", valorReais);

    return 0;
}