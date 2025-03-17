#include <stdio.h>

int main(void) {
  float dolar, real, atual;

  printf("Digite o valor do dolar atualmente\n");
    scanf("%f", &atual);
  printf("Quantos dolares voce deseja\n");
    scanf("%f", &dolar);

  real =  dolar * atual;
  
  printf("Sao necessarios R$%.2f para comprar %.2f dolares", real, dolar);
  
  return 0;
}