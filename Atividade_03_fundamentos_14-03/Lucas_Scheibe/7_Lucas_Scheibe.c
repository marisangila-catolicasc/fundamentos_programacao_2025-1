#include <stdio.h>

int main() {
  float cambio, dolar, reais;
  
printf("Digite o valor do cambio agora:\n");
  scanf("%f", &cambio);

  printf("Digite quantos dolares você quer comprar\n");
  scanf("%f", &dolar);

  reais = dolar * cambio;
  printf("São necessários %.1f reais para comprar %.1f dólares", reais, dolar);
  return 0;
}
