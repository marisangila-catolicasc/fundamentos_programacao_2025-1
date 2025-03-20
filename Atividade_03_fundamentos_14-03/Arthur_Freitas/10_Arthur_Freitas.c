#include <stdio.h>

int main(void) {
float valor_investido, juros = 0.05, valor_final, anos = 3, conta_juros;
printf("Digite o valor investido: \n");
scanf("%f", &valor_investido);
conta_juros = valor_investido * juros * anos;
valor_final = valor_investido + conta_juros;
printf("O valor final é %.2f\n", valor_final);
  

  return 0;
}