#include <stdio.h>
#include <math.h>

#define PI = 3,14

int main(void) {
  float altura, raio, area;
  printf("Insira a altura da lata em cm: \n");
  scanf("%f", &altura);
  printf("Insira o raio da lata em cm: \n");
  scanf("%f", &raio);

  area = altura * M_PI * pow(raio, 2);

  printf("A area da lata eh: " "%f", area), printf(" centimetros");
  return 0;
}