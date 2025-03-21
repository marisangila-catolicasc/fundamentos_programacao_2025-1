#include <stdio.h>

int main() {
  float valorInicial, valorFinal, taxaJuros = 0.05; 
  int anos = 3;

  printf("digite o valor inicial do investimento: R$ ");
  scanf("%f", &valorInicial);

  valorFinal = valorInicial + (valorInicial * taxaJuros * anos);

  printf("após %d anos, Maria terá R$ %.2n", "\n", anos, valorFinal);

  return 0;
}