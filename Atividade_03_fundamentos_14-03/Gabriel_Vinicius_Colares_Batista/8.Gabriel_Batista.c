#include <stdio.h>

float raio;
float altura;


int main(void) {
  
  printf("==== Programa de Calcular Volume ==== \n\n");

  printf("Digite o seu raio:");
  scanf("%f", &raio);

  printf("Digite sua altura:");
  scanf("%f", &altura);

  float volume = 3.14 * (raio * raio) * altura;

  printf("O volume é: %.2f", volume);

}
