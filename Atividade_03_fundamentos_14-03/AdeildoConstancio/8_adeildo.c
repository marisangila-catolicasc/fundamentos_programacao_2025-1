#include <stdio.h>
#include <math.h>

int main() {
  float raio, altura, volume;

  printf("digite o raio da lata em cm: ");
  scanf("%f", &raio);

  printf("digite a altura da lata em cm: ");
  scanf("%f", &altura);

  volume = M_PI * pow(raio, 2) * altura;

  printf("o volume da lata é: %.2f cm³", "\n", volume);

  return 0;
}