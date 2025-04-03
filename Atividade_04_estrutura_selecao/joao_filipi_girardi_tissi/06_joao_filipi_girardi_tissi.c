#include <stdio.h>

int main(void) {
  float num1, num2, num3;
  
  printf("Insira o primeiro número: ");
  scanf("%f", &num1);
  printf("Insira o segundo número: ");
  scanf("%f", &num2);
  printf("Insira o terceiro número: ");
  scanf("%f", &num3);

  if (num1 > num2 && num1 > num3)
  {
    printf("O maior número é: %f", num1);
  }
  else if (num2 > num1 && num2 > num3)
  {
    printf("O maior número é: %f", num2);
  }
  else
  {
    printf("O maior número é: %f", num3);
  }
  
  return 0;
}