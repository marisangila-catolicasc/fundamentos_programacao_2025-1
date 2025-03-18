#include <stdio.h>
#include <math.h>>

int main() {
  float a, b, divisao;

  printf("Digite o primeiro número:\n");
  scanf("%f", &a);

  printf("Digite o segundo número:\n");
  scanf("%f", &b);

  divisao = a / b;

  printf("A soma dos números é: %.1f\n", a + b);
  printf("A subtração dos números é: %.1f\n", a - b);
  printf("A multiplicação dos números é: %.1f\n", a * b);
  printf("A divisão dos números é: %.1f\n", divisao);
  printf("o valor do numero 1 sobre o numero 2 é: %.1f\n", pow(a,b));
  printf("O resto da divisão dos números é: %.1f\n", a - divisao);
  
  return 0;
}
