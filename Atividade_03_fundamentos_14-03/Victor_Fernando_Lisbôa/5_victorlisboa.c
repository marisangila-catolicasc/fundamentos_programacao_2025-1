#include <stdio.h>
#include <math.h>

int main() {
  int a, b;
  
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);

  float resultado = a + b;
  printf("A soma dos dois numeros eh: %.2f", resultado);
}