#include <stdio.h>

int main() {
  float raio, altura, volume;
  
printf("Digite raio da sua lata:\n");
  scanf("%f", &raio);

  printf("Digite a altura da lata:\n");
  scanf("%f", &altura);

  volume = 3.14 * (raio * raio) * altura;
  printf("O volume da sua lata é %.2f cm³", volume);
  return 0;
}
