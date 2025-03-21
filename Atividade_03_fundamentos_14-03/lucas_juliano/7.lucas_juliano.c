#include <stdio.h>

int main(void) {
  int real, dolar, quantidade_dolar, cambio;
  printf("Quantos dólares deseja converter? \n");
  scanf("%d", &quantidade_dolar);
  printf("Qual a cotação do dólar hoje? \n");
  scanf("%d", &cambio);
  real = quantidade_dolar * cambio;
  printf("É necessário para a compra dos dólares R$%d \n", real);
  return 0;
  
}
