#include <stdio.h>

int main(void) {
 float valor_inicial, taxa, anos, valor_final;
  printf("Olá Maria! Quantos reais voce ja investiu?\n");
  scanf("%f", &valor_inicial);

  taxa = 0.05;
  anos = 3;
  valor_final = valor_inicial + (valor_inicial * taxa * anos);

  printf("Maria, daqui a três anos você terá um total de R$%.2f investidos!", valor_final);
  return 0;
}