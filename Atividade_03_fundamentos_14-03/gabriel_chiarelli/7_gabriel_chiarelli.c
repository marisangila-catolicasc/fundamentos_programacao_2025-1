#include <stdio.h>
/*
 Desenvolva um algoritmo que funcione como um
conversor de d´olar para real. O usu´ario dever´a informar o valor do cˆambio do
d´olar naquele dia e o valor em d´olares que deseja converter. Como sa´ıda, o algoritmo dever´a mostrar quantos reais s˜ao necess´arios para comprar X d´olares:
real = quantidade de dolares × cambio
*/
int main() {
  float dolar, real, cambio;
  printf("Informe o valor do cambio dólar: ");
  scanf("%f", &cambio);
  printf("Informe a quantidade de dólares seu: ");
  scanf("%f", &dolar);
  real = dolar * cambio;
  printf("O valor em reais é: %.2f", real);

  return 0;
}