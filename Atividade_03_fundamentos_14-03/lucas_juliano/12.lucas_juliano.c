#include <math.h>
#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);
  printf("A soma dos números é: %.2d\n", num1 + num2);
  printf("A subtração dos números é: %.2d\n", num1 - num2);
  printf("A multiplicação dos números é: %.2d\n", num1 * num2);
  printf("A divisão dos números é: %.2d\n", num1 / num2);
  printf("A potência dos números é: %.2f\n", pow(num1, num2));
  printf("O resto da divisão dos números é: %.2d\n", num1 % num2);
  return 0;


}
