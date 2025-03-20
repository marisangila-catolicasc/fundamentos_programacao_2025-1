#include <math.h>
int main(){
  float raio, altura, pi, resultado;

  printf("Digite o valor de raio da lata: \n");
  scanf("%f", &raio);

  printf("Digite o valor da altura da lata: \n");
  scanf("%f", &altura);

  pi = 3.14159265359;

  resultado = pi * (raio * raio) * altura;

  printf("O volume da sua lata é igual a: %.2f", resultado);

  return 0;
}