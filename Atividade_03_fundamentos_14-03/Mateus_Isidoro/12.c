#include <math.h>
#include <stdio.h>

int main(void) {
  int num1, num2,soma,subtracao,multiplicacao,divisao,resto;
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite outro número: ");
  scanf("%d", &num2);
  soma = num1 + num2;
  subtracao = num1 - num2;
  multiplicacao = num1 * num2;
  divisao = num1 / num2;
  resto = num1 % num2;
  printf("A soma dos números é: %.2d\n", soma);
  printf("A subtração dos números é: %.2d\n", subtracao);
  printf("A multiplicação dos números é: %.2d\n", multiplicacao);
  printf("A divisão dos números é: %.2d\n", divisao);
  printf("A potência dos números é: %.2f\n", pow(num1, num2));
  printf("O resto da divisão dos números é: %.2d\n", resto);
  return 0;


}
