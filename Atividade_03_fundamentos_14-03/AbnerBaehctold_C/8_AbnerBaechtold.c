#include <stdio.h>

int main() {

  float volume, raio, altura;

  printf("Digite o raio da lata: ");
  scanf(" %f", &raio);
  printf("Digite a altura da lata: ");
  scanf(" %f", &altura);
  volume = 3.14159 * raio * raio * altura;
  printf("O volume da lata é: %.2f\n", volume);

  return 0;
}