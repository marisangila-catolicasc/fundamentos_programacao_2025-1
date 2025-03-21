#include <stdio.h>
int main() {

    
    float reais, dolar, conversao;
    
    printf (" Digite o valor do câmbio do dólar no dia atual: ");
    scanf("%f", &dolar);
    
    printf("Qual é o valor de dólares que você deseja: ");
    scanf("%f", &reais);

    
    conversao = reais * dolar;
    printf("O valor em reais é: %.2f", conversao);




    return 0;
}