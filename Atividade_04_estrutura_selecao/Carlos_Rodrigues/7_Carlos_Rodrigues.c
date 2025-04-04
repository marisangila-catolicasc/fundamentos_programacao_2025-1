#include <stdio.h>
int main() {
  
float dolar, reais, conversao;
  
    printf("Me forneça a cotação atual do câmbio e também informe o valor do dólar no dia de hoje:\n ");
    scanf("%f", &dolar);
    printf("Me forneça o valor do dólar que você deseja:\n");
    
    scanf("%f", &reais);
    conversao = dolar * reais;
    printf("O valor em reais é: %.2f\n", conversao);
    
    return 0;
}
