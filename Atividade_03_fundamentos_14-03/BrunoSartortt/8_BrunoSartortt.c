#include <stdio.h>
#include <math.h>

int main(void) {
  float vol, raio, alt;
  
  printf("Digite a altura do cilindro: \n");
scanf("%f", &alt);
  printf("Digite o raio do cilindro: \n");
scanf("%f", &raio);
  
  raio = pow(raio, 2);
  vol = M_PI * raio * alt;
  
  printf("O volume é: %f \n", vol);
  return 0;
}