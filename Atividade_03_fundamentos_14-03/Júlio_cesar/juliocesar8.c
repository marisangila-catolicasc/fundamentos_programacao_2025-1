#include <stdio.h>
int main() {

  float volume, altura, raio;

  printf("Digite a altura de uma lata: ");
  scanf("%f", &altura);

  printf("Digite o raio da lata: ");
  scanf("%f", &raio);

  volume = 3.14 * (raio * raio) * altura;
  printf("O volume da lata será de : %f", volume);

  return 0;
}