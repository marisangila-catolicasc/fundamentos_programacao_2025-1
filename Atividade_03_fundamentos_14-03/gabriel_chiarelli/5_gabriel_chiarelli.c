#include <stdio.h>
/*
Desenvolva um programa que solicite dois n´umeros ao usu´ario, calcule a soma entre
eles e mostre o resultado da soma.
*/
int main() {
  int num1, num2;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  printf("A soma dos números é: %d", num1 + num2);

  return 0;
}