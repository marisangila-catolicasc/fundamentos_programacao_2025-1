#include <stdio.h>

int main(void) {
  float valor, valor_inicial, valor_final;
  
  printf("Qual o valor de investimento\n");
    scanf("%f", &valor_inicial);
  
  valor_final = valor_inicial + ( valor_inicial * 0.05 * 3);
  
  printf("O valor final do seu investimento apos 3 anos eh de R$%2.f", valor_final);
  
  return 0;
}