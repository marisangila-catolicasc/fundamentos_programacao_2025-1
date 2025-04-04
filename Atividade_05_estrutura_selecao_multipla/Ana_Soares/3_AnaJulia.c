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

  switch (operacao) {
    case '+':
      resultado = num1 + num2;
      printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
      break;
    case '-':
      resultado = num1 - num2;
      printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
      break;
    case '*':
      resultado = num1 * num2;
      printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
      break;
    case '/':
      if (num2 != 0) { 
        resultado = num1 / num2;
        printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
      } else {
        printf("Erro: divisao por zero nao permitida.\n");
      }
      break;
    default:
      printf("Operacao invalida.\n");
      break;
  }
  return 0;
}
