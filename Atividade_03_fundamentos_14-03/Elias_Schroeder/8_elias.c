#include "math.h"
#include "stdio.h"

int main(void) {
  float volume, raio, altura;

  printf("Digite o raio da lata:");
  scanf("%f", &raio);

  printf("Digite a altura da lata:");
  scanf("%f", &altura);

  volume = M_PI * pow(raio, 2) * altura;
  printf("O volume da lata é: %.2f", volume);
  return 0;
}
