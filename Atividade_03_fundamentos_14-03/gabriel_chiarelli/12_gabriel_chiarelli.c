#include <stdio.h>
#include <math.h>
/*
Desenvolva um programa que receba dois n´umeros inteiros e mostre o resultado das
seguintes opera¸c˜oes:
• Soma dos dois n´umeros
• Subtra¸c˜ao do primeiro pelo segundo
• Multiplica¸c˜ao dos dois n´umeros
• Divis˜ao do primeiro pelo segundo
• O primeiro n´umero elevado ao segundo n´umero
• O resto da divis˜ao do primeiro n´umero pelo segundo
*/
int main() {
  int a, b;
  printf("Digite um número: ");
  scanf("%d", &a);
  printf("Digite outro número: ");
  scanf("%d", &b);
  printf("Soma: %d\n", a+b);
  printf("Subtração: %d\n", a-b);
  printf("Multiplicação: %d\n", a*b);
  printf("Divisão: %d\n", a/b);
  printf("Potência: %d\n", pow(a,b));
  printf("Resto: %d\n", a%b);

  

  return 0;
}