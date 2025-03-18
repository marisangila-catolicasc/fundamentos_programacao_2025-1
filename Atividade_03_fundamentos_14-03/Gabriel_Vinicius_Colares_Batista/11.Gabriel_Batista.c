#include <stdio.h>

float fah;
float cel;

int main(void) {

  printf("Conversões de Fahrenheit para Celsius!\n\n");

  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f", &fah);

  printf("O valor em Celsius é: %.2f\n", (fah - 32) * 5 / 9);


}
