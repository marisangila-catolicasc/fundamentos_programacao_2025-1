#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b;
  int soma, subtracao, divisao, multiplicacao, potencia, resto;
  
  printf("Digite o primeiro numero:\n");
  scanf("%d", &a);

  printf("Digite o segundo numero:\n");
  scanf("%d", &b);
  
  soma = a + b;
  subtracao = a - b;
  multiplicacao = a * b;
  divisao = a / b;
  potencia = pow(a, b);
  resto = a % b;

  printf("Soma: %d\n", soma);
  printf("Subtracao: %d\n", subtracao);
  printf("Multiplicacao: %d\n", multiplicacao);
  printf("Dvisao: %d\n", divisao);
  printf("Potenciacao: %d\n", potencia);
  printf("Resto da divisao: %d\n", resto);
  return 0;
}