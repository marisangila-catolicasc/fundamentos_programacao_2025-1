#include <stdio.h>
#include <math.h>

int main(void) {
  float volume, raio, altura;
  printf("Qual a altura do cilindro? \n");
  scanf("%f", &altura);
  printf("Qual o raio do cilindro? \n");
  scanf("%f", &raio);
  raio = pow(raio, 2);
  volume = M_PI * raio * altura;
  printf("O volume do cilindro é %f \n", volume);
  return 0;
  
}
