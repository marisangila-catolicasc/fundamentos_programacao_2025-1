#include <stdio.h>

int main() {
  float real, dolar, cambio;

  printf("Digite a cotação do Dólar hoje: ");
  scanf("%f", &cambio);

  printf("Agora, digite quantos dólares você deseja adquirir:");
  scanf("%f", &dolar);

  real = dolar * cambio;
  printf("Para adquirir U$ %.2f, você terá que pagar R$ %.2f!", dolar, real);
  
  return 0;
}