#include "stdio.h"
int main(void) {
  float f, c;

  printf("Insira a temperatura em °F: \n");
  scanf("%f", &f);

  c = 5 * (f - 32) / 9;
  printf("A temperatura em °C é: %.1f°C", c);
  return 0;
}
