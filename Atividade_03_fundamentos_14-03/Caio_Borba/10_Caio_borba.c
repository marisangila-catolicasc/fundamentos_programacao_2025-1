#include <stdio.h>

int main(void) {
float valor_investimento, juros = 0.05, valor_final, anos = 3, conta_juros;
printf("Digite o valor investido: \n");
scanf("%f", &valor_investimento);
conta_juros = valor_investimento * juros * anos;
valor_final = valor_investimento + conta_juros;
printf("O valor final é %.2f\n", valor_final);
  return 0;
}
