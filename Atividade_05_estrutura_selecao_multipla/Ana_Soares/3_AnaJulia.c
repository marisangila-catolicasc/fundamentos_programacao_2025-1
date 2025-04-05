#include <stdio.h>

int main() {
  float num1, num2, resultado;
  char operacao;

  printf("Digite o primeiro numero:\n");
  scanf("%f", &num1);

  printf("Digite o segundo numero:\n");
  scanf("%f", &num2);

  printf("Escolha a operacao (+, -, * ou /):\n");
  scanf(" %c", &operacao);  

  if (operacao == '+') {
      resultado = num1 + num2;
      printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
  } else if (operacao == '-') {
      resultado = num1 - num2;
      printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
  } else if (operacao == '*') {
      resultado = num1 * num2;
      printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
  } else if (operacao == '/') {
      if (num2 != 0) {
          resultado = num1 / num2;
          printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
      } else {
          printf("Erro: divisao por zero nao permitida.\n");
      }
  } else {
      printf("Operacao invalida.\n");
  }

  return 0;
}
