#include <stdio.h>
int main(void) {
  float real, dolar, cambio;
  printf("Digite o valor a ser convertido:\n ");
  scanf("%f", &real);
  printf("Digite a cotação do dolar:\n");
  scanf(" %f", &cambio);

 dolar=real*cambio;
 
  printf("O dolar em sua cotação atual é: %.2f\n" , dolar);
  
  
  return 0;
}
