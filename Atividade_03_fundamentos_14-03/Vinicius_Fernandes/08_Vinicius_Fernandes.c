#include <stdio.h>

const float PI = 3.14;


int main(void) {
  float raio, altura, area;

  printf("Digite o raio da lata\n");
    scanf("%f", &raio);
  printf("Digite a altura da lata\n");
    scanf("%f", &altura);

  area = PI * raio * raio * altura;

  printf("O volume da lata eh de %2.f", area);
    
  return 0;
}