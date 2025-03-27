
#include <stdio.h>

int main(void) {
  float cambio, dolares, reais;
  
  printf("Digite o valor do cambio do dolar hoje: R$ ");
  scanf("%f", &cambio);
  
  printf("Digite a quantidade de dolares a converter: $ ");
  scanf("%f", &dolares);
  
  reais = dolares * cambio;
  
  printf("Para comprar $%.2f dolares, voce precisa de R$ %.2f reais\n", 
         dolares, reais);
  
  return 0;
}
