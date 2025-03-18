#include <stdio.h>

int main() {
  float a, b, soma;
  
printf("Digite um número:\n");
  scanf("%f", &a);

  printf("Digite outro número:\n");
  scanf("%f", &b);

  soma = a + b;
  printf("A soma dos números é: %.1f", soma);
  return 0;
}
