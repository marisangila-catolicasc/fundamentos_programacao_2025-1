#include <stdio.h>
int main() {
  float num1, num2, resultado;
  char operacao;
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  printf("Digite a operacao desejada (+, -, /, *): ");
  scanf(" %c", &operacao);

  switch (operacao) {
  case '+':
    resultado = num1 + num2;
    printf("%.2f + %.2f = %.2f", num1, num2, resultado);
    break;
  case '-':
    resultado = num1 - num2;
    printf("%.2f - %.2f = %.2f", num1, num2, resultado);
    break;
  case '*':
    resultado = num1 * num2;
    printf("%.2f * %.2f = %.2f", num1, num2, resultado);
    break;
  case '/':
    if (num2 != 0 && num2 > 0) {
      resultado = num1 / num2;
      printf("%.2f / %.2f = %.2f", num1, num2, resultado);
    } else {
      printf("Nao e possivel dividir por zero");
    }
    break;
  default:
    printf("Operacao invalida");
    break;
  }
  return 0;
}
