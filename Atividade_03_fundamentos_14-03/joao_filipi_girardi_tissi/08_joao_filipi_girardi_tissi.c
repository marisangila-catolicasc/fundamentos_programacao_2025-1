#include <stdio.h>
#include "math.h"

int main() {
  float raio, altura, volume;

  printf("Digite o raio do cilindro: ");
  scanf("%f", &raio);
  printf("Agora, digite a altura do cilindro: ");
  scanf( "%f", &altura);

  volume = M_PI * pow(raio, 2) * altura;

  printf("O volume do cilindro é: %.2f", volume);
  
  return 0;
}