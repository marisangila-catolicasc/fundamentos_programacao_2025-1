#include <stdio.h>
#include <math.h>
/*
 Desenvolva um programa que leia dois valores para
as vari´aveis A e B e efetue a troca dos valores. A vari´avel A deve receber o valor
de B, e a vari´avel B deve receber o valor de A. Apresente os valores trocados.
*/
int main() {
  int a, b, temp;
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  temp = a;
  a = b;
  b = temp;
  printf("A é igual a '%d' e B é igual a '%d'", a, b);
  return 0;
}