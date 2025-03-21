#include <stdio.h>
int main(void) {
  float volume, raio, altura;
  printf("Qual é a altura do cilindro? \n");
  scanf("%f", &altura);
  printf("Qual é o raio do cilindro? \n");
  scanf("%f", &raio);
  raio = pow(raio, 2);
  volume = M_PI * raio * altura;
  printf("O volume do cilindro será de: %f \n", volume);
  return 0;
}