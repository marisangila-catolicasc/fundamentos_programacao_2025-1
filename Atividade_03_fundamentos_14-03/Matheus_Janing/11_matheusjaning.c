#include <stdio.h>
int main(void) {
  float graus_fahr, graus_celcius;
  printf("Insira uma temperatura em graus fahrenheit; \n");
  scanf("%f", &graus_fahr);

  graus_celcius = (5 * (graus_fahr - 32)) / 9;

  printf("%f", graus_fahr), printf(" graus fahrenheit equivalem a " "%f", graus_celcius), printf(" graus celcius");
  return 0;
}