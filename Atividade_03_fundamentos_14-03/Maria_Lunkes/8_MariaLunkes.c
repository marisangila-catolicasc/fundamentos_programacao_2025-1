#include <stdio.h>
#include <math.h>

int main() {
  float valor_volume;
  float valor_raio;
  float valor_pi;
  float valor_altura;

  valor_pi = 3.14;

  printf("Digiteo valor do raio:\n");
  scanf("%f", &valor_raio);

  printf("Digite o valor da altura:\n");
  scanf("%f", &valor_altura);

  valor_volume = valor_pi * pow(valor_raio, 2) * valor_altura;

  printf("O valor do volume da lata eh: %.2f\n", valor_volume);
  
  return 0;