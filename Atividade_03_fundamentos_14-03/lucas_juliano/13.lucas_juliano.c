#include <math.h>
#include <stdio.h>

int main(void) {
  float num1, num2, troca;
  printf("Digite um número: ");
  scanf("%f", &num1);
  printf("Digite outro número: ");
  scanf("%f", &num2);
  troca = num1;
  num1 = num2;
  num2 = troca;
  printf("\nO primeiro número é: %.f\n", num1);
  printf("O segundo número é: %.f", num2);
  return 0;
  
  
}
