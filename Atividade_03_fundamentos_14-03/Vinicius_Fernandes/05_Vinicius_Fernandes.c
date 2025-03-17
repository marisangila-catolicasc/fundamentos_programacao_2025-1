#include <stdio.h>

int main(void) {
  float num1, num2, soma;

  printf("Digite um numero\n");
    scanf("%f", &num1);
  printf("Digite outro numero\n");
    scanf("%f", &num2);
  
  soma = num1 + num2;

  printf("A soma dos numeros eh: %.2f", soma);
  return 0;
}