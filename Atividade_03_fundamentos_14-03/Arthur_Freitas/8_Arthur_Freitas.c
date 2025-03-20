#include <stdio.h>

int main(void) {
  int raio = 10, altura = 5, volume;
  float pi = 3.14;
  raio = raio * raio;
  volume = pi * raio * altura;
  printf("O volume da lata é %d\n", volume);
  
  return 0;
}