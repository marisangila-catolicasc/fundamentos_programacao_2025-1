#include <stdio.h>
#include <math.h>
/*
 Desenvolva um programa que calcule o volume de
uma lata, a partir de seu raio e sua altura. Considere que o volume ´e dado por:
volume = π × raio2 × altura.
*/
#define PI 3.14
int main() {
  float raio, altura, volume;
  printf("Digite o raio da lata: ");
  scanf("%f", &raio);
  printf("Digite a altura da lata: ");
  scanf("%f", &altura);
  volume = PI * (pow(raio, 2) * altura);
  printf("O volume da lata é: %.2f\n", volume);

  return 0;
}