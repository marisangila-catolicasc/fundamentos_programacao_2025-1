#include <stdio.h>
#include <math.h>

int main(void) {
 int a, b, soma, divisao, multiplicacao, subtracao, resto, potencia;
  printf("Digite um número \n");
  scanf("%d", &a);
  printf("Digite outro número \n");
  scanf("%d", &b);
  soma = a + b;
  divisao = a / b;
  multiplicacao = a * b;
  subtracao = a - b;
  resto = a % b;
  potencia = pow(a, b);
  printf("A soma é %d\n", soma);
  printf("A divisão é %d\n", divisao);
  printf("A multiplicação é %d\n", multiplicacao);
  printf("A subtração é %d\n", subtracao);
  printf("O resto é %d\n", resto);
  printf("A potência é %d\n", potencia);
  

  

  return 0;
}