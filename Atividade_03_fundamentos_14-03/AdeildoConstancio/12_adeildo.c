#include <stdio.h>
#include <math.h>

int main() {
  int num1, num2, soma, subtracao, multiplicacao, divisao, resto;
  double potencia;

  printf("digite o primeiro número inteiro: ");
  scanf("%d", &num1);

  printf("digite o segundo número inteiro: ");
  scanf("%d", &num2);

  soma = num1 + num2;
  subtracao = num1 - num2;
  multiplicacao = num1 * num2;
  divisao = num1 / num2;
  resto = num1 % num2;
  potencia = pow(num1, num2); 

  printf("resultados: ", "\n");
  printf("soma: %d", "\n", soma);
  printf("subtração: %d", "\n", subtracao);
  printf("multiplicação: %d", "\n", multiplicacao);
  printf("divisão: %d", "\n", divisao);
  printf("o resto da divisão do primeiro número pelo segundo : %d", "\n", resto);
  printf("o primeiro elevado ao segundo número: %.0lf", "\n", potencia);
  

  return 0;
}