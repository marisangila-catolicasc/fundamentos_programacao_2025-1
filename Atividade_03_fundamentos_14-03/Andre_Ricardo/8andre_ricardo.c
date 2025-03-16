#include <stdio.h>
#include <math.h>

int raio, altura;
float volume;

int main(void) {
  printf("Digite o raio do cilindro: ");
  scanf("%d", &raio);
  printf("Digite a altura do cilindro: ");
  scanf("%d", &altura);
  printf("O volume do cilindro é: %.2f" , volume = 3.14 * pow(raio, 2) * altura);
  return 0;
}