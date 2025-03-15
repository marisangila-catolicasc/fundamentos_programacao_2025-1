
#include <stdio.h>
#include <math.h>

int main(void) {
  float raio, altura, volume;
  const float PI = 3.14159;
  
  printf("Digite o raio da lata: ");
  scanf("%f", &raio);
  
  printf("Digite a altura da lata: ");
  scanf("%f", &altura);
  
  volume = PI * pow(raio, 2) * altura;
  
  printf("O volume da lata e: %.2f unidades cubicas\n", volume);
  
  return 0;
}
