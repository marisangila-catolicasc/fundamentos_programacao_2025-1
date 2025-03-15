
#include <stdio.h>

int main(void) {
  float valor_inicial, valor_final;
  const float taxa_juros = 0.05; 
  const int anos = 3;
  
  printf("Digite o valor inicial do investimento: ");
  scanf("%f", &valor_inicial);
  
  valor_final = valor_inicial + (valor_inicial * taxa_juros * anos);
  
  printf("\nValor inicial: %.2f\n", valor_inicial);
  printf("Apos %d anos com juros de %.0f%% ao ano:\n", anos, taxa_juros * 100);
  printf("Valor final: %.2f\n", valor_final);
  
  return 0;
}
