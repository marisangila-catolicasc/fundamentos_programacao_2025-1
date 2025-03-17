#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {
  float raio, altura;
  
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  printf("Digite o valor da altura: ");
  scanf("%f", &altura);

  float volume = PI * pow(raio, 2) * altura;
  printf("O volume da lata calculada eh: %.2f", volume);
}