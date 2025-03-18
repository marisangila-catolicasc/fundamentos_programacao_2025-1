#include <stdio.h>
#define PI 3.14
int main(void) {
  float raio, volume, altura;
  printf("Digite o valor do raio:\n");
  scanf("%f", &raio);
  printf("Digite o valor da altura:\n");
  scanf("%f", &altura);

  volume = PI * (raio * raio) * altura;

  printf("O volume do cilindro é: %.2f\n", volume);
  return 0;
}