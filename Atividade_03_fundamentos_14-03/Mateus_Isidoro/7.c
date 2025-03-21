#include <stdio.h>

int main(void) {
  int real, dolar, quantidade_dolar, cambio;
  printf("Qual o valor de dólares deseja converter? \n");
  scanf("%d", &quantidade_dolar);
  printf("Quanto a dólar hoje? \n");
  scanf("%d", &cambio);
  real = quantidade_dolar * cambio;
  printf("É necessário para a compra dos dólares R$%d \n", real);
  return 0;
  
}
