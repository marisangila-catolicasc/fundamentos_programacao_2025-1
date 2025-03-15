#include <stdio.h>

int main(void) {

  float valor_inicial, valor_final;

  printf("Informe a quantia de dinheiro que deseja investir: ");
  scanf("%f", &valor_inicial);

  valor_final = valor_inicial + (valor_inicial * 0.5 * 3);

  printf("O valor final do seu investimento com uma taxa de 5% (A.A) é de R$%.2f após 3 anos!", valor_final);

  return 0;
}