#include <stdio.h>
#include <math.h>

int main(void) {

  float raio, altura, volume;

  printf("Digite o raio da lata: ");
  scanf("%f", &raio);

  printf("Digite a altura da lata: ");
  scanf("%f", &altura);
  
  volume = pow(raio, 2) * altura; //biblioteca math.h

  printf("O volume da lata é: %.2f", volume);

  return 0;
}