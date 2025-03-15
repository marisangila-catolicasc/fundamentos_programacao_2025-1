#include <stdio.h>

int main(void) {

  float num1, num2, res;

  printf("Informe dois numeros:\n");
  scanf("%f %f", &num1, &num2);

  res = num1 + num2;
  
  printf("A soma dos numeros eh: %.2f\n", res);

  return 0;
eh