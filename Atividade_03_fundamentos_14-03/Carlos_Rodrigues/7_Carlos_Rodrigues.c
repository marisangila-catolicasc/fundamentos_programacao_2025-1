#include <stdio.h>
int main() {

  
    float dolar, reais, conversao;
    printf("Me informe o valor do câmbio do dólar do dia de hoje: ");

    scanf("%f", &dolar);
    printf("Me informe o valor de dólares que você quer: ");
    scanf("%f", &reais);
    conversao = dolar * reais;
    printf("O valor em reais é: %.2f", conversao);
    
    return 0;
}
