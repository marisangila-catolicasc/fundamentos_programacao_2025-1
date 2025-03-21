#include <stdio.h>

int main() {
  float cambio, dolares, reais;

  printf("digite o valor do câmbio do dólar hoje: ");
  scanf("%f", &cambio);

  printf("digite a quantidade de dólares que você deseja converter: ");
  scanf("%f", &dolares);

  reais = dolares * cambio;

  printf("%.2f dólares equivalem a %.2f reais.", "\n" dolares, reais);

  return 0;
}