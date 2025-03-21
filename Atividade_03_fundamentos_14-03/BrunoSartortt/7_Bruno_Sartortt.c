#include <stdio.h>
#include <math.h>
int main(void) {

  float real, resultado;
  int dolar;
  
  printf("Digite o valor atual do dólar:\n");
scanf("%f", &real);
  printf("Quantos dólares você almeja comprar?\n");
scanf("%d", &dolar);
  
  resultado = dolar * real;
  printf("Você precisa de: %f\n", resultado);
  
  return 0;
}