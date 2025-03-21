#include <stdio.h>
int main(void) {
  float investimento_inicial, investimento_final, anos = 3, taxa_juros = 0.05;
  printf("Digite o valor do investimento inicial:\n ");
  scanf("%f", &investimento_inicial);
  
  investimento_final = investimento_inicial * (investimento_inicial*taxa_juros*anos);
  printf("O investimento final depois de 3 anos é de %.2f", investimento_final);
  
  
  return 0;
}
